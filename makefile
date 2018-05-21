all: bin/program bin/test

bin/program: build/board.o build/output_board.o build/makemove.o build/checks.o
	mkdir -p  bin
	gcc -Wall build/board.o build/output_board.o build/makemove.o build/checks.o -o bin/program

build/board.o: src/board.c
	mkdir -p build
	gcc -Wall -c src/board.c -o build/board.o

build/output_board.o: src/output_board.c
	mkdir -p build
	gcc -Wall -c src/output_board.c -o build/output_board.o

build/makemove.o: src/makemove.c
	mkdir -p build
	gcc -Wall -c src/makemove.c -o build/makemove.o

build/checks.o: src/checks.c
	mkdir -p build
	gcc -Wall -c src/checks.c -o build/checks.o




bin/test: build/output_board.o build/makemove.o build/checks.o build/test.o build/ctest.o
	mkdir -p bin
	gcc -Wall build/output_board.o build/makemove.o build/checks.o build/test.o build/ctest.o -o bin/test

build/test.o: test/test.c
	mkdir -p build
	gcc -Wall -c test/test.c -o build/test.o -Ithirdparty -Isrc

build/ctest.o: test/ctest.c
	mkdir -p build
	gcc -Wall -c test/ctest.c -o build/ctest.o -Ithirdparty

test: bin/test
	bin/test




.PHONY: clean
clean: 
	rm -rf build bin
#include <ctest.h>
#include <board.h>

CTEST(checkMove, test_step_hourse)
{
	// WHEN
	Board *array_chess = (Board *)malloc(sizeof(Board)*8*8);
	board_filling(array_chess);

	// GIVEN
	int check = check_move(array_chess, 1, 18);

	// THEN
	int expected = 1;

	ASSERT_EQUAL(expected, check);
}

CTEST(checkStep, test_step)
{
	// WHEN
	Board *array_chess = (Board *)malloc(sizeof(Board)*8*8);
	board_filling(array_chess);

	// GIVEN
	int check_two = check_step(array_chess, 11, 19);

	// THEN
	int expected_two = 2;

	ASSERT_EQUAL(expected_two, check_two);
}

CTEST(checkMove, test_pawn)
{
	// WHEN
	Board *array_chess = (Board *)malloc(sizeof(Board)*8*8);
	board_filling(array_chess);

	// GIVEN
	int check_p_folse = check_move(array_chess, 12, 19);

	// THEN
	int expected_folse = 0;

	ASSERT_EQUAL(check_p_folse, expected_folse);
}

CTEST(Decode, check_decode)
{
	// WHEN
	Board *array_chess = (Board *)malloc(sizeof(Board)*8*8);
	board_filling(array_chess);

	// GIVEN
	int check = decode('b', 4);

	//THEN
	int expected = 25;

	ASSERT_EQUAL(check, expected);
}

CTEST(Swap, check_priority_step)
{
	// WHEN
	Board *array_chess = (Board *)malloc(sizeof(Board)*8*8);
	board_filling(array_chess);

	// GIVEN
	int check = swap(array_chess, 0, 1, 0, 1);

	//THEN
	int expected = 0;

	ASSERT_EQUAL(check, expected);
}

CTEST(numOfRemain, framework)
{
	// WHEN
	Board *array_chess = (Board *)malloc(sizeof(Board)*8*8);
	board_filling(array_chess);

	// GIVEN
	int check = check_input('e', 4, 'e', 5, '-');

	//THEN
	int expected = 0;

	ASSERT_EQUAL(check, expected);
}

CTEST(checkMove, test_step_hourse2)
{
	// WHEN
	Board *array_chess = (Board *)malloc(sizeof(Board)*8*8);
	board_filling(array_chess);

	// GIVEN
	int check = check_move(array_chess, 2, 18);

	// THEN
	int expected = 1;

	ASSERT_EQUAL(expected, check);
}


CTEST(numOfRemain, framework2)
{
	// WHEN
	Board *array_chess = (Board *)malloc(sizeof(Board)*8*8);
	board_filling(array_chess);

	// GIVEN
	int check = check_input('e', 5, 'e', 6, '-');

	//THEN
	int expected = 0;

	ASSERT_EQUAL(check, expected);
}
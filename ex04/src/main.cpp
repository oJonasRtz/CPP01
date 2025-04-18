#include "replace.hpp"

static int	input_error(void)
{
	std::cout << BRIGHT_RED "Error: invalid input.\n" RESET;
	std::cout << ORANGE "How to use: ./replace <filename> <S1> <S2>\n" RESET;
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		return (input_error());
	return (replace(argv[1], argv[2], argv[3]));
}

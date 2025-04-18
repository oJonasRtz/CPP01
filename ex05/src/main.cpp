#include "Harl.hpp"


int main(void)
{
	Harl		h;
	std::string	input;

	while (1)
	{
		std::cout << ORANGE << std::string(40, '-') << "\n";
		std::cout << "\tHarl\n" << std::flush;
		std::cout << std::string(40, '-') << "\n" RESET;

		std::cout << BRIGHT_GREEN "Hou to use: [WARNING] [ERROR] [DEBUG] [INFO]\n" RESET;
		std::cout << ">$ ";
		if (!std::getline(std::cin, input))
			return (0);
		if (!input.empty())
			h.complain(input);
	}
	return (0);
}

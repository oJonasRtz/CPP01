#include <iostream>
#include <iomanip>

# define RED "\033[1;31m"
# define BLUE "\033[1;34m"
# define GREEN "\033[1;32m"
# define ORANGE "\033[38;5;208m"
# define RESET "\033[0m"

int	main(void)
{
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*ptr = &brain;
	std::string	&ref = brain;

	/*
		Addresses
	*/
	std::cout << GREEN << std::string(40, '-') << std::endl;
	std::cout << "\t\tAddress\n";
	std::cout << std::string(40, '-') << RESET << std::endl;

	std::cout << ORANGE "Brain:\t\t" RESET << &brain << "\n";
	std::cout << ORANGE "Pointer:\t" RESET << ptr << "\n";
	std::cout << ORANGE "Reference:\t" RESET << &ref << "\n";

	/*
		Values
	*/
	std::cout << GREEN << std::string(40, '-') << std::endl;
	std::cout << "\t\tValue\n";
	std::cout << std::string(40, '-') << RESET << std::endl;

	std::cout << ORANGE "Brain:\t\t" RESET << brain << "\n";
	std::cout << ORANGE "Pointer:\t" RESET << *ptr << "\n";
	std::cout << ORANGE "Reference:\t" RESET << ref << "\n";

	return (0);
}

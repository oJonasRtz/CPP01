#include "Zombie.hpp"

static bool	invalid_input(const std::string &input)
{
	if (input.empty())
		return (true);
	for (int i = 0; input[i]; i++)
		if (!std::isdigit(input[i]))
			return (true);
	return (false);
}

static bool	invalid_name(const std::string &name)
{
	if (name.empty())
		return (true);
	for (int i = 0; name[i]; i++)
		if (!std::isspace(name[i]))
			return (false);
	return (true);
}

int	main(void)
{
	std::string	input, name;
	int			n;

	std::cout << GREEN << std::setfill('-') << std::setw(42) << "-\n" << std::flush;
	std::cout << "\tWelcome to the horde\n" << std::flush;
	std::cout << std::setfill('-') << std::setw(42) << "-\n" << RESET << std::flush;

	std::cout << BLUE "<Enter the zombie count>$ " RESET << std::flush;
	if (!std::getline(std::cin, input))
			return (0);
	while (invalid_input(input))
	{
		std::cout << RED "Error: Only numbers allowed.\n" RESET << std::flush;
		std::cout << BLUE "<Enter the zombie count>$ " RESET << std::flush;
		if (!std::getline(std::cin, input))
			return (0);
	}
	std::cout << BLUE "<Enter the  Zombies name>$ "  RESET << std::flush;
	if  (!std::getline(std::cin, name))
		return (0);
	while (invalid_name(name))
	{
		std::cout << RED "Error: Invalid name.\n" RESET << std::flush;
		std::cout << BLUE "<Enter the  Zombies name>$ "  RESET << std::flush;
		if  (!std::getline(std::cin, name))
			return (0);
	}
	n = atoi(input.c_str());
	Zombie	*horde = Zombie::zombieHorde(n, name);
	for (int i = 0; i < n; i++)
	{
		std::cout << "[" ORANGE << i + 1 << RESET "]-";
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}

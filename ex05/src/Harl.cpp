#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << BRIGHT_GREEN "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" RESET;
}
void	Harl::info(void)
{
	std::cout << BRIGHT_BLUE "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" RESET;
}
void	Harl::warning(void)
{
	std::cout << ORANGE "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n" RESET;
}
void	Harl::error(void)
{
	std::cout << BRIGHT_RED "This is unacceptable! I want to speak to the manager now\n" RESET;
}

void	Harl::complain(std::string level)
{
	if (level.empty())
		return ;
	static const s_levelHandler	handler[4] =
	{
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error}
	};
	for (int i = 0; i < 4; i++)
		if (handler[i].level == level)
		{
			(this->*handler[i].func)();
			return ;
		}
	std::cout << "Invalid input.\n";
}

Harl::Harl(void){}
Harl::~Harl(void){}

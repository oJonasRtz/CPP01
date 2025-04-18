#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

# define BRIGHT_RED "\033[1;31m"
# define BRIGHT_BLUE "\033[1;34m"
# define ORANGE "\033[38;5;208m"
# define BRIGHT_GREEN "\033[1;32m"
# define RESET "\033[0m"


class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		struct	s_levelHandler
		{
			std::string	level;
			void		(Harl::*func)(void);
		};
	public:
		void	complain(std::string level);
		Harl(void);
		~Harl(void);
};

#endif
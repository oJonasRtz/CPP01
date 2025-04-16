#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <cstdlib>
# define RED "\033[1;31m"
# define BLUE "\033[1;34m"
# define GREEN "\033[1;32m"
# define ORANGE "\033[38;5;208m"
# define RESET "\033[0m"

class Zombie
{
	private:
		std::string	name;
		std::string	get_name(void);
		void		set_name(std::string name);
	public:
		Zombie(void);
		~Zombie(void);
		void			announce(void);
		static Zombie	*zombieHorde(int n, std::string name);
};

#endif
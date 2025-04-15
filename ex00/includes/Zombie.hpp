#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
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
		Zombie(std::string name);
		~Zombie(void);

		void			announce(void);
		/*
			static function in a class can be called without an instance
			ex:
				z = Zombie::newZombie("Bob");
		*/
		static Zombie	*newZombie(std::string name);
		static	void	randomChump(std::string name);
};

#endif
#include "replace.hpp"

static void	start_to_replace(std::ifstream &origin, std::ofstream &dest, const std::string &s1, const std::string &s2)
{
	std::string	line;

	while (std::getline(origin, line))
	{
		size_t	pos = 0;
		pos = line.find(s1, pos);
		while (pos != std::string::npos)
		{
			line.erase(pos, s1.length());
			line.insert(pos, s2);
			pos = line.find(s1, pos + s2.length());
		}
		dest << line << "\n";
	}
}

static int	open_file(const std::string &name, std::ifstream &file)
{
	int	isOpen;

	file.open(name.c_str());
	isOpen = file.is_open();
	if (!isOpen)
		std::cout << BRIGHT_RED "Error: couldn't open the file " << name << "\n" RESET;
	return (isOpen);
}

//	Create the  *.replace file
static int	make_replace(const std::string &name, std::ofstream &dest)
{
	int	isOpen;
	std::string	new_name = name + ".replace";
		
	dest.open(new_name.c_str());
	isOpen = dest.is_open();
	if (!isOpen)
		std::cout << BRIGHT_RED "Error: couldn't  create " << new_name << "\n" RESET;
	return (isOpen);
}

int	replace(const std::string &filename, const std::string &s1, const std::string &s2)
{
	std::ifstream	file;
	std::ofstream	outfile;
	
	if (!open_file(filename, file))
		return (1);
	if (!make_replace(filename, outfile))
	{
		file.close();
		return (1);
	}
	start_to_replace(file, outfile, s1, s2);

	file.close();
	outfile.close();
	return (0);
}

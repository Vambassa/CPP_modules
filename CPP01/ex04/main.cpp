#include <iostream>
#include <fstream>

void	findReplace(std::ifstream &fdin, std::ofstream &fdout,
					std::string &strFind, std::string &strReplace)
{
	std::string	line;
	size_t		start;
	size_t		index;
	size_t 		findSize = strFind.size();
	size_t 		replaceSize = strReplace.size();

	while (std::getline(fdin, line))
	{
		start = 0;
		while ((index = line.find(strFind, start)) != std::string::npos)
		{
			line.erase(index, findSize);
			line.insert(index, strReplace);
			start = index + replaceSize;
		}
		fdout << line << std::endl;
	}
}

int printError(std::string str, std::string file)
{
	std::cerr << "Error: " << file << ": " << str << std::endl;
	return (1);
}

int printError(std::string str)
{
	std::cerr << str << std::endl;
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc != 4)
		std::cout << "Need 4 arguments" << std::endl;
	else
	{
		std::string	infile = argv[1];
		std::string	find = argv[2];
		std::string	replace = argv[3];
		std::string	outfile = infile + ".replaсe";

		if (find.empty() || replace.empty())
			return (printError("Error: find or replace arguments are empty"));

		std::ifstream	fdin(infile.c_str());
		if (!fdin.is_open())
			return (printError("can't be opened for reading", infile));

		std::ofstream	fdout(outfile.c_str());
		if (!fdout.is_open())
		{
			fdin.close();
			return (printError("can't be opened for writing", outfile));
		}
		findReplace(fdin, fdout, find, replace);
		fdin.close();
		fdout.close();
	}
	return (0);
}

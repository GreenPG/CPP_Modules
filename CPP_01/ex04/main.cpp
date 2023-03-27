#include <fstream>
#include <streambuf>
#include <string>
#include <iostream>

int	main(int ac , char **av) {
	std::string 	newFileName;
	std::string		input;
	std::string		tmp;
	std::fstream	newFile;
	std::fstream	inputFile;
	
	if (ac < 2 || ac > 4)
		return (1);
	newFileName = av[1];
	newFileName.append(".replace");
	inputFile.open(av[1], std::ios::in);
	newFile.open(newFileName.c_str(), std::ios::trunc);
	inputFile >> input;
	while (std::getline(inputFile, tmp)) {
		input.append(tmp);
		input.append("\n");
	}
	input.erase(input.end() - 1);
	std::cout << input << std::endl;
	newFile.close();
	inputFile.close();
}

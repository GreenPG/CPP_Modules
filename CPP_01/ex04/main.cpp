#include <fstream>
#include <streambuf>
#include <string>
#include <iostream>

std::string	getFileContent(const char *fileName)
{
	std::string		input;
	std::string		tmp;
	std::fstream	inputFile;
	
	inputFile.open(fileName, std::ios::in);
	inputFile >> input;
	while (std::getline(inputFile, tmp)) {
		input.append(tmp);
		input.append("\n");
	}
	input.erase(input.end() - 1);
	inputFile.close();
	return (input);
}

void	modifyInput(std::string &input, std::string s1, std::string s2) {
	size_t	pos = input.find(s1);
	while (pos != std::string::npos) {
	input.erase(pos, s1.length());
	input.insert(pos, s2);
	pos = input.find(s1);
	}
}

int	main(int ac , char **av) {
	std::string		input;
	std::string		newFileName;
	std::ofstream	newFile;
	
	if (ac != 4) {
		std::cout << "Expected three parameters" << std::endl;
		return (1);
	}
	input = getFileContent(av[1]);
	newFileName = av[1];
	newFileName.append(".replace");
	newFile.open(newFileName.c_str());
	if (newFile.is_open() == false) {
		std::cout << "Fail to open new file" << std::endl;
		return (1);
	}
	modifyInput(input, av[2], av[3]);
	newFile.write(input.c_str(), input.length());
	newFile.close();
}

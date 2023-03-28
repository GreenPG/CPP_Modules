#include "Harl.hpp"
#include <iostream>

typedef enum e_level {
	DEBUG,
	INFO,
	WARNING,
	ERROR,
	DEFAULT
} t_level;

Harl::Harl() {

}

Harl::~Harl() {

}

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free.\n I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl;
}

t_level	getLevel(std::string level) {
	std::string	levelFunction[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	t_level		levelEnum[] = {DEBUG, INFO, WARNING, ERROR};

	for (int i = 0; i < 4; i++) {
		if (level.compare(levelFunction[i]) == 0)
			return (levelEnum[i]);
	}
	return (DEFAULT);
}

void Harl::complain( std::string level ) {
	complainFunction	functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	switch (getLevel(level)) {
		case DEBUG:  
			for (int i = 0; i < 4; i++)
				(this->*functions[i])();
			break;
		case INFO: 
			for (int i = 1; i < 4; i++) 
				(this->*functions[i])();
			break;
		case WARNING: 
			for (int i = 2; i < 4; i++) 
				(this->*functions[i])();
			break;
		case ERROR: 
			(this->*functions[3])();
			break;
		case DEFAULT:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

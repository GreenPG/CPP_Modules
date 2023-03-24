#include "Account.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>
#include <string>
#include <sstream>

int	Account::_nbAccounts  = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	insertTimeData(std::string *output, int timeData) {
	std::ostringstream	convert;
	std::string			converted;

	convert << timeData;
	if (timeData >= 10)
		output->append(convert.str());
	else {
		output->append("0");
		output->append(convert.str());
	}
}

void	Account::_displayTimestamp(void) {
	time_t 		rawTime;
	struct tm	*timeInfo;
	std::string	output;

	std::time(&rawTime);
	timeInfo = std::localtime(&rawTime);
	output.append("[");
	insertTimeData(&output, timeInfo->tm_year + 1900);
	insertTimeData(&output, timeInfo->tm_mon);
	insertTimeData(&output, timeInfo->tm_mday);
	output.append("_");
	insertTimeData(&output, timeInfo->tm_hour);
	insertTimeData(&output, timeInfo->tm_min);
	insertTimeData(&output, timeInfo->tm_sec);
	output.append("] ");
	std::cout << output;
}

Account::Account(void)	{
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::Account(int initial_deposit) {
	this->_accountIndex = this->_nbAccounts;
	this->_nbAccounts++;
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void) {

}

int	Account::getNbAccounts( void ) {
	return (0);
}

int	Account::getTotalAmount( void ) {

	return (0);
}

int	Account::getNbDeposits( void ) {

	return (0);
}

int	Account::getNbWithdrawals( void ) {
	return (0);

}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout  << "accounts:" << _nbAccounts<< ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
	return ;
}

void	Account::makeDeposit( int deposit ) {
	deposit++;
	return ;

}

bool	Account::makeWithdrawal( int withdrawal ) {
	withdrawal++;
	return (true);
}

int		Account::checkAmount( void ) const {

	return (0);
}

void	Account::displayStatus( void ) const {
	return ;

}

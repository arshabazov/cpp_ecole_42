#include <iostream>
#include <iomanip>
#include "Account.hpp"

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) {
	// Member fields
	this->_accountIndex = _nbAccounts;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	// Static fields
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "created" << std::endl;
	// [19920104_091532] index:0;amount:42;created
}

Account::~Account() {
	_displayTimestamp();
	std::cout	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "closed" << std::endl;
	// [19920104_091532] index:0;amount:47;closed
}

// Member functions
void Account::makeDeposit(int deposit) {
	int p_amount = checkAmount();

	// Member fielsds
	this->_amount += deposit;
	this->_nbDeposits++;
	// Static fields
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;

	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << p_amount << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << this->_amount << ";"
				<< "nb_deposits:" << this->_nbDeposits << std::endl;
	// [19920104_091532] index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
}

bool Account::makeWithdrawal(int withdrawal) {
	int p_amount = checkAmount();

	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "p_amount:" << p_amount << ";";

	if (checkAmount() - withdrawal < 0) {
		std::cout << "withdrawal:" << "refused" << std::endl;
		return false;
	}
	// Member fields
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	// Static fields
	Account::_totalAmount -= withdrawal;
	Account::_totalNbWithdrawals++;

	std::cout	<< "withdrawal:" << withdrawal << ";"
				<< "amount:" << this->_amount << ";"
				<< "nb_withdrawals:" << this->_nbWithdrawals << std::endl;

	// [19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	// [19920104_091532] index:0;p_amount:47;withdrawal:refused
	return true;
}
int Account::checkAmount( void ) const {
	return this->_amount;
}

void Account::displayStatus( void ) const {
	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "deposits:" << this->_nbDeposits << ";"
				<< "withdrawals:" << this->_nbWithdrawals << std::endl;
	// [19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
}

// Static functions
int	Account::getNbAccounts(void) {
	return Account::_nbAccounts;
}

int	Account::getTotalAmount(void) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits(void) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals(void) {
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos(void) {
	_displayTimestamp();
	std::cout	<< "accounts:" << Account::getNbAccounts() << ";"
				<< "total:" << Account::getTotalAmount() << ";"
				<< "deposits:" << Account::getNbDeposits() << ";"
				<< "withdrawals:" << Account::getNbWithdrawals() << std::endl;
	// [19920104_091532] accounts:8;total:20049;deposits:0;withdrawals:0
}

void Account::_displayTimestamp(void) {
	time_t now = time(0);
	tm *localTime = localtime(&now);

	std::cout <<std::setfill('0')
			<< "["
			<< localTime->tm_year + 1900
			<< std::setw(2) << localTime->tm_mon + 1
			<< std::setw(2) << localTime->tm_mday
			<< "_"
			<< std::setw(2) << localTime->tm_hour
			<< std::setw(2) << localTime->tm_min
			<< std::setw(2) << localTime->tm_sec
			<< "] ";
}

#include "Account.class.hpp"
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>

//int Account::getNbAccounts()
//{
//	return _nbAccounts;
//}
//

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::displayAccountsInfos()
{
	//	[19920104_091532] accounts:8;total:12442;deposits:8;withdrawals:6
	_displayTimestamp();
	std::cout
		<< "accounts:" << getNbAccounts()
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals()
		<< std::endl;
}

int Account::getTotalAmount()
{
	return _totalAmount;
}

int Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

Account::Account(int initial_deposit): _accountIndex(_nbAccounts++), _amount(initial_deposit),
									_nbDeposits(0), _nbWithdrawals(0)
{
//	[19920104_091532] index:0;amount:42;created
	_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";created"
		<< std::endl;
}

Account::~Account()
{
	_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";closed"
		<< std::endl;
}

void Account::makeDeposit(int deposit)
{
//	index:0;p_amount:42;deposit:5;amount:47;nb_deposits:1
	_displayTimestamp();
	this->_nbDeposits++;
	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount + deposit
		<< ";nb_deposits:" << this->_nbDeposits
		<< std::endl;
	this->_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
//	[19920104_091532] index:0;p_amount:47;withdrawal:refused
//	[19920104_091532] index:1;p_amount:819;withdrawal:34;amount:785;nb_withdrawals:1
	_displayTimestamp();
	std::cout
		<< "index:"
		<< this->_accountIndex
		<< ";p_amount:" << this->_amount;
	if (withdrawal <= this->_amount)
	{
		this->_nbWithdrawals++;
		std::cout
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount - withdrawal
			<< ";nb_withdrawals:" << this->_nbWithdrawals
			<< std::endl;
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return true;
	}
	else
	{
		std::cout
			<< ";withdrawal:refused"
			<< std::endl;
		return false;
	}
}

int Account::checkAmount() const
{
	return this->_amount;
}

void Account::displayStatus() const
{
	//[19920104_091532] index:0;amount:42;deposits:0;withdrawals:0
	_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";amount:" << this->_amount
		<< ";deposits:" << this->_nbDeposits
		<< ";withdrawals:" << this->_nbWithdrawals
		<< std::endl;
}

void Account::_displayTimestamp()
{
//	std::cout << "[19920104_091532] ";
	time_t now = time(0);

	tm *ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year
	<< 1 + ltm->tm_mon
	<< std::setfill('0') << std::setw(2) << ltm->tm_mday
	<< "_"
	<< std::setfill('0') << std::setw(2) << 1 + ltm->tm_hour
	<< std::setfill('0') << std::setw(2) << 1 + ltm->tm_min
	<< std::setfill('0') << std::setw(2) << 1 + ltm->tm_sec
	<< "] ";
}

Account::Account() : _accountIndex(0), _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{

}

int Account::getNbAccounts(void)
{
	return _nbAccounts;
}

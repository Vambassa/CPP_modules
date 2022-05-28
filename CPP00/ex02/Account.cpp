#include <iostream>
#include <ctype.h>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts(0);
int	Account::_totalAmount(0);
int	Account::_totalNbDeposits(0);
int	Account::_totalNbWithdrawals(0);

Account::Account(int initial_deposit) :	_accountIndex(_nbAccounts), _amount(initial_deposit),
											_nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts += 1;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "created" << std::endl;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}

int	Account::getNbAccounts(void)
{
	return _nbAccounts;
}

int	Account::getTotalAmount(void)
{
	return _totalAmount;
}

int	Account::getNbDeposits(void)
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals(void)
{
	return _totalNbWithdrawals;
}

void	Account::_displayTimestamp(void)
{
	std::time_t	tEpoch = std::time(NULL);
	std::tm		lTime = *std::localtime(&tEpoch);

	std::cout << '[' << std::setfill('0') << std::setw(4) << lTime.tm_year + 1900
			  << std::setw(2) << lTime.tm_mon + 1
			  << std::setw(2) << lTime.tm_mday << '_'
			  << std::setw(2) << lTime.tm_hour
			  << std::setw(2) << lTime.tm_min
			  << std::setw(2) << lTime.tm_sec << "] ";
}

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";" << "total:" << _totalAmount << ";" << "deposits:"
				<< getNbDeposits() << ";" << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:"
				<< _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	_nbDeposits++;
	_amount += deposit;
	_totalNbDeposits++;
	_totalAmount += deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount - deposit << ";"
				<< "deposit:" << deposit << ";" << "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits << std::endl;
}

int		Account::checkAmount(void) const
{
	if (this->_amount >= 0)
		return 1;
	else
		return 0;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_amount -= withdrawal;
	if (checkAmount())
	{
		_nbWithdrawals++;
		_totalNbWithdrawals++;
		_totalAmount -= withdrawal;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount + withdrawal << ";"
					<< "withdrawal:" << withdrawal << ";" << "amount:" << _amount << ";"
					<< "nb_withdrawals:" << _nbDeposits << std::endl;
		return true;
	}
	else
	{
		_amount += withdrawal;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";" << "p_amount:" << _amount << ";"
					<< "withdrawal:refused" << std::endl;
		return false;
	}
}
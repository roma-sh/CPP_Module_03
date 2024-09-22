/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:26:27 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 19:35:04 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout <<"Default constructor is here"<<std::endl;
	_name = "UNKNOWN";
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}
ClapTrap::ClapTrap(std::string name)
{
	std::cout<< "\033[35m"<<name <<"\033[0m"<<": Yes sir!"<<std::endl;
	_name = name;
	_hit_points = 10;
	_energy_points = 10;
	_attack_damage = 0;
}
ClapTrap::~ClapTrap()
{
	std::cout << "Bang bang, Destructror is home baby!!!" << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& original) :
		_name(original._name),
		_hit_points(original._hit_points),
		_energy_points(original._energy_points),
		_attack_damage(original._attack_damage)
{
	std::cout<< "\033[35m" <<original._name<< "\033[0m" <<" was copied"<<std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& original)
{
	if (this != &original)
	{
		std::cout<< "\033[35m" << original._name<< "\033[0m" <<" was assigned where ever you want"<<std::endl;
		this->_name = original._name;
		this->_hit_points = original._hit_points;
		this->_energy_points = original._energy_points;
		this->_attack_damage = original._attack_damage;
	}
	return *this;
}

void ClapTrap::attack(const std::string& target)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		std::cout <<"ClapTrap "<<"\033[35m" << _name<<"\033[0m"<<" attacks " << target <<", causing "<< _attack_damage<<" points of damage!"<<std::endl;
		_energy_points--;
	}
	else if (_energy_points <= 0)
		std::cout <<"\033[35m"<< _name << "\033[0m" << "does't have enough energy points to attack!!" <<std::endl;
	else if (_hit_points <= 0)
		std::cout << "\033[35m"<<_name << "\033[0m" << "does't have enough hit points to attack!!" <<std::endl;
}
void ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points <= 0)
		std::cout << "\033[35m"<<_name <<"\033[0m" <<  "is already DONE!! it can't take more hits" <<std::endl;
	else
	{
		if (_hit_points <= amount)
		{
			std::cout << "\033[35m"<<_name <<"\033[0m" <<  " was hitted hardly, he received "<< amount <<" of damage,\033[31m RIP 💀 \033[0m" <<std::endl;
			_hit_points = 0;
		}
		else
		{
			std::cout<<"\033[35m"<<_name<<"\033[31m" <<" was hitted, he received "<< amount <<" of damage.\033[0m" <<std::endl;
			_hit_points -= amount;
		}
	}

}
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy_points > 0 && _hit_points > 0)
	{
		_hit_points += amount;
		_energy_points--;
		std::cout <<"\033[35m"<<_name<< "\033[32m"<<" was repaired and got " << amount <<" points.\033[0m"<<std::endl;
	}
	else if (_energy_points <= 0)
		std::cout << "\033[35m"<< _name<<"\033[0m" << "does't have enough energy points to be repaired!!" <<std::endl;
	else if (_hit_points <= 0)
		std::cout <<"\033[35m"<< _name << "\033[0m" << "does't have enough hit points to be repaired!!" <<std::endl;
}

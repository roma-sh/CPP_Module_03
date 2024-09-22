/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:47:03 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 19:18:04 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_name = "UNKNOWN";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout <<"ScavTrap default constructor is here"<<std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout<< "\033[35m"<<name <<"(ScavTrap)" << "\033[0m" << ": Yes sir!"<<std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Booom, ScavTrap destructror is home baby!!!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original)
{
	std::cout <<"Copy constructor from ScavTrap is here"<<std::endl;
	this->_name = original._name;
	this->_hit_points = original._hit_points;
	this->_energy_points = original._energy_points;
	this->_attack_damage = original._attack_damage;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
	if (this != &original)
	{
		std::cout <<"Assignment operator from ScavTrap is here"<<std::endl;
		this->_name = original._name;
		this->_hit_points = original._hit_points;
		this->_energy_points = original._energy_points;
		this->_attack_damage = original._attack_damage;
	}
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "\033[35m"<< this->_name<< "\033[0m" << " ScavTrap is now in [Gate keeper] mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->_attack_damage > 0 && this->_hit_points > 0)
	{
		std::cout <<"ScavTrap[son of ClapTrap] "<<"\033[35m" << this->_name<<"\033[0m"<<" attacks " << target <<", causing "<< this->_attack_damage<<" points of damage!"<<std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points <= 0)
		std::cout <<"\033[35m"<< this->_name << "\033[0m" << "does't have enough energy points to attack!!" <<std::endl;
	else if (this->_hit_points <= 0)
		std::cout << "\033[35m"<<this->_name << "\033[0m" << "does't have enough hit points to attack!!" <<std::endl;
}

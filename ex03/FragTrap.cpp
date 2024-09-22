/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:18:45 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 19:19:04 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_name = "UNKNOWN";
	this->_hit_points = 100;
	// this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout <<"FragTrap default constructor is here"<<std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->_hit_points = 100;
	// this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout<< "\033[35m"<<name <<"(FragTrap)" << "\033[0m" << ": Yes sir!"<<std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "Booom, FragTrap destructror is home baby!!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
	std::cout <<"Copy constructor from FragTrap is here"<<std::endl;
	this->_name = original._name;
	this->_hit_points = original._hit_points;
	this->_energy_points = original._energy_points;
	this->_attack_damage = original._attack_damage;
}

FragTrap& FragTrap::operator=(const FragTrap& original)
{
	if (this != &original)
	{
		std::cout <<"Assignment operator from FragTrap is here"<<std::endl;
		this->_name = original._name;
		this->_hit_points = original._hit_points;
		this->_energy_points = original._energy_points;
		this->_attack_damage = original._attack_damage;
	}
	return (*this);
}

void FragTrap::attack(const std::string& target)
{
	if (this->_attack_damage > 0 && this->_hit_points > 0)
	{
		std::cout <<"FragTrap[son of ClapTrap] "<<"\033[35m" << this->_name<<"\033[0m"<<" attacks " << target <<", causing "<< this->_attack_damage<<" points of damage!"<<std::endl;
		this->_energy_points--;
	}
	else if (this->_energy_points <= 0)
		std::cout <<"\033[35m"<< this->_name << "\033[0m" << "does't have enough energy points to attack!!" <<std::endl;
	else if (this->_hit_points <= 0)
		std::cout << "\033[35m"<<this->_name << "\033[0m" << "does't have enough hit points to attack!!" <<std::endl;
}
void	FragTrap::highFivesGuys(void)
{
	std::cout<< "\033[35m"<<this->_name<<"\033[0m"<<" says: High five mf ,|,,"<<std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:49:04 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/20 23:43:32 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap()
{
	std::cout <<"DiamondTrap default constructor is here"<<std::endl;
	this->_name = "UNKNOWN";
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
	std::cout<< "\033[35m"<<name <<"(DiamondTrap)" << "\033[0m" << ": Yes sir!"<<std::endl;
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "Booom, DiamondTrap destructror is home baby!!!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& original) : ClapTrap(original._name + "_clap_name")
{
	std::cout <<"Copy constructor from DiamondTrap is here"<<std::endl;
	*this = original;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& original)
{
	if (this != &original)
	{
		std::cout <<"Assignment operator from DiamondTrap is here"<<std::endl;
		this->_name = original._name;
		this->_hit_points = original._hit_points;
		this->_energy_points = original._energy_points;
		this->_attack_damage = original._attack_damage;
	}
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout<<"My name is: " << this->_name << " and my grandfather's name is: " << this->ClapTrap::_name << std::endl;
}

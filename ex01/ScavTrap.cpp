/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 18:47:03 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/20 13:11:57 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{

	std::cout <<"ScavTrap default constructor is here"<<std::endl;
}
ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
	std::cout<< "\033[35m"<<name <<"(ScavTrap)" << "\033[0m" << ": Yes sir!"<<std::endl;
}
ScavTrap::~ScavTrap()
{
	std::cout << "Booom, ScavTrap destructror is home baby!!!" << std::endl;
}
void	ScavTrap::guardGate()
{
}
ScavTrap::ScavTrap(const ScavTrap& original) : ClapTrap(original)
{
	std::cout <<"Copy constructor from ScavTrap is here"<<std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& original)
{
	if (this != &original)
	{
		std::cout <<"Assignment operator from ScavTrap is here"<<std::endl;
		ClapTrap::operator=(original);
	}
	return (*this);
}

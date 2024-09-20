/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:18:45 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/20 13:36:30 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{

	std::cout <<"FragTrap default constructor is here"<<std::endl;
}
FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
	std::cout<< "\033[35m"<<name <<"(FragTrap)" << "\033[0m" << ": Yes sir!"<<std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "Booom, FragTrap destructror is home baby!!!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& original) : ClapTrap(original)
{
	std::cout <<"Copy constructor from FragTrap is here"<<std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& original)
{
	if (this != &original)
	{
		std::cout <<"Assignment operator from FragTrap is here"<<std::endl;
		ClapTrap::operator=(original);
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "\033[35m"<< this->getName()<< "\033[0m" << ": High five mf!!" << std::endl;
}

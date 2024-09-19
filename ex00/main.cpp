/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:26:12 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/19 17:58:15 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout<<"===================================" << std::endl;
	ClapTrap x1("Bone_breaker");
	ClapTrap x2("Soul_taker");
	ClapTrap x3("The_Big_Foot");
	ClapTrap x4("Sakalambo");
	std::cout<<"===================================" << std::endl;
	std::cout<<"Battle has started, FIGHT OR DIE" << std::endl;
	std::cout<<"===================================" << std::endl;
	x1.attack("soul_taker");
	x2.takeDamage(3);
	x1.attack("soul_taker");
	x2.takeDamage(3);
	x1.attack("soul_taker");
	x2.takeDamage(3);
	x1.attack("soul_taker");
	x2.takeDamage(3);
	x1.attack("soul_taker");
	x3.attack("Bone_breaker");
	x4.attack("Himself!!!!");
	x1.beRepaired(2);
	x2.beRepaired(5);
	x3.attack("Bone_breaker");

	return (0);
}

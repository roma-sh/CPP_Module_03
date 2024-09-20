/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 13:26:12 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/20 13:16:16 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout<<"===================================" << std::endl;
	ScavTrap x1("Bone_breaker");
	ClapTrap x2("Soul_taker");
	std::cout<<"===================================" << std::endl;
	x1.showPoints();
	x2.showPoints();
	std::cout<<"===================================" << std::endl;
	ScavTrap x_copy;
	x_copy = x1;
	x_copy.showPoints();

	std::cout<<"===================================" << std::endl;
	x_copy.attack("Soul_taker");
	x_copy.attack("Soul_taker");
	x_copy.showPoints();
	x_copy.beRepaired(25);
	x_copy.showPoints();
	x_copy.takeDamage(130);
	x_copy.showPoints();
	return (0);
}

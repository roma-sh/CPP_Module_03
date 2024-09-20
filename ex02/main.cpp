/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:18:52 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/20 13:35:45 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int	main(void)
{
	std::cout<<"===================================" << std::endl;
	FragTrap x1("Bone_breaker");
	ClapTrap x2("Soul_taker");
	std::cout<<"===================================" << std::endl;
	x1.showPoints();
	x2.showPoints();
	std::cout<<"===================================" << std::endl;
	FragTrap x_copy;
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
	x_copy.highFivesGuys();
	return (0);
}

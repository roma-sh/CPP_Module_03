/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:50:13 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/22 19:42:00 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap x ("BOGEYMAN");
	ClapTrap Clapy("Clapy");
	ScavTrap Scavy("Scavy");
	FragTrap Fragy("Fragy");
	Clapy.attack("Fragy");
	Fragy.takeDamage(20);
	Fragy.showPoints();
	Scavy.showPoints();
	x.whoAmI();
	x.showPoints();
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshatra <rshatra@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:34:56 by rshatra           #+#    #+#             */
/*   Updated: 2024/09/20 23:32:25 by rshatra          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>


class ClapTrap
{
	protected:
		std::string _name;
		unsigned int _hit_points;
		unsigned int _energy_points;
		unsigned int _attack_damage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		virtual ~ClapTrap();
		ClapTrap(const ClapTrap& original);
		ClapTrap& operator=(const ClapTrap& original);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void showPoints(void);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:52:27 by atran             #+#    #+#             */
/*   Updated: 2025/12/18 21:15:56 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon& weapon)
    : _weapon(weapon), _name(name){}

void HumanA::attack() const{
    std::cout << _name << " attacks with their " 
                << _weapon.getType() << std::endl;
}
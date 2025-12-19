/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 14:52:46 by atran             #+#    #+#             */
/*   Updated: 2025/12/19 12:38:32 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name): _name(name), _weapon(NULL){}

void HumanB::setWeapon(Weapon& weapon){
    _weapon = &weapon;
}

void HumanB::attack() const{
    if (_weapon)
        std::cout << _name << " attacks with their " 
                    << _weapon->getType() << std::endl;
    else if (_weapon == NULL)
        std::cout << _name << " has no weapon" << std::endl;
}
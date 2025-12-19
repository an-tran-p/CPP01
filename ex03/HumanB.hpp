/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:06:02 by atran             #+#    #+#             */
/*   Updated: 2025/12/19 12:38:05 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <string>
#include "Weapon.hpp"

class HumanB{
    private:
        std::string _name;
        Weapon* _weapon;
    public:
        HumanB(std::string name);
        void setWeapon(Weapon& weapon);
        void attack() const;
};

#endif
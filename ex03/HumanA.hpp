/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/17 13:06:02 by atran             #+#    #+#             */
/*   Updated: 2025/12/18 21:15:31 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <string>
#include "Weapon.hpp"


class HumanA{
    private:
        Weapon& _weapon;
        std::string _name;
    public:
        HumanA(std::string name, Weapon& weapon);
        void attack() const;
};

#endif
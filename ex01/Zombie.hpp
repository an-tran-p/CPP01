/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 15:31:27 by atran             #+#    #+#             */
/*   Updated: 2025/12/16 17:22:30 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>

class Zombie
{
    private:
        std::string _name;

    public:
        Zombie() : _name("unknown"){}
        Zombie(std::string name);
        ~Zombie();
        void announce(void);
};

Zombie* zombieHorde(int N, std::string name);

#endif
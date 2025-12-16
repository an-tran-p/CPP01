/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 21:27:22 by atran             #+#    #+#             */
/*   Updated: 2025/12/16 17:12:16 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name){
    Zombie *Zhorde = new Zombie[N];
    for (int i = 0; i < N; i++)
        Zhorde[i] = Zombie(name + std::to_string(i));
    return Zhorde;
}
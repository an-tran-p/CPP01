/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 21:27:55 by atran             #+#    #+#             */
/*   Updated: 2025/12/16 14:37:40 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int main(void)
{
    Zombie* Zhorde;
    Zhorde = zombieHorde(5, "RotBrother");
    for (int i = 0; i < 5; i++)
        Zhorde[i].announce();
    delete[] Zhorde;
}
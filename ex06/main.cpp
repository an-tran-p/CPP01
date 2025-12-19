/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 18:15:06 by atran             #+#    #+#             */
/*   Updated: 2025/12/19 19:45:24 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int ac, char **av){
    Harl Harl;
    if (ac != 2){
        std::cerr <<"Error: Wrong numbers of arguments." << std::endl;
        return(1);
    }
    Harl.complain(av[1]);
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atran <atran@student.hive.fi>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/19 13:45:15 by atran             #+#    #+#             */
/*   Updated: 2025/12/19 17:45:21 by atran            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

void replace(std::ifstream& infile, std::ofstream& outfile, const std::string& s1, const std::string& s2)
{
    std::string line;

    while (std::getline(infile, line)){
        size_t pos = 0;
        size_t found;
        while(true){
            found = line.find(s1, pos);
            if (found == std::string::npos)
                break;
            line.erase(found, s1.length());
            line.insert(found, s2);
            pos = found + s2.length();
        }
        outfile << line << '\n';
    }
}

int main(int ac, char **av)
{    
    if (ac != 4){
        std::cerr << "Error: Wrong number of arguments" << std::endl;
        return (1);
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    if (s1.empty()){
        std::cerr << "s1 can not be empty" << std::endl;
        return (1);
    }
    std::ifstream infile(filename);
    if (!infile){
        std::cerr << "Error: cannot open input file." << std::endl;
        return (1);
    }
    std::ofstream outfile(filename + ".replace");
    if (!outfile){
        std::cerr << "Error: cannot open output file." << std::endl;
        return (1);
    }
    replace(infile, outfile, s1, s2);
    return (0);
}
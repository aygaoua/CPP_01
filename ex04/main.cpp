/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:36:32 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/20 20:46:12 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int main(int ac, char **av) {
    std::ifstream file(av[3]);
    if (file.is_open())
    {
        std::stringstream buffer;
        buffer << file.rdbuf();
        std::string fileContent = buffer.str();


        std::string S1 = av[1];
        std::string S2 = av[2];

        size_t i = fileContent.find(S1);
        while (i) {
            if (i != 0) {
                fileContent.erase(i, S1.length());
                fileContent.insert(i, S2);
            }
            i = fileContent.find(S1);
        }
        std::cout << fileContent << std::endl;
    }
    else {
        std::cout << "the file is not openable !!" << std::endl;
    }
    return (0);
}

//find
//erase
//insert
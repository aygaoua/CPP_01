/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:12:58 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/21 19:59:06 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char **av) {
    Harl harl;
    if (ac != 2) {
        std::cout << "Usage: ./harl (DEBUG || INFO || WARNING || ERROR)" << std::endl;
        return (0);
    }
    harl.complain(av[1]);
    return (0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:12:58 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/21 21:07:18 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac , char **av) {
    if (ac != 2) {
        std::cout << "Usage: ./harlFilter (DEBUG || INFO || WARNING || ERROR)" << std::endl;
        return (0);
    }
    Harl harlFilter;
    harlFilter.complain(av[1]);
    return (0);
}
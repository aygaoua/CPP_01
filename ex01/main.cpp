/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:39:15 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/19 20:30:37 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {

    Zombie *z = zombieHorde(6, "zombie");

    for (int i = 0; i < 6; i++) {
        z[i].announce();
    }
    delete[] z;
    // for (int i = 0; i < 5; i++) {
    //     delete z;
    // }
    return (0);
}
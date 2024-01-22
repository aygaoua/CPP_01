/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:40:24 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/22 11:55:10 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie *z;

    z = newZombie("v");
    z->announce();
    randomChump("viva khawa");
    delete z;
    return (0);
}
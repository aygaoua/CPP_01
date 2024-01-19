/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:40:24 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/19 19:48:27 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
    Zombie z;

    z = newZombie("v")[0];
    randomChump("viva khawa");
    z.announce();
    // z.set_name("pobri");
    std::cout << z.get_name() << std::endl;
    return (0);
}
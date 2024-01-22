/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:50:06 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/22 19:27:46 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << "Zombie \"" << this->name << \
                                    "\" is created successfully" << std::endl;
}

void Zombie::announce(void){
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name(std::string name)
{
    this->name = name;
}

std::string Zombie::get_name(void) {
    return (this->name);
}

Zombie::~Zombie() {
    std::cout << "Zombie \"" << this->name << "\" is destroyed" << std::endl;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 12:37:44 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/20 18:22:51 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string name) {
    this->type = name;
}

std::string const &Weapon::getType()
{
    return (this->type);
}

void Weapon::setType(std::string set_type)
{
    this->type = set_type;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:38:40 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/22 16:09:30 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {

    if (N <= 0)
        return (NULL);
    Zombie *z = new Zombie[N];
    for (int i = 0; i < N; i++) {
        z[i].set_name(name);
    }
    return (z);
}
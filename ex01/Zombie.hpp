/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 19:38:47 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/19 19:40:17 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

/*--------------------------CLASSES----------------------------*/

class Zombie {                                          /*Zombie.cpp file       */
    private:
    std::string     name;

    public:
    Zombie();
    ~Zombie();
    void            announce( void );
    void            set_name(std::string name);
    std::string     get_name(void);
};

/*------------------------FUNCTIONS----------------------------*/

Zombie* zombieHorde( int N, std::string name );      /*zombieHorde.cpp file    */

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 17:43:47 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/22 11:48:31 by azgaoua          ###   ########.fr       */
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
        Zombie(std::string name);
        ~Zombie();
        void            announce( void );
        void            set_name(std::string name);
        std::string     get_name(void);
};

/*------------------------FUNCTIONS----------------------------*/

Zombie*             newZombie( std::string name );      /*newZombie.cpp file    */
void                randomChump( std::string name );    /*randomChump.cpp file  */

#endif
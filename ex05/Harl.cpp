/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/21 18:12:54 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/23 17:23:53 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug( void ) {
    std::cout << \
        "DEBUG: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" \
                << std::endl;
}

void Harl::info( void ) {
    std::cout << \
        "INFO: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" \
            << std::endl;
}

void Harl::warning( void ) {
    std::cout << \
        "WARNING: I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." \
                << std::endl;
}

void Harl::error( void ) {
    std::cout << \
        "ERROR: This is unacceptable! I want to speak to the manager now." \
                << std::endl;

}

void Harl::complain(std::string level) {
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    if (level.empty()) {
        std::cout << "Wrong level !!" << std::endl;
        return;
    }
    //pointer to private member function
    void (Harl::*harlptr[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    while (1) {
        for (i = 0; i < 4; i++) {
            if (levels[i] == level)
                break;
        }
        switch (i) {
            case 0:
                (this->*harlptr[0])();
                break;
            case 1:
                (this->*harlptr[1])();
                break;
            case 2:
                (this->*harlptr[2])();
                break;
            case 3:
                (this->*harlptr[3])();
                break;
            default:
                std::cout << "Wrong level" << std::endl;
                break;
        }
        break;
    }
}
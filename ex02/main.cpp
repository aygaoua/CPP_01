/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 20:44:47 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/21 19:51:10 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main() {
    std::string s = "HI THIS IS BRAIN";
    std::string *stringPTR = &s;
    std::string &stringREF = s;

    /*--------------------------------ADDRESS-------------------------------*/

    std::cout << "s address : " << &s << std::endl;
    std::cout << "ptr address : " << stringPTR << std::endl;
    std::cout << "ref address : " << &stringREF << std::endl;

    /*---------------------------------VALUE--------------------------------*/

    std::cout << "s value: " << s << std::endl;
    std::cout << "ptr value: " << *stringPTR << std::endl;
    std::cout << "ref value: " << stringREF << std::endl;

    return (0);
}
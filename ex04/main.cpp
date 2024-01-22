/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:36:32 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/22 19:15:01 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int ft_replace(char **av) {
    std::ifstream infile;
    std::ofstream outfile;
    std::string line;
    std::string out_filename;
	std::string searched_str;
	std::string newstr;
	size_t pos = 0;

    newstr = av[3];
	searched_str = av[2];
    infile.open(av[1]);
    if (infile.is_open()) {
        out_filename = std::string(av[1]) + ".replace";
        outfile.open(out_filename);
        if (!outfile.is_open()) {
            std::cout << "Unable to open file " << out_filename;
            infile.close();
            return (1);
        }
        while (std::getline(infile, line)) {
            if (line.compare(searched_str) == 0)
                outfile << newstr << std::endl;
			else if (line.find(searched_str, pos) != std::string::npos) {
				while (line.find(searched_str, pos) != std::string::npos) {
					pos = line.find(searched_str, pos);
					line.erase(pos, searched_str.length());
					line.insert(pos, newstr);
                    pos += newstr.length();
				}
				outfile << line << std::endl;
			}
            else
                outfile << line << std::endl;
            pos = 0;
        }
        infile.close();
        outfile.close();
    }
    else
        std::cout << "Unable to open file " << av[1];
    return (0);
}

int main(int ac, char **av) {
    if (ac != 4 || av[2][0] == '\0') {
        std::cout << "usage: ./run_ex04 [filename] [S1] [S2] && S1[0] exist !!" << std::endl;
        return (1);
    }
	ft_replace(av);
    return 0;
}

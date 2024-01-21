/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:36:32 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/21 21:01:56 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av) {
    std::fstream infile;
    std::ofstream outfile;
    std::string line;
    std::string out_filename;
	std::string searched_str;
	std::string newstr;
	size_t pos;

    if (ac != 4) {
        std::cout << "usage: ./RUN_EX04 [filename] [S1] [S2]" << std::endl;
        return 1;
    }
	newstr = std::string(av[3]);
	searched_str = std::string(av[2]);
    infile.open(av[1]);
    if (infile.is_open()) {
        out_filename = std::string(av[1]) + ".replace";
        outfile.open(out_filename);
        while (std::getline(infile, line)) {
            if (line.compare(searched_str) == 0)
                outfile << newstr << std::endl;
			else if (line.find(searched_str, 0) != std::string::npos) {
				while (line.find(searched_str, 0) != std::string::npos) {
					pos = line.find(searched_str, 0);
					line.erase(line.find(searched_str), searched_str.length());
					line.insert(pos, newstr);
				}
				outfile << line << std::endl;
			}
            else
                outfile << line << std::endl;
        }
        infile.close();
        outfile.close();
    }
    else {
        std::cout << "Unable to open file " << av[1];
        return 1;
    }
    return 0;
}
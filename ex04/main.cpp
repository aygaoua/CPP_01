/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azgaoua <azgaoua@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 19:36:32 by azgaoua           #+#    #+#             */
/*   Updated: 2024/01/20 20:46:12 by azgaoua          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <string>
// #include <fstream>
// #include <sstream>

// int main(int ac, char **av) {
//     std::ifstream file(av[3]);
//     if (file.is_open())
//     {
//         std::stringstream buffer;
//         buffer << file.rdbuf();
//         std::string fileContent = buffer.str();


//         std::string S1 = av[1];
//         std::string S2 = av[2];

//         size_t i = fileContent.find(S1);
//         while (i) {
//             if (i != 0) {
//                 fileContent.erase(i, S1.length());
//                 fileContent.insert(i, S2);
//             }
//             i = fileContent.find(S1);
//         }
//         std::cout << fileContent << std::endl;
//     }
//     else {
//         std::cout << "the file is not openable !!" << std::endl;
//     }
//     return (0);
// }

// //find
// //erase
// //insert

#include <iostream>
#include <fstream>
#include <string>


int main(int argc, char **argv)
{
    std::fstream infile;
    std::ofstream outfile;
    std::string line;
    std::string outfilename;
	std::string searchedstr;
	std::string newstr;
	size_t pos;

    if (argc != 4)
    {
        std::cout << "usage: ./sed [filename] [string 1] [string 2]" << std::endl;
        return 1;
    }
	newstr = std::string(argv[3]);
	searchedstr = std::string(argv[2]);
    infile.open(argv[1]);
    if (infile.is_open())
    {
        //file is open
        outfilename = std::string(argv[1]) + ".replace";
        outfile.open(outfilename);
        while (std::getline(infile, line))
        {
            if (line.compare(searchedstr) == 0)
            {
                //found a string
                outfile << newstr << std::endl;
            }
			else if (line.find(searchedstr, 0) != std::string::npos)
			{
				while (line.find(searchedstr, 0) != std::string::npos)
				{
					pos = line.find(searchedstr, 0);
					line.erase(line.find(searchedstr), searchedstr.length());
					line.insert(pos, newstr);
				}
				outfile << line << std::endl;
			}
            else
            {
                outfile << line << std::endl;
            }
        }
        infile.close();
        outfile.close();
    }
    else
    {
        std::cout << "Unable to open file " << argv[1];
        return 1;
    }
    return 0;
}
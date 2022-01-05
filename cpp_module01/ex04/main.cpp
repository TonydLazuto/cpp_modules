/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tonyd <aderose73@gmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/02 16:20:13 by tonyd             #+#    #+#             */
/*   Updated: 2022/01/02 16:20:14 by tonyd            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char *av[]) {
	if (ac != 4)
	{
		std::cout << "Wrong numbers of arguments." << std::endl;
		return 1;
	}
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	std::string cur;
	std::ifstream ifs(filename, std::ios_base::in);
	std::string newfile;
	std::size_t found;

	while (getline(ifs, cur, '\0'))
	{
		found = cur.find(s1);
		while (found != std::string::npos)
		{
			cur.erase(found, s1.length());
			cur.insert(found, s2);
			found = cur.find(s1);
		}
		newfile += cur;
	}
	ifs.close();
	filename += "2";
	std::ofstream ofs(filename, std::ios_base::out | std::ios_base::trunc);
	ofs << newfile ;
	ofs.close();
	return 0;
}

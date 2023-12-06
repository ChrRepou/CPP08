/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:42:14 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 15:47:28 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main( void )
{
	std::vector<int> int_container;
	std::list<int> int_container2;

	int_container.push_back(15);
	int_container.push_back(3);

	int_container2.push_back(145);
	int_container2.push_back(-34);


	try
	{
		std::cout << easyfind(int_container, 3) << std::endl;
		std::cout << easyfind(int_container2, -34) << std::endl;
		std::cout << easyfind(int_container2, 3) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	return (0);
}
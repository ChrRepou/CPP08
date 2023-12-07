/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:16:14 by crepou            #+#    #+#             */
/*   Updated: 2023/12/07 16:10:41 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <vector>

int main ( void ) {
	MutantStack<int> mstack; //creation of a MutantStack of int
	
	mstack.push(5); //put element 5 on top of the stack
	mstack.push(17);
	std::cout << "Top of the stack: " << mstack.top() << std::endl;
	
	mstack.pop(); //remove element of the stack
	std::cout << "Size of stack: " << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	
	MutantStack<int>::iterator start = mstack.begin();
	std::cout << "Stack iterator begin: " << *start << std::endl;
	MutantStack<int>::iterator end = mstack.end();
	std::cout << "Stack iterator end: " << *end << std::endl;
	
	++start;
	--start;
	
	std::cout << std::endl;
	std::cout << "MutantStack:" << std::endl;
	std::cout << "-----------------" << std::endl;
	while (start != end)
	{
		std::cout << *start << std::endl;
		++start;
	}
	std::cout << std::endl;

	start = mstack.begin();
	std::cout << "Fourth element of stack: " << start[3] << std::endl;

	//try with vector container
	std::vector<int> vc;
	vc.push_back(5);
	vc.push_back(17);
	std::cout << "Top of the vector " << vc.back() << std::endl;

	vc.pop_back();
	std::cout << "Size of vector: " << vc.size() << std::endl;
	vc.push_back(3);
	vc.push_back(5);
	vc.push_back(737);
	vc.push_back(0);
	
	std::vector<int>::iterator start_vc = vc.begin();
	std::cout << "Vector iterator begin: " << *start_vc << std::endl;
	std::vector<int>::iterator end_vc = vc.end();
	std::cout << "Vector iterator end: " << *end_vc << std::endl;

	++start_vc;
	--start_vc;

	std::cout << std::endl;
	std::cout << "Vector:" << std::endl;
	std::cout << "-----------------" << std::endl;
	while (start_vc != end_vc)
	{
		std::cout << *start_vc << std::endl;
		++start_vc;
	}
	std::cout << std::endl;

	return 0;
}
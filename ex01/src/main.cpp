/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 16:14:00 by crepou            #+#    #+#             */
/*   Updated: 2023/12/07 16:35:29 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << sp.longestSpan() << std::endl << std::endl;
	
	//add numbers all at once
	Span msp = Span(5);
	int arr[] = {6, 3, 17, 9, 11};
    std::vector<int> vc(std::begin(arr), std::end(arr));
	msp.addNumber(vc);
	std::cout << "Shortest span: " << msp.shortestSpan() << std::endl;
	std::cout << "Longest span: " << msp.longestSpan() << std::endl << std::endl;

	//try to put elements in a full stack
	try {
		std::cout << "Try to put an element in a full stack:" << std::endl;
		sp.addNumber(15);
	} catch (const std::exception &e)
	{
		std::cout << "Stack is full!" << std::endl << std::endl;
	}
	return 0;
}
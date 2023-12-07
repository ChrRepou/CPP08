/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:53:36 by crepou            #+#    #+#             */
/*   Updated: 2023/12/07 16:33:30 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int n) : _size(n), _index(0)
{
	std::cout << "Span constructor called" << std::endl;
	return;
}

Span::Span(Span const &src)
{
	std::cout << "Span copy constructor called" << std::endl;	
	*this = src;
	return;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
	return;
}

Span &Span::operator=(Span const &obj)
{
	if (this != &obj)
	{
		this->_size = obj._size;
	}
	return (*this);
}

void Span::addNumber(int n)
{
	if (this->_size == 0)
		throw std::exception();
	this->_size--;
	this->_stack.push_back(n);
	this->_index++;
	return;
}

void Span::addNumber(std::vector<int> vc)
{
	if (this->_size < vc.size())
		throw std::exception();
	std::vector<int>::iterator start = vc.begin();
	std::vector<int>::iterator end = vc.end();
	while (start != end)
	{
		this->_size--;
		this->_stack.push_back(*start);
		this->_index++;
		start++;
	}
}

int Span::shortestSpan(void)
{
	if (_index < 2)
		throw std::exception();
	
	std::vector<int> container = this->_stack;
	std::sort(container.begin(), container.end());
	int min = container[1] - container[0];
	for (unsigned int i = 2; i < _index; i++)
	{
		if (container[i] - container[i - 1] < min)
			min = container[i] - container[i - 1];
	}
	return (min);
}

int Span::longestSpan(void)
{
	if (_index < 2)
		throw std::exception();
	
	std::vector<int> container = this->_stack;
	std::sort(container.begin(), container.end());
	return (container[_index - 1] - container[0]);
}
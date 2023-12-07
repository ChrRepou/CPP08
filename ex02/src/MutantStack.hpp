/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:00:55 by crepou            #+#    #+#             */
/*   Updated: 2023/12/07 15:57:31 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void) : std::stack<T>() {
			std::cout << "Mutant Stack constructor called" << std::endl;
		};
		
		MutantStack(MutantStack const &src) {
			*this = src;
		};

		~MutantStack(void) {
			std::cout << "Mutant Stack destructor called" << std::endl;
		};
		
		MutantStack &operator=(MutantStack const &obj) {
			if (this != &obj)
				this->_stack = obj._stack;
			return (*this);
		};
		
		typedef typename std::stack<T>::container_type::iterator iterator;
		
		iterator begin(void) {
			return (std::stack<T>::c.begin());
		};
		
		iterator end(void) {
			return (std::stack<T>::c.end());
		};
};

#endif
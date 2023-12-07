/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:51:17 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 16:14:24 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
	private:
		Span(void);
		std::vector<int>	_stack;
		unsigned int		_size;
		unsigned int		_index;
		
	public:
		Span(unsigned int n);
		Span(Span const &src);
		~Span(void);
		Span &operator=(Span const &obj);

		void	addNumber(int n);
		int		shortestSpan(void);
		int		longestSpan(void);

};

#endif
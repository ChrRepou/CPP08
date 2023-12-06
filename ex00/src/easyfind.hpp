/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crepou <crepou@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:38:10 by crepou            #+#    #+#             */
/*   Updated: 2023/12/06 15:44:02 by crepou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <list>

template <typename T>
int		easyfind(T &int_container, int n)
{
	typename T::iterator it;

	it = std::find(int_container.begin(), int_container.end(), n);
	if (it == int_container.end())
		throw std::exception();
	return (*it);
}

#endif
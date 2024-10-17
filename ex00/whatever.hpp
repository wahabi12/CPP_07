/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:12:23 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/17 04:49:56 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T>
T const& min(T const& a, T const& b) {
	return (a < b) ? a : b;
}

template <typename T>
T const& max(T const& a, T const& b) {
	return (a > b) ? a : b;
}

#endif

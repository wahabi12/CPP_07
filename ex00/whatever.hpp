/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:12:23 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/06 02:12:38 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

// Fonction template swap : intervertit les valeurs de a et b
template <typename T>
void swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

// Fonction template min : retourne la plus petite des deux valeurs
template <typename T>
T const& min(T const& a, T const& b) {
    return (a < b) ? a : b;
}

// Fonction template max : retourne la plus grande des deux valeurs
template <typename T>
T const& max(T const& a, T const& b) {
    return (a > b) ? a : b;
}

#endif

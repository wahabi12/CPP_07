/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:17:59 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/06 02:22:59 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

// Fonction pour afficher un élément de type générique
template <typename T>
void printElement(const T& element) {
    std::cout << element << " ";
}

// Fonction pour incrémenter un élément (spécifique aux types numériques)
template <typename T>
void incrementElement(T& element) {
    element += 1;
}

int main() {
    // Tableau d'entiers
    int intArray[] = {1, 2, 3, 4, 5};
    size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

    std::cout << "Initial intArray: ";
    // Spécifiez explicitement le pointeur de fonction pour printElement
    ::iter(intArray, intArraySize, &printElement<int>);
    std::cout << std::endl;

    // Incrémenter chaque élément du tableau
    ::iter(intArray, intArraySize, &incrementElement<int>);
    
    std::cout << "Modified intArray: ";
    ::iter(intArray, intArraySize, &printElement<int>);
    std::cout << std::endl;

    // Tableau de chaînes de caractères
    std::string strArray[] = {"apple", "banana", "cherry"};
    size_t strArraySize = sizeof(strArray) / sizeof(strArray[0]);

    std::cout << "Initial strArray: ";
    // Spécifiez explicitement le pointeur de fonction pour printElement
    ::iter(strArray, strArraySize, &printElement<std::string>);
    std::cout << std::endl;

    // On ne modifie pas les chaînes, on les imprime seulement
    std::cout << "Unmodified strArray: ";
    ::iter(strArray, strArraySize, &printElement<std::string>);
    std::cout << std::endl;

    return 0;
}
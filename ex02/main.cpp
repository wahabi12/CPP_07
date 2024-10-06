/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:21:35 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/06 02:25:40 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
    // Test du constructeur par défaut (tableau vide)
    Array<int> emptyArray;
    std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;

    // Test du constructeur avec taille
    unsigned int n = 5;
    Array<int> intArray(n);

    // Initialisation des éléments du tableau
    for (unsigned int i = 0; i < n; i++) {
        intArray[i] = i * 10;
    }

    // Affichage des éléments du tableau
    std::cout << "intArray elements: ";
    for (unsigned int i = 0; i < n; i++) {
        std::cout << intArray[i] << " ";
    }
    std::cout << std::endl;

    // Test de la gestion des exceptions (accès hors limites)
    try {
        std::cout << intArray[n] << std::endl;  // Hors des limites
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    // Test du constructeur par copie
    Array<int> copiedArray(intArray);
    std::cout << "copiedArray elements (copied from intArray): ";
    for (unsigned int i = 0; i < copiedArray.size(); i++) {
        std::cout << copiedArray[i] << " ";
    }
    std::cout << std::endl;

    // Test de l'opérateur d'affectation
    Array<int> assignedArray = intArray;
    std::cout << "assignedArray elements (assigned from intArray): ";
    for (unsigned int i = 0; i < assignedArray.size(); i++) {
        std::cout << assignedArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}

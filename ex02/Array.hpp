/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:24:54 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/06 02:25:35 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>  // Pour gérer les exceptions

template <typename T>
class Array {
private:
    T* _array;
    unsigned int _size;

public:
    // Constructeur sans paramètre : crée un tableau vide
    Array() : _array(NULL), _size(0) {}

    // Constructeur avec un paramètre n : crée un tableau avec n éléments
    Array(unsigned int n) : _array(new T[n]), _size(n) {}

    // Constructeur par copie
    Array(const Array& other) : _array(NULL), _size(0) {
        *this = other;
    }

    // Opérateur d'affectation
    Array& operator=(const Array& other) {
        if (this != &other) {
            delete[] _array;
            _size = other._size;
            _array = new T[_size];
            for (unsigned int i = 0; i < _size; i++) {
                _array[i] = other._array[i];
            }
        }
        return *this;
    }

    // Destructeur
    ~Array() {
        delete[] _array;
    }

    // Accès aux éléments avec l'opérateur []
    T& operator[](unsigned int index) {
        if (index >= _size) {
            throw std::out_of_range("Index out of bounds");
        }
        return _array[index];
    }

    // Accès constant aux éléments (pour les objets const)
    const T& operator[](unsigned int index) const {
        if (index >= _size) {
            throw std::out_of_range("Index out of bounds");
        }
        return _array[index];
    }

    // Fonction qui renvoie la taille du tableau
    unsigned int size() const {
        return _size;
    }
};

#endif

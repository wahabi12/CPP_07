/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:17:59 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/17 04:50:43 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void printElement(const T& element) {
	std::cout << element << " ";
}

template <typename T>
void incrementElement(T& element) {
	element += 1;
}

int main() {
	int intArray[] = {1, 2, 3, 4, 5};
	size_t intArraySize = sizeof(intArray) / sizeof(intArray[0]);

	std::cout << "Initial intArray: ";
	::iter(intArray, intArraySize, &printElement<int>);
	std::cout << std::endl;

	::iter(intArray, intArraySize, &incrementElement<int>);
	
	std::cout << "Modified intArray: ";
	::iter(intArray, intArraySize, &printElement<int>);
	std::cout << std::endl;

	std::string strArray[] = {"apple", "banana", "cherry"};
	size_t strArraySize = sizeof(strArray) / sizeof(strArray[0]);

	std::cout << "Initial strArray: ";
	::iter(strArray, strArraySize, &printElement<std::string>);
	std::cout << std::endl;
	std::cout << "Unmodified strArray: ";
	::iter(strArray, strArraySize, &printElement<std::string>);
	std::cout << std::endl;

	return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blatifat <blatifat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 02:21:35 by blatifat          #+#    #+#             */
/*   Updated: 2024/10/17 04:52:03 by blatifat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main() {
	Array<int> emptyArray;
	std::cout << "Size of emptyArray: " << emptyArray.size() << std::endl;
	unsigned int n = 5;
	Array<int> intArray(n);

	for (unsigned int i = 0; i < n; i++) {
		intArray[i] = i * 10;
	}

	std::cout << "intArray elements: ";
	for (unsigned int i = 0; i < n; i++) {
		std::cout << intArray[i] << " ";
	}
	std::cout << std::endl;

	try {
		std::cout << intArray[n] << std::endl;
	} catch (const std::exception& e) {
		std::cerr << "Exception: " << e.what() << std::endl;
	}

	Array<int> copiedArray(intArray);
	std::cout << "copiedArray elements (copied from intArray): ";
	for (unsigned int i = 0; i < copiedArray.size(); i++) {
		std::cout << copiedArray[i] << " ";
	}
	std::cout << std::endl;

	Array<int> assignedArray = intArray;
	std::cout << "assignedArray elements (assigned from intArray): ";
	for (unsigned int i = 0; i < assignedArray.size(); i++) {
		std::cout << assignedArray[i] << " ";
	}
	std::cout << std::endl;

	return 0;
}

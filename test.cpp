/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 10:08:19 by lahammam          #+#    #+#             */
/*   Updated: 2023/02/20 22:09:19 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <iostream>
#include <stack>
#include<iterator> 

#include <iostream>
#include <iterator>

int main() {
  // Define a vector of integers
  std::vector<int> vec { 1, 2, 3, 4, 5 };

  // Define a random access iterator for the vector
  std::vector<int>::iterator iter = vec.begin();

  // Use the iterator tag to check if it's a random access iterator
  if(std::is_same<std::iterator_traits<decltype(iter)>::iterator_category, std::random_access_iterator_tag>::value) {
    std::cout << "Iterator is a random access iterator." << std::endl;
  }
  else {
    std::cout << "Iterator is not a random access iterator." << std::endl;
  }

  return 0;
}

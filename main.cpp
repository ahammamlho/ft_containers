/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lahammam <lahammam@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 12:01:33 by lahammam          #+#    #+#             */
/*   Updated: 2023/01/31 12:28:36 by lahammam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.hpp"
#include <unistd.h>
#include <iostream>


#include<iostream>  
#include<algorithm>  
#include<vector>  
using namespace std;  
bool newpredicate(int m, int n)  
{  
        return(m==n);  
}  
    int main()  
    {  
        int newints[]={20,40,60,80,100};  
        std::vector<int> newvector(newints, newints+5);  
        if(std::equal(newvector.begin(),newvector.end(),newints))  
        std::cout<<"Both the containers have matching elements.\n";  
        else  
        std::cout<<"Both the containers have difference elements.\n";  
        newvector[3]=81;  
        if(std::equal(newvector.begin(),newvector.end(),newints,newpredicate))  
        std::cout<<"Both the containers have equal containers.\n";  
        else  
        std::cout<<"Both the containers do not have equal elements. \n";  
        

          char foo[]="Apple";  
  char bar[]="apartment";  
  
  cout << boolalpha;  
  
  cout << "Comparing foo and bar lexicographically (foo<bar):\n";  
  
  cout << "Using default comparison (operator<): ";  
  cout << lexicographical_compare(foo,foo+5,bar,bar+9);  
  cout << '\n';  
  
  cout << "Using mycomp as comparison object: ";  
  cout << lexicographical_compare(foo,foo+5,bar,bar+9,mycomp);  
  cout << '\n';  
  
  return 0;  
    }  
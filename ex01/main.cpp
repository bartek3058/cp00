/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:26:47 by brogalsk          #+#    #+#             */
/*   Updated: 2025/10/19 12:39:41 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main ()
{
	std::string x;
	int index;
	int contactcount;
	PhoneBook MyBook;
	Contact person;
	
	contactcount = 0;
	index = 0;
	std::cout<<"Welcome in the PhoneBook"<<std::endl;
	while(1)
	{
		std::cout<<"Choose ADD, SEARCH or EXIT"<<std::endl;
		std::cin >> x;
		if (x == "ADD")
		{
			if (contactcount == 8)
				contactcount = 0;
			MyBook.AddContact(contactcount, MyBook);
			contactcount++;
		}	
		if (x == "SEARCH")
		{
			MyBook.FirstPrint(MyBook);
			std::cout<<std::endl<<"Choose number(1-8): ";
			if(!(std::cin >> index))
			{
				std::cin.clear();
				std::cin.ignore(10000, '\n');
				std::cout<<"Invalid input, please enter a number."<<std::endl;
			}
			else if (index >= 1 && index <= 8)
			{
				index--;
				MyBook.SearchContact(index, MyBook);
			}
			else
				std::cout<<"Incorrect number"<<std::endl;
		}
		if (x == "EXIT")
		{
			break ;
		}
		
	}
	std::cout<<"Thanks for use my PhoneBook"<<std::endl;
}
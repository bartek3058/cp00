/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:26:47 by brogalsk          #+#    #+#             */
/*   Updated: 2025/10/18 17:33:23 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main ()
{
	std::string x;
	int a;
	int contactcount;
	PhoneBook MyBook;
	Contact person;
	
	contactcount = 0;
	a = 0;
	std::cout<<"Welcome in the PhoneBook"<<std::endl;
	while(1)
	{
		std::cout<<"Choose ADD, SEARCH or EXIT"<<std::endl;
		std::cin >> x;
		if (x == "ADD")
		{
			MyBook.AddContact(&contactcount, MyBook);
		}	
		if (x == "SEARCH")
		{
			std::cout<<"Choose number(1-8): ";
			std::cin >> a;
			MyBook.SearchContact(a, MyBook);
		}
		if (x == "EXIT")
		{
			break ;
		}
		
	}
	std::cout<<"Thanks for use my PhoneBook"<<std::endl;
}
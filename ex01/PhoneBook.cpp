/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:33:55 by brogalsk          #+#    #+#             */
/*   Updated: 2025/10/18 17:43:55 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void PhoneBook::SearchContact(int index, PhoneBook Mybook)
{
	index--;
	if (index > 7 || index < 0)
		std::cout<<"Incorrect number"<<std::endl;
	Mybook.Contacts[index].PrintContact(Mybook.Contacts[index]);
}

void PhoneBook::AddContact(int *index, PhoneBook MyBook)
{
	
	std::string input;
	
	std::cout<<"FirstName: ";
	std::cin>>input;
	MyBook.Contacts[*index].SetFirstName(input);
	std::cout<<"LastName: ";
	std::cin>>input;
	MyBook.Contacts[*index].SetLastName(input);
	std::cout<<"NickName: ";
	std::cin>>input;
	MyBook.Contacts[*index].SetNickName(input);
	std::cout<<"PhoneNumber: ";
	std::cin>>input;
	MyBook.Contacts[*index].SetPhoneNumber(input);
	std::cout<<"DarknestSecret: ";
	std::cin>>input;
	MyBook.Contacts[*index].SetDarkestSecret(input);
	if (*index < 7)
	{
		*(index)++;
	}
	if (*index == 8)
		*index = 0;
}
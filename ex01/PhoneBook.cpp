/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 11:33:55 by brogalsk          #+#    #+#             */
/*   Updated: 2025/10/19 13:35:55 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void PhoneBook::FirstPrint(PhoneBook &Mybook)
{
	std::cout<<"|     Index|First Name| Last Name|  Nickname|"<<std::endl;
	int index;
	index = 0;
	Mybook.Contacts[index].PrintContact(Mybook.Contacts[index], index);
	index = 1;
	Mybook.Contacts[index].PrintContact(Mybook.Contacts[index], index);
	index = 2;
	Mybook.Contacts[index].PrintContact(Mybook.Contacts[index], index);
	index = 3;
	Mybook.Contacts[index].PrintContact(Mybook.Contacts[index], index);
	index = 4;
	Mybook.Contacts[index].PrintContact(Mybook.Contacts[index], index);
	index = 5;
	Mybook.Contacts[index].PrintContact(Mybook.Contacts[index], index);
	index = 6;
	Mybook.Contacts[index].PrintContact(Mybook.Contacts[index], index);
	index = 7;
	Mybook.Contacts[index].PrintContact(Mybook.Contacts[index], index);

}

void PhoneBook::SearchContact(int index, PhoneBook &Mybook)
{
	Mybook.Contacts[index].PrintContactDetails(Mybook.Contacts[index]);
}

void PhoneBook::AddContact(int &index, PhoneBook &MyBook)
{
	
	std::string input;
	while(input.empty())
	{
		std::cout<<"FirstName: ";
		std::cin>>input;
	}
	Contacts[index].SetFirstName(input);
	input = "";
	while(input.empty())
	{
		std::cout<<"LastName: ";
		std::cin>>input;
	}
	MyBook.Contacts[index].SetLastName(input);
	input = "";
	while(input.empty())
	{
		std::cout<<"NickName: ";
		std::cin>>input;
	}
	MyBook.Contacts[index].SetNickName(input);
	input = "";
	while(input.empty())
	{
		std::cout<<"PhoneNumber: ";
		std::cin>>input;
	}
	MyBook.Contacts[index].SetPhoneNumber(input);
	input = "";
	while(input.empty())
	{
		std::cout<<"DarknestSecret: ";
		std::cin>>input;
	}
	MyBook.Contacts[index].SetDarkestSecret(input);
}
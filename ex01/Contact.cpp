/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:52:32 by brogalsk          #+#    #+#             */
/*   Updated: 2025/11/06 13:35:16 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

void Contact::PrintContactDetails(Contact Contact)
{
	if(Contact.FirstName.length() > 0)
	{
		std::cout<<std::endl<<"First Name: "<<FirstName<<std::endl;
		std::cout<<"Last Name: "<<LastName<<std::endl;
		std::cout<<"Nick Name: "<<Nickname<<std::endl;
		std::cout<<"Phone Number: "<<PhoneNumber<<std::endl;
		std::cout<<"Darkest Secret: "<<DarkestSecret<<std::endl<<std::endl;

	}
	else
		std::cout<<"No contact on this position"<<std::endl;
}

void Contact::PrintContact(Contact Contact, int index)
{
	index++;
	if(Contact.FirstName.length() > 0)
	{
		std::cout<<"|"<<std::setw(10)<<index<<"|";
		if(FirstName.length() > 10)
		{
			std::cout<<FirstName.substr(0, 9)<<".|";
		}
		else
		{
			std::cout<<std::setw(10)<<FirstName<<"|";
		}
	}
	if(Contact.LastName.length() > 0)
	{
		if(LastName.length() > 10)
		{
			std::cout<<LastName.substr(0, 9)<<".|";
		}
		else
		{
			std::cout<<std::setw(10)<<LastName<<"|";
		}
	}
	if(Contact.Nickname.length() > 0)
	{
		if(Nickname.length() > 10)
		{
			std::cout<<Nickname.substr(0, 9)<<".|"<<std::endl;
		}
		else
		{
			std::cout<<std::setw(10)<<Nickname<<"|"<<std::endl;
		}
	}
}

void Contact::SetFirstName(std::string &b)
{
	FirstName = b;
}
void Contact::SetLastName(std::string b)
{
	LastName = b;
}
void Contact::SetNickName(std::string b)
{
	Nickname = b;
}
void Contact::SetPhoneNumber(std::string b)
{
	PhoneNumber = b;
}
void Contact::SetDarkestSecret(std::string b)
{
	DarkestSecret = b;
}
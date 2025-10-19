/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 10:52:32 by brogalsk          #+#    #+#             */
/*   Updated: 2025/10/19 13:33:31 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

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
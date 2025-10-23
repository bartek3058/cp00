/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 17:01:07 by brogalsk          #+#    #+#             */
/*   Updated: 2025/10/19 13:33:11 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string Nickname;
		std::string PhoneNumber;
		std::string DarkestSecret;
	
	public:
		void SetFirstName(std::string &b);
		void SetLastName(std::string b);
		void SetNickName(std::string b);
		void SetPhoneNumber(std::string b);
		void SetDarkestSecret(std::string b);
		void PrintContact(Contact Contact, int index);
		void PrintContactDetails(Contact Contact);
};

#endif
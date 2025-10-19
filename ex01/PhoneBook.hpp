/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brogalsk <brogalsk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 16:33:19 by brogalsk          #+#    #+#             */
/*   Updated: 2025/10/19 13:33:06 by brogalsk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact Contacts[8];
		int index;
	
	public:
		void AddContact(int &index, PhoneBook &MyBook);
		void SearchContact(int index, PhoneBook &Mybook);
		void PrintContact(PhoneBook Mybook);
};

#endif
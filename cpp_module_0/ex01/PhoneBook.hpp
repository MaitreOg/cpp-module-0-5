/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smarty <smarty@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:48:35 by smarty            #+#    #+#             */
/*   Updated: 2024/04/07 19:24:40 by smarty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class   PhoneBook{

private:  
	contact repertoire[8];
	int     i;

public:
	void    set_contact(int i);
	void    get_contact(void);

	PhoneBook(void);
};

#endif
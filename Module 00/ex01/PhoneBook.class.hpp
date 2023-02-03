/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprljic <nprljic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 18:47:16 by nprljic           #+#    #+#             */
/*   Updated: 2023/02/02 21:36:41 by nprljic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include <iostream>
#include "Contacts.class.hpp"

class PhoneBook {
    

public:

    std::string Contacts[8][5];
    
    PhoneBook( void );
    
    //void SaveToPhonebook( std::string[5] );
};

#endif
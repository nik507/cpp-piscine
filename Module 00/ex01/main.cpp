/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nprljic <nprljic@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:38:08 by nprljic           #+#    #+#             */
/*   Updated: 2023/02/03 15:20:02 by nprljic          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.class.hpp"
#include "Contacts.class.hpp"

void search_menu( PhoneBook *PhoneBook, Contact Contact, int *i)
{
    std::string input;

    std::cout << "Type in the index:" << std::endl;
    std::cin >> input;
    if(input[0] < '1' || input[0] > *i + '0' || input.size() > 1)
        std::cout << "Not in range!" << std::endl;
    else
        Contact.ShowOne(PhoneBook->Contacts[(input[0] - 48) - 1]);
    return ;
}

void search_contacts( PhoneBook *PhoneBook, Contact Contact, int *i)
{
    if(*i < 1)
        return ;
    for(int len = 0; len < *i; len++)
    {
        std::cout << "         " << len + 1;
        Contact.ShowContact(PhoneBook->Contacts[len]);
    }
    search_menu(PhoneBook, Contact, i);
    return ;
}

void add_and_search( int *i, std::string menu, PhoneBook *PhoneBook, Contact Contact)
{
    if( menu == "ADD")
    {
        if(*i > 6)
            *i = 7;
        Contact.MakeContact(PhoneBook->Contacts[*i]);
        *i += 1;
    }
    else if( menu == "SEARCH")
        search_contacts(PhoneBook, Contact, i);
    return ;
}

int main( void )
{
    int i;
    PhoneBook   PhoneBook;
    Contact     Contact;
    std::string menu;

    i = 0;
    jump:
        std::cout << ">> USE: ADD || SEARCH || EXIT" << std::endl;
        std::cin >> menu;
        if( menu == "EXIT" )
            return (0);
        add_and_search(&i, menu, &PhoneBook, Contact);
    goto jump;
    return (0);
}
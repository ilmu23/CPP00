// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<main.cpp>>

#include <iomanip>
#include <iostream>
#include "PhoneBook.hpp"

static inline Contact	_newcontact(void);
static inline void		_search(PhoneBook book);
static inline void		_display(PhoneBook book);
static inline void		_print(Contact contact);

int32_t	main(void)
{
	PhoneBook	book;
	std::string	input;

	std::cout << ">> ";
	std::getline(std::cin, input);
	while (input != "EXIT")
	{
		if (input == "ADD")
			book.addcontact(_newcontact());
		else if (input == "SEARCH")
			_search(book);
		if (std::cin.eof())
			break; 
		std::cout << ">> ";
		std::getline(std::cin, input);
	}
	if (std::cin.eof())
		std::cout << std::endl;
	return 0;
}

static inline Contact	_newcontact(void)
{
	uint8_t		i;
	Contact		out;
	std::string	input[5];
	std::string	prompts[5] = {"Enter first name: ", "Enter last name: ",
		"Enter nickname: ", "Enter number: ", "Enter secret: "};

	i = 0;
	for (std::string prompt : prompts)
	{
		if (std::cin.eof())
			break ;
		input[i] = "";
		while (input[i] == "")
		{
			std::cout << prompt;
			std::getline(std::cin, input[i]);
		}
		i++;
	}
	out.setfirstname(input[0]);
	out.setlastname(input[1]);
	out.setnickname(input[2]);
	out.setnumber(input[3]);
	out.setsecret(input[4]);
	return out;
}

static inline void	_search(PhoneBook book)
{
	uint8_t		i;
	std::string	input;

	if (!book.getcontactcount())
		return ;
	_display(book);
	if (std::cin.eof())
		return ;
	std::cout << "Enter index: ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		return ;
	i = std::stoi(input);
	if (i >= book.getcontactcount())
		std::cout << "Invalid index\n";
	else
		_print(book.getcontact(i));
}

static inline void	_display(PhoneBook book)
{
	uint8_t		limit;
	Contact		contact;
	std::string	name;

	limit = book.getcontactcount();
	for (uint8_t i = 0; i < limit; i++)
	{
		contact = book.getcontact(i);
		std::cout << std::setw(10) << (int32_t)i;
		name = contact.getfirstname();
		if (name.length() > 9)
			name = name.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << name;
		name = contact.getlastname();
		if (name.length() > 9)
			name = name.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << name;
		name = contact.getnickname();
		if (name.length() > 9)
			name = name.substr(0, 9) + ".";
		std::cout << "|" << std::setw(10) << name << std::endl;
	}
}

static inline void	_print(Contact contact)
{
	std::cout << "First name: " << contact.getfirstname() << std::endl;
	std::cout << "Last name: " << contact.getlastname() << std::endl;
	std::cout << "Nickname: " << contact.getnickname() << std::endl;
	std::cout << "Number: " << contact.getnumber() << std::endl;
	std::cout << "Secret: " << contact.getsecret() << std::endl;
}

// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<PhoneBook.cpp>>

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	this->i = 0;
	this->contactcount = 0;
}

PhoneBook::PhoneBook(const PhoneBook &copy)
{
	*this = copy;
}

PhoneBook &PhoneBook::operator=(const PhoneBook &copy)
{
	this->contactcount = copy.getcontactcount();
	for (this->i = 0; this->i < this->contactcount; this->i++)
		this->contacts[i] = copy.getcontact(i);
	this->i *= (this->i <= PB_MAXID);
	return *this;
}

PhoneBook::~PhoneBook(void) {}

Contact	PhoneBook::getcontact(const uint8_t i) const
{
	return this->contacts[i];
}

uint8_t	PhoneBook::getcontactcount(void) const
{
	return this->contactcount;
}

void	PhoneBook::addcontact(const Contact contact)
{
	this->contacts[this->i++] = contact;
	this->contactcount = std::min(this->contactcount + 1, PB_MAX);
	if (this->i > PB_MAXID)
		this->i = 0;
}

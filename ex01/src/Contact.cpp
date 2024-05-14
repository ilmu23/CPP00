// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<Contact.cpp>>

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::Contact(const Contact &copy)
{
	*this = copy;
}

Contact &Contact::operator=(const Contact &copy)
{
	this->firstname = copy.getfirstname();
	this->lastname = copy.getlastname();
	this->nickname = copy.getnickname();
	this->number = copy.getnumber();
	this->secret = copy.getsecret();
	return *this;
}

Contact::~Contact(void) {}

std::string	Contact::getfirstname(void) const
{
	return this->firstname;
}

std::string	Contact::getlastname(void) const
{
	return this->lastname;
}

std::string	Contact::getnickname(void) const
{
	return this->nickname;
}

std::string	Contact::getnumber(void) const
{
	return this->number;
}

std::string	Contact::getsecret(void) const
{
	return this->secret;
}

void	Contact::setfirstname(std::string s)
{
	this->firstname = s;
}

void	Contact::setlastname(std::string s)
{
	this->lastname = s;
}

void	Contact::setnickname(std::string s)
{
	this->nickname = s;
}

void	Contact::setnumber(std::string s)
{
	this->number = s;
}

void	Contact::setsecret(std::string s)
{
	this->secret = s;
}

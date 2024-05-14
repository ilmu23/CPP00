// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<Contact.hpp>>

#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string>

class Contact
{
	private:

		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	number;
		std::string	secret;

	public:

		Contact(void);
		Contact(const Contact &copy);
		Contact &operator=(const Contact &copy);
		~Contact(void);

		std::string	getfirstname(void) const;
		std::string	getlastname(void) const;
		std::string	getnickname(void) const;
		std::string	getnumber(void) const;
		std::string	getsecret(void) const;

		void	setfirstname(std::string);
		void	setlastname(std::string);
		void	setnickname(std::string);
		void	setnumber(std::string);
		void	setsecret(std::string);
};

#endif

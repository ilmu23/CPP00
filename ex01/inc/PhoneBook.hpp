// ███████╗████████╗     ██████╗ ██╗   ██╗████████╗ ██████╗██╗  ██╗ █████╗ ██████╗
// ██╔════╝╚══██╔══╝     ██╔══██╗██║   ██║╚══██╔══╝██╔════╝██║  ██║██╔══██╗██╔══██╗
// █████╗     ██║        ██████╔╝██║   ██║   ██║   ██║     ███████║███████║██████╔╝
// ██╔══╝     ██║        ██╔═══╝ ██║   ██║   ██║   ██║     ██╔══██║██╔══██║██╔══██╗
// ██║        ██║███████╗██║     ╚██████╔╝   ██║   ╚██████╗██║  ██║██║  ██║██║  ██║
// ╚═╝        ╚═╝╚══════╝╚═╝      ╚═════╝    ╚═╝    ╚═════╝╚═╝  ╚═╝╚═╝  ╚═╝╚═╝  ╚═╝
//
// <<PhoneBook.hpp>>

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <cstdint>
# include "Contact.hpp"

# define PB_MAX 8
# define PB_MAXID 7

class PhoneBook
{
	private:
		Contact	contacts[8];
		uint8_t	contactcount;
		uint8_t	i;

	public:

		PhoneBook(void);
		PhoneBook(const PhoneBook &copy);
		PhoneBook &operator=(const PhoneBook &copy);
		~PhoneBook(void);

		Contact	getcontact(const uint8_t i) const;

		uint8_t	getcontactcount(void) const;

		void	addcontact(const Contact contact);
};

#endif

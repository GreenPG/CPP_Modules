#include <string.h>
#include "Contact.hpp"

class	PhoneBook	{

public:
	PhoneBook();

	Contact	contactTab[8];
	int	search() const;
	int	addContact();
private:
	int		contactCount;
};

#include <string>

class Zombie
{
	 public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void	announce(void);
		void	setName(std::string name);
	 private:
		std::string	name;
};

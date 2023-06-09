/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 09:03:17 by gpasquet          #+#    #+#             */
/*   Updated: 2023/07/04 16:32:06 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "../includes/IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	 public:
		MateriaSource();
		~MateriaSource();
		MateriaSource (const MateriaSource &copy);
		MateriaSource &operator=(const MateriaSource&);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
	 private:
		AMateria	*inventory[4];	
};

#endif

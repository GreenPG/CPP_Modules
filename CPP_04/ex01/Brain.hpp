/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpasquet <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/09 11:30:22 by gpasquet          #+#    #+#             */
/*   Updated: 2023/04/09 13:35:27 by gpasquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
	 public:
		Brain();
		~Brain();
		Brain (const Brain &copy);
		Brain &operator=(const Brain&);

		std::string	getIdea(int index) const;
		void		setIdea(int index, std::string newIdea); 
	 private:
		std::string	ideas[100];
};

#endif

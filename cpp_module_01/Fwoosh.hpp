/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 23:06:34 by ncolomer          #+#    #+#             */
/*   Updated: 2020/01/16 23:06:34 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh: public ASpell
{
public:
	Fwoosh();
	Fwoosh(Fwoosh const &other);
	virtual ~Fwoosh();

	Fwoosh &operator=(Fwoosh const &other);

	ASpell *clone(void) const;
};

#endif

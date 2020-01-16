/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 23:24:08 by ncolomer          #+#    #+#             */
/*   Updated: 2020/01/16 23:24:08 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh():
	ASpell("Fwoosh", "fwooshed") {}

Fwoosh::~Fwoosh() {}

Fwoosh::Fwoosh(Fwoosh const &other):
	ASpell(other) {}

Fwoosh &Fwoosh::operator=(Fwoosh const &other)
{
	(void)other;
	return (*this);
}

ASpell *Fwoosh::clone(void) const
{
	return (new Fwoosh(*this));
}

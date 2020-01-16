/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 23:16:30 by ncolomer          #+#    #+#             */
/*   Updated: 2020/01/16 23:16:30 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy():
	ATarget("Dummy Practice") {}

Dummy::~Dummy() {}

Dummy::Dummy(Dummy const &other):
	ATarget(other) {}

Dummy &Dummy::operator=(Dummy const &other)
{
	(void)other;
	return (*this);
}

ATarget *Dummy::clone(void) const
{
	return (new Dummy(*this));
}

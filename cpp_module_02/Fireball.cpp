/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:49:03 by ncolomer          #+#    #+#             */
/*   Updated: 2020/02/04 13:02:13 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"

Fireball::Fireball():
	ASpell("Fireball", "burnt to a crisp") {}

Fireball::~Fireball() {}

ASpell *Fireball::clone(void) const
{
	return (new Fireball());
}

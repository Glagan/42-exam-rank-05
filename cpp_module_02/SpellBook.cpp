/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/04 12:54:32 by ncolomer          #+#    #+#             */
/*   Updated: 2020/02/04 13:12:07 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {}

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell *spell)
{
	if (!spell || spell->getName() == "")
		return ;

	std::vector<ASpell*>::iterator it = this->spells.begin();
	std::vector<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spell->getName())
			return ;
		++it;
	}
	this->spells.push_back(spell->clone());
}

void SpellBook::forgetSpell(std::string const &spellName)
{
	std::vector<ASpell*>::iterator it = this->spells.begin();
	std::vector<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spellName)
		{
			this->spells.erase(it);
			return ;
		}
		++it;
	}
}

ASpell *SpellBook::generateSpell(std::string const &spellName)
{
	std::vector<ASpell*>::iterator it = this->spells.begin();
	std::vector<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spellName)
			return (*it);
		++it;
	}
	return (nullptr);
}
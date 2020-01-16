/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 20:37:13 by ncolomer          #+#    #+#             */
/*   Updated: 2020/01/16 20:37:13 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title):
	name(name), title(title)
{
	std::cout << this->name << ": What a boring day\n";
}

Warlock::~Warlock()
{
	std::cout << this->name << ": My job here is done!\n";
}

std::string const &Warlock::getName(void) const
{
	return (this->name);
}

std::string const &Warlock::getTitle(void) const
{
	return (this->title);
}

void Warlock::setTitle(std::string const &title)
{
	this->title = title;
}

void Warlock::introduce(void) const
{
	std::cout << this->name << ": My name is " << this->name << ", " << this->title << "!\n";
}

void Warlock::learnSpell(ASpell *spell)
{
	if (spell != nullptr)
		this->spells.push_back(spell);
}

void Warlock::forgetSpell(std::string const &spellName)
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

void Warlock::launchSpell(std::string const &spellName, ATarget const &target)
{
	std::vector<ASpell*>::iterator it = this->spells.begin();
	std::vector<ASpell*>::iterator ite = this->spells.end();

	while (it != ite)
	{
		if ((*it)->getName() == spellName)
		{
			(*it)->launch(target);
			return ;
		}
		++it;
	}
}

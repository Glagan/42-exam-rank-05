/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 23:06:00 by ncolomer          #+#    #+#             */
/*   Updated: 2020/01/16 23:06:00 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include <string>

class ATarget;

class ASpell
{
private:
	std::string name;
	std::string effects;

	ASpell();
public:
	ASpell(std::string const &name, std::string const &effects);
	ASpell(ASpell const &other);
	virtual ~ASpell();

	std::string const &getName(void) const;
	std::string const &getEffects(void) const;

	void launch(ATarget const &target) const;

	virtual ASpell *clone(void) const = 0;
};

# include "ATarget.hpp"

#endif

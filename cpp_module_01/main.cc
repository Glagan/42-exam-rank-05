/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 00:35:12 by ncolomer          #+#    #+#             */
/*   Updated: 2020/01/17 00:35:12 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

int main(void)
{
	Warlock jean("Jean", "Master of the Universe");
	Fwoosh *spell = new Fwoosh();
	Dummy punchin;

	jean.launchSpell("Fwoosh", punchin);
	jean.learnSpell(spell);
	jean.launchSpell("Fwoosh", punchin);

	jean.forgetSpell("Fwoosh");
	jean.launchSpell("Fwoosh", punchin);

	jean.launchSpell("Splash", punchin);
	jean.forgetSpell("Splash");
	jean.launchSpell("Splash", punchin);
	return (0);
}

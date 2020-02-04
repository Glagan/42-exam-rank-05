/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 00:35:12 by ncolomer          #+#    #+#             */
/*   Updated: 2020/02/04 13:16:55 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"
#include "Dummy.hpp"
#include "BrickWall.hpp"
#include "Fwoosh.hpp"
#include "Fireball.hpp"
#include "Polymorph.hpp"
#include "TargetGenerator.hpp"

int main(void)
{
	std::cout << "--- Constructors:\n";
	Warlock richard("Aang", "The Avatar");
	Polymorph *water = new Polymorph();
	Fireball *fire = new Fireball();
	BrickWall *earth = new BrickWall();
	Fwoosh *air = new Fwoosh();
	Dummy punchin;
	Polymorph *ACID = nullptr;

	std::cout << "--- \"Fwoosh\" not learned:\n";

	richard.launchSpell("Fwoosh", punchin);

	std::cout << "--- \"Fwoosh\" learned:\n";

	richard.learnSpell(air);
	richard.launchSpell("Fwoosh", punchin);

	std::cout << "--- Forgotten \"Fwoosh\":\n";

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", punchin);

	std::cout << "--- Non-existant spell:\n";

	richard.learnSpell(ACID);
	richard.launchSpell("ACID", punchin);
	richard.forgetSpell("ACID");
	richard.launchSpell("ACID", punchin);

	std::cout << "--- Destructors:\n";
	return (0);
}

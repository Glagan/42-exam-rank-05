/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cc                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/17 00:33:40 by ncolomer          #+#    #+#             */
/*   Updated: 2020/01/17 00:33:40 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

int main(void)
{
	// Warlock warlock; // Doesn't compile
	Warlock jean("Jean", "Master of the Universe");
	// Warlock warlock(jean); // Doesn't compile
	// Warlock warlock = jean; // Doesn't compile
	jean.introduce();
	jean.setTitle("Master of the Earth");
	jean.introduce();
	return (0);
}

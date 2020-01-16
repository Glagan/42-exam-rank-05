/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/16 23:06:26 by ncolomer          #+#    #+#             */
/*   Updated: 2020/01/16 23:06:26 by ncolomer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DUMMY_HPP
# define DUMMY_HPP

# include "ATarget.hpp"

class Dummy: public ATarget
{
public:
	Dummy();
	Dummy(Dummy const &other);
	virtual ~Dummy();

	Dummy &operator=(Dummy const &other);

	virtual ATarget *clone(void) const;
};

#endif

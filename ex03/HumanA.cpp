/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:15:38 by tkong             #+#    #+#             */
/*   Updated: 2023/02/12 00:27:26 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& wpn) : name(name), wpn(wpn) {}
HumanA::~HumanA() {}

void HumanA::attack() const {
	std::cout << wpn.getType() << '\n';
}

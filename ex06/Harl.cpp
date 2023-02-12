/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 03:52:05 by tkong             #+#    #+#             */
/*   Updated: 2023/02/12 19:50:12 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void (Harl::*f[4])(void);

void Harl::debug(void) { std::cout << "[ DEBUG ]" << '\n'; }
void Harl::info(void) { std::cout << "[ INFO ]" << '\n'; }
void Harl::warning(void) { std::cout << "[ WARNING ]" << '\n'; }
void Harl::error(void) { std::cout << "[ ERROR ]" << '\n'; }

Harl::Harl() {
	f[0] = &Harl::debug;
	f[1] = &Harl::info;
	f[2] = &Harl::warning;
	f[3] = &Harl::error;
}
Harl::~Harl() {}
void Harl::complain(std::string level) {
	(this->*f[level[0] - '0'])();
	std::cout << '\n';
}

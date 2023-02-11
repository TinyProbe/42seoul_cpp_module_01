/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/11 23:15:37 by tkong             #+#    #+#             */
/*   Updated: 2023/02/12 00:59:59 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() : type() {}
Weapon::Weapon(const std::string& type) : type(type) {}
Weapon::~Weapon() {}

const std::string& Weapon::getType() const { return type; }
void Weapon::setType(const std::string& type) { this->type = type; }

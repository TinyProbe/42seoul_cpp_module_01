/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 03:52:04 by tkong             #+#    #+#             */
/*   Updated: 2023/02/12 16:25:43 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() {
	Harl h;
	h.complain(DEBUG__);
	h.complain(INFO__);
	h.complain(WARN__);
	h.complain(ERROR__);
}

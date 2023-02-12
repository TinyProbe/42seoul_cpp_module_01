/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkong <tkong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 03:52:04 by tkong             #+#    #+#             */
/*   Updated: 2023/02/12 19:48:36 by tkong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char** av) {
	if (ac != 2) {
		return 1;
	}
	Harl h;
	int cnt(0), res(0);
	std::string arg(av[1]);
	++cnt;
	res = (arg == "debug" ? cnt : res);
	++cnt;
	res = (arg == "info" ? cnt : res);
	++cnt;
	res = (arg == "warning" ? cnt : res);
	++cnt;
	res = (arg == "error" ? cnt : res);
	switch (res) {
		default:
			std::cout << "No one here that same input argument.\n";
			break;
		case 1:
			h.complain(DEBUG__);
		case 2:
			h.complain(INFO__);
		case 3:
			h.complain(WARN__);
		case 4:
			h.complain(ERROR__);
	}
}

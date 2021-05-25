/*
 * RGB.cpp
 *
 *  Created on: 2 May 2021
 *      Author: LeeZhengJun
 */

#include "RGB.h"

namespace saber {

RGB::RGB(double r, double g, double b): r(r), g(g), b(b) {
	// TODO Auto-generated constructor stub

}

RGB::~RGB() {
	// TODO Auto-generated destructor stub
}

RGB operator-(const RGB &first, const RGB &second) {
	return RGB(first.r - second.r, first.g - second.g, first.b - second.b);
}

} /* namespace saber */

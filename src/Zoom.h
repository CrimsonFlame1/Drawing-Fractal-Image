/*
 * Zoom.h
 *
 *  Created on: 17 Apr 2021
 *      Author: LeeZhengJun
 */

#ifndef ZOOM_H_
#define ZOOM_H_

namespace saber {

struct Zoom {
	int x{0};
	int y{0};
	double scale{0.0};

	Zoom(int x, int y, double scale): x(x), y(y), scale(scale) {};
};

} /* namespace saber */

#endif /* ZOOM_H_ */

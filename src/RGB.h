/*
 * RGB.h
 *
 *  Created on: 2 May 2021
 *      Author: LeeZhengJun
 */

#ifndef RGB_H_
#define RGB_H_

namespace saber {

struct RGB {

	double r;
	double g;
	double b;

	RGB(double r, double g, double b);
	virtual ~RGB();


};

RGB operator-(const RGB &first, const RGB &second);

} /* namespace saber */

#endif /* RGB_H_ */

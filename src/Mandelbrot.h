/*
 * Mandelbrot.h
 *
 *  Created on: 1 Apr 2021
 *      Author: LeeZhengJun
 */

#ifndef MANDELBROT_H_
#define MANDELBROT_H_

namespace saber {

class Mandelbrot {
public:
	static const int MAX_ITERATIONS = 1000;

public:
	Mandelbrot();
	virtual ~Mandelbrot();

	static int getIterations(double x, double y);

};

} /* namespace saber */

#endif /* MANDELBROT_H_ */

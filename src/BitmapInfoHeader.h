/*
 * BitmapInfoHeader.h
 *
 *  Created on: 22 Mar 2021
 *      Author: LeeZhengJun
 */

#ifndef BITMAPINFOHEADER_H_
#define BITMAPINFOHEADER_H_

#include <cstdint>

using namespace std;

#pragma pack(2)

namespace saber{

struct BitmapInfoHeader{
	int32_t headerSize{40};	// total 40bytes in this struct
	int32_t width;
	int32_t height;
	int16_t planes{1};
	int16_t bitsPerPixel{24};  // 24bits; 8bits x 3(RGB) = 24
	int32_t compression{0};
	int32_t dataSize{0};
	int32_t horizontalResolution{2400};
	int32_t verticalResolution{2400};
	int32_t colors{0};
	int32_t importantColors{0};

};

}

#endif /* BITMAPINFOHEADER_H_ */

/*
 * BitmapFileHeader.h
 *
 *  Created on: 22 Mar 2021
 *      Author: LeeZhengJun
 */

#ifndef BITMAPFILEHEADER_H_
#define BITMAPFILEHEADER_H_

#include <cstdint>
using namespace std;

#pragma pack(2)

//|   1   |   2   |
//
//| AA(1) | CC(1) |
//| BB(1) | BB(2) |
//| BB(3) | BB(4) |

namespace saber{

struct BitmapFileHeader{
	char header[2]{'B', 'M'};
	int32_t fileSize;
	int32_t reserved{0};
	int32_t dataOffset;
};

}
#endif /* BITMAPFILEHEADER_H_ */

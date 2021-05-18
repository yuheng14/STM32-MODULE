#ifndef __PE43711_H
#define __PE43711_H

#include "main.h"
#include "sys.h"
#include "tim.h"

// Ë¥¼õ×Öºê¶¨Òå
#define dB0_25	0x01
#define dB0_5	0x02
#define dB1		0x04
#define dB2		0x08
#define dB4		0x10
#define dB8		0x20
#define dB16	0x40
#define dB31_75 0x7f



#define S_SI(n)		(n?HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2, GPIO_PIN_SET):HAL_GPIO_WritePin(GPIOE, GPIO_PIN_2, GPIO_PIN_RESET))
#define S_CLK(n)	(n?HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, GPIO_PIN_SET):HAL_GPIO_WritePin(GPIOE, GPIO_PIN_3, GPIO_PIN_RESET))
#define LE(n)		(n?HAL_GPIO_WritePin(GPIOE, GPIO_PIN_4, GPIO_PIN_SET):HAL_GPIO_WritePin(GPIOE, GPIO_PIN_4, GPIO_PIN_RESET))


void PE43711_Write(u8 Att_Word);



#endif // !__PE43711_H


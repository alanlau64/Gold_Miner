///////////////////////
//  标记各元素应处位置  //
///////////////////////

#include "size.h"
#ifndef PLACE_H
#define PLACE_H

#define MINESPACEY 131
////////  矿工区与矿物区交界纵坐标
#define MINERPLACEX ((BGWIDTH - MINERWIDTH) / 2)	//矿工横坐标
#define MINERPLACEY (MINESPACEY - MINERHEIGHT)		//矿工纵坐标
////////  矿工位置
#define GRPLACEX (MINERPLACEX + 12)
#define GRPLACEY MINESPACEY
////////  钩子位置
#define FNPLACEX (BGWIDTH + (WINDOWWIDTH - BGWIDTH - BOTTONWIDTH) / 2)
////////  按钮及信息左侧横坐标
#define BOTTON1PLACE 20			//按钮1纵坐标
#define BOTTON2PLACE 140		//按钮2纵坐标
#define BOTTON3PLACE 260		//按钮3纵坐标
////////  按钮位置纵坐标
#define TEXTMSGPLACEX FNPLACEX+110	//可变信息横坐标
#define TEXT1PLACE 450			//信息1纵坐标
#define TEXT2PLACE 500			//信息2纵坐标
#define TEXT3PLACE 550			//信息3纵坐标
#define TEXT4PLACE 600			//信息4纵坐标
////////  信息位置
#endif

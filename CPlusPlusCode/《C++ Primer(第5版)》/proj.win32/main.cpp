// 《C++ Primer(第5版)》.cpp 
// : 定义控制台应用程序的入口点。

#include "stdafx.h"

// 阅读完的章节
#if 0		

#include "01-第1章-开始.h"
#include "02-第2章-变量和基本类型.h"

#endif

// 阅读了一部分的章节
#if 0
#include "03-第3章-字符串、向量和数组.h"
#include "04-第4章-表达式.h"
#endif



#include "09-第9章-顺序容器.h"
#include "10-第10章-泛型算法.h"


int _tmain(int argc, _TCHAR* argv[])
{
	algorithm_study_sort_unique_erase();

	getchar();		// 防止 窗口闪掉

	return 0;
}


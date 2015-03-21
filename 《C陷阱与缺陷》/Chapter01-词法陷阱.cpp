﻿
#include "Chapter01.h"
#include "stdafx.h"

// 第1章 词法"陷阱"
/*
	对于C语言或其他语言编写的程序，程序中的单个字符孤立起来看并没有什么意义，只有结合上下文才有意义，如p->s = "->";两处的-意义
是不同的。一个代表运算符 -> .一个代表字符串“->”

	编译器中负责将程序分解为一个一个符号的部分，一般称为“词法分析器”。

    程序的基本组成单元是“符号”（token） ,相当于自然语言中的单词。 一个符号(token)的意义是不会变的。 而组成符号(token) 的字
符序列则不一样，同一组字符序列在某个上下文环境中属于一个符号，而在另一个上下文环境中可能属于完全不同的另一个符号。

    C语言中，符号(token)之间的空白(空格符，制表符，换行符)将被忽略，符号(token)内是不能有空白的。
*/


// __________________________1.1 = 不同于 ==__________________________
/*	“=” 
	=右边可以为左值/右值。
	=左边 必须为 左值。
	关于左值右值的基础知识详情见 C-Summary:基础概念:(L-value)And(R-value)

	“==”
	==左边/右边 都可以为 左值/右值。

	所以为了防止敲“==”手误成“=”，在进行比较时，把右值都写在左边吧。
	for example:
	if( a == true)
	if( b == 20)
	if( c == '\t')

	改为：
	if( true  ==  a )
	if( 20	  ==  b )
	if( '\t'  ==  c )

	题外话：
	如果被  问起为何这样写，理由如下：
	“=”与“==”的左边和右边 对 左值和右值要求不一样，。
*/

// __________________________1.2 & 和 | 不同于 && 和 ||__________________________

// __________________________1.3 词法分析中的"贪心法"__________________________

	
/*	【字符 与 符号的构成：“符号”（token）是由一个个的字符构成】

	K&&R的解释"如果编译器的 输入流 截止至 某个字符之前 都已经被分解为一个个符号，
	那么下一个符号将包括从该字符之后可能组成一个符号的最长字符串。"

	for example:
	a---b
	将会被编译器当成如下样式：
	(a--)-b

	同样要注意的是：除了字符串与字符常量，符号的中间不能嵌有空白（空格符，制表符和换行符）。
	比如 == 是1个符号， = = 是2个符号。
	for example:
	a - -- b  
	等价于：
	a - (--b)
*/

// __________________________1.4 整型常量__________________________

// __________________________1.5 字符与字符串__________________________
/*
	用单引号引起的一个字符实际上代表一个整数，整数值对应于该字符在编译器采用的字符集中的序列值。因此采用ASCII字符集的编译器而言，
	'a'的含义与 97 严格一致。

	用双引号引起的字符串，代表的却是一个指向无名数组起始字符的指针，
	该数组被双引号之间的字符以及一个额外的二进制值为零的字符'\0'初始化
*/



void chapter01::charAndString( void )
{
	printf("Hello world\n");
	
	// 上面这个语句与下面这语句是等效的。
	char hello[] = {'H','e','e','l','l','o',' ','w','o','r','l','d','\n',0};
	printf(hello);
}


// 练习题1-3
void chapter01::exercise13( void )
{
	int n = 10;
	n-->0;
	// 为什么上面这行代码的 意思是： n-- >0  而不是 n- -> 0  ?
	// 答：参见 1.3 词法分析中的 贪心法。
}

// 练习题1-4
void chapter01::exercise14( void )
{
	// 关于 ++
	int a = 1;
	int b = 2;

	//int c = a+++++b;		// a+++++b 的含义是什么？
	// ((a++)++) + b; 
	/* 上面这代码编译会报错，因为 a++ 返回的 是右值，但是++需要左值 
	*/
}

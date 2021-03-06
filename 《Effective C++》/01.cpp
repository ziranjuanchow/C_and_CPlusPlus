

// 条款01：视C++为一个语言联邦 ______  View C++ as a federation of languages


/*
	
*/	

今天的 C++ 已经是个多重泛型编程语言，
一个同时支持【过程】形式，【面向对象】形式，【函数式编程】，【泛型】形式，【元编程】形式的语言。

我们该如何理解这样一个语言呢？

最简单的方法是将 C++ 视为一个 由相关语言组成的联邦而非单一语言。
在其某个次语言中，各种守则与通例都倾向简单，直观易懂，并且容易记住。
然而当你从一个次语言移往另一个次语言，守则可能改变。
为了理解C++,你必须认识其主要的次语言。幸运的是总共只有四个：

01 ______ C ______
区块，语句，预处理器，内置数据类型，数组，指针，等统统来自C。
当你把C++当C使用时，高效编程守则 映照出 C语言的局限：没有模板，没有异常，没有重载


02 ______ Object-Oriented C++ ______
classes,封装，继承，多态，virtual函数，


03 ______ Template C++ ______
这是 泛型编程 的一部分，也是大多数程序员经验最少的部分。
带来崭新的编程泛型，也就是所谓的 template metaprogramming(TMP,模板元编程)


04 ______ STL ______
STL 是个 template 程序库，它对容器，迭代器，算法以及函数对象的规约有极佳的紧密配合与协调。


/*
	因此我们说：C++并不是一个带有一组守则的一体语言；它是从四个次语言组成的联邦政府，
	每个次语言都有自己的规约。记住这四个次语言 你就会发现C++容易了解得多。
*/

// C++ 高效编程守则 视状况而变化，取决于你使用C++ 的哪一部分。




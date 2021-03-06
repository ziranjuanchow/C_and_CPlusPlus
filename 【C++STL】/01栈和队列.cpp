﻿
//#include "Chapter01.h"
//#include "stdafx.h"


// 使用标准库的栈和队列时，先包含相关的头文件
#include<stack>
#include<queue>

// 定义栈如下：
stack<int> stk; 

// 定义队列如下：
queue<int> q;

// 栈提供了如下的操作
s.empty()               // 如果栈为空返回true，否则返回false
s.size()                // 返回栈中元素的个数
s.pop()                 // 删除栈顶元素但不返回其值
s.top()                 // 返回栈顶的元素，但不删除该元素
s.push()                // 在栈顶压入新元素

// 清空栈：
stack<TreeNode *> stk;
stk = stack<TreeNode *>(); 
// 给他赋值成stack<你的stack类型>()，这样就空了


// 队列提供了下面的操作
q.empty()               // 如果队列为空返回true，否则返回false
q.size()                // 返回队列中元素的个数
q.pop()                 // 删除队列首元素但不返回其值
q.front()               // 返回队首元素的值，但不删除该元素
q.push()                // 在队尾压入新元素
q.back()                // 返回队列尾元素的值，但不删除该元素
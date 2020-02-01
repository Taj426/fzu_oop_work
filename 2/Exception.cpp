#include "main.h"

void Exception(int types) {
	if (types == 1)
		puts("请正确输入指令");
	else if (types == 2)
		puts("请勿重复定义相同的变量名");
	else if (types == 3)
		puts("请输入正确的数字");
	else if (types == 4)
		puts("这玩意还没被定义过");
	else if (types == 5)
		puts("请不要用关键词作为变量名");
	else if (types == 6) 
		puts("相加的数字过大");
	else if (types == 7)
		puts("相减的数字过大");
}
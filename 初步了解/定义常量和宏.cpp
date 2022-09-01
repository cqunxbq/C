#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

    // #define 定义常量和宏 ：
    //define定义标识符常量
        #define MAX 1000
	//define定义宏
        #define ADD(x, y) ((x)+(y))
#include <stdio.h>

int main()
{

		int sum = ADD(2, 3);
		printf("sum = %d\n", sum);

		sum = 10 * ADD(2, 3);
		printf("sum = %d\n", sum);

		return 0;
	

	return 0;
}
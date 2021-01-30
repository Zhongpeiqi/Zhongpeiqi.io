
#include<stdio.h>
int main()
{
	int  a[3][3];
	int flag = 0, x = 0;
	int max = 0, p = 0;
	
	int(*pa)[3] = a;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("请输入数据：\n");
			scanf_s("%d", &*(*(pa + i) + j));
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++) {
			printf("%d\t", a[i][j]);
		}
		printf("\n");
	}
	for (int i = 0; i < 3; i++)//外层循环循环次数为列数
	{
		for (int j = 0; j < 3; j++)//寻找一行中最大的数位置记录为x，x即为列数
		{
			if (*(*(pa + i) + j) > max)
			{
				max = *(*(pa + i) + j);
				x = j;
			}
		}
		for (int j = 0; j < 3; j++)//判断最大的数，所在的列是否存在比他小的数
		{
			if (max > *(*(pa + j) + x))//如果存在则设flag=1
			{
				flag = 1;
			}
		}
		if (flag == 0)//如果flag不等于1则说明这是鞍点并将exist设为1
		{
			printf("鞍点是%d", max);
			p = 1;
		}
		
	}
	if (p == 0)//如果没有输出则说明不存在鞍点
	{
		printf("鞍点不存在");
	}
	return 0;
}



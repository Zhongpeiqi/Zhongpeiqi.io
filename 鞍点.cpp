
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
			printf("���������ݣ�\n");
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
	for (int i = 0; i < 3; i++)//���ѭ��ѭ������Ϊ����
	{
		for (int j = 0; j < 3; j++)//Ѱ��һ����������λ�ü�¼Ϊx��x��Ϊ����
		{
			if (*(*(pa + i) + j) > max)
			{
				max = *(*(pa + i) + j);
				x = j;
			}
		}
		for (int j = 0; j < 3; j++)//�ж������������ڵ����Ƿ���ڱ���С����
		{
			if (max > *(*(pa + j) + x))//�����������flag=1
			{
				flag = 1;
			}
		}
		if (flag == 0)//���flag������1��˵�����ǰ��㲢��exist��Ϊ1
		{
			printf("������%d", max);
			p = 1;
		}
		
	}
	if (p == 0)//���û�������˵�������ڰ���
	{
		printf("���㲻����");
	}
	return 0;
}



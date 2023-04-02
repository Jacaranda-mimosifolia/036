#include<stdio.h>
int main()
{
	int i=0;
	static int a[5];
	do{
		printf("a[%d]=%d\n",i,a[i]);
		i++;
	}while(i<=5);
//	static 静态的；对static数组元素不赋初值，系统会自动赋以0值。

	i=0;
	int b[5];
	do{
		printf("b[%d]=%d\n",i,b[i]);
		i++;
	}while(i<=5);
//	数组不初始化，其元素值为随机数。
	
	i=0;
	int c[5]={0,1,2,3,4};
	do{
		printf("c[%d]=%d\n",i,c[i]);
		i++;
	}while(i<=5);
//	给全部数组元素赋初值

	i=0;
	int d[5]={0,1,2};
	do{
		printf("d[%d]=%d\n",i,d[i]);
		i++;
	}while(i<=5);
//	给部分数组元素赋初值


}


#include<stdio.h>
int main()
{
	int i=0;
	static int a[5];
	do{
		printf("a[%d]=%d\n",i,a[i]);
		i++;
	}while(i<=5);
//	static ��̬�ģ���static����Ԫ�ز�����ֵ��ϵͳ���Զ�����0ֵ��

	i=0;
	int b[5];
	do{
		printf("b[%d]=%d\n",i,b[i]);
		i++;
	}while(i<=5);
//	���鲻��ʼ������Ԫ��ֵΪ�������
	
	i=0;
	int c[5]={0,1,2,3,4};
	do{
		printf("c[%d]=%d\n",i,c[i]);
		i++;
	}while(i<=5);
//	��ȫ������Ԫ�ظ���ֵ

	i=0;
	int d[5]={0,1,2};
	do{
		printf("d[%d]=%d\n",i,d[i]);
		i++;
	}while(i<=5);
//	����������Ԫ�ظ���ֵ


}


#include<stdio.h>




//什么时候递归调用
//1.找到计算的规律性，比如递增加法，阶乘等等



////函数的递归——函数自己调用自己
////递归的思想
////用阶乘举例
//int fac(int n)
//{
//	int i=0;
//	int sum=1;
//	for(i=1;i<=n;i++)
//	{
//		sum=sum*i;
//	}
//	return sum;	
//}
//
////用递归方法实现阶乘//先思考，想不通了再返回来找解释教材
//int multi(int n)
//{
//	if(n<1)
//		return -1;
//	else if(n==1)
//		return 1;
//	else
//	return n*multi(n-1);
//	
//}










//结构体数组
//先定义结构体，再定义结构体数组
//STU class3[3]
//STU={{..},{..},{..}};类比二维数组的初始化



////typedef,给已经有的类型取一个别名
////理解什么叫做类型——变量名字去掉就是类型
////typedef int p；分号不能省略！！！！！！
//typedef struct student
// {
//	 int num;
//	 int score;
//	 float avg;
// }STU;//STU为结构体别名，原来的名字仍然可以用





///*结构体是一类型，是可以由我们自己定义的数据类型
// 是一种复合数据类型，是一组相同或不同类型数据的集合
// 对比数组，数组是相同数据类型的集合
//
// */
//struct student
// {
//	 int num;
//	 int score;
//	 float avg;
// }A,B;//定义结构体的同时，定义了两个结构体变量
//struct student
// {
//	 int num;
//	 int score;
//	 float avg;//也可以用数组作为元素
// };//关键字struct和名字，{成员列表}，分号；
////YU.num访问结构体变量
////P->num访问结构体指针
////结构体类型定义中不可以赋初值，你不可能给int 赋初值，你应该对变量赋初值
////
//int main()
//{
//	struct student	YU;//结构体变量
//	struct student	YU={10,10,10.0};//对结构体变量的初始化，类比一维数组，只不过数据类型可以互不相同
//	YU.num=10;//另一种赋值方法
//	struct student  class4[50];//结构体数组，把每个学生当作独立整体
//	return 0;
//}














//定义二维数组输出所有元素的函数
//#define M 3
//#define N 4
//
//void printarr(int a[][N],int r, int c)
//{
//	int i,j;
//	for(i=0;i<r;i++)
//	{
//		for(j=0;j<c;j++)
//		{
//			printf("%d\t",a[i][j]);
//		}
//		printf("\n");
//
//	}
//
//}



//二维数组遍历
//#define M 3
//#define N 4
//int main()
//{
//	int i,j,max;
//	int row=0;
//	int colume=0;
//	int a[M][N]={{1,2,4,5},{3,4,5,6},{10,9,8,7}};
//	max=a[0][0];
//	for(i=0;i<M;i++)
//	{
//		for(j=0;j<N;j++)
//		{
//			if(max<a[i][j])
//			{
//				max=a[i][j];
//				row=i;
//				colume=j;
//			}
//		}
//	}
//	printf("max=%d,raw=%d,colum=%d\n",max,row,colume);
//	return 0;
//}
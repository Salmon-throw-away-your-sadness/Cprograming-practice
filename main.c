#include<stdio.h>




//ʲôʱ��ݹ����
//1.�ҵ�����Ĺ����ԣ���������ӷ����׳˵ȵ�



////�����ĵݹ顪�������Լ������Լ�
////�ݹ��˼��
////�ý׳˾���
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
////�õݹ鷽��ʵ�ֽ׳�//��˼�����벻ͨ���ٷ������ҽ��ͽ̲�
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










//�ṹ������
//�ȶ���ṹ�壬�ٶ���ṹ������
//STU class3[3]
//STU={{..},{..},{..}};��ȶ�ά����ĳ�ʼ��



////typedef,���Ѿ��е�����ȡһ������
////���ʲô�������͡�����������ȥ����������
////typedef int p���ֺŲ���ʡ�ԣ�����������
//typedef struct student
// {
//	 int num;
//	 int score;
//	 float avg;
// }STU;//STUΪ�ṹ�������ԭ����������Ȼ������





///*�ṹ����һ���ͣ��ǿ����������Լ��������������
// ��һ�ָ����������ͣ���һ����ͬ��ͬ�������ݵļ���
// �Ա����飬��������ͬ�������͵ļ���
//
// */
//struct student
// {
//	 int num;
//	 int score;
//	 float avg;
// }A,B;//����ṹ���ͬʱ�������������ṹ�����
//struct student
// {
//	 int num;
//	 int score;
//	 float avg;//Ҳ������������ΪԪ��
// };//�ؼ���struct�����֣�{��Ա�б�}���ֺţ�
////YU.num���ʽṹ�����
////P->num���ʽṹ��ָ��
////�ṹ�����Ͷ����в����Ը���ֵ���㲻���ܸ�int ����ֵ����Ӧ�öԱ�������ֵ
////
//int main()
//{
//	struct student	YU;//�ṹ�����
//	struct student	YU={10,10,10.0};//�Խṹ������ĳ�ʼ�������һά���飬ֻ�����������Ϳ��Ի�����ͬ
//	YU.num=10;//��һ�ָ�ֵ����
//	struct student  class4[50];//�ṹ�����飬��ÿ��ѧ��������������
//	return 0;
//}














//�����ά�����������Ԫ�صĺ���
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



//��ά�������
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
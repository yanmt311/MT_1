#define _CRT_SECURE_NO_WARNINGS 1

// ����һ������
//ʵ�ֺ���init������ʼ������
//ʵ��empty�����������
//ʵ��reverse���������������Ԫ�ص����� //���ò��ǵ��Ŵ�ӡ
//Ҫ���Լ���ƺ����Ĳ���������ֵ

//�������
//
//#include <stdio.h>

//void init (int arr[], int set)
//{
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//szʼ�յ���1
//	//�����ڲ��������������Ԫ�صĸ�����Զ�󲻵�
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//int main()
//{
//	int arr[10] = {3,5,7,9,11,2,4,6,8,10};
//	init(arr, 1)//û�д�Ԫ�ظ���
//	
//	return 0;
//
//}



//
////����
//#include <stdio.h>
//
////�滻
//void Init (int arr[], int sz,int set)
//{
//	int i = 0;
//
//	/*int arr2[] = {1,1,1,11,1,1,11,1};
//	int sz = sizeof(arr2)/sizeof(arr2[0]);*/ 
//	//�����������arr2����Ԫ�ظ�������������arr
//
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = set;
//	}
//}
//
//
////��� 
//void Empty(int arr[],int sz)
//{
//	int i = 0;
//	for(i=0; i<sz; i++)
//	{
//		arr[i] = 0;
//	}
//}

//����
//����ʱ��Ҫ�������Ľ���

void reverse(int arr[], int sz)
{
	int left = 0;
	int right = sz-1;
	while (left<right)
	//left=right ʱ���������м�������佻��û����
	{
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;

		left++;
		right--;
	}
}

//��ӡ
void print(int arr[], int sz)//void print(int *arr, int sz)
{
	int i = 0;
	for(i=0; i<sz; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}


int main()
{
	//int arr[10] = {11,3,5,7,9,2,4,6,8,0};//ż��ʱ
	int arr[] = {11,3,5,7,9,2,4,6,8,0,1};//����ʱ
	int sz = sizeof(arr)/sizeof(arr[0]);//Ԫ�ظ���
	//Init(arr,sz,1);//1����ֵ
	//print(arr,sz);

	//Empty(arr, sz);//����0
	//print(arr,sz);

	//1 2 3 4 5 6 7 8 9 10
	reverse(arr, sz);
	//����Ԫ�ص��������������Ϊ10��1��������һ�����һ������;�м�û��Ԫ�ؽ�����ֹ
	print(arr,sz);

	return 0;

}




#define _CRT_SECURE_NO_WARNINGS 1

//�жϻ����Ǵ�� ���� С��  
//ָ�����͵�Ӧ�� 

//����1��
int main()
{
	int a = 1;
	//&a -- Ϊint*
	//ǿ������ת�� -- char*
	//��������

	if (*(char*)&a == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
}

//����2��
//������ʽ
int check_sys(){
	int a = 1;
	//����1 С�ˣ�����0 ���
	return *(char*)&a;
	//if (*(char*)&a == 1)
	//	return 1;//С��
	//else
	//	return 0;//���
}

int main(){

	int ret = check_sys();
	if (ret == 1){
		printf("С��\n");
	}
	else{
		printf("���\n");
	}
}

//����3��


////֤�����������Ϊint [10]
//int main()
//{
//	int a = 0;
//	int arr[10] = { 0 };
//	printf("%d\n", sizeof(a));
//	printf("%d\n", sizeof(int));
//
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof(int [10]));
//
//}


//int main()
//{
//	char c;//1
//	signed char c;
//	unsigned char c;
//
//	short a;//2
//	unsigned short a;
//	signed short a;
//}
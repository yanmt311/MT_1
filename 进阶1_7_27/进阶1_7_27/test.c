#define _CRT_SECURE_NO_WARNINGS 1

//判断机器是大端 还是 小端  
//指针类型的应用 

//方法1：
int main()
{
	int a = 1;
	//&a -- 为int*
	//强制类型转换 -- char*
	//最后解引用

	if (*(char*)&a == 1)
	{
		printf("小端\n");
	}
	else
	{
		printf("大端\n");
	}
}

//方法2：
//函数形式
int check_sys(){
	int a = 1;
	//返回1 小端；返回0 大端
	return *(char*)&a;
	//if (*(char*)&a == 1)
	//	return 1;//小端
	//else
	//	return 0;//大端
}

int main(){

	int ret = check_sys();
	if (ret == 1){
		printf("小端\n");
	}
	else{
		printf("大端\n");
	}
}

//方法3：


////证明数组的类型为int [10]
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
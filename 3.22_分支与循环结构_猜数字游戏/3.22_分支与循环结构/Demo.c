#define _CRT_SECURE_NO_WARNINGS 1
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
//��������Ϸ
//  1������do...while��switch...case...default,������Ϸ�߼���ѡ��
//  2�����в�������Ϸ�����Ĵ����ı�д  srand--rand---time����ȷʹ��

//����do...while��switch...case...default,������Ϸ�߼���ѡ��
//void menu()
//{
//	printf("******************\n");
//	printf("**1 play,0 exit***\n");
//	printf("******************\n");
//}
//int main()
//{
//	int input = 0;
//	//������Ϸ������룬�϶�Ҫִ��һ�Σ�����ѡ�� do...while����ѭ��
//	do
//	{
//		menu();//��ӡ�˵�---����menu����
//		printf("��ѡ��һ������");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			printf("������\n");
//			break;
//		case 0:
//			printf("�˳���Ϸ\n");
//			break;
//		default:
//			printf("ѡ���������ѡ��\n");
//			break;
//		}
//	} while (input);
//
//	return 0;
//}

//���в�������Ϸ�����Ĵ����ı�д
//   1����������һ�������
//   2��������
//   3��rand���������ʱ����ͷ�ļ�#include <stdlib.h>
//   4��srand���������ʱ����ͷ�ļ�#include <stdlib.h>
//   5��time�������������ʱ����ͷ�ļ�#include <time.h>
void menu()
{
	printf("******************\n");
	printf("**1 play,0 exit***\n");
	printf("******************\n");
}

void game()
{
	//�޸�1�� ʹ��rand�����������������
	//       �������ɵ��������ÿ��������ȵġ�����ÿ��ͨ��û���κ�����
	//       rand��������һ����0��RAND_MAX��Χ�ڵ�α����������ڵ���rand֮ǰ��ʹ��srand����������α�������������
	//       RAND_MAX-- - #define RAND_MAX 0x7fff---32767

	//int ret = rand();
	//printf("%d\n", ret);

	//�޸�2����rand����ǰ����srand---void srand( unsigned int seed );
	//      ������һ����Ϸ������ȵ�
	//      �뷨�ǣ�srand���������
	//      srand( (unsigned)time( NULL ) );

	//srand(100);
	//int ret = rand();
	//printf("%d\n", ret);

	//�޸�3������time��������ȷʹ��srand��������
	//      time��������---����һ��ʱ���---ʱ�����������ڵ���time����ʱ����������ʼʱ�䣨1970.1.1 0��0��0��֮���һ����ֵ����λΪ��
	//      time_t time(time_t* timer); -- - typedef __time64_t time_t; ----typedef __int64 __time64_t;---��ʵ��������

	//srand((unsigned int)time(NULL));//NULL--��ָ��
	//int ret = rand();
	//printf("%d\n", ret);

	//�޸�4��ע��srandֻҪ����һ��-����Ƶ���ĵ���---��������������ֵ---���Է��õ�λ����main������
	int guess = 0;
	int ret = rand()%100+1;//rand�ķ�ΧΪ0-32767������100ȡ�࣬���Ϊ0-99��+1��Ϊ1-100
	//printf("%d\n", ret);//Ϊ�˸��õĲ�������Ϸ�ļ��������ܿ������Ը��������
	while (1)
	{
		printf("�������:\n");
		scanf("%d", &guess);
		if (ret < guess)
		{
			printf("�´���");
		}
		else if (ret > guess)
		{
			printf("��С��");
		}
		else
		{
			printf("�¶���");
			break;//����ȷ������ѭ��---����һֱ��
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//NULL--��ָ��
	//������Ϸ������룬�϶�Ҫִ��һ�Σ�����ѡ�� do...while����ѭ��
	do
	{
		menu();//��ӡ�˵�---����menu����
		printf("��ѡ��һ������");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ���������ѡ��\n");
			break;
		}
	} while (input);

	return 0;
}


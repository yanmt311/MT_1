
#include <stdio.h>

int main(){
	/*
	//����һ���ַ�
	char ch = getchar();//��ȡһ���ַ�
	ch = ch + 32;       //��д+32 = Сд
	putchar(ch);
	*/

	char ch = 0;
	//EOF �� -1 ������ֹ��
	while ((ch = getchar()) != EOF){

		putchar(ch+32);
		//printf("\n");
		//����ֱ����printf
		//printf("%c\n", ch + 32);
		//getchar();        //�������ݻ������е�'\n'

	}

	return 0;
}

#include <stdio.h>

int main(){
	/*
	//处理一个字符
	char ch = getchar();//获取一个字符
	ch = ch + 32;       //大写+32 = 小写
	putchar(ch);
	*/

	char ch = 0;
	//EOF 是 -1 代表终止符
	while ((ch = getchar()) != EOF){

		putchar(ch+32);
		//printf("\n");
		//或者直接用printf
		//printf("%c\n", ch + 32);
		//getchar();        //清理数据缓冲区中的'\n'

	}

	return 0;
}
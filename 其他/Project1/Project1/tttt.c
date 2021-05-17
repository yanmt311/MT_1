#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(){
	int n = 0;
	while (scanf("%d", &n) != EOF){

		//----------------------------------上 n行

		int i = 0;
		//确定行数
		for (i = 0; i<n; i++){

			//打印*+空格
			int j = 0;
			for (j = 0; j<n + 1 - i; j++){
				printf("* ");//*+空格
			}

			//打印空格
			for (j = 0; j<i; j++){
				printf(" ");//一个空格
			}
			//一行打印完后换行
			printf("\n");

		}


		//---------------------------------下 n+1行
		//确定行数
		for (i = 0; i<n + 1; i++){
			int j = 0;
			//打印*+空格
			for (j = 0; j <= i; j++){
				printf("* ");//*+空格
			}

			//打印空格
			for (j = 0; j<i; j++){
				printf(" ");//一个空格
			}

			//一行打印完后换行
			printf("\n");

		}
	}
	return 0;
}
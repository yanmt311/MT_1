#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
int main(){
	int n = 0;
	while (scanf("%d", &n) != EOF){

		//----------------------------------�� n��

		int i = 0;
		//ȷ������
		for (i = 0; i<n; i++){

			//��ӡ*+�ո�
			int j = 0;
			for (j = 0; j<n + 1 - i; j++){
				printf("* ");//*+�ո�
			}

			//��ӡ�ո�
			for (j = 0; j<i; j++){
				printf(" ");//һ���ո�
			}
			//һ�д�ӡ�����
			printf("\n");

		}


		//---------------------------------�� n+1��
		//ȷ������
		for (i = 0; i<n + 1; i++){
			int j = 0;
			//��ӡ*+�ո�
			for (j = 0; j <= i; j++){
				printf("* ");//*+�ո�
			}

			//��ӡ�ո�
			for (j = 0; j<i; j++){
				printf(" ");//һ���ո�
			}

			//һ�д�ӡ�����
			printf("\n");

		}
	}
	return 0;
}
//��������
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//���������׵ĸ���
#define SetMine_Count 10

//������ʼ������
void InitBoard(char board[ROWS][COLS], int rows, int cols, int set);//��ά���鴫����Ҫ���к��еĲ������д���,������������Ҫ��;

//������ӡ���̺���
void DisplayBoard(char board[ROWS][COLS], int row, int col);//int board[ROWS][COLS]---��Ӧ��Ӧ��ά����--���У����޹�---����mine��show  11*11������

//���������׵ĺ���
void SetMine(char mine[ROWS][COLS], int row, int col);

//�����Ų��׵ĺ���
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
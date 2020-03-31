//声明函数
#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

//声明布置雷的个数
#define SetMine_Count 10

//声明初始化函数
void InitBoard(char board[ROWS][COLS], int rows, int cols, int set);//二维数组传参需要将行和列的参数进行传递,并且声明后需要有;

//声明打印棋盘函数
void DisplayBoard(char board[ROWS][COLS], int row, int col);//int board[ROWS][COLS]---对应相应二维数组--与行，列无关---还是mine，show  11*11的数组

//声明布置雷的函数
void SetMine(char mine[ROWS][COLS], int row, int col);

//声明排查雷的函数
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void swap(int *,int *); //swap関数のプロトタイプ宣言

int main(void)
{
    int x,y;
    x=5;
    y=3;
    swap(&x,&y);
    printf("x=%d\ty=%d\n",x,y); //印字
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

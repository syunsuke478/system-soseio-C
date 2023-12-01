#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAXSTR 256

int main()
{
    int j=0,a=0,b=0;
    char str[MAXSTR];
    printf("Prease Enter Password:")
    if((fgets(str,256,stdin))!=NULL){
        str[strlen(str)-1]=0;
    }
    
    if((strlen(str)<8)||(16<strlen(str)))
    printf("8文字以上16字以下に設定して下さい\n");
    
    for(int i=0;i<strlen(str);i++)
    {
        if(isalpha(st5r[i])!=0)
        j+=0;
        else
        j+=1;
    }
    if(j==0)
    printf("その他の文字を含んでください\n");
    for(int s=0;s<strlen(str);s++)
    {
        if('A'<=str[s]<='Z')
            a+=1;
        else
            a+=0;
    }
    printf("%d\n",a);
    if(a==0)
    {
        printf("大文字を含んでください\n");
    }
    for(int t=0;t<strlen(str);t++)
    {
        if('a'<=str[t]<='z')
            b+=1;
        else
            b+=0;
    }
    printf("%d",b);
    if(b==0)
    {
        printf("小文字を含んでください\n");
    }
    if(a>1&&b>=1&&j>=1&&8<=strlen(str<=16))
    printf("パスワードを設定しました.");
    return 0;
}

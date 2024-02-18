#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main(int argc, char **argv){
    int n=1;
    // scanf("%d",&n);
    while (n--)
    {
        char ar[100000];
        scanf("%s",&ar);
        char s[10000];
        int a=-1;
        for (int i = 0; ar[i]!='\0'; i++)
        {
            if(a==-1)
                s[++a]=ar[i];
            else if((s[a]=='B'&& ar[i]=='B')||(s[a]=='A'&& ar[i]=='B'))
                s[a--]='\0';
            else
                s[++a]=ar[i];

        }
        printf("%d",a);
        printf("%s",s);
    }
    





    return 0;
}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int max(int x, int y){
    if(x > y){
        return x;
    }else{
        return y;
    }
}
int main(){
    int n1=1;
    // scanf("%d",&n);
    while (n1--)
    {
        int n;
        scanf("%d",&n);
        int ar[n];
        for (int i = 0; i < n; i++)
             scanf("%d",&ar[i]);
        int res=0,l=0,r=0;
        while (r+1<n)
        {
            res++;
            int temp=0;
            for (int i = l; i < r+1; i++)
            {
                temp=max(temp,i+ar[i]);
            }
            l=r+1;
            r=temp;
            if(res==n+1){res=-1; break;}
        }
        printf("%d\n",res);
    
        
    }
    





    return 0;
}
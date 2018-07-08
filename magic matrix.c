//
//  magic matrix.c
//  0
//
//  Created by 优昙 on 2018/4/7.
//  Copyright © 2018年 miao. All rights reserved.
//


#include <stdio.h>
int a[50][50]={0},n;
void magic()
{
    int i=0,k=n/2,t;
    a[i][k]=1;
    for(t=2;t<=n*n;t++)
    {
        
            if(i==0&&k==n-1)
                i+=1;
            else
            {
                i-=1;
                k+=1;
            }
            if(i==-1)
                i=n-1;
            if(k==n)
                k=0;
            
        if(a[i][k]!=0)
        {
            i+=2;
            k-=1;
        }
        a[i][k]=t;
    }
       
}

int main(void)
{
    
        scanf("%d",&n);
        magic();
    int i,k;
    for(i=0;i<n;i++)
    {
        for(k=0;k<n;k++)
        {
            
            if(k==n-1) {printf("%d\n",a[i][k]);
                continue;}
            printf("%d ",a[i][k]);
        }
    }
    

}



//
//  Display.cpp
//  0
//
//  Created by 优昙 on 2018/5/14.
//  Copyright © 2018年 miao. All rights reserved.
//

#include "BookType.h"
#include <stdio.h>
int Display(Bookinfo dictList[],int n)
{
    
    int i;
    while (1)
    {
        
        int k=0,s=n/10+1;
    
        for(i=0;k+i<n&&i<10;i++) //显示部分
    {
        printf("%d:\nISBN:%s\nname:%s\nauthor:%s\nedition:%d\npress:%s\nyear:%d\n\n\n",i+1,dictList[i].ISBN,dictList[i].book,dictList[i].author,dictList[i].edition,dictList[i].press,dictList[i].year);
    }
        printf("Page %d of %d\n",k+1,s);
        printf("---------------------------------------\n");
        int a,is=0;  //以下为控制部分
        while (is==0)
        {
             printf("Input 2 to next page\t1 to before page\t0 to exit:");
            scanf("%d",&a);
            if(a==1||a==2||a==0)
            {
                if(a==1&&k==0)
                {
                    printf("This is the first page!\n");
                    continue;
                }
                if(a==2&&k==s)
                {
                    printf("This is the last page!\n");
                    continue;
                    
                }
                is=1;
            }
            else
            {
                printf("Command not found\n");
                continue;
            }
        switch (a)   //换页
        {
            case 2:
                k++;
                break;
            case 1:
                k--;
                break;
            case 0:
                return 0;
            default:
                printf("Command not found\n");
                break;
        }
        
    }

    }
}
    

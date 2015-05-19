#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n,t,min;
    int i = 0;
    scanf("%d",&n);
    scanf("%d",&t);
    
    int width[n];
    for(i=0;i<n;i++)
        {
        scanf("%d",&width[i]);
    }
   /*for(i=0;i<n;i++)
        {
        printf("%d",width[i]);
    }*/
   for(i=0;i<t;i++)
       {
       int etry = 0;
       int ext = 0;
       scanf("%d",&etry);
       scanf("%d",&ext);
       
       int j = 0;
       min = width[etry];
       for(j = etry;j<=ext;j++)
           {     
           if(width[j]<min)
               min=width[j];
       }
       printf("%d\n",min);
   }    
    return 0;
}


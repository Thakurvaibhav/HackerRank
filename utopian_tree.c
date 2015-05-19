/* A UTOPIAN TREE doubles its height every spring and increase by 1 metre during the summer. 
*  Initial height of the planted tree is 1 metre                                        */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t,n;
    int i,j = 0;
    int flag = 0;
    int height = 1;
   // puts("Enter t");
    scanf("%d",&t);
    if(t >= 1 && t <= 10)
    {
       // puts("enter n");
       
        if(n >= 0 && n <= 60)
        {
            for(i = 0 ; i < t ; i++)
            {
                 scanf("%d",&n); 
                flag = 0;
                j = 0;
                
                for(j = 0 ; j < n ; j++)
                {
                    if(flag == 0)
                    {
                        height = height*2; /*Its spring*/
                        flag = 1;
                    }
                    else
                    {
                        height = height + 1; /* Its summer */
                        flag = 0;
                    }
                }printf("%d\n",height);
                height = 1;
            }
        }
    }
    return 0;
}
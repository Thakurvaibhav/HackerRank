#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>
/*
 * Complete the function below.
 */
int maxXor(int l, int r) {
    int res=0;
    int res_cur =0;
    int i,j = 0;
    for(j=l;j<=r;j++)
        {
            for(i=j;i<=r;i++)
            {
                res_cur = j^i;
                if(res_cur>res)
                res = res_cur;
            }
        }
    return res;


}
int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}


#include <stdio.h>

int main(void) {
	// your code goes here
	int T,i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
	    int j,N;
	    scanf("%d",&N);
	    int a[N];
	    for(j=0;j<N;j++)
	    scanf("%d",&a[j]);
	    int max=0,k,c=1;
	    for(j=1;j<N;j++)
	    {
	        int flag=1;
	        for(k=j-1;k>=0;k--)
	        {
	            
	            if(a[k]==a[j])
	            {
	                flag++;
	                
	            }
	            
	            
	        }
	        if(flag%2!=0)
	        c++;
	        else 
	        c--;
	        if(max<c)
	            max=c;
	    }
	    printf("\n%d\n",max);
	}
	return 0;
}



#include <stdio.h>
int main()
{
    int n,f,i,j,k,avail,a[20],frame[10],counter=0;
    printf("enter the no. of pages");
    scanf("%d",&n);
    printf("enter the page no..");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the no. of frames");
    scanf("%d",&f);
    for(i=0;i<f;i++)
    {
        frame[i]=-1;
    }
    j=0;
    printf("\treferstring\t\tpage frame\n");
    for(i=1;i<=n;i++)
    {
        printf("%d",a[i]);
        avail=0;
        for(k=0;k<f;k++)
        {
            if(frame[k]==a[i])
            {
                avail=1;
            }
        }
            if(avail==0)
            {
                frame[j]=a[i];
                j=(j+1)%f;
                counter++;
                for(k=0;k<f;k++)
                {
                    printf("\t%d",frame[k]);
                }
                
                
            }
        
        printf("\n");
    }
    printf("the page faults: %d",counter);
    getchar();
    return 0;
    
}

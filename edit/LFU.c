#include<stdio.h>
int main()
{
    int pn,fn,m,n,page[25],frame[25],arr[25],timee[25],flag,k,hit=0,temp,min_time;
    printf("enter the total no. of pages");
    scanf("%d",&pn);
    printf("enter the totol no. of frames");
    scanf("%d",&fn);
    for(n=0;n<fn;n++)
    {
        frame[n]=-1;  
    }
    for(n=0;n<fn;n++)
    {
        arr[n]=0;
    }
    printf("enter the value of referstring..");
    for(m=0;m<pn;m++)
    {
        printf("enter the value no[%d]",m+1);
        scanf("%d",&page[m]);
    }
    printf("\n");
    
    //**********************************
    
    
    for(m=0;m<pn;m++)
    {
        arr[page[m]]++;
        timee[page[m]]=m;
        flag=1;
        k=frame[0];
       
       //............................................................. 
        for(n=0;n<fn;n++)
        {
            if(frame[n]==-1||frame[n]==page[m])
            {
                if(frame[n]!=-1)
                {
                    hit++;
                }
                flag=0;
                frame[n]=page[m];
                break;
            }
            
            if(arr[k]>arr[frame[n]])
            {
                k=frame[n];
            }
        }
        
        //...................................................................
        
        
        if(flag)
        {
            min_time=25;
            if(arr[k]==arr[frame[n]]&&timee[frame[n]]<min_time)
            {
                temp=n;
                min_time=timee[frame[n]];
            }
            
            arr[frame[temp]]=0;
            frame[temp]=page[m];
        }
        //......................................................................
        
        for(n=0;n<fn;n++)
        {
            printf("%d\t",frame[n]);
        }
        printf("\n");
        
    }
   //************************************************ 
    printf("page hits %d",hit);
    
    return 0;
}

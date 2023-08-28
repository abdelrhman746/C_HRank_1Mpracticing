void miniMaxSum(int arr_count, int* arr) {
    unsigned int i,j;
    unsigned long int min_sum=0,max_sum=0,temp=0;
    for(i=0;i<arr_count;i++)
    {
        for(j=0;j<arr_count;j++)
        {
           if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            } 
        }  
    }
    for(i=1;i<arr_count;i++)
    {
        max_sum=max_sum+arr[i];
    }
    for(i=0;i<arr_count-1;i++)
    {
        min_sum=min_sum+arr[i];
    }
    printf("%ld %ld",min_sum,max_sum);
}

void plusMinus(int arr_count, int* arr) {
    int i ;
    float p=0,n=0,z=0;
    float c=arr_count;
    for(i=0;i<arr_count;i++)
    {
        if(arr[i]>0)
        {
            p++;
        }
        else if(arr[i]<0)
        {
            n++;
        }
        else if(arr[i]==0)
        {
            z++;
        }
    }
    p=(float)p/c;
    n=(float)n/c;
    z=(float)z/c;
    printf(" %f\n %f\n %f\n",p,n,z);
}

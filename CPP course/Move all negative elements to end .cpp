void segregateElements(int arr[],int n)
    {
        int arr2[n];
        int it= 0; 
        for(int i =0 ; i< n; i++)
        {
            if(arr[i] > 0)
            {
                arr2[it] = arr[i];
                it++;
            }
        }
        for(int i =0 ; i< n; i++)
        {
            if(arr[i] < 0)
            {
                arr2[it] = arr[i];
                it++;
            }
        }for(int i =0 ; i< n; i++)
        {
            arr[i] = arr2[i];
        }
    }
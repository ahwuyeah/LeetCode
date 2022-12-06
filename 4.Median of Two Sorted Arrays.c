int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}


double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    
    int arr[nums1Size + nums2Size];
    int max = nums1Size + nums2Size;
    int med = max / 2;
    // printf("med = %d\n", med);
    for(int i = 0; i < max; i++){
        if(i <= (nums1Size - 1)){
            arr[i] = nums1[i];
        }
        else{
            arr[i] = nums2[i - nums1Size];
        }
        // printf("%d, ", arr[i]);
    }
    qsort(arr, max, sizeof(int), cmpfunc);

    // printf("\n");
    double result;
    for(int i = 0; i < max; i++){
    //   printf("%d, ", arr[i]);  
    }
    if(max % 2 == 0)
    {
        result = (double)(arr[med] + arr[med - 1]) / 2;
        // printf("result = %f\n", result);
        
    }
    else{
        result = arr[med];
        
    }
    return result;

}

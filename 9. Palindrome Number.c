#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
bool isPalindrome(int x){
    if (x < 0) return false;
    int tmp = x;
    int *arr = (int *)malloc(32 * sizeof(int));
    int i = 0;
    bool result = 1;
    while(tmp){
        arr[i] = tmp % 10;
        tmp = tmp / 10;
        i += 1;
        printf("arr[%d]=%d\n", i, arr[i-1]);
        
    }
    
    for(int j = 0; j < (i/2); j++){
            if(arr[j] != arr[i - j - 1]){
                result = false;
                
            }
        }
    printf("i = %d\n", i);
    return result;
}

int main(){
    int a = 12;
    bool b;
    b = isPalindrome(a);
    printf("%d\n", b);
}

#include <stdio.h>

void main() {
    int arr[]={5,6,4,1,8,3,7,9};
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i =0; i<length;i++){
        int min_index = i;
         for(int j =i+1; j<length;j++){
             if(arr[j]<arr[min_index]){
                min_index = j;
             }
 
        }
    int num = arr[i];
    arr[i]=arr[min_index];
    arr[min_index] = num;
 
    }
     printf("Array elements:\n");
    for (int i = 0; i < length            ; i++) {
        printf("%d ", arr[i]);
    }

}
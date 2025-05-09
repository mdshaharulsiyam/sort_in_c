#include <stdio.h>

int main() {
    int arr[]={5,6,4,1,8,3,7,9};
    int length = sizeof(arr) / sizeof(arr[0]);
    for(int i =0; i<length - 1;i++){
         for(int j =0; j<length -1-i;j++){
             
            int num = arr[j];
            int num2 = arr[j + 1];
             if(num>num2){
                 arr[j+1]=num;
                 arr[j]=num2;
             }

        }
    }
     printf("Array elements:\n");
    for (int i = 0; i < length            ; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

#include <iostream>

int main() {
    int num;
    scanf("%d", &num);
    
    int smallest, biggest;
    
    int arr[num];
    for (int i = 0; i < num; ++i) {
        scanf("%d", &arr[i]);
        if(i == 0){
            smallest = arr[0];
            biggest = arr[0];
        }else{
            if(arr[i] < smallest)
                smallest = arr[i];
            else if (arr[i] > biggest)
                biggest = arr[i];
        }
    }
    
    printf("%d %d", smallest, biggest);
}
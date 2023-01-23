#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubble_sort(int array[100]);
void selection_sort(int array[100]);

int main(void){
    srand(time(NULL));
    int array[100];
    for(int i = 0;i < 100;i++){
        array[i] = rand();
    }
    bubble_sort(array);
    selection_sort(array);

    return 0;
}

void bubble_sort(int array[100]){
    int temp1;
    for(int i = 1;i < 100;i++){
        for(int j = 100;j >= i;j--){
            if(array[j-1] < array[j]){
                temp1 = array[j-1];
                array[j-1] = array[j];
                array[j] = temp1;
            }
        }

    }
    printf("Via bubble_sort : \n\n");
    for(int i = 0;i < 100; i++){
        printf("Array[%d] : %d\n",i,array[i]);
    }

}

void selection_sort(int array[100]){
    int temp1;
    int min;
    int index;
    for(int i = 0;i < 99;i++){
        min = array[i];
        index = i;
        for(int j = i + 1;j < 100;j++){
            if(array[j] < min){
                index = j;
                min = array[i];
            }
        }
        if(index != i){
            temp1 = array[i];
            array[i] = array[index];
            array[index] = temp1;
        }
    }
    printf("\nVia selcetion sort :\n\n");
    for(int i = 0; i < 100; i++){
        printf("Array[%d] : %d\n",i,array[i]);
    }


}
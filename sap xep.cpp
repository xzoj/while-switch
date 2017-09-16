#include <stdio.h>
main(){
//Input array
    int n, array[100];
    printf("Nhap so luong phan tu cho mang: ");
    scanf("%i", &n);
    printf("\nNhap gia tri cua mang: \n");
    for (int i = 0; i < n; ++i) {
        printf("a[%i] =", i + 1);
        scanf("%i", &array[i]);
    }
    printf("Mang ban da nhap la: \n");
    for (int j = 0; j <n; j++) {
        printf("%i  ",array[j]);
    }

// bubbleSort

    for (int i = 0; i <n-1; ++i) {
        for (int j = n-1; j > i ; j--) {
            if(array[j] < array[j-1]){
                int tg = array[j];
                array[j]= array[j-1];
                array[j-1]=tg;
            }
        }
    }
    printf("\nBubbleSort: Min -> Max\n");
    for (int k = 0; k <n; ++k) {
        printf("%i  ", array[k]);
    }


// insertionSort

    for (int i = 0; i <n-2; ++i) {
        for (int j = n-1; j >i; j--) {
            if (array[i] < array[j]) {
                int tg = array[i];
                array[i] = array[j];
                array[j] = tg;
            }
        }
}
    printf("\nInsertionSort: Max -> Min\n");
    for (int k = 0; k <n; ++k) {
        printf("%i  ", array[k]);
    }
}

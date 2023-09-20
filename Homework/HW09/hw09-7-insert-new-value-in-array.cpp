/*
    จากอาเรย์เดิม ที่มีค่าอยู่ก่อนแล้วคือ { 9, 2, 6, 1, 7 } จงเขียนโปรแกรมเพื่อรับค่าจากผู้ใช้อีก N จำนวน เพื่อนำไปต่อในอาเรย์เดิม และจัดเรียงใหม่จากน้อยไปยังมาก
    
    Test case:
        Enter new element of Array :
            4
        Input :
            3
        Input :
            4
        Input :
            2
        Input :
            5
    Output:
        Old Array: 9 2 6 1 7
        New Array: 1 2 2 3 4 4 5 6 7 9
*/
#include <stdio.h>

int main() {
    int arr[] = {9, 2, 6, 1, 7};
    int N;

    printf("Old Array: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Enter new element of Array: ");
    scanf("%d", &N);

    int newArray[5 + N];

    for (int i = 0; i < 5; i++) {
        newArray[i] = arr[i];
    }

    for (int i = 5; i < 5 + N; i++) {
        printf("Input: ");
        scanf("%d", &newArray[i]);
    }

    for (int i = 0; i < 5 + N - 1; i++) {
        for (int j = 0; j < 5 + N - i - 1; j++) {
            if (newArray[j] > newArray[j + 1]) {
                int temp = newArray[j];
                newArray[j] = newArray[j + 1];
                newArray[j + 1] = temp;
            }
        }
    }

    printf("New Array: ");
    for (int i = 0; i < 5 + N; i++) {
        printf("%d ", newArray[i]);
    }
    printf("\n");

    return 0;
}


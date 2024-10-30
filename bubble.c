/*
バブルソート
*/
#include <stdio.h>

#define ARRAY_SIZE 5
#define UP 1
#define DOWN 2

    // バブルソート（昇順）
void UpBubbleSort(int *array) {
    for (int i = 0; i < ARRAY_SIZE-1; i++) {
        for (int j = ARRAY_SIZE-1; j > i; j--) {
            if (array[j] < array[j-1]) {
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
}

    // バブルソート（降順）
void DownBubbleSort(int *array) {
    for (int i = 0; i < ARRAY_SIZE-1; i++) {
        for (int j = 1; j < ARRAY_SIZE; j++) {
            if (array[j] > array[j-1]) {
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }
        }
    }
}


//     // バブルソート改良版その1（昇順）   交換回数に着目
// void UpBubbleSort(int *array) {
//     int exchg = 0;  /*交換回数*/
//     for (int i = 0; i < ARRAY_SIZE-1; i++) {
//         for (int j = ARRAY_SIZE-1; j > i; j--) {
//             if (array[j] < array[j-1]) {
//                 int temp = array[j];
//                 array[j] = array[j-1];
//                 array[j-1] = temp;
//                 exchg++;
//             }
//         }
//         if (exchg == 0) {
//             return; /*一回も交換しなかったらソートされているので，終了*/
//         }
//     }
// }

//     // バブルソート改良版その1（降順）   交換回数に着目
// void DownBubbleSort(int *array) {
//     int exchg = 0;  /*交換回数*/
//     for (int i = 0; i < ARRAY_SIZE-1; i++) {
//         for (int j = 1; j < ARRAY_SIZE; j++) {
//             if (array[j] > array[j-1]) {
//                 int temp = array[j];
//                 array[j] = array[j-1];
//                 array[j-1] = temp;
//                 exchg++;
//             }
//         }
//         if (exchg == 0) {
//             return; /*一回も交換しなかったらソートされているので，終了*/
//         }
//     }
// }

//     // バブルソート改良版その2（昇順）   ソートした場所に着目
// void UpBubbleSort(int *array) {
//     int k = 0;  /*array[k]~array[n]まではソート済*/
//     while(k < ARRAY_SIZE-1) {
//     int last = ARRAY_SIZE-1; /*最後にソートしたインデックス番号*/
//         for (int j = ARRAY_SIZE-1; j > k; j--) {
//             if (array[j] < array[j-1]) {
//                 int temp = array[j];
//                 array[j] = array[j-1];
//                 array[j-1] = temp;
//                 last = j;
//             }
//         }
//         k = last;
//     }
// }

//     // バブルソート改良版その2（降順）   ソートした場所に着目
// void DownBubbleSort(int *array) {
//     int k = ARRAY_SIZE;  /*array[0]~array[k]まではソート済*/
//     while(k > 0) {
//     int last = 0; /*最後にソートしたインデックス番号*/
//         for (int j = 1; j < ARRAY_SIZE; j++) {
//             if (array[j] > array[j-1]) {
//                 int temp = array[j];
//                 array[j] = array[j-1];
//                 array[j-1] = temp;
//                 last = j;
//             }
//         }
//         k = last;
//     }
// }

int main(int argc, char const *argv[]) {
    int array[ARRAY_SIZE], num, key;

    // 配列のセット
    puts("Please Input 5 numbers.");
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("array[%d] : ", i);
        scanf("%d", &array[i]);
    }

    // バブルソート
    do {
        puts("Sort Ascending(1) or Descending(2)?");
        printf("Input : ");
        scanf("%d", &key);
    } while (key != UP && key != DOWN);

    // 昇順/降順の選択
    if (key == 1) {
        UpBubbleSort(array);
    } else {
        DownBubbleSort(array);
    }

    // ソート結果表示
    for (int i = 0; i < ARRAY_SIZE; i++) {
        printf("array[%d] : %d\n", i, array[i]);
    }
    return 0;
}

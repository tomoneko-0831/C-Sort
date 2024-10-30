#ifndef SORT_H_
#define SORT_H_

    // バブルソート（昇順）
void UpBubbleSort(int *array, int n) {
    int k = 0;
    while(k < n-1) {
    int last = n-1;
        for (int j = n-1; j > k; j--) {
            if (array[j] < array[j-1]) {
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
                last = j;
            }
        }
        k = last;
    }
}

    // バブルソート（降順）
void DownBubbleSort(int *array, int n) {
    int k = n;
    while(k > 0) {
    int last = 0;
        for (int j = 1; j < n; j++) {
            if (array[j] > array[j-1]) {
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
                last = j;
            }
        }
        k = last;
    }
}


#endif  /*SOET_H_*/
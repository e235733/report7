# include<stdio.h>
void print_scores(int scores[], int size);
void print_results(int results[], int size);
void sort(int scores[], int size);

void print_scores(int scores[], int size){
    printf("socres =");
    for (int i = 0; i < size; i++){
        printf(" %d", scores[i]);
    }
    printf("\n");
}

void print_results(int results[], int size){
    printf("results =");
    for (int i = 0; i < size; i++){
        printf(" %d", results[i]);
    }
    printf("\n");
}

void sort(int scores[], int size){
    int num = 0;//除外するindex
    int results[size];
    int max = 0;
    for (int i = 0; i < size ; i++){
        for (int j = 0; j < size - i; j++){
            if (scores[j] > max){
                max = scores[j];
                num = j;
            }
        }
        results[i] = max;
        int index = 0;
        for (int j = 0; j < size - i - 1; j++){
            if (j == num){
                index += 1;
            }
            scores[j] = scores[index];
            index += 1;
        }

        max = 0;
    }
    print_results(results, size);
}

int main(){
    const int SIZE1 = 5; //定数として配列のサイズを宣言                          
    int scores1[SIZE1] = {0, 60, 70, 100, 90};

    printf("--------------------------------------------\nint scores[5] = {0, 60, 70, 100, 90}\n--------------------------------------------\n");
    print_scores(scores1, SIZE1);
    sort(scores1, SIZE1);

    const int SIZE2 = 6;
    int scores2[SIZE2] = {100, 60, 70, 100, 90, 80};

    printf("\n\n--------------------------------------------\nint scores[6] = {100, 60, 70, 100, 90, 80}\n--------------------------------------------\n");
    print_scores(scores2, SIZE2);
    sort(scores2, SIZE2);

    return 0;
}
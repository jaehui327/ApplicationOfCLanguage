//#include <stdio.h>
//#include<string.h>
//
//#define ALGORITHM 2
//
//int main(int argc, char *argv[]);
//void QuickSort(char (*string), int start, int end);
//void ChoiceSort(char *string, int start, int end);
//
//int main(int argc, char*argv[]) {
//    char string[30] = "FLKFJLKDafadfiweoj";
//    int size = strlen(string);
//#if( ALGORITHM == 1)
//    QuickSort(string, 0, size-1);
//#elif (ALGORITHM ==2)
//    ChoiceSort(string, 0 , size-1);
//#endif
//    printf("정렬된 문자열 배열 %s \n", string);
//    return 0;
//}
//
//void QuickSort(char (*string), int start, int end) {
//    int pivot;
//    int i = 0, j = 0; // 여기서 i는 왼쪽으로 옮긴수, j는 오른쪽으로 옮긴수
//    int k;
//    int temp;
//    // 검사 범위가 1보다 클경우에만 퀵정렬진행
//    pivot = start; // 피벗에 인덱스 설정
//    start++;  // 검사 범위는 피벗 뒤에있는 수
//    while (start <= end) {
//        if (string[pivot] > string[start]) { // 피벗보다 수가 작으면 수를 피벗앞으로 위치시킴
//            k = start;
//            while (k > pivot) {
//                temp = string[k];
//                string[k] = string[k - 1];
//                string[k - 1] = temp;
//                k--;
//            }
//
//            i++; // 왼쪽으로 옮긴수 증가
//            pivot++;
//        }
//        else { // 피벗보다 수가 클경우 오른쪽으로 옮긴수 증가
//            j++; //
//        }
//        start++;
//    }
//
//    if (i > 0 && pivot - i < pivot - 1) { // 왼쪽으로 옮긴 수가 0보다 클경우에만 재검사 && 검사범위가 1보다 클경우에만 퀵정렬진행
//        QuickSort(string, pivot - i, pivot - 1); // 작은값 퀵정렬 재진행
//    }
//    if (j > 0 && pivot + 1 < pivot + j) { // 오른쪽으로 옮긴 수가 0보다 클경우에만 재검사
//        QuickSort(string, pivot + 1, pivot + j); // 큰값 퀵정렬 재진행
//    }
//}
//
//void ChoiceSort(char *string, int start, int end) {
//    int i, j;
//    int minNumber;
//    int minIndex;
//    int temp;
//    i = 0;
//    while (i < end) {
//        for (j = i; j <= end; j++) {
//            if (j == i || minNumber > string[j]) {
//                minNumber = string[j];
//                minIndex = j;
//            }
//        }
//        temp = string[minIndex];
//        string[minIndex] = string[i];
//        string[i] = temp;
//        i++;
//    }
//}

//
//  main.c
//  6_C_For_and_DoubleLoop
//
//  Created by masato on 28/12/2018.
//  Copyright © 2018 masato. All rights reserved.
//

#include <stdio.h>

//
//// forのループ
//int main() {
//
//    int i;
//    for (i = 1; i <= 5; i + 2) {
//        printf("%d", i);
//    }
//    printf("\n");
//
//}



//// forの二重ループ
//int main() {
//
//    int i, j;
//    for (i=1; i<=2; i++) {
//        for (j=1; j <= 3; j++) {
//            printf("%d+%d=%d ", i, j, i + j);
//        }
//        printf("\n");
//    }
//}


//// iを用いたループ
//void main() {
//    int i = 0;
//    while (i <= 50) {
//        printf("%d, ", i);
//        i++;
//    }
//    printf("\n");
//}


//// iを用いたループ
//void main() {
//    int i = 10;
//    do {
//        printf("%d ", i);
//        i++;
//    } while (i <= 5);
//    printf("\n");
//}


// iを用いたループ
int main() {
    int i, num;
    printf("回数を入力: ");
    scanf("%d", &num); // キーボード入力
    // whileループで実行
    printf("whileで実行\n");
    i = 1;
    while (i <= num) {
        printf("*");
        i++;
    }
    printf("\n");
    // do〜whileループで実行
    printf("do~whileで実行\n");
    i = 1;
    do {
        printf("*");
        i++;
    } while (i <= num);
    printf("\n");
}

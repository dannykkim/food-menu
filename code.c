#include <stdio.h>
#include <pthread.h>
#include <stdlib.h>
#include <string.h>

// 메뉴 추천 프로그램의 간단한 예제 코드
void *recommend_menu(void *arg) {
    char *menus[] = {"Korean", "Japanese", "Chinese", "Western"};
    int random_index = rand() % 4; // 0~3 랜덤 선택
    printf("Today's recommended menu: %s\n", menus[random_index]);
    pthread_exit(NULL);
}

int main() {
    pthread_t thread;
    srand((unsigned)time(NULL));

    printf("=== Welcome to Meal Menu Recommendation Program ===\n");
    printf("1. Get menu recommendation\n");
    printf("2. Exit\n");

    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        if (pthread_create(&thread, NULL, recommend_menu, NULL) != 0) {
            perror("Error creating thread");
            return 1;
        }
        pthread_join(thread, NULL);
    } else {
        printf("Goodbye!\n");
    }

    return 0;
}

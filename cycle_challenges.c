#include <stdio.h>

int main() {
    // Проверка HP
    int hp = 80;
    if (hp > 70) {
        printf("Студент в отличной форме\n");
    } else if (hp > 30) {
        printf("Студент устал\n");
    } else {
        printf("Студент в опасности\n");
    }

    // Проверка лекций и знаний
    int lection = 60;
    char knowledge = 'H';
    
    if (lection >= 50 && knowledge == 'H') {
        printf("Можно купить знания\n");
    } else {
        printf("Недостаточно ресурсов\n");
    }

    // Пропуск кратных 3
    printf("Числа без кратных 3: ");
    for (int i = 1; i <= 20; i++) {
        if (i % 3 == 0) continue;
        printf("%d ", i);
    }
    printf("\n");

    // Факториал 7
    int fact = 1;
    for (int i = 1; i <= 7; i++) {
        fact = fact * i;
    }
    printf("Факториал 7: %d\n", fact);

    return 0;
}

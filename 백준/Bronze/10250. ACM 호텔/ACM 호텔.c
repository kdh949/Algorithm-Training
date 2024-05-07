#include <stdio.h>

/* 방 번호 반환하는 함수 */
int room(int height, int request) {
    int unit = 1; //호수, 1호부터 시작

    while(request > height) {
        request-=height;
        unit++;
    }

    return (request * 100 + unit);
}

int main() {
    int num;
    scanf("%d", &num);
    int result;
    int a, b, c;

    for (int i=0; i<num; i++) {
        scanf("%d %d %d", &a, &b, &c);

        result = room(a, c);

        printf("%d\n", result);
    }

    return 0;
}

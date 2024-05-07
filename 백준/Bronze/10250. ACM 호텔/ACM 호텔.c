#include <stdio.h>
#include <stdlib.h>

int main() {
    int num;
    int a, b, c;

    scanf("%d", &num);
    int tmp;
    int count = 1;
    int result=0;

    for (int i=0; i<num; i++) {
        result=0;
        count=1;
        scanf("%d %d %d", &a, &b, &c);
        tmp = c;
        while(tmp > a) {
            tmp-=a;
            count++;
        }

        result = tmp*100;
        result += count;

        printf("%d\n", result);
    }
    
    return 0;
}
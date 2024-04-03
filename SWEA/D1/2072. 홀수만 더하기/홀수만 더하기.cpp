#include <stdio.h>

int main(int argc, char** argv)
{
	int test_case;
	int T;
    int a=0;
    int sum=0;
    
	scanf("%d", &T);

    for(test_case = 1; test_case <= T; test_case++)
	{
        sum=0;
		for(int i=0; i<10; i++){
            scanf("%d", &a);
            if(a %2!=0){
            sum=sum+a;
            }
        }
        printf("#%d %d\n", test_case, sum);
	}
	return 0;//정상종료시 반드시 0을 리턴해야합니다.
}
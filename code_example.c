#include <stdio.h>

//코딩테스트 연습1
int main()
{
    const char* days[] = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };

    int month[12] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int i;

    int m, d;

    m = 5;
    d = 24;
    int cnt = 0;

    for (i = 0; i < m - 1;i++) {
        cnt += month[i];
    }

    cnt += d - 1;
    int a;
    a = cnt % 7;
    printf("[%s]\n", days[a]);

    return 1;
}

#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//最大完数
//int wanshu(int n)
//{
//    int i, sum = 1;
//    for (i = 2; i <= n / 2; i++)
//    {
//        if (n % i == 0)
//        {
//            sum += i;
//        }
//    }
//    if (sum == n)
//        return 1;
//    else
//        return 0;
//}
//
//int main()
//{
//    int m, n;
//    scanf("%d", &m);
//    for (n = m; n > 0; n--) {
//        if (wanshu(n)) {
//            printf("%d\n", n);
//            break;
//        }
//    }
//    return 0;
//}
int isprime(int n)
{

    int i = 0;
    if (n == 1 || n == 0) return 0;
    for (i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int m, x, y, i;
	scanf("%d", &m);
    for (i = m; i > 2; i--)
    {
        x = isprime(i);
        y = isprime(i - 2);
        if (x == 1 && y == 1)
        {
            printf("%d %d", i - 2, i);
            break;
        }
    }
	return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

//����һ�κ������е�ʱ��
int main()
{
    long i = 10000000L;
    clock_t start, finish;
    double duration;
    printf( "Time to do %ld empty loops is ", i) ;
    start = clock();
    while( i-- );
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf( "%f seconds\n", duration );
    return 0;
}

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Data Type\tSize (bytes)\tRange\n");
    printf("------------------------------------------------\n");
    printf("char\t\t%zu\t\t%d to %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char\t%zu\t\t0 to %u\n", sizeof(unsigned char), UCHAR_MAX);
    printf("short\t\t%zu\t\t%d to %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short\t%zu\t\t0 to %u\n", sizeof(unsigned short), USHRT_MAX);
    printf("int\t\t%zu\t\t%d to %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int\t%zu\t\t0 to %u\n", sizeof(unsigned int), UINT_MAX);
    printf("long\t\t%zu\t\t%ld to %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("unsigned long\t%zu\t\t0 to %lu\n", sizeof(unsigned long), ULONG_MAX);
    printf("float\t\t%zu\t\t%.3e to %.3e\n", sizeof(float), FLT_MIN, FLT_MAX);
    printf("double\t\t%zu\t\t%.3e to %.3e\n", sizeof(double), DBL_MIN, DBL_MAX);

    return 0;
}

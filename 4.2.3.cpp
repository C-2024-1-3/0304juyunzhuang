#include <stdio.h>
using namespace std;
void f(char* st, int i)
{
    st[i] = '\0';
    printf(" % s\n", st);   // printf(��%s\n��,st);
    if (i > 1) f(st, i - 1);
}
int main()
{
    char st[] = "abcd";
    f(st, 4);
}
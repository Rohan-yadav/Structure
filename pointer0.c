#include <stdio.h>
struct num{
    int x;
    int y;
};

int main()
{
    struct num a = {0,1};
    struct num *ptr = &a;
    
    printf("%d %d",ptr->x,ptr->y);

    return 0;
}

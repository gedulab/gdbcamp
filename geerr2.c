//数组越界访问
#include <stdio.h>
int main()
{
int arr[5] = {1, 2, 3, 4, 5};
printf("The value at index 4 is: %d\n", arr[4]);
printf("Now attempting illegal access...\n");
arr[10] = 666;
return 0;
}

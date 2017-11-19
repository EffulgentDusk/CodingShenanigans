#include <stdio.h>
#include <stdlib.h>
 

int bin_cout(int n)

{

	int counter = 0;
	while(n--){

		n >>= 1;
		counter++;
	}

	return counter;
}

int days(int n)
{
    return n < 4 ? n : n & (n - 1) ? bin_count(n<<1 + 1) : bin_count(n) + 1;
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",days(n));
    return 0;
}
#include <iostream>
#include <bits/stdc++.h>

//factorial of a number
int factorial(int n) {
    int k = 1;
    if(n == 0) { return 1; }
    else {
        k = n * factorial(n - 1);
    }
    return k;
}
//function to calculate the sum
int getSum(int arr[], int n)
{

int fact = factorial(n);


int sum_digits = 0;
for(int i = 0; i < n; i++){
	sum_digits += arr[i];
sum_digits *= (fact/n); // sum of all digits at a position : (sum of all the digits) * (factorial(n)/n)
}
//Computing the sum
int result = 0;
    for (int i=1, j=1; i<=n; i++)
    {
        result += (j*sum_digits);
        j *= 10;
    }

    return result;
}


int main()
{
	int arr[] = {1, 2, 3};
    int n = sizeof(arr)/sizeof(arr[0]);
 
    // Print sum of all the numbers formed
    printf("%d", getSum(arr, n));
 
    return 0;
}




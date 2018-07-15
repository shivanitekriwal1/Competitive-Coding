#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
 
// function to check if a
// number is prime or not
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to n - 1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
// Find prime number 
// greater than a number
int findPrime(int n)
{
    int num = n + 1;
 
    // find prime greater than n
    while (num) 
    {
        // check if num is prime
        if (isPrime(num))
            return num;
 
        // increment num
        num = num + 1;
    }
 
    return 0;
}
 
// To find number to be added 
// so sum of array is prime
int minNumber(vector<int> A, int n)
{
    int sum = 0;
 
    // To find sum of array elements
    for (int i = 0; i < n; i++)
        sum += A[i];
 
    // if sum is already prime 
    // return 0
    if (isPrime(sum))
        return 0;
 
    // To find prime number 
    // greater than sum
    int num = findPrime(sum);
 
    // Return difference of 
    // sum and num
    return (num - sum);
}
int main() {
	int t;
	cin >>t;
	for(int i=0; i<t; i++){
	    int n,a;
	    vector<int> A;
	    cin >> n;
	    for(int j=0; j<n; j++){
	        cin >> a;
	        A.push_back(a);
	    }
	    cout << minNumber(A, n) << endl;
	}
	return 0;
}
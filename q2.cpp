//Malvika Babbar
//2010990438
//Set - 03
//Question - 2

#include <iostream>
#include <algorithm>
using namespace std;

void checkPair(int num[], int n, int sumoftwono)
{
   
    sort(num, num + n);
 
    int low = 0;
    int high = n - 1;

    while (low < high)
    {

        if (num[low] + num[high] == sumoftwono)
        {
            cout << "Pair found (" << num[low] << ", " << num[high] << ")\n";
            return;
        }
 
        (num[low] + num[high] < sumoftwono)? low++: high--;
    }
	cout << "Pair not found";
}
 
int main()
{
    int num[] = { 8, 7, 2, 5, 3, 1 };
    int sumoftwono = 10;

    int n = sizeof(num)/sizeof(num[0]);
    checkPair(num, n, sumoftwono);
    return 0;
}
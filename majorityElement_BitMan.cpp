/*Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element always exist in the array.
*/

/*
    Done using Bit Manipulation

    Every Majority bit is searched from left  to right and is masked in the candidate variable using or operation.

    0110
    1101
    1101
    0010
    1101

    1101 wins!

    Time complexity is O(n)
    Space complexity is O(1)
    */
#include <iostream>

using namespace std;

int main()
{

    int n;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int candidate = 0;

    for (int i = 0; i < 32; i++)
    {
        int ones = 0;

        for (int j = 0; j < n; j++)
        {
            if (nums[j] & 1 << i)
            {
                ones++;
            }

            if (ones > (n - ones))
            {
                candidate |= (1 << i);
            }
        }
    }
    cout << "Majority Element is: " << candidate << endl;
}
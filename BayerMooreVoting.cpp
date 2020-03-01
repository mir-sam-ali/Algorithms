/*Given an array of size n, find the majority element. The majority element is the element that appears more than ⌊ n/2 ⌋ times.

You may assume that the array is non-empty and the majority element(means that it occurs more than ⌊ n/2 ⌋ times ) always exist in the array.
*/

#include <iostream>

using namespace std;

/* If the input may or may not have a majority element, then there must be another function to check if the returned candidate is actually the majority element or not. If not return 'doesnt exist'.
*/
int findMajorityCandidate(int *a, int n)
{
    int majorityIndex = 0;
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[majorityIndex] == a[i])
            count++;
        else
        {
            count--;
        }
        if (count == 0)
        {
            majorityIndex = i;
            count++;
        }
    }
    return a[majorityIndex];
}

int main()
{

    int n;
    cin >> n;

    int nums[n];

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Majority Element is: " << findMajorityCandidate(nums, n) << endl;
}

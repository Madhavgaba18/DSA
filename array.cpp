#include <iostream>
#include <limits.h>
#include <vector>

using namespace std;

// loops in array - smallest and largest element
void min_max(int array[], int size)
{
    int smallest = INT_MAX;
    int biggest = INT_MIN;
    ;
    for (int i = 0; i < size; i++)
    {
        // if(array[i]> biggest){
        //     biggest = array[i];
        // } same the line below
        smallest = min(array[i], smallest);
        biggest = max(array[i], biggest);
    }

    for (int i = 0; i < size; i++)
    {
        if (smallest == array[i])
        {
            cout << "smallest element index is " << i << endl;
        }

        if (biggest == array[i])
        {
            cout << "Biggest element index is " << i << endl;
        }
    }

    cout << "size: " << size << endl;
    cout << " Smallest element in the array is: " << smallest << endl;
    cout << "biggest element in the array is: " << biggest << endl;
}

// Linear Search
int linearSearch(int array[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            cout << i;
            return i;
        }
    }
    cout << -1;
    return -1;
}

// Reverse an array - 2 pointer approach
void reverseArray(int array[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        swap(array[start], array[end]);
        start++;
        end--;
    }

    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

// swap min and max
void swap_min_max(int array[], int size)
{
    int smallest = INT_MAX;
    int biggest = INT_MIN;

    int smallIndex = 0;
    int bigIndex = 0;

    for (int i = 0; i < size; i++)
    {
        smallest = min(array[i], smallest);
        biggest = max(array[i], biggest);
    }

    for (int i = 0; i < size; i++)
    {
        if (array[i] == biggest)
        {
            bigIndex = i;
        }
        if (array[i] == smallest)
        {
            smallIndex = i;
        }
    }

    swap(array[smallIndex], array[bigIndex]);
    cout << "After swapping min and max elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}

// print unique elements in an array
void uniqueElements(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        bool isDuplicate = false;
        for (int j = 0; j < size; j++)
        {
            if (i == j)
            {
                continue;
            }
            if (array[i] == array[j])
            {
                isDuplicate = true;
                break;
            }
        }
        if (isDuplicate == 0)
        {
            cout << array[i] << " ";
        }
    }
}

int main()
{
    int nums[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(nums) / sizeof(nums[0]); // 7
    int target = 01;

    // min_max(nums, size);
    // linearSearch(nums, size, target);
    // reverseArray(nums, size);
    // swap_min_max(nums, size);
    // uniqueElements(nums, size);

    return 0;
}
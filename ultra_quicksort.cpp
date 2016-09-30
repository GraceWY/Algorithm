//
//  ultra_quicksort.cpp
//  CppWorkspace
//
//  Created by wangyun on 16/9/28.
//  Copyright © 2016年 wangyun. All rights reserved.
//

/*

#include <iostream>

using namespace std;

unsigned long long int times = 0;

void merge_array(int array[], int array_temp[], int left, int middle, int right)
{
    for(int i = left; i <= right; ++ i) //copy the array to a temp array
    {
        array_temp[i] = array[i];
    }
    int index1 = left, index2 = middle+1;
    int idx = left;
    while(index1 <= middle && index2 <= right)
    {
        if(array_temp[index1] > array_temp[index2])
        {
            array[idx++] = array_temp[index2++];
            times += (middle-index1+1);
        }
        else
        {
            array[idx++] = array_temp[index1++];
        }
    }
    while(index1 <= middle)
    {
        array[idx++] = array_temp[index1++];
        //times++;
    }
    while(index2 <= right)
    {
        array[idx++] = array_temp[index2++];
    }
}

void merge_sort(int array[], int array_temp[], int left, int right)
{
    if(left < right)
    {
        int middle = (right+left) / 2;
        merge_sort(array, array_temp, left, middle);
        merge_sort(array, array_temp, middle+1, right);
        merge_array(array, array_temp, left, middle, right);
    }
}

int main()
{
    int n;
    while(true)
    {
        cin >> n;
        if(n == 0) break;
        
        times = 0;
        int array[n], array_temp[n];
        for(int i = 0; i < n; ++ i)
        {
            cin >> array[i];
        }
        
        merge_sort(array, array_temp, 0, n-1); //closed interval
        
        cout << times << endl;
        
    }
    return 0;
}
*/

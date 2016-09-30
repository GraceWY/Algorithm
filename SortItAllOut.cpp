//
//  SortItAllOut.cpp
//  CppWorkspace
//
//  Created by wangyun on 16/9/25.
//  Copyright © 2016年 wangyun. All rights reserved.
//
/*
#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <queue>

using namespace std;

char sorted_array[27];
bool is_emergy[27];
int n, m;

int top_sort(int array_tmp[27][27], int indegree_tmp[27])
{
    int array[27][27], indegree[27];
    memcpy(array, array_tmp, sizeof(int)*27*27);
    memcpy(indegree, indegree_tmp, sizeof(int)*27);
    queue<int> alphabet;
    for(int i = 0; i < 26; ++ i)
    {
        if(indegree[i] == 0 && is_emergy[i])
        {
            alphabet.push(i);
        }
    }
        int no = 0;
        int flag = 0;
        if (alphabet.size() > 1){
            flag = 1;
        }

        while(alphabet.size())
        {
            int index = alphabet.front();
            alphabet.pop();
            sorted_array[no] = (char)('A'+index);
            for(int i = 0; i < 26; ++ i)
            {
                if(array[index][i] == 1)
                {
                    array[index][i] = 0;
                    indegree[i]--;
                    if(indegree[i] == 0)
                    {
                        alphabet.push(i);
                    }
                }
            }
            if (alphabet.size() > 1){
                flag = 1;
            }
            no++;
        }
        for(int i = 0; i < 26; ++ i)
        {
                if(indegree[i] != 0)
                {
                    return 1;
                }
        }
        
        if(flag || no!=n)   return 2;
        return 0;
}

int main()
{
    // top sort
    while(true)
    {
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        //cout << n << " " << m << endl;
        int adjacency_matrix[27][27];
        int indegree[27];
        memset(adjacency_matrix, 0, sizeof(int)*27*27);
        memset(indegree, 0, sizeof(int)*27);
        memset(is_emergy, 0, sizeof(bool)*27);
        //cout << n << " " << m << endl;

        int is_sorted = 2;
        for(int i = 1; i <= m; ++ i) //traversy every relations
        {
            char left, right;
            cin >> left >> right >> right;
            if(is_sorted != 2) continue;
            if(adjacency_matrix[left-'A'][right-'A'] == 0)
            {
                adjacency_matrix[left-'A'][right-'A'] = 1;
                //cout << left-'A' << " " << right-'A' << endl;
                indegree[right-'A']++;
                is_emergy[right-'A'] = true;
                is_emergy[left-'A'] = true;
            }
            
            memset(sorted_array, 0, sizeof(char)*27);
            int info = top_sort(adjacency_matrix, indegree);
            if(info == 0)
            {
                cout << "Sorted sequence determined after " << i << " relations: ";
                int j;
                for(j = 0; j < (n-1); ++ j)
                {
                    cout << sorted_array[j];
                }
                cout << sorted_array[j] <<  "." << endl;
                is_sorted = 0;
            }
            else if(info == 1)
            {
                cout << "Inconsistency found after "<<i<<" relations."<< endl;
                is_sorted = 1;
            }
        }
        if(is_sorted == 2)
        {
            cout << "Sorted sequence cannot be determined." << endl;
        }
    }
    return 0;
}*/

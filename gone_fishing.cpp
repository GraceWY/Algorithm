//
//  gone_fishing.cpp
//  enumerate+greedy
//  CppWorkspace
//
//  Created by wangyun on 16/9/24.
//  Copyright © 2016年 wangyun. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    while(true)
    {
        // for input
        int n, h;
        cin >> n;
        if(n == 0) break;
        cin >> h;
        h = h*12;
        int f_array[n], d_array[n], t_array[n-1];
        for(int i = 0; i < n; ++ i)
        {
            cin >> f_array[i];
        }
        for(int i = 0; i < n; ++ i)
        {
            cin >> d_array[i];
        }
        for(int i = 0; i < n-1; ++ i)
        {
            cin >> t_array[i];
        }
        
        // enumerate and greedy
        int result = -1;
        int time_distribution[n];
        for(int lakeNo = 0; lakeNo < n; ++ lakeNo) // the farest lake John can arrive
        {
            int result_tmp = 0;
            int distribution_tmp[n];
            memset(distribution_tmp, 0, sizeof(int)*n);
            int left_time = h;
            int left_fish[n];
            memcpy(left_fish, f_array, sizeof(int)*n);
            // remove the move time
            for(int i = 0; i < lakeNo; ++ i)
            {
                left_time -= t_array[i];
            }
            // greedy to choose the maximum fishes can be get from these lakes
            for(int l = 0; l < left_time; ++ l)
            {
                int tmp_fish = left_fish[0];
                int tmp_lake = 0;
                //choose the lake has maximum fish
                for(int i = 1; i <= lakeNo; ++ i)
                {
                    if(tmp_fish < left_fish[i])
                    {
                        tmp_fish = left_fish[i];
                        tmp_lake = i;
                    }
                }
                result_tmp += tmp_fish;
                distribution_tmp[tmp_lake] += 5;
                if(left_fish[tmp_lake] >= d_array[tmp_lake])
                {
                    left_fish[tmp_lake] -= d_array[tmp_lake];
                    //cout << left_fish[tmp_lake] << endl;
                    //cout << d_array[tmp_lake] << endl;
                }
                else left_fish[tmp_lake] = 0;
            }
            if(result < result_tmp)
            {
                result = result_tmp;
                memcpy(time_distribution, distribution_tmp, sizeof(int)*n);
            }
        }
        int i;
        for(i = 0; i < n-1; ++ i)
        {
            cout << time_distribution[i] << ", ";
        }
        cout << time_distribution[i] << endl;
        
        cout << "Number of fish expected: " << result << endl << endl;
    }
    return 0;
}

//
//  NewSkateboard.cpp from codeforces
//  CppWorkspace
//
//  Created by wangyun on 16/9/30.
//  Copyright © 2016年 wangyun. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    string line;
    ios::sync_with_stdio(false); // 关同步
    cin >> line;
    
    long long line_size = line.size();
    
    long long result = 0;
    
    for(long long i = line_size-1; i >= 0; -- i)
    {
        if((line[i]-'0')%4 == 0) result++;
    }
    
    for(long long int i = line_size-1; i > 0; -- i)
    {
        int sub = (line[i]-'0')+(line[i-1]-'0')*10;
        if(sub%4 != 0) continue;
        result += i;
    }
    cout << result << endl;
    return 0;
}

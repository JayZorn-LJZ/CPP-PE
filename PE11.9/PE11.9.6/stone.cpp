#include <iostream>
#include "stonewt.h"

Stonewt min_stone(Stonewt *, int);
Stonewt max_stone(Stonewt *, int);

int main()
{
    using namespace std;

    Stonewt s_array[6] {
        100.0, 120.0, 130.0
    };

    Stonewt s;
    double temp;
    int index = 3;

    cout << "请输入磅数：";
    while (index < 6 && cin >> temp)
    {
        s = temp;
        cout << s;
        s_array[index++] = s;
    }
    
    cout << "最小的：" << min_stone(s_array, 6);
    cout << "最大的：" << max_stone(s_array, 6);
    for (int i = 0; i < index; i++)
        if (s_array[i] >= Stonewt(11, 0))
            cout << s_array[i];

    return 0;
}

Stonewt min_stone(Stonewt * s_array, int count)
{
    Stonewt s{s_array[0]};

    for (int i = 0; i < count; i++)
        s = s < s_array[i] ? s : s_array[i];
    
    return s;
}

Stonewt max_stone(Stonewt * s_array, int count)
{
    Stonewt s{s_array[0]};

    for (int i = 0; i < count; i++)
        s = s > s_array[i] ? s : s_array[i];
 
    return s;
}
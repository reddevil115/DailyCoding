#include <iostream>

int main(void)
{
    int *datas = new int[20];
    int i = 0;

    for(i = 0; i < 21; i++)
    {
        datas[i] = (i + 1) * 15;
    }

    for(i = 0; i < 21; i++)
    {
        std :: cout << "Array [" << i << "] : " << datas[i] << std :: endl;
    }

    delete [] datas;

    return 0;
}

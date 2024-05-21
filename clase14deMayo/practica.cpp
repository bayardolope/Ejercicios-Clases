#include <iostream>
using namespace std;


main()
{
    
    int num =1;
    while (num<=5)
    {
        cout<<num<<endl;

        for (int i = 1; i <= num; i++)
        {
            if (i %2!=0)
            {
                cout << i << endl;
            }
            i++;
        }
        num++;
    
    }
    
    return 0;
}

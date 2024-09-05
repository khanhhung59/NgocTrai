#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long n;
    cin>>n;
    long left = 1;
    long right = n;
    long Min = n;
    while(left <= right)
    {
        long mid =(left + right) / 2;
        long sole,sochang,tongchang;
        if(mid % 2 == 0)
        {
            sole = ((mid - 1) - 1) / 2  + 1;
            sochang = (n - (mid + 2)) / 2 + 1;
            tongchang = (sochang * ((mid + 2) * 2 +(sochang - 1) * 2))/2;
        }
        else
        {
            sole = (mid - 1) / 2  + 1;
            sochang = ((n - (mid + 1)) ) / 2 + 1;
            tongchang = (sochang * ((mid + 1) * 2 +(sochang - 1) * 2))/2;
        }
        long tongle = (sole * (2 + (sole -1) * 2))/2;
        if(tongle < tongchang)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
            if(Min > mid)
            {
                Min = mid;
            }
        }
        //cout<<mid<<"\n";
        //cout<<mid<<" "<<sole<<" "<<sochang;
        //cout<<tongle<<" "<<tongchang<<"\n\n";
    }
    cout<< Min;
    system("pause");
    return 0;
}

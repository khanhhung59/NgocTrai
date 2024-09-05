#include <iostream>
using namespace std;
int main()
{
    long long N , Q;
    cin>>N>>Q;
    long long K[N];
    for(long long i = 1; i <= N ; i++)
    {
        cin>>K[i];
    }
    for(long long i = 1; i <= Q; i++)
    {
        long long L, R;
        cin>>L >> R;
        long long DoDai = R - L + 1;
        long long j = 1;
        long long Tong = 0;
        long long Dem = L;
        while(j <= DoDai)
        {
            Tong += K[Dem] * j;
            Dem++;
            j++;
        }
        cout<<Tong<<endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main(){

    int n, k, i, nFact, kFact, n_kFact, k_comb;
    cout<<"Please enter combination n choose k (n>=k, separate by space or newline): "<<endl;
    cin>>n>>k;

    nFact = 1;
    for (i=1; i<=n; i++)
        nFact *= i;
    kFact = 1;
    for (i=1; i<=k; i++)
        kFact *= 1;
    n_kFact = 1;
    for (i=1; i<=n-k; i++)
        n_kFact *= i;

    k_comb = nFact / (kFact * n_kFact);
    if (k>n)
        cout<<"Cannot compute; n>=k for k combinations."<<endl;
    else
        cout<<n<<" choose "<<k<<" is "<<k_comb<<endl;
    
    return 0;
}
#include <iostream>
using namespace std;
int main(){
	int A[5]={1,4,6,2,6};
	int asc;

for(int c=1;c<5;c++)
    {
        for(int d=0;d<5-c;d++)
        {
            if(A[d] > A[d+1])
            {
                asc=A[d];
                A[d]=A[d+1];
                A[d+1]=asc;
            }
        }
    }

    cout << endl << "Hasil Pengurutan Adalah";
    for(int i=0;i<5;i++)
    {
        cout << " " << A[i];
    }
    cout << endl;
    return 0;
}

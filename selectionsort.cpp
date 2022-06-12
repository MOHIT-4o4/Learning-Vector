#include<iostream>
using namespace std;

void sort(int a[], int n)
{
    int i, j,temp;
    for (int i = 0; i < n - 1; i++)
    {
        for(int j=i+1;j<n;j++){
            if(a[i]<a[j]){
                temp= a[i];
                a[i]= a[j];
                a[j]= temp; 
            }
        }
    }
}
int main()
{
    int a[] = {3,2,1,5,6,4};
    int n = sizeof(a) / sizeof(a[0]);
    int i;
    cout << "Given array is:" << endl;
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << endl;
    sort(a, n);
    int k=2;
    cin>>k;
    cout<<"Kth Largest Element: "<<a[k-1]<<endl;
    printf("\nSorted array is: \n");
    for (i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

#include <iostream>

using namespace std;
void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
void bubble_sort(int a[],int n)
{
    int flag=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(&a[j],&a[j+1]);
                flag=1;
            }
        }
    
        if (flag==0)
        break;
    }
    
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    
}


int main()
{
    int n;
    cout << "Enter the number of items:" << "\n";
	cin >>n;
	int *arr = new int(n);
	cout << "Enter " << n << " items" << endl;
	for (int x = 0; x < n; x++) {
		cin >> arr[x];
	}

    bubble_sort(arr,n);
    

    return 0;
}

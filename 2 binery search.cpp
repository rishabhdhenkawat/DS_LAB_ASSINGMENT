#include <iostream>
using namespace std;
void del(int arr[],int n,int ele)
{
    for(int i=0; i<n; i++)
	{
		if(arr[i]==ele)
		{
			for(int j=i; j<n-1; j++)
			{
				arr[j]=arr[j+1];
			}
			//count++;
			break;
		}
	}
	
	cout<<"RESULTANT ARRAY"<<endl;
	for(int i=0; i<n-1; i++)
	{
	    cout<<arr[i]<<" "<<endl;
	}
	
}

void binarySearch(int arr[], int first, int last, int x) 
{ 
    int f=0;
    while (first <= last) 
    { 
        int m = first + (last - first) / 2; 
        if (arr[m] == x) 
         {
             cout<<"ELEMENT FOUND"<<endl;
             del(arr,last+1,x);
             f=1;
             break;
         } 
        if (arr[m] < x) 
            first = m + 1; 
        else
            last = m - 1; 
    }
    if(f==0)
    {
    int k;
    cout<<"Element not found"<<endl;
    cout<<"Enter position to enter element"<<endl;
    cin>>k;
    int n=last+1;
    for(int i=n; i>=k; i--)
        {
            arr[i] = arr[i-1];
        }
        
        arr[k-1] = x;
    
    cout<<"RESULTANT ARRAY"<<endl;
	for(int i=0; i<=n; i++)
	{
	    cout<<arr[i]<<" ";
	}

    }
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
    int x;
    cout<<"Enter ELEMENT to be found";
    cin>>x;
    binarySearch(arr, 0, n - 1, x);
    

    return 0;
}

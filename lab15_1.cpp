#include <iostream>
#include <algorithm>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	for(int k = 1; k<N ; k++)
	{
		for(int i=k; i>0;i--)
		{
			if(d[i]>d[i-1]){
				double temp = d[i];
				d[i] =d[i-1];
				d[i-1]=temp;
			}
		}
		
		cout << "Pass " << k << ":" ;
		
		for(int y=0; y<N ; y++)
		{
			cout << d[y] << " ";
		}
		cout << "\n";
	}
}
int main(){
	int a[10] = {12,25,30,44,2,0,4,7,55,25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}

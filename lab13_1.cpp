#include <iostream>
#include <string>
using namespace std;

template <typename T>
void swap(T d[],int x,int y){
    T temp = d[x];
    d[x] = d[y];
    d[y] = temp;
}

template <typename T>
void insertionSort(T d[],int N){
	bool print=false;
	T loc;
	for(int i=0;i<N-1;i++){
		if(print==false){
			for(int k=0;k<N;k++){
				if(k==i+1){
					cout << "[" << d[k] << "] ";
					
				}else
				cout << d[k] << "  ";
			}
			print=true;
			loc=i+1;
		}
		for(int j=i;j>=0;j--){
			if(d[j+1]>d[j]){
				swap(d,j,j+1);
				loc=j;
				
			}
			
		}
		
		if(print==true){
			cout << "=> ";
			for(int k=0;k<N;k++){
				if(k==loc){
					
					cout << "[" << d[k] << "] ";
				
					continue;
					
				}
				cout << d[k] << "  ";
			}
			cout << "\n";
			print=false;
			
		}
	}
//Write your code here.

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

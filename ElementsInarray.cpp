#include <iostream>
using namespace std;
bool checker(int array[], int size);
int main()
{
	system("cls");
	int size;
	cout<<"Enter the size: ";
	cin>>size;
	int array[size];
	
	for(int i=0; i<size; i++ )
	{
		cout<<"Enter the elements of an array: ";
		cin>>array[i];
	}
	cin.ignore();
	
	bool receiver=checker(array, size);
	
	if(receiver)
	{
		cout<<"All elements in the array are same!!";
		
	}
	else
	{
		cout<<"Elements of the array are  not same!";
	}
	return 0;
}
bool checker(int array[], int size)
{
	bool check = true;
	for (int i=0; i<size-1; i++){
		if(array[i] != array[i+1])
		{
			check = false;
		}
		
	}
	return check;
}
#include<iostream>

using namespace std;

int main()
{

int hold;//to keep a number when we exchange the values
int array[5];//array to keep numbers
cout<<"Enter 5 numbers: "<<endl;
	for(int i=0; i<5; i++)//cycle to enter the number
	{
	cin>>array[i]; //schityvaet
	} 
cout<<endl; 

	for(int i=0; i<4; i++)//main cycle used to sort
	{
		for(int j=0; j<4; j++)//inside sycle to compare next to element
		{
			if(array[j]>array[j+1])//compares neighboor elements
			{
			hold=array[j];//holds data
			array[j]=array[j+1];//changing data
			array[j+1]=hold; //changing data or swap
			}
		} 
	} 
cout<<"Sorted Array is: "<<endl;
	for(int i=0; i<5; i++)//cycle to print out
	{
	cout<<array[i]<<endl; //printing out
	} 

return 0;
}
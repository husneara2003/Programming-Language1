#include<iostream> //input-output 
#include<conio.h>

using namespace std;
int main()
{
	double tax,product,total,cal; // declaring data type and variables
	cout<<"\n\t**************************************************************\n"; // display on screen
	cout<<"\t\t:S a l e s   T a x   C a l c u l a t o r:\n";
	cout<<"\t**************************************************************\n";
	cout<<"\nPlease Enter your Product Price : $";
	cin>>product; //input number
	cout<<"Enter how many Percent Sales tax in this Product (please Enter tax %): ";
	cin>>tax;
	cal=product*(tax*0.01); 
	total=product+cal; 
	cout<<"\n\nYour Product Price is : $"<<product<<endl;
	cout<<"Sales tax in this Product is : $"<<cal<<endl;
	cout<<"Total Product Price with Tax is : $"<<total;
	getch();  //holds the screen
}

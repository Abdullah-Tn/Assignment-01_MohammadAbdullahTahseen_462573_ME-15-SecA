#include<iostream>
#include<string> //for questions involving strings
using namespace std; 
int main()
{  

cout<<"\n TASK 6:- \n";
//to divide wihtout using / operation and instead by using for or while loops
int dividend, divisor, dividend1; 
cout<<"The two numbers to be divided are:- (note that your 1st number will be divided by the 2nd)\n"; 
cin>>dividend;
cin>>divisor; 
dividend1 = dividend; 
/*this division only gives answers in the form of quotient and remainder.
EXact values in decimal can't be displayed in this code*/
for(int n=1; n<=dividend; n++){
/*The principle used here is that; if u keep on subtracting the divisor from the
dividend upto the point where dividend < divisor. Then the amoount of times you have
subtracted gives us the qoutient and the new value of the dividend after subtraction is 
remainder. */
dividend1= dividend1 - divisor;
if(dividend1 < divisor)
{ 
cout<<"The Qoutient is:- "<<dividend<<" / "<<divisor<<"  =  "<<n<<" and the remainder is:- "<<dividend1;
break; 
}
}

cout<<"\n TASK:- 7 \n"; 
//Remove all duplicate characters from the string and find the resultant string
cout<<"Please enter the number of characters in your string\n"; 
int n7;
cin>>n7;
char a[n7];
//first inputting number of elements in string and the string itself
cout<<"Please enter the string\n";
for(int i=0; i<n7; i++)
{cin>>a[i];}
//now running an EXternal loop for the ith term of the string
for(int i=0; i<n7; i++)
{
	//and running an internal loop for the jth term of the string
  for(int j=0; j<n7; j++)
  //this compares the ith term to all other terms
  {
   if(i==j)  /*or else all elements will eventually fall into the else if condition
   and will be replaced by " "*/
   {continue; 
   }
   /*if any two terms at different positions are equal, then the duplicate is
   terminated and replaced by " " */
   else if(a[i]==a[j])
   {
   	a[i]=' ';
   }
  }
}
/*this string is then displayed but ignoring the empty spaces so to display 
the whole string in a single flow. This is done by continuing the for loop 
when the element is an empty space and displaying output in any other case*/
for(int i=0; i<n7; i++)
{ if(a[i]==' '){
	continue;
    }
 cout<<a[i];}

cout<<"\n TASK:- 8 \n";
//Suppose an integer array a[5]={1,2,3,4,5}, add more elements to it and display them in C++
 int nu = 5, m;
 int p = nu; 
int q[nu]={1,2,3,4,5}; //set number of elements in array as a variable
cout<<"How many more elements do you want to add in the integer array a[5]={1,2,3,4,5}? \n";
cin>>m; 
nu = m + 5;  //add into that variable so now number of elements has increased
cout<<"Please enter the elements you want to add in the integer array a[5] \n"; 
/*despite increase in number of elements and new empty slots, the first 5 elements 
 still remain as {1, 2, 3, 4, 5}*/
for(int i=p; i<nu; i++)
{
	//we can add the elements of the new positions 
	cin>>q[i]; 
}
    //and display from 0th element to n=n+mth element
for(int i=0; i<nu; i++)
{
	cout<<q[i]<<' '; 
}


cout<<"\n TASK:- 9 \n"; 
/*Given an integer array and an integer X. Find if there’s a triplet in the array
which sums up to the given integer X*/
int no, X;
cout<<"Please enter your integer\n"; 
cin>>X; 

//Inputting desired integer array
cout<<"How many elements in your integer array? \n"; 
cin>>no; 
int c[no]; 
cout<<"Please enter the elements of your integer array\n"; 
for(int i=0; i<no; i++)
{cin>>c[i];}
cout<<"The triplets in the array which sum up to "<<X<<" are:- \n";
for(int i=0; i<no; i++) //loop for first term
{
	for(int j=i+1; j<no; j++) //for 2nd term. j=i+1 (to avoid repitition)
	{
		for(int k=j+1; k<no; k++)  //for 3rd term k=j+1 (to avoid repitition)
		{
			 /*compares all possible summation combination of triplets 
			 disregarding repitions*/
			if(c[i]+c[k]+c[j]==X)
			{  
			    //displays all possible summation combination which sum up to X
				cout<<c[i]<<" + "<<c[j]<<" + "<<c[k]<<" = "<<X<<endl;
			}
		}
	}
	
}


cout<<"\n TASK:- 10 Bubble sorting\n";
//Implement Bubble Sort on an array of 6 integers.
int d[6], l; 
//sorting of an array of integers ascending order
cout<<"Please enter your 6 integer array:- \n"; 
//inputting array
for(int i=0; i<=5; i++){
	cin>>d[i];
}
//BUBBLE SORTING, EACH right adjacent integer should be bigger than the left integer
int counter=0; 
/*integer counter declaed to show how many times to carry out the sorting process on each adjacent
term of the array in order to finally sort it */
while(counter<6) //iterations up until counter = n-1 
{
for(int i=0; i<5; i++)
{
	if(d[i]>d[i+1])  //in two adjacent elements, if the left one is larger than the right one
	{   l=d[i];
		d[i] = d[i+1];
		d[i+1] = l; 
		//then their values are switched
	}
}
counter++;
}
//modified arranged or bubble sorted array is displayed
for(int i=0; i<=5; i++){
	cout<<d[i]<<' ';
}
return 0; 
}

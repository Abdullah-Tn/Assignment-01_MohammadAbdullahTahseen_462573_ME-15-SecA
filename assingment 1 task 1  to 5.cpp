#include<iostream>
#include<string>
using namespace std; 
int main()
{  
cout<<"ASSINGMENT#01:- \n"; 
   
cout<<"TASK 1:- Displaying factors of a number using for loops \n"; 
   //Displaying factors of a number using for loops 
   int num; 
   cout<<"Please enter your number:- \n"; 
   cin>>num; 
   cout<<"Your number's factors are:- \n"; 
   /*loop runs from 1 to the number itself */
   for(int i=1; i<=num; i++)
   {
   	/*Which ever i value divides  with the number and gives 0 remainder
   	 gets displayed as output, i.e. the factors of the number*/
   	if(num%i != 0)
   	{continue;}
   	cout<<i<<' '; 
   }

cout<<"\n TASK 3:- \n";
   /*Check whether input value is greater than 10 and less than and equal to 20
    and print 1 if this condition is satisfied and 0 if not*/
   int num1; 
   bool output; //Since output has only 2 values; 0 and 1
   cout<<"Please enter your number:- \n"; 
   cin>>num1; 
   //if else statement and logical operation being applied 
   if(num1>10 && num1<=20)
    {output = 1;
    cout<<output; //when 10<num1<=20
    }
   else
    {output = 0;
    cout<<output; 
	}
	
cout<<"\n TASK 4:- \n"; 
   //Check and display the largest prime number less than or equal to a given input number
   int N; 
   cout<<"Please enter your number:- \n ";
   cin>>N; 
   int i1=N; 
   while (i1>=2)
   {
   	/*Using a decrementing while loop
	  starting from i = N and going all the way down to 2.
	  The first and largrest prime number that comes in this decrementing
	  order breaks the loop and gets displayed*/
	  
    //Checking for prime number for iteration
    bool isprime; 
    int n=2; 
    /*running another internal while loop inside our eXternal, to check 
    whether number is prime or not*/
    while (n<=i1/2)
    {
        if(i1%n==0)
       {isprime = false;
        break; 
		}
	    else {
		isprime = true; 
	    }
	n++; 
	}
    //If number is prime then, while loop breaks and the number is displayed
    if(isprime)
    {cout<<"The largest prime number less than or equal to your given number is:-  "<<i1; 
    break;}
    
    i1--;
   }
   
 
cout<<"\n \n TASK 5: - \n"; 
//Check equality of strings and if equal, make them unequal by rotating one of the strings
int n5, m5; 
char a[n5], b[m5]; //declaring character arrays as strings
bool isequal; 
//taking input of number of elements in each string
cout<<"How many characters in your 1st string?\n";
cin>>n5;
cout<<"How many characters in your 2nd string?\n";
cin>>m5;
//taking input of both the strings in the form of arrays
cout<<"Please enter your 1st string \n"; 
for(int j=0; j<=n5-1; j++)
{
cin>>a[j];
}
cout<<"\n Please enter your 2nd string \n";
for(int j= 0; j<=m5-1; j++)
{
cin>>b[j];
}
//Checking whether the two strings are equal or not 
if(n5!=m5)
//if number of characters arent equal
    {cout<<"Your strings are NOT equal \n"; 
    }
    
else{
	
    for(int k= 0; k<=n5-1; k++){
      if(a[k] != b[k])
    //if anyone corresponding element isn't equal
      {cout<<"Your strings are NOT equal \n"; 
      isequal == false;
      break;}
    //if all corresponding elements are equal
      else if(k==n5-1)
      {cout<<"Your strings are equal \n";
		cout<<"The string rotated is:- \n"; 
	/*if strings are equal, print out rotated string
	such that the order of elements is reversed and displayed*/
    for(int p=n5-1; p>=0; p-- )
    	{
		cout<<a[p];}
    	
		}
    }      
}

return 0; 
}

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

//cout<<"\n TASK 6:- \n";
//int dividend, divisor, dividend1; 
//cout<<"The two numbers to be divided are:- (note that your 1st number will be divided by the 2nd)\n"; 
//cin>>dividend;
//cin>>divisor; 
//dividend1 = dividend; 
//for(int n=1; n<=dividend; n++){
//dividend1= dividend1 - divisor;
//if(dividend1 < divisor)
//{ 
//cout<<"The Qoutient is:- "<<dividend<<" / "<<divisor<<"  =  "<<n<<" and the remainder is:- "<<dividend1;
//break; 
//}
//}
//
//cout<<"\n TASK:- 7 \n"; 
////Remove all duplicate characters from the string and find the resultant string
//cout<<"Please enter the number of characters in your string\n"; 
//int n7;
//cin>>n7;
//char a[n7];
//
//cout<<"Please enter the string\n";
//for(int i=0; i<n7; i++)
//{cin>>a[i];}
//for(int i=0; i<n7; i++)
//{
//  for(int j=0; j<n7; j++)
//  {
//   if(i==j) 
//   {continue; 
//   }
//   else if(a[i]==a[j])
//   {
//   	a[i]=' ';
//   }
//  }
//}
//for(int i=0; i<n7; i++)
//{ if(a[i]==' '){
//	continue;
//    }
// cout<<a[i];}
//
//cout<<"\n TASK:- 8 \n";
// int n = 5, m;
// int p = n; 
//int a[n]={1,2,3,4,5};
//cout<<"How many more elements do you want to add in the integer array a[5]={1,2,3,4,5}? \n";
//cin>>m; 
//n = m + 5; 
//cout<<"Please enter the elements you want to add in the integer array a[5+n] \n"; 
//for(int i=p; i<n; i++)
//{
//	cin>>a[i]; 
//}
//for(int i=0; i<n; i++)
//{
//	cout<<a[i]<<' '; 
//}
//
//
//cout<<"\n TASK:- 9 \n"; 
//int n, X;
//cout<<"Please enter your integer\n"; 
//cin>>X; 
//cout<<"How many elements in your integer array? \n"; 
//cin>>n; 
//int c[n]; 
//cout<<"Please enter the elements of your integer array\n"; 
//for(int i=0; i<n; i++)
//{cin>>c[i];}
//cout<<"The triplets in the array which sum up to "<<X<<" are:- \n";
//for(int i=0; i<n; i++)
//{
//	for(int j=i+1; j<n; j++)
//	{
//		for(int k=j+1; k<n; k++)
//		{
//			if(c[i]+c[k]+c[j]==X)
//			{
//				cout<<c[i]<<" + "<<c[j]<<" + "<<c[k]<<" = "<<X<<endl;
//			}
//		}
//	}
//	
//}
//
//
//cout<<"\n TASK:- 10 Bubble sorting\n";
//int d[6], l; 
//cout<<"Please enter your 6 integer array:- \n"; 
//for(int i=0; i<=5; i++){
//	cin>>d[i];
//}
////BUBBLE SORTING, EACH right adjacent integer should be bigger than the left integer
//int counter=0; 
//while(counter<6)
//{
//for(int i=0; i<5; i++)
//{
//	if(d[i]>d[i+1])
//	{   l=d[i];
//		d[i] = d[i+1];
//		d[i+1] = l; 
//	}
//}
//counter++;
//}
//for(int i=0; i<=5; i++){
//	cout<<d[i]<<' ';
//}
return 0; 
}

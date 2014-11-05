#include<iostream>
using namespace std;
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>

class addition
{
      int ea,eb,t,*Arr,*Brr,*Crr,As,Bs;
      double A,B;
      public : 
             addition(){t=0;}
            
double normalize(double x,int &exp)
{
double num;
num=x;
if(num>1)
{
while(num>1)
{ 
num=num/10;
exp++;
}
cout<<endl<<num;
return num;
}
if(num<1)
{
while(num<1)
{
num=num*10;
exp--;
}
num=num/10;
exp++;
cout<<endl<<num;
return num;
}
}

void equate(int ea,int eb,double &A,double &B)
{
int diff;
double num,num1;
num=A;
num1=B;
if(ea<eb)
{
diff=eb-ea;
while(diff!=0)
{
num=num/10;
diff--;
}
A=num;
B=num1;
cout<<"\nA = "<<A<<endl<<"\nB = "<<B;
}
else
{
diff=ea-eb;
while(diff!=0)
{
num1=num1/10;
diff--;
}
A=num;
B=num1;
cout<<"\nA = "<<A<<endl<<"\nB = "<<B;
}
}


int * convert_BCD(double x)
{
int count=0;
double num;
num=x;
while(num<1)
{
num=num*10;
count++;
}
count=count-1;
cout<<"\nNumber of zeros = "<<count;
 int dgt[30];
    float num1;
    int r,m=0,g,j=0,g3,g2,d=0,s=0,m1=0;
    g3=g;
    double g1;
    int cnt=0;
    num1=num;
    while(num1<1)
    num1=num1*10;
    cout<<"\nDouble=  "<<num1<<endl;
    r=int(num1);
     while(r%10!=0)
    {
    num1=num1*10;
     r=int(num1);
     }
     r=r/10;
     cout<<"\nInteger=  "<<r<<"\n";
     m=r;
     while(m!=0)
     {
      m1=m%10;
      dgt[d]=m1; d++;
      m=m/10;
      cnt++;
      }        
	  for(int i=d-1;i>=0;i--)
	  cout<<"\t"<<dgt[i];
	  cout<<endl;  
      
     s=cnt*4 + count*4;
     int Arr[s],Arr1[s];
     t=0;
     for(int i=0;i<count*4;i++)
     { 
      Arr1[t]=0; t++;
      
     } 
		
        while(d>0)
    {
        g=dgt[d-1];g3=g;  d--; j=0;
        while(g!=0)
        {
        g1=g1+(g%2)*pow(10,j);
        g=g/2;
        j++;
        }   
		 
		g2=(int)g1;
		g1=0;
		cout<<"\t"<<g2<< "  ";
		
        
        if(j==1)
        {
        for(int i=0;i<3;i++)
            { 
             Arr[i]=0;
             } 
             Arr[3]=g2;
        for(int k=0;k<=3;k++)
        {
        Arr1[t]=Arr[k]; t++;
        }
         }
         
         if(j==2)
        {
        
             Arr[0]=0;
             Arr[1]=0; 
        Arr[2]=1;
        if(g3==2) { Arr[3]=0;}
        if(g3==3) {Arr[3]=1;}
        for(int k=0;k<=3;k++)
        {
        Arr1[t]=Arr[k]; t++;
        }
      
	    }
        
        
        if(j==3)
        {
        Arr[0]=0;
		Arr[1]=1;
		if(g3==4) {Arr[2]=0; Arr[3]=0; }
        if(g3==5) {Arr[2]=0; Arr[3]=1; }
        if(g3==6) {Arr[2]=1; Arr[3]=0; }
        if(g3==7) {Arr[2]=1; Arr[3]=1; }
        for(int k=0;k<=3;k++)
        {
        Arr1[t]=Arr[k]; t++;
        }}
        
        if(j==4)
        {
        Arr[0]=1;
        Arr[1]=0;
        Arr[2]=0;
        
        if(g3==8) {Arr[3]=0;  }
        if(g3==9) {Arr[3]=1;  }
		for(int k=0;k<=3;k++)
        {
        Arr1[t]=Arr[k]; t++;
        }
		} 
          
    } 
    	cout<<endl;
        for(int j=0;j<s;j++)	
        {
        if(j%4==0)
        cout<<"\t";
        cout<<Arr1[j]<<" ";
    }
    return Arr1;
    }

void addition_final(double A,double B)
{
double C=A+B;
cout<<"\n\n\nNow addition starts\n\n";
Crr=convert_BCD(C);
cout<<"\nAddition of mantissas is  "<<C;
if(As==1&&Bs==1)
{
if(ea<eb)
cout<<"\nTotal addition is= -"<<C<<" * "<<"10 ^ "<<eb;
if(ea>eb)
cout<<"\nTotal addition is= -"<<C<<" * "<<"10 ^ "<<ea;
}
else if(As==0&&Bs==0)
{
if(ea<eb)
cout<<"\nTotal addition is= "<<C<<" * "<<"10 ^ "<<eb;
if(ea>eb)
cout<<"\nTotal addition is= "<<C<<" * "<<"10 ^ "<<ea;
}
}

void main_function()
{
{
double a,b,AC,BR,eq;
int k,choice;
cout<<"\nEnter 1st decimal number and exponent part\n";
cin>>a>>ea;
cout<<"\nEnter 2nd decimal number and exponent part\n";
cin>>b>>eb;
AC=a;
BR=b;
if(a<0)
As=1;
else 
As=0;
if(b<0)
Bs=1;
else 
Bs=0;
if(As==1&&Bs==1)
{
a=-a;
b=-b;
}

A=normalize(a,ea);
B=normalize(b,eb);
equate(ea,eb,A,B);
Arr=convert_BCD(A);
Brr=convert_BCD(B);
if(As==Bs)
addition_final(A,B);

getch();
}
}


};





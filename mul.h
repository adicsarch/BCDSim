#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int sc;
class multiply
{
      int m,n,i,s1,s2,ctr1,ctr,r,l,dp,dp1,dp2;
      public:
             void fn_div()
             {
                  cout<<"\nEnter no.of significant digits in multiplicand and multiplier\n";
                  cin>>s1>>s2;

                  char m2[s1+1],n_2[s2+1];
                  cout<<"Enter the multiplicand and multiplier\n";
                  for(int j=0;j<s1+1;j++) cin>>m2[j];
                  cout<<"\n";
                  for(int j=0;j<s2+1;j++) cin>>n_2[j];
             
             
             int m3[s1],n3[s2];
             for(int j=0;j<s1+1;j++) 
             {
             if(m2[j]!='.') {m3[l]=((int)m2[j]-48); l++; dp++;}
             else dp=0;
             }
             l=0;
             for(int j=0;j<s2+1;j++) 
             {
             if(n_2[j]!='.') {n3[l]=((int)n_2[j]-48); l++; dp1++;}
             else dp1=0;
             }
             dp2=dp+dp1;
             
             cout<<"\nArray 1 is ";
             for(int j=0;j<s1;j++) cout<<m3[j]; cout<<" ";
             cout<<"\nArray 2 is ";
             for(int j=0;j<s2;j++) cout<<n3[j]; cout<<" ";
             
             double sum=0.0;
             l=0;
             for(int j=s1-1;j>=0;j--) 
             {
             sum=sum+(m3[j]*pow(10,l));
             l++;
             }
             m=(int)sum;
             
             sum=0.0;
             l=0;         
             for(int j=s2-1;j>=0;j--) 
             {
             sum=sum+(n3[j]*pow(10,l));
             l++;
             }
             n=(int)sum;
             sum=0;
             cout<<"\nM= "      <<m<<endl;
             cout<<"\nN= "<<n<<endl;
             
             cout<<"\nDecimal Point total is "<<dp2<<endl;
             int m1,n1,n2;
             m1=m; n1=n; n2=n;
             int ql;
             while(m1!=0)
             {
             int r;
             r=m1%10;
             ctr1++;
             m1=m1/10;
             }
             while(n!=0)
             {
             int r;
             r=n%10;
             ctr++;
             n=n/10;
             }
             if(ctr1>ctr) ctr=ctr1;
             if(m%10==0||n1%10==0) {cout<<"\nTry again \n"; exit(0);}
             int a[ctr+1],q[ctr];
             for(int j=0;j<ctr+1;j++) {a[j]=0; q[j]=0;}
             i=ctr-1;
             while(n1!=0) 
             {
             q[i]=n1%10;  
             i--;
             n1=n1/10;
             }
             ql=q[ctr-1];
             sc=ctr;
             cout<<"CTR= "<<ctr<<endl;
             cout<<"Initially Multiplicand is ";
             for(int j=0;j<ctr+1;j++) cout<<a[j];
             cout<<"\nInitially Multiplier is ";
             for(int j=0;j<ctr;j++) cout<<q[j];
             cout<<"\nQL= "<<ql<<endl<<"SC = "<<sc<<endl;
             mul(m,a,q,ql,sc,ctr);
             cout<<"\nThe product is ";
             for(int j=1;j<ctr+1;j++) cout<<a[j];
             cout<<" ";
             for(int j=0;j<ctr;j++) cout<<q[j];
             cout<<"* 10^ -"<<dp2;
             getch();
             }
             
             
             
             
             multiply(){ctr1=0;ctr=0;l=0;dp=0;dp1=0;dp2=0;}
             
             void mul( int m,int a[],int q[],int ql,int sc,int ctr)
             {
             int tot=0;
             int c=ctr,k=0;
             while(sc!=0)
             {
             while(ql!=0)
             {
             tot=tot+m; 
             ql--;
             }
             breaking(tot,a,ctr);
             while(ql==0)
             {for(int j=ctr-1;j>=1;j--)
             q[j]=q[j-1];
             q[0]=a[ctr];
             for(int j=ctr;j>=1;j--) a[j]=a[j-1];
             a[0]=0;
             cout<<"\n";
             for(int j=0;j<ctr+1;j++) cout<<a[j];
             cout<<"\t";
             for(int j=0;j<ctr;j++) cout<<q[j];
             cout<<"\n";
             ql=q[ctr-1];
             cout<<"\nQL is "<<ql<<endl;
             sc--;
             }
             
             
             tot=0;
             tot=array(tot,c,k,a);

             cout<<"\nSc is "<<sc;
             
             }
             }            
             
             int array(int tot,int c,int k,int a[])
             {
             while(c!=-1)
             {
             tot=tot+(a[c])*pow(10,k);
             c--;
             k++;
             }
             return tot;
             }
             
             void breaking(int tot,int a[],int ctr)
             {
             int total=tot;
             int i=ctr;
             while(total!=0)
             {
             a[i]=total%10;
             total=total/10;
             i--;
             }
             }
             
             ~multiply(){cout<<"\nThank you : \nProgram developed by \nAditya\nDeepak\nJeet\nPushpak\nVirat";Sleep(1000);cout<<"\nPress any key to exit!!!";Sleep(3000);}
      
};

#include<iostream>
using namespace std;
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int sc1;
class division
{
      int m,n,i,s1,s2,ctr1,ctr,r,dp,dp1,p2,a[20],q[20],k,l,dp2,c,total,tot,m2[],n_2[],tmp[];
      public:
             division(){ctr1=0;ctr=0;l=0;dp=0;dp1=0;dp2=0;k=0;r=0;c;total=0;tot=0;}
             
             void getip()
             {
                  cout<<"\nEnter no.of significant digits in Dividend and Divisor\n";
                  cin>>s1>>s2;
                  
                  char m2[s1+1],n_2[s2+1];
                  int tmp[10];
                  cout<<"Enter the dividend and divisor\n";
                  for(int j=0;j<s1+1;j++) cin>>m2[j];
                  cout<<"\n";
                  for(int j=0;j<s2+1;j++) cin>>n_2[j];
                  
             int m3[s1];
             int n3[s2];
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
             cout<<"\nM= "<<m<<endl;
             cout<<"\nN= "<<n<<endl;
             
             cout<<"\nDecimal Point is "<<dp2<<endl;
             int m1,n1,n2;
             m1=m; n1=n; n2=n;
             int ql=0;
             while(m!=0)
             {
             tmp[r++]=m%10;
             ctr1++;
             m=m/10;
             }
             while(n!=0)
             {
             r;
             r=n%10;
             ctr++;
             n=n/10;
             }
             
             if(ctr1%2!=0)
             {
             int a[(ctr1/2)+2],q[(ctr1/2)+1];  
             sc1=(ctr1/2)+1;
             i=(ctr1/2);
             c=i+2;
             }
             
             else
             {
             int a[(ctr1/2)+1],q[(ctr1/2)];  
             sc1=ctr1/2;
             i=(ctr1/2)-1;
             c=i+2;
             }
             cout<<"\nsc  "<<"="<<sc1<<endl;
             while(i!=-1)
             {
             q[i]=m1%10;
             i--;
             m1=m1/10;
             }
             
             // 10's comp
             int tc=1,tc1;
             for(int j=1;j<=c;j++)
             tc=tc*10;
             
             tc1=tc;
             tc=tc-n1;
             
             
             if(ctr1%2!=0)
             { i=2;
              a[0]=0;a[1]=0;
               for(int j=ctr1-1;j>=(ctr1-(ctr1/2));j--)
                a[i++]=tmp[j];
                }
                else
                {a[0]=0;
                i=1;
                for(int j=ctr1-1;j>=(ctr1-(ctr1/2));j--)
                a[i++]=tmp[j];
                }
                cout<<"\n10's complement of "<<n1<<"="<<tc<<endl;
                cout<<"QL  "<<"="<<ql<<endl;
                cout<<"\nsc  "<<"="<<sc1<<endl;
                
                cout<<"\nAfter First Shift Left  "<<":"<<endl;
                
                
                if(ctr1%2==0)
                {
                for(int j=0;j<(ctr1/2);j++) a[j]=a[j+1];
                a[(ctr1/2)]=q[0];
                for(int j=0;j<(ctr1/2)-1;j++)
                q[j]=q[j+1];
                q[((ctr1/2)-1)]=0;
                
                cout<<"Initial A is ";
                for(int j=0;j<(ctr1/2)+1;j++) cout<<a[j];
                cout<<"\nInitial Q is ";
                for(int j=0;j<(ctr1/2);j++) cout<<q[j];
                total=array(tot,(ctr1/2),k,a);
                cout<<"\nTotal  "<<"="<<total<<endl;
                tot=total;
                div(tc,tot,a,q,1,sc1,ctr1,tc1,n1);
                
                cout<<"\nQuotient = ";
                for(int j=0;j<(ctr1/2);j++) cout<<q[j];
                cout<<"\nRemainder =  ";
                for(int j=0;j<(ctr1/2)+1;j++) cout<<a[j];
                
                cout<<"\n decimal point 10^ "<<-(dp-dp1)<<endl;
                }
                
                else
                {
                for(int j=0;j<(ctr1/2)+1;j++) a[j]=a[j+1];
                a[((ctr1/2)+1)]=q[0];
                for(int j=0;j<(ctr1/2);j++)
                q[j]=q[j+1];
                q[(ctr1/2)]=0;
                
                cout<<"Initial A is ";
                for(int j=0;j<(ctr1/2)+2;j++) cout<<a[j];
                cout<<"\nInitial Q is ";
                for(int j=0;j<(ctr1/2)+1;j++) cout<<q[j];
                total=array(tot,(ctr1/2)+1,k,a);
                cout<<"\nTotal  "<<"="<<total<<endl;
                tot=total;
                div(tc,tot,a,q,1,sc1,ctr1,tc1,n1);
                
                cout<<"\nQuotient is ";
                for(int j=0;j<(ctr1/2)+1;j++) cout<<q[j];
                cout<<"Remainder is ";
                for(int j=0;j<(ctr1/2)+2;j++) cout<<a[j];
                }
                getch();
                }
                                     
                                                  
                                                               
             void div(int tc,int tot,int a[],int q[],int ql,int sc1,int ctr1,int tc1,int n1)
             {
             int c=ctr1,k=0;
             
             while(sc1!=0)
             {
             tot=tot%tc1;
             cout<<"\nTotal  "<<"="<<tot<<endl;
             cout<<"\n QL  "<<"="<<ql<<endl;
             while(ql!=0)
             {
             tot=tot+tc; 
             if(tot/tc1==0)
             ql=0;
             else
             {q[(ctr1/2)-1]=q[(ctr1/2)-1]+1;
             cout<<"\nLast digit of Q register  "<<"="<<q[(ctr1/2)-1]<<endl;
             tot=tot%tc1;
             }
             cout<<"\nTotal  "<<"="<<tot<<endl;
             }
             tot=tot+n1;
                          
             breaking(tot,a,(ctr1/2));
             sc1--;
             if(sc1==0)
             ql=0;
             else
             ql=1;
             if(sc1!=0)
             {
             for(int j=0;j<(ctr1/2);j++) a[j]=a[j+1];
             a[(ctr1/2)]=q[0];
             
             for(int j=0;j<(ctr1/2)-1;j++)
             q[j]=q[j+1];
             q[((ctr1/2)-1)]=0;
             }

             tot=array(0,(ctr1/2),k,a);
             cout<<"\nSc and QL are "<<sc1<<"  "<<ql<<endl;
             }
             }
             
             void breaking(int tot,int a[],int ctr)
             {
             int total2=tot;
             int i=ctr;
             while(total2!=0)
             {
             a[i]=total2%10;
             total2=total2/10;
             i--;
             }
             }
             
             int array(int tot,int c,int k,int a[])
             {
             double t=tot* 1.0;
             while(c!=-1)
             {            
             t=t+(a[c])*pow(10,k);
             c--;
             k++;
             }
             return ((int)t);
             }
             
             ~division(){cout<<"\nThank you : \nProgram developed by \nAditya\nDeepak\nJeet\nPushpak\nVirat";Sleep(1000);cout<<"\nPress any key to exit!!!";Sleep(3000);}
};


#include<iostream>
#include<conio.h>
using namespace std;
int x[100],t[100],n,count;
void khoitao()
{
      cout<<"Enter the number n: n=";
      cin>>n;
      x[0]=1;
      t[0]=0;
}
void xuat(int k)
{
      cout<<endl<<n<<" =";
      for (int i=1;i<k;i++) cout<<" "<<x[i]<<"+";
      cout<<" "<<x[k];
}
void phantich(int i)
{
      for(int j=x[i-1];j<=((n-t[i-1])/2);j++)
      {
            x[i]=j;
            t[i]=t[i-1]+j;
            phantich(i+1);
            count++;
      }
      x[i]=n-t[i-1];
      xuat(i);
}
int main()
{
      khoitao();
      phantich(1);
      getch();
      cout<<endl<<endl<<"Total="<<count+1;
      getch();
      return 0;
}

// This code is contributed by Nguyen Thanh Dat
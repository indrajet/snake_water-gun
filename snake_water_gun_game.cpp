#include<bits/stdc++.h>
using namespace std;
void  game(char com,char you)
{
    if(com==you)
    {
      cout<<"match draw"<<endl;
    }
    if(you=='s' && com=='w')
    {
        cout<<" you won "<<endl;
    }
    else if(you=='w' && com=='s')
    {
        cout<<" you loss"<<endl;
    }
    else if(you=='s' && com=='g')
    {
        cout<<"you loss "<<endl;
    }
   else if(you=='g' && com=='s')
   {
       cout<<"you won"<<endl;
   }
   else if(you=='w' && com=='g')
   {
       cout<<"you won"<<endl;
   }
   else if (you=='g' && com=='w')
   {
       cout<<"you loss"<<endl;
   }
}
int main()
{
    int num;
    char com,you;
    srand({0});
    num=rand()%100+1;
    if(num<33)
    {
        com='s';
    }
    else if(num>=33 && num<66)
    {
        com='w';
    }
    else if(num>=66)
    {
        com='g';
    }
    count<<"enter your option if you want to chose snake then enter ,s=snake,,gun=g,,water=w"<<endl;
    cin>>you;
    cout<<game(com,you);
}
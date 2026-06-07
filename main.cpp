#include<iostream>
#include <stdlib.h>
using namespace std;
int main()
{
    int Count=0 ,count=0, player=0 , row=3 , column =3 , rows=0 , columns=0 , horizontal=0 , vertical=0 , play=0;

   system ("color 8f");
   do{ 
        
        
    cout<<"                  \033[34m================                 "<<endl;
    cout<<"                  |              |                     "<<endl;
    cout<<"                  |  TIC-TAC-TOE |                     "<<endl;
    cout<<"                  |              |                     "<<endl;
    cout<<"                  ================                    \033[0m"<<endl;
     cout<<"                 Let's Start the Game"<<endl;
    char arr[row][column];
    int arr1[rows][columns];
      for(int i=0 ; i<row ; i++)
      { 
         for(int j=0 ; j<column ; j++)
        {
arr[i][j]=' ';
cout<<arr[i][j]<<" | ";

        }
        cout<<endl;
    }
     for(int i=1 ; i<=9 ; i++)
     {
        if(i%2!=0)
        {
cout<<"it's turn for player X "<<endl;
cout<<"Enter the value of row ";
cin>>horizontal;//1
cout<<"Enter the value of column";
cin>>vertical;//2

        
        if(arr[horizontal-1] [vertical-1]==' ')
        {
      
         
            arr[horizontal-1] [vertical-1]='X';
         
        }
        else 
        {
            cout<<"already have it's value or a wrong value ";
           
        }
    
        cout<<endl;
    
}
else if(i%2==0)
{
   cout<<"it's turn for player O "<<endl;
cout<<"Enter the value of row ";
cin>>horizontal ;
cout<<"Enter the value of column";
cin>>vertical; 
  if(arr[horizontal-1] [vertical-1]==' ')
        {
      
         
            arr[horizontal-1] [vertical-1]='O';
         
        }
        else 
        {
            cout<<"already have it's value ";
           
        }
    
        cout<<endl;
        
    
        cout<<endl;
    
    
}

  
  for(int k=0 ; k<row ; k++)
      { 
         for(int h=0 ; h<column ; h++)
        {
        
         { 
          cout<<arr[k][h];
          cout<<"|";
         }
        }
        cout<<endl;
    }
    if ((arr[0][0]=='X' && arr[0][1]=='X' && arr[0][2]=='X') || (arr[1][0]=='X' && arr[1][1]=='X' && arr[1][2]=='X') || (arr[2][0]=='X' && arr[2][1]=='X' && arr[2][2]=='X') || 
    (arr[0][0]=='X' && arr[1][0]=='X' && arr[2][0]=='X') || (arr[0][1]=='X' && arr[1][1]=='X' && arr[2][1]=='X') || (arr[0][2]=='X' && arr[1][2]=='X' && arr[2][2]=='X') || 
    (arr[0][0]=='X' && arr[1][1]=='X' && arr[2][2]=='X') || (arr[0][2]=='X' && arr[1][1]=='X' && arr[2][0]=='X')) 
{
    cout << "\033[32m YAHOO!! Player X win the game \033[0m" << endl;
    count=count+1;
    break;
}
else if ((arr[0][0]=='O' && arr[0][1]=='O' && arr[0][2]=='O') || (arr[1][0]=='O' && arr[1][1]=='O' && arr[1][2]=='O') || (arr[2][0]=='O' && arr[2][1]=='O' && arr[2][2]=='O') || 
         (arr[0][0]=='O' && arr[1][0]=='O' && arr[2][0]=='O') || (arr[0][1]=='O' && arr[1][1]=='O' && arr[2][1]=='O') || (arr[0][2]=='O' && arr[1][2]=='O' && arr[2][2]=='O') || 
         (arr[0][0]=='O' && arr[1][1]=='O' && arr[2][2]=='O') || (arr[0][2]=='O' && arr[1][1]=='O' && arr[2][0]=='O')) 
{
    cout << "\033[32m YAHOO!! Player O win the game \033[0m" << endl;
    Count=+1;
    break;
}
    
     }
     for(int k=0 ; k<row ; k++)
      { 
         for(int h=0 ; h<column ; h++)
        {
        
         { 
          cout<<arr[k][h];
          cout<<"|";
         }
        }
        cout<<endl;
    }
     cout<<"player X wins "<<count<<" times"<<endl;
     cout<<"player O wins "<<Count<<" times"<<endl;
     cout<<"enter 1 if you want to replay and zero to exit. ";
     cin>>play;
    }while(play!=0);
    return 0;
}

#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<cstdlib>
#include<priority.h>
#include<bankers.h>
#include<sjf.h>
#include<fcfs.h>

using namespace std;

int main()
{
    int k,z,y;
    y:
    cout << "                                           CRICKET STADIUM MANAGEMENT SYSTEM"<<endl;
    cout << "                                           ---------------------------------"<<endl<<endl;;

    cout<<"1. EQUIPMENT ALLOCATION MANAGER"<<endl;
    cout<<"2. PITCH ALLOCATION MANAGER"<<endl;
    cout<<"3. EXIT"<<endl<<endl;
    z:
    cout<<"Enter Your Choice:(1-3)"<<endl;
    cin>>k;

    if(k==1){
        int l;
        system("cls");
        bankers();
         cout<<"\n\n\nPRESS 1 TO GO TO MAIN MENU:"<<endl;
         cin>>l;
         if(l==1){
               system("cls");
            goto y;
    }
    }

    else if(k==2){
    int n,l;
    int x;

    cout<<endl<<endl<<"               PITCH ALLOCATION SYSTEM"<<endl;
    cout<<            "               -----------------------"<<endl;
     cout<<endl<<"1. FIRST COME FIRST SERVE(FCFS) POLICY"<<endl;
     cout<<"2. SHORTEST JOB FIRST(SJF) POLICY"<<endl;
     cout<<"3. PRIORITY WISE POLICY "<<endl;
     cout<<"4. BACK TO MAIN MENU"<<endl;
     x:
     cout<<"Enter Your Choice:"<<endl;
     cin>>n;
     if(n==1){
          system("cls");
          fcfs();
         cout<<"\n\n\nPRESS 1 TO GO TO MAIN MENU:"<<endl;
         cin>>l;
         if(l==1){
               system("cls");
            goto y;
         }
     }
     else if(n==2){
              system("cls");
          sjf();
         cout<<"\n\n\nPRESS 1 TO GO TO MAIN MENU:"<<endl;
         cin>>l;
         if(l==1){
               system("cls");
            goto y;

     }
     }
     else if(n==3){
              system("cls");
            priority();
         cout<<"\n\n\nPRESS 1 TO GO TO MAIN MENU:"<<endl;
         cin>>l;
         if(l==1){
               system("cls");
            goto y;

     }
     }
     else if(n==4){
         system("cls");
        goto y;
     }
     else{
        cout<<"Sorry!! You Have Entered Wrong Choice."<<endl;
        cout<<"Please Enter Your Choice Again!"<<endl<<endl;
         goto x;
     }




    }
    else if(k==3){
        exit(0);
    }

    else{
        cout<<"Sorry!! You Have Entered Wrong Choice."<<endl;
        cout<<"Please Enter Your Choice Again!"<<endl<<endl;
        goto z;
    }


     getch();
     return 0;
}

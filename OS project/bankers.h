#include<iostream>
#include<conio.h>
using namespace std;

void bankers()
{
   int teams,equipment,i,j,quantity,k=0,count1=0,count2=0,z;


 cout<<endl<<endl<<"               EQUIPMENT ALLOCATION MANAGER"<<endl;
 cout<<            "               ----------------------------"<<endl;


cout<<"\nEnter No. Of Teams: ";
cin>>teams;
//cout<<"types of equiptments available for allotment \n\n0=bat,1=ball\n2=helmet,3=handgloves\n4=kneecover,5=handcover\n";
//cout<<"\n\tEnter the type  of EQUIPTMENTS AVAILABLE :-\n";
//cout<<"\t\t";
cout<<"\nEQUIPMENT[1]: BAT\n";
cout<<"EQUIPMENT[2]: BALL\n";
cout<<"EQUIPMENT[3]: HELMET\n";
cout<<"EQUIPMENT[4]: HANDGLOVES\n";
cout<<"EQUIPMENT[5]: THIGH PADS\n\n";

z:
cout<<"\nEnter The Number Of Equipments To Be Processed: ";
cin>>equipment;
if(equipment>5||equipment<1){
    cout<<"WRONG SELECTION!"<<endl;
    cout<<"PLEASE! SELECT AGAIN.";
    goto z;
}



   int max[teams][equipment],allot[teams][equipment],need[teams][equipment];
  int completed[teams],avail[8];
   for(i=0;i<teams;i++)
   completed[i]=0;                             //Setting Flag for uncompleted Process
   cout<<"\nEnter The Total Quantity Of Each Equiptment Available At Stadium:\n\n";
   for(i=0;i<equipment;i++)
    {

     cout<<"EQUIPMENT["<<i+1<<"]: ";
     cin>>quantity;
     avail[i]=quantity;                       // Storing Available quantity of equiptments
    }
   cout<<"\n\nEnter Maximum Quantity of Each Equipment That A Team Needs:\n";
    for(i=0;i<teams;i++)
     {

        cout<<"\nFor TEAM["<<i+1<<"]:\n";
     //   cout<<"\n";
        for(j=0;j<equipment;j++)

         {
          //  cout<<"\t";
          cout<<"\tEQUIPMENT["<<j+1<<"]: ";
            cin>>quantity;
            max[i][j]=quantity;


         }

     }

    cout<<"\n\nEnter The Quantity Of Each Equiptment Already Allocated Or Present With Team :\n";



     for(i=0;i<teams;i++)

     {

        cout<<"\nFor TEAM["<<i+1<<"]:\n";

        for(j=0;j<equipment;j++)

         {
            //cout<<"\t";
             cout<<"\tEQUIPMENT["<<j+1<<"]: ";
            cin>>quantity;

            allot[i][j]=quantity;

            need[i][j]=max[i][j]-allot[i][j];       // here calculating Need of each team

         }
    }

    cout<<"\nSAFE SEQUENCE OR SAFE ALLOCATION OF EQUIPMENT TO THE TEAMS IS: ";

    while(count1!=teams)

    {

    count2=count1;

    for(i=0;i<teams;i++)

     {

       for(j=0;j<equipment;j++)
        {


            if(need[i][j]<=avail[j])

              {
                 k++;

              }

        }

        if(k==equipment && completed[i]==0 )

         {
          cout<<"TEAM["<<i+1<<"]  ";
           // cout<<"\t";

           completed[i]=1;

           for(j=0;j<equipment;j++)



          {
               avail[j]=avail[j]+allot[i][j];

             }

             count1++;
 }
         k=0;

       }

         if(count1==count2)

         {
          cout<<" NO SAFE ALLOCATION!\n\n";
         cout<<"THIS ALLOCATION WILL CAUSE DEADLOCK\n";
         break;

    }

 }



}

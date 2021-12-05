#include<iostream>
#include<fstream>
#include<conio.h>

using namespace std;

class city
{
	
int literyrate,employe,education,pollution,
law_maintain,unirank,
IT,women,market,job,
traffic,hos,inf,
dev,rail,ele,i;
 
float sum;
char*cityname;
  

public:
void getdata();
};

void city::getdata()
{
	
	
cout<<"SMART CITY CALCULATION\n\n\n";
  int b;

  cout<<"Type The City Name\n";
  cityname=new char[20];
 cin>>cityname;


  cout<<"\t\tliteracy Marks out of 100%"<<endl;
  cin>>literyrate;

  cout<<"\t\tEmployment Marks out of 100%"<<endl;
  cin>>employe;

  cout<<"\t\tEducation Quality out of 100%"<<endl;
  cin>>education;

  cout<<"\t\tpollution rate out of 100%"<<endl;
  cin>>pollution;

  cout<<"\t\tLaw system out of 100%"<<endl;
  cin>>law_maintain;

  cout<<"\t\tUNIVERSITY ranks out of 100%"<<endl;
  cin>>unirank;

  cout<<"\t\tInformation Technology rate out of 100%"<<endl;
  cin>>IT;

  cout<<"\t\tWomen Safity rate out of 100%"<<endl;
  cin>>women;

  cout<<"\t\tMarketing rate out of 100%"<<endl;
  cin>>market;

  cout<<"\t\tJob rate out of 100%"<<endl;
  cin>>job;

  cout<<"\t\tTraffic rate out of 100%"<<endl;
  cin>>traffic;

  cout<<"\t\tHospital quaility rate out of 100%"<<endl;
  cin>>hos;

  cout<<"\t\tInfrastucture rate out of 100%"<<endl;
  cin>>inf;

  cout<<"\t\tDevolopment rate out of 100%"<<endl;
  cin>>dev;  

  cout<<"\t\tRailway safty out of 100%"<<endl;
  cin>>rail; 

  cout<<"\t\tElectrycity rate out of 100%"<<endl;
  cin>>ele; 





cout<<"*****************************************************************\n";
cout<<"*****************************************************************\n";
cout<<"*****************************************************************\n";


  if 

         (literyrate>=75 && employe>=70 && education>=75 && pollution>=75 && law_maintain>= 70 && unirank>=75 && IT>=70 &&women>=70 && market>=75
                && job>=75 && traffic>=75 && hos>=70 && inf>=75 && dev>=80 && rail>=75 && ele>=80 )
      {
   cout<<("\n\n\t\t\t\t\t*****This city is smart city*****\n\n\n");
    }
     else 
    cout<<("\n\n\t\t\t\t\t*****this is not a smart city*****\n\n\n");
    
    
        
 float sum=(literyrate+employe+unirank+IT+education+law_maintain+pollution+women+market+job+traffic+hos+inf+dev+rail+ele);
	
    float per=(sum/16);


cout<<"Avarage Persentage of City"<<endl;
	cout<<per<<endl;
cout<<"\n\nIf the persentage avobe 80% the city will be a smart city\t\n";

cout<<"If not the persentage avobe 80% as not a smart city ";


}
int main()

{

int n;
city c1[n];
fstream file;
cout << "\t\t\t\t\t\t*******MY SMART CITY PROJECT*******"<<endl;
cout << "\t\t\t\t\t\t*******MY SMART CITY PROJECT*******"<<endl;
cout << "\t\t\t\t\t\t*******MY SMART CITY PROJECT*******"<<endl;
cout<<"HOW MANY CITYS DATA DO YOU WANT : "<<endl;
cin>>n;
for(int i=0;i<n;i++)
{
   int b=i;
   cout<<endl;
   cout<<"\n\n\t\t\tYour City Name: "<<b+1<<endl;
   c1[i].getdata();
}

file.open("amansajid.txt",ios::out);
cout<<"Adding the data\n";
	
for(int i=0;i<n;i++)
{
	
 
 file.write((char*) &c1[i],sizeof(c1[i]));

}
		  
file.close();

file.open("amansajid.txt",ios::in);
cout<<"reading purpose\n";
for(int i=0;i<n;i++)

{

file.read((char*) &c1[i],sizeof(c1[i]));

}  

file.close(); 

getch();
}


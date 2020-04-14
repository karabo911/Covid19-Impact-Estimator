#include <iostream>

using namespace std;



int main()
{
   int infectionsByRequestedTime;
   int severeCasesByRequestedTime;
   int hospitalBedsByRequetedTime;
   int totalHospitalBeds;
   int occupiedBeds;

   cout<<"Enter the number of infected people "<<endl;
   cin>>infectionsByRequestedTime;
   severeCasesByRequestedTime=infectionsByRequestedTime  * 15/100;//the estimated positive people who require beds
   cout<<"Enter total beds in a hospital "<<endl;
   cin>>totalHospitalBeds;
   occupiedBeds = totalHospitalBeds * 65/100;//the occupied beds in a hospital
   hospitalBedsByRequetedTime = totalHospitalBeds - occupiedBeds;//available beds beds for positve people

   if(severeCasesByRequestedTime < hospitalBedsByRequetedTime)
   {
    cout<<"The available hospital beds for covid-19 positive patients is: " << hospitalBedsByRequetedTime<<endl;
   }
   else
   {
    cout<<"There is a shortage of "<<hospitalBedsByRequetedTime<<" beds"<<endl;
   }
    return 0;
}



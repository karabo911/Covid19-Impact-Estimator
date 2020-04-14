#include <iostream>

using namespace std;

int covid19ImpactEstimator(int reportedCases){
 int currentlyInfected=reprotedCases *10;
 return currentlyInfected;
}

int main()
{
   int reprotedCases;
   cout<<"enter the reported cases "<<endl;
   cin>>reprotedCases;

   int severimpact =covid19ImpactEstimator(reprotedCases);
   severeimpact=severimpact *512;
   cout<<"reported cases is: "<<severimpact<<endl;
    return 0;
}



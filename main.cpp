#include <iostream>

using namespace std;

int covid19ImpactEstimator(int reportedCases){
 int currentlyInfected=reportedCases *10;
 return currentlyInfected;
}

int main()
{
   int reportedCases;
   cout<<"enter the reported cases "<<endl;
   cin>>reportedCases;

   int severempact =covid19ImpactEstimator(reportedCases);
   severempact=severempact *512;
   cout<<"reported cases is: "<<severempact<<endl;
    return 0;
}



#include "myheader.h"

int main() {
  cout << "This program is used to compute the value of the following series : " << endl;

  cout << "(x^0)/0! + (x^1)/1! + (x^2)/2! + (x^3)/3! + (x^4)/4! + ........ + (x^n)/n! " << endl;

  int n;
  double x;
  cout<<"eNTER X:";
  cin>>x;
  cout<<"Enter n:";
  cin>>n;

  double res=ComputeSeriesValue(x,n);
  cout<<"\nRESULT:"<<res;
	cout<<"I REALLY DONT KNOW WUT AM I DOINg HERE BUT IT SEEMS FUN"	;
  return 0;
}

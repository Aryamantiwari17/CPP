Problem
Most programmers will tell you that one of the ways to improve your performance in competitive programming is to practice a lot of problems.

Our Chef took the above advice very seriously and decided to set a target for himself.

Chef decides to solve at least 1010 problems every week for 44 weeks.
Given the number of problems he actually solved in each week over 44 weeks as P_1, P_2, P_3,P 

​ output the number of weeks in which Chef met his target.

Input Format
There is a single line of input, with 44 integers P_1, P_2, P_3,P 


  These are the number of problems solved by Chef in each of the 44 weeks.

Output Format
Output a single integer in a single line - the number of weeks in which Chef solved at least 1010 problems.


#include <iostream>
using namespace std;
void solve(int arr[],int size){
     int count = 0;
for(int i=0; i<4; i++) {
	if(arr[i] >= 10) 
	count++;
}
cout<<count<<endl;
}
int main() {
	int arr[4];
	for(int i=0;i<4;++i){
	    cin>>arr[i];
	}
	solve(arr,4);
	
	return 0;
}

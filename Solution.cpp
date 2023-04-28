#include<iostream> 
using namespace std; 
// FuncƟon to check if the array can be split as required
string canSplit(int n, int a[]) 
{ 
 int i,j,k,c,d; 
 for(i=2;i<n-2;i++) 
 { 
 // Check for strictly decreasing sequence in the first part 
 for(j=0;j<i;j++) 
 { 
 c=0; 
 for(k=j+1;k<i;k++) 
 { 
 if(a[j]<=a[k]) 
 { 
 c=c+1; 
 break; 
 } 
 } 
 if(c!=0) 
 break; 
 } 
 if(c==0) 
 { 
 // Check for strictly increasing sequence in the second part 
 for(j=i+1;j<n;j++) 
 { 
 d=0; 
 for(k=j+1;k<n;k++) 
 { 
 if(a[j]>=a[k]) 
 { 
 d=d+1; 
 break; 
 } 
 } 
 if(d!=0) 
 break; 
 } 
 if(d==0) 
 { 
 // If both condiƟons are saƟsfied, return "YES"
 return "YES"; 
 } 
 } 
 } 
 // If no split is found that saƟsfies both condiƟons, return "NO"
 return "NO"; 
} 
// Main funcƟon to take input from the user and call the canSplit funcƟon
int main() 
{ 
 int n; 
 for(int i=0;i<3;i++) 
 { 
 cin >> n; 
 int arr[n]; 
 for (int i = 0; i < n; i++) 
 { 
 cin >> arr[i]; 
 } 
 cout << canSplit(n, arr) << endl; 
 } 
 return 0; 
} 

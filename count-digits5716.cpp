//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public:
    int evenlyDivides(int N){
        int counter =0;
        while(N>0){
            int divisor = N%10;
            if(divisor ==0){
                N=N/10;
                continue;
            }
            if(N%divisor == 0){
                counter++;
            }
            N=N/10;
        }
        return counter;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.evenlyDivides(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends
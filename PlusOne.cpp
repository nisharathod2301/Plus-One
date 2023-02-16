#include<iostream>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    vector<int> nums {4,3,2,1};
    stringstream ss;
    int n = nums.size();
    for(int i=0; i<n;i++){
        ss<<nums[i];
    }
    int result;
    ss >> result;
    result ++;

    for(int j=0;j<n;j++){
        nums[j]=result%10;
        result = result/10;
    }
    for(int k =0; k<n; k++){
        cout<<nums[k];
    }
}

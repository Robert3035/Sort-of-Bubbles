#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main(){
  //create vector to hold numbers
  vector<int> nums;
  int a, temp;
  //open file
  ifstream infile;
  ofstream outfile;
  infile.open("input.txt");
  outfile.open("output");
  //read in number of numbers in the list
  infile >> a;
  for (int i = 0; i < a; i++){
    infile >> temp;
    cout << temp << endl;
    nums.push_back(temp);
  }
  for(int i = 0; i < a; i++){
    for(int j = i + 1; j < a; j++){
      if(nums[j] < nums[i]){
        temp = nums[i];
        nums[i] = nums[j];
        nums [j] = temp;
      }
    }
  }
  for(int i = 0; i < a; i++){
    outfile << nums[i] << endl;
  }
}
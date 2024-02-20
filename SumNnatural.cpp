 #include<iostream>
 using namespace std;

 //First Method

//  int main(){
//   int n;
//   cin >>n;
//   int sum=0;
//   for(int i=1;i<=n;i++){
//     sum +=i;
//   }
//     cout<<" sum of N numbers :" << sum;
//     return 0;
//  }

  
  //Second Method 

 int sum_of_N_num(int n){ 
  int sum=0;
  for(int i=1;i<=n;i++){
    sum +=i;
  } 
  return sum;
 }
  int main(){
    int n=7;
    cout<<" sum of N numbers :" << sum_of_N_num(n)  ;
    return 0;
 }


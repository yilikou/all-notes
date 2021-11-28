/*
 * @Description: 
 * @version: 
 * @Author: hyn
 * @Date: 2021-11-28 21:14:10
 * @LastEditors: hyn
 * @LastEditTime: 2021-11-28 21:14:11
 */
/*
 * @Description: 
 * @version: 
 * @Author: hyn
 * @Date: 2021-11-28 21:14:10
 * @LastEditors: hyn
 * @LastEditTime: 2021-11-28 21:14:10
 */
#include<iostream>
#include<vector>//自带size函数表示数组长度
using namespace std;
const int N=1e6+10;

vector<int> add(vector<int> &A,vector<int> &B)
{
  vector<int> C;
  int t=0;//进位
  for(int i=0;i<A.size()||i<B.size();i++)
  {
    if(i<A.size()) 
      t= t+ A[i];
    if(i<B.size())
      t = t+ B[i];
    C.push_back(t%10);
    t/=10;
  }
  if(t) C.push_back(1);
  return C;
}
int main()
{
  string a,b;
  vector<int> A,B;
  cin>>a>>b;//a=123456
  for(int i=a.size()-1;i>=0;i--)
    A.push_back(a[i]-'0');//A=[6,5,4,3,2,1]
  for(int i=b.size()-1;i>=0;i--)
    B.push_back(b[i]-'0');
  
  vector<int> C=add(A,B);
  
  for(int i=C.size()-1;i>=0;i--) 
    printf("%d",C[i]);
  return 0;
}
  
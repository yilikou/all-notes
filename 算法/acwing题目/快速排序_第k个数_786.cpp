/*
 * @Description: 
 * @version: 
 * @Author: hyn
 * @Date: 2021-11-23 11:13:33
 * @LastEditors: hyn
 * @LastEditTime: 2021-11-23 11:13:33
 */
#include<iostream>
using namespace std;
const int N=1000010;
int q[N];
int quick_sort(int q[],int l,int r,int k)
{
    if(l>=r) return q[l];
    int i=l-1,j=r+1,mid=q[(l+r)/2];
    while(i<j)
    {
        do i++;while(q[i]<mid);
        do j--;while(q[j]>mid);
        if (i<j) swap(q[i],q[j]);
    }
    if(j-l+1>=k) return quick_sort(q,l,j,k);////k小于左边区间的个数，继续快排左边就可以
    else return quick_sort(q,j+1,r,k-(j-l+1));
}
int main()
{
    int n,k;
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) scanf("%d",&q[i]);
    printf("%d\n", quick_sort(q,0,n-1,k));
    return 0;
}
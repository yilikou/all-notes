/*
 * @Description: 
 * @version: 
 * @Author: hyn
 * @Date: 2021-11-22 22:15:21
 * @LastEditors: hyn
 * @LastEditTime: 2021-11-22 22:15:21
 */
/*
 * @Description: 
 * @version: 
 * @Author: hyn
 * @Date: 2021-11-22 22:15:21
 * @LastEditors: hyn
 * @LastEditTime: 2021-11-22 22:15:21
 */
#include<iostream>
using namespace std;
const int N=100010;
int n,m;
int q[N];
int main()
{
    scanf("%d%d",&n,&m);//n是数的个数，m是要查找的数的个数
    for(int i=0;i<n;i++)
    scanf("%d",&q[i]);//q[i]是数组
    while(m--)
    {
        int x;
        scanf("%d",&x);//x是要查找的数
        int l=0,r=n-1;
        while(l<r)
        {
            int mid=(l+r)/2;
            if(q[mid]>=x) r=mid;
            else l=mid+1;
        }//问题的左边界，即第一个满足要查找的数的位置
        if(q[l]!=x) printf("%d %d\n",-1,-1);//如果走完了都没有和x相等的，输出-1 -1
        else
        {
            printf("%d ",l);
            int l=0,r=n-1;
            while(l<r)
            {
            int mid=(l+r+1)/2;
            if(q[mid]<=x)
            l=mid;
            else r=mid-1;
            }//问题的右边界，即最后一个满足要查找的数的位置
            printf("%d\n",l);
        }
    }
    return 0;
}

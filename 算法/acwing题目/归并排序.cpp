/*
 * @Description: 
 * @version: 
 * @Author: hyn
 * @Date: 2021-11-15 11:22:22
 * @LastEditors: hyn
 * @LastEditTime: 2021-11-15 11:22:22
 */
#include <iostream>
using namespace std;
const int N = 1e6 + 10;
int a[N], tmp[N];

void merge_sort(int q[], int l, int r)
{
    if (l >= r) return;//边界条件
    int mid = (l + r )>> 1;//分界点
    merge_sort(q, l, mid), merge_sort(q, mid + 1, r);
    int k = 0, i = l, j = mid + 1;//k表示已经合并的个数
  //合并子问题，一个一个判断
    while (i <= mid && j <= r)
        if (q[i] <= q[j]) 
        {
          tmp[k ++ ] = q[i ++ ];
        }
        else tmp[k ++ ] = q[j ++ ];
  //可能有的部分没有判断完
    while (i <= mid) tmp[k ++ ] = q[i ++ ];
    while (j <= r) tmp[k ++ ] = q[j ++ ];
  //temp里存的就是排好序的 现在把他赋值给q
    for (i = l, j = 0; i <= r; i ++, j ++ ) 
    {
      q[i] = tmp[j];
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i ++ ) 
    {
      scanf("%d", &a[i]);
    }
    merge_sort(a, 0, n - 1);
    for (int i = 0; i < n; i ++ ) 
    {
      printf("%d ", a[i]);
    }
    return 0;
}
/*
 * @Author: Huang Yuhui 
 * @Date: 2019-03-27 16:08:28 
 * @Last Modified by: Huang Yuhui
 * @Last Modified time: 2019-03-27 16:14:18
 */

/*
 * 程序填空题-题目描述如下:
 * 
 * 围绕山顶一圈有'N'个山洞,编号:0,1,2,3···,N-1,有一只狐狸和一只兔子在洞中居住,狐狸总想找到兔子并吃掉它,它的寻找方法是:
 * 先到第一个洞(既编号为0的洞)中找,后再隔1个洞,既找到编号为2的洞中找,再隔2个洞,既到编号为5的洞中找,下次再隔三个洞,既到
 * 编号为9的洞中找······
 * 
 * 若狐狸找一圈,请为兔子找出所有不安全的洞号.程序中用'a'的数组元素模拟一个洞,数组元素的下标既为洞号,数组元素中的值为0时,
 * 表示该洞安全,为1时表示该洞不安全,若形参'n'的值为30时,不安全的洞号是:0,2,5,9,14,20,27.
 */

#include <stdio.h>
#include <stdlib.h>
#define N 100

void fun(int *a, int n)
{
    int i, t;
    for (i = 0; i < n; i++)
        /**********found**********/
        a[i] = 0;
    i = 0;
    /**********found**********/
    t = 1;
    while (i < n)
    {
        a[i] = 1;
        t++;
        /**********found**********/
        i = i + t; //? 下个数组下标为本次的下标的下标加间隔数+1的值.
    }
}

void main()
{
    int a[N], i, n = 30;

    fun(a, n);
    for (i = 0; i < n; i++)
        if (a[i] == 1)
            printf("不安全的洞号是 :   %d\n", i);

    system("pause");
}

/*The resule be shown as followed:

不安全的洞号是 :   0
不安全的洞号是 :   2
不安全的洞号是 :   5
不安全的洞号是 :   9
不安全的洞号是 :   14
不安全的洞号是 :   20
不安全的洞号是 :   27
Press any key to continue . . .

*/
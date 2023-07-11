# 递归

>  递归是一种设计和描述算法的有力工具。也是回溯法和动态规划的基础。

##### 递归算法执行过程分为两个阶段

- 递推：将大的问题分为小的子问题
- 回归：获得最简单的解方案后，逐层返回

`(1) ` 确定递归公式，如 斐波那契数列 中 
$$
fib(n) = \begin{cases} fib(n-1)+fib(n-2)&\text{, if } n \ge 2  \\ 1 &\text{, if } n = 1  \\ 0 , &\text{, if } n =0 \end{cases}
$$

`(2)`确定边界bad case，显然，$ fib(n) $ 边界就是  $n= 0 \text{  or  } n =  1 $ 

递归的效率

- 递归的效率浪费，由于大量后级递归的重复调用，也可能造成栈溢出，python中就限制了递归的深度
- 解决方案：重复的调用过程可用[动态规划](../updating.md)的dp数组记录，避免重复计算已经计算过的结果，也可以使用[滚动记录](../updating.md)来避免重复计算

##### 递归案例

###### 阶乘计算

- 描述：计算整数的阶乘
- 代码
  - [cpp](../codes/factorial.cpp)
  - [python](../updating.md)

###### [斐波那契数列](https://en.wikipedia.org/wiki/Fibonacci_sequence) 

- 描述：***fibonacci sequence***美妙的数学数列，在自然界中无处不在，向日葵花的瓣数、树枝的分叉、鳞片的排列、黄金分割,给定任意整数n，求其对应的斐波那契数( $n \in \N  , fib(0) = 0$ ).
- 斐波那契数有着明显的递归，也可纯粹的[数学解法](../math_optimize/math.md)，另：数学解法上的优化让算法走捷径，而且计算机中，遍地都是数学，望重视
  - [fib.h](../codes/fib.h)
  - [fib.py](../updating)

###### [汉诺塔问题](https://zh.wikipedia.org/wiki/汉诺塔)

- 描述：有三根杆子A，B，C。A杆上有 N 个 (N>1) 穿孔圆盘，盘的尺寸由下到上依次变小。要求按下列规则将所有圆盘移至 C 杆：
  1. 每次只能移动一个圆盘；
  2. 大盘不能叠在小盘上面。
  3. 最少移动次数
- 汉诺塔问题用递归的方法分解非常的简单
  - [hanoi.cpp]()
  - [hanoi.py]()

###### 全排列问题

- 描述：生成n个元素${r_1,r_2,...,r_n}$ 的全排列
- 全排列递归求解
  - [full_permutation.h](../codes/full_permutation.h) 
  - [full_permutation.py](../updating.md) 

###### 分解数字n

- 描述：将非0自然数 ***n*** **划分**成一系列非0自然数之和$n = n_1+n_2+...+n_k({n_1,n_2,...,n_k,k\ge1})$，求不同的划分的个数
- pass
  - [sum_to_n.h](../codes/sum_to_n.h)


###### [快速排序](../codes/quick_sort.h)

###### [归并排序](../codes/merge_sort.h)

###### [链表反转]()

###### [二叉树相关算法]()


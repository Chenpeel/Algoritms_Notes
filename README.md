>算法虐我千百遍，我待算法如初恋

# 总得走那么一遭		(Updating......)

* 把所有经典算法写一遍  
* 看算法有关源码   (STL源码等等)
* 看经典书籍  
* 刷题   (主刷[Leetcode](https://leetcode.cn/u/chen___chen/))


## 基本数据结构和算法

这些算法全部自己敲一遍：

### [链表]()

* 链表
* 双向链表
* 循环链表

### [数组]()

- 数组和链表结构是基础结构，散列表、栈、队列、堆、树、图等等各种数据结构都基于数组和链表结构实现。
- 遍历、元素统计、改变移动
- 二维数组、滚动数组
- 数组的旋转
- 前缀和数组

### [队列]()

* 队列
* 堆栈

### [哈希表 HashTable]()

* 散列函数
* 碰撞解决

### [字符串算法]()

* 子串查找 [字符串常见题目参考这里]() 
    * BF算法  
    * KMP算法  
    * BM算法  
* 正则表达式
* 数据压缩
* 排序


### [树]()

* 二叉树  [快速排序]()就是个二叉树的前序遍历，归并排序就是个二叉树的后序遍历  
* [二叉查找树BST]()  有序的二叉树，中序遍历结果是递增的
* [平衡二叉树 AVL树]()   绝对平衡二叉树；
* [红黑树]()  弱平衡二叉树；使用广泛
* [B树]()
* [B+树]()  mysql 索引使用 B+树 的数据结构	  
* [字典树trie]() 字典树也叫前缀树，单词查找树
* [二叉堆]()  
* [伸展树]()
* [后缀树]()
* 斐波那契堆(Fibonacci Heap)   
* 最优二叉树(赫夫曼树)  



### [图的算法]()

* 图的存储结构和基本操作（建立，遍历，删除节点，添加节点）   
* 最小生成树  
* 拓扑排序  
* 关键路径  
* 最短路径: Floyd,Dijkstra,bellman-ford,spfa  
  
  
  
### [排序算法]()

**交换排序算法**

* 冒泡排序
* 插入排序    
* 选择排序    
* 希尔排序
* 快排   
* 归并排序  
* 堆排序

**线性排序算法**
    
* 桶排序 
  
  
### [查找算法]()  


* 哈希表： O(1)  [hashtable实现参考这里]()
* 有序表查找：二分查找 
* 顺序表查找：顺序查找, 复杂度O(N)  
* 分块查找： 块内无序，块之间有序；可以先二分查找定位到块，然后再到`块`中顺序查找  
* 动态查找:  二叉排序树，AVL树，B- ，B+（这里之所以叫 `动态查找表`，是因为表结构是查找的过程中动态生成的）
  


## [算法设计思想]()


* [递归](./analysis/recursion.md)
* [分治算法](./analysis/divide_conquer.md) 
* [动态规划](./analysis/dynamic_program.md)  
* [回溯法]()
* [迭代法]()  
* [穷举搜索法]()   
* [贪心算法](./analysis/greedy.md) 



## [面试算法题目](9%20Algorithms%20Job%20Interview/README.md)

这是一个算法题目合集，题目是我从网络和书籍之中整理而来，部分题目已经做了思路整理。问题分类包括：

* 字符串
* 堆和栈
* 链表
* 数值问题
* 数组和数列问题
* 矩阵问题
* 二叉树
* 图
* 海量数据处理
* 智力思维训练
* 系统设计

还有部分来自算法网站和书籍：

* 九度OJ
* leetcode
* 剑指offer


## [海量数据处理]()

* Hash映射/分而治之
* Bitmap
* Bloom filter(布隆过滤器)
* Trie树
* 数据库索引
* 倒排索引(Inverted Index)
* 双层桶划分
* 外排序
* simhash算法
* 分布处理之Mapreduce



## [开源项目中的算法]()

* YYCache
* cocos2d-objc
* bitcoin
* geohash
* kafka
* nginx
* zookeeper
* ...




## 15个经典基础算法


* [KMP 字符串匹配算法]()
* [Hash]()   
* [快速排序]()
* 快速选择SELECT 
* [红黑树 （一种弱/自平衡的`二叉查找树`）]()
* [BFS/DFS （广度/深度优先遍历）]()
* [`A*`寻路算法： 求解最短路径]()
* Dijkstra：最短路径算法
* `SPFA(Shortest Path Faster Algorithm)` 单元最短路径算法  
* 启发式搜索
* 遗传算法 `GA`  
* [DP (动态规划 dynamic programming)]()
* 图像特征提取之`SIFT` 算法 , 广泛的应用于图像识别，图像检索，3D重建等CV的各种领域 
* 傅立叶变换  


## 推荐阅读

### 刷题必备  

* 《剑指offer》  
* 《编程之美》  
* 《编程之法:面试和算法心得》      
* 《算法谜题》 都是思维题 

### 基础

* 《编程珠玑》Programming Pearls   
* 《编程珠玑(续)》   
* 《数据结构与算法分析》   
* 《Algorithms》 这本近千页的书只有6章,其中四章分别是排序，查找，图，字符串，足见介绍细致     

### 算法设计 

* 《算法设计与分析基础》    
* 《算法引论》 告诉你如何创造算法   断货        
* 《Algorithm Design Manual》算法设计手册 红皮书  
* 《算法导论》 是一本对算法介绍比较全面的经典书籍     
* 《Algorithms on Strings,Trees and Sequences》    
* 《Advanced Data Structures》 各种诡异高级的数据结构和算法 如元胞自动机、斐波纳契堆、线段树  600块    
  

### 延伸阅读 

* 《深入理解计算机系统》    
* 《TCP/IP详解三卷》    
* 《UNIX网络编程二卷》  
* 《UNIX环境高级编程：第2版》  
* 《The practice of programming》   Brian Kernighan和Rob Pike    
* 《writing efficient programs》  优化   
* 《The science of programming》 证明代码段的正确性   800块一本   


## 参考链接和学习网站

### [July 博客](http://blog.csdn.net/v_july_v) 

* 《数学建模十大经典算法》    
* 《数据挖掘领域十大经典算法》    
* 《十道海量数据处理面试题》      
* 《数字图像处理领域的二十四个经典算法》    
* 《精选微软等公司经典的算法面试100题》 
* [The-Art-Of-Programming-By-July](https://github.com/julycoding/The-Art-Of-Programming-By-July)
* [微软面试100题](http://blog.csdn.net/column/details/ms100.html)    
* [程序员编程艺术](http://blog.csdn.net/v_JULY_v/article/details/6460494)   


### 基本算法演示 

http://sjjg.js.zwu.edu.cn/SFXX/sf1/sfys.html  
http://www.cs.usfca.edu/~galles/visualization/Algorithms.html  


### 编程网站

* [leetcode](https://leetcode.cn/u/chen___chen/)个人主页
* [AcWing](https://www.acwing.com/problem/) 刷题
* [codetop](https://codetop.cc/home) 企业高频面试题库，刷题必备
* [openjudge](http://openjudge.cn/)  开放在线程序评测平台，可以创建自己的OJ小组   
* [九度OJ](http://ac.jobdu.com/index.php)     
* 这有个[ACM训练方案](http://www.java3z.com/cwbwebhome/article/article19/res041.html)   

### 竞赛网站

- [leetcode](https://leetcode.cn/contest/)
- [AtCoder](https://atcoder.jp/) 英国网站，作息阴间的可以一试
- [ForceCd](https://codeforces.com/) 同上


### 网课

[高级数据结构和算法](https://www.coursera.org/learn/gaoji-shuju-jiegou/)  北大教授张铭老师在coursera上的课程。完成这门课之时，你将掌握多维数组、广义表、Trie树、AVL树、伸展树等高级数据结构，并结合内排序、外排序、检索、索引有关的算法，高效地解决现实生活中一些比较复杂的应用问题。当然coursera上也还有很多其它算法方面的视频课程。


[算法设计与分析 Design and Analysis of Algorithms](https://class.coursera.org/algorithms-001/lecture) 由北大教授Wanling Qu在coursera讲授的一门算法课程。首先介绍一些与算法有关的基础知识，然后阐述经典的算法设计思想和分析技术，主要涉及的算法设计技术是：分治策略、动态规划、贪心法、回溯与分支限界等。每个视频都配有相应的讲义（pdf文件）以便阅读和复习。


### 其它

[OI Wiki](https://github.com/24OI/OI-wiki/) 主要内容是 OI/ACM-ICPC 编程竞赛 (competitive programming) 相关的知识整理, 包括基础知识、常见题型、解题思路以及常用工具等内容。

[labuladong 的算法小抄](https://labuladong.gitee.io/algo/) 作者整理了很多的解题套路框架，看完获益良多


# 优先队列（堆）

- 优先队列：特殊的**队列**，取出元素的顺序是依照元素的优先权（关键字）大小，而不是元素进入队列的先后顺序。

## 实现方式

- 若采用数组或链表实现优先队列
- 是否可以使用使用二叉树存储结构
- 使用完全二叉树进行存储，效率会比较高

堆的两个特性：
- 结构性：用数组表示的完全二叉树
- 有序性：任一结点的关键字是其子树所有结点的最大值（或最小值）

类型名称：最大堆
数据对象集：完全二叉树，每个结点的元素值不小于其子节点的元素值
操作集 主要操作：
- 创建一个空的最大堆
- 判断最大堆H是否已满
- 将元素item插入最大堆
- 判断最大堆H是否为空
- 返回H中最大元素（高优先级）

使用数组来存放完全二叉树，在下标为0的位置上不存放元素，就可以做到根节点下标为n,那么的左儿子的下标为2n,由儿子的下标为2n+1。

## 最大堆的建立

- 建立最大堆：将已经存在的 N 个元素按最大堆的要求存放在一个一维数组中。
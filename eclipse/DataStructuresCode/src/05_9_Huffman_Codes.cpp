/*
 * 05_9_Huffman_Codes.cpp
 *
 *  Created on: 2018年5月27日
 *      Author: SummerGift
 */
/*

05-树9 Huffman Codes（30 分）
In 1953, David A. Huffman published his paper "A Method for the Construction of Minimum-Redundancy Codes",
and hence printed his name in the history of computer science.
As a professor who gives the final exam problem on Huffman codes,
I am encountering a big problem: the Huffman codes are NOT unique.
For example, given a string "aaaxuaxz", we can observe that the frequencies of the characters 'a', 'x', 'u' and 'z' are 4, 2, 1 and 1,
respectively. We may either encode the symbols as {'a'=0, 'x'=10, 'u'=110, 'z'=111}, or in another way as {'a'=1, 'x'=01, 'u'=001, 'z'=000},
both compress the string into 14 bits.
Another set of code can be given as {'a'=0, 'x'=11, 'u'=100, 'z'=101},
but {'a'=0, 'x'=01, 'u'=011, 'z'=001}is NOT correct since "aaaxuaxz" and "aazuaxax" can both be decoded from the code 00001011001001.
The students are submitting all kinds of codes, and I need a computer program to help me determine which ones are correct and which ones are not.

Input Specification:
Each input file contains one test case. For each case,
the first line gives an integer N (2≤N≤63), then followed by a line that contains all the N distinct characters and their frequencies in the following format:

c[1] f[1] c[2] f[2] ... c[N] f[N]
where c[i] is a character chosen from {'0' - '9', 'a' - 'z', 'A' - 'Z', '_'},
and f[i] is the frequency of c[i] and is an integer no more than 1000.
The next line gives a positive integer M (≤1000), then followed by M student submissions.
Each student submission consists of N lines, each in the format:

c[i] code[i]
where c[i] is the i-th character and code[i] is an non-empty string of no more than 63 '0's and '1's.

Output Specification:
For each test case, print in each line either "Yes" if the student's submission is correct, or "No" if not.

Note: The optimal solution is not necessarily generated by Huffman algorithm.
Any prefix code with code length being optimal is considered correct.

Sample Input:
7
A 1 B 1 C 1 D 3 E 3 F 6 G 6
4
A 00000
B 00001
C 0001
D 001
E 01
F 10
G 11
A 01010
B 01011
C 0100
D 011
E 10
F 11
G 00
A 000
B 001
C 010
D 011
E 100
F 101
G 110
A 00000
B 00001
C 0001
D 001
E 00
F 10
G 11
Sample Output:
Yes
Yes
No
No

这道题的意思是给出一组字符和出现的频率，让我们构造他们的哈夫曼编码。
由于哈夫曼编码不唯一，所以编码方式有多种。然后有M个同学给出了他们的编码方式，
让我们判断他们的编码是否正确。正确输出Yes，错误输出No

问题可以分成两部分:
1.构造N个字符的哈夫曼编码，计算带权路径长度WPL，判断每个同学的编码带权路径长度是否
等于之前计算出来的WPL.
2.判断是否有某一个字符的编码是另一个字符的前缀码。

*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#define MAX_N 64
#define YES   1
#define NO    0
#define MIN_DATA -1
#define QUEUE_SIZE 100

struct tree_node {
    int weight;
    struct tree_node* left, right;
};
typedef struct tree_node *tree_node_t;

//构建最小堆
struct heap_struct {
    tree_node_t data;
    int size;
    int capacity;
};
typedef struct heap_struct *min_heap_t;

struct queue_node {
    tree_node_t data[QUEUE_SIZE];
    int rear;
    int front;
};
typedef struct queue_node *queue_node_t;






















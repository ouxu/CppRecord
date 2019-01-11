#include <iostream>
#include <cstdio>
#include <map>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
#include <cmath>
using namespace std;

//就绪的进程
struct ready_node
{
    int id;   //进程编号
    int flag; //表是进程的状态，1：表示进入内存，0：表示从内存撤出
    int size; //进程长度
};

//空闲区域表的结构体，首地址和长度
struct free_node
{
    int id;    //保存在该区域的进行号
    int start; //首地址
    int len;   //长度
};
vector<free_node> free_list;  //保存空闲区域表的内容，分别是区域首址和区域长度
vector<free_node> used_list;  //保存已占用区域表的内容，分别是区域首址和区域长度
queue<ready_node> ready_list; //就绪的进程队列，主要保存第一次匹配为成功的进程
queue<ready_node> wait_list;  //等待的进程队列

int cmp(free_node a, free_node b)
{                         //定义排序的比较方式
    return a.len < b.len; //按开始地址从小到大排序
}

// 把空闲分区连续的内存合并
void merge()
{
    int i = 0;
    while (i < free_list.size() - 1)
    {
        if (free_list[i].start + free_list[i].len == free_list[i + 1].start)
        {
            printf("要合并的空闲分区: \n");
            printf("---------------\n");
            printf("| %3d  |  %3d |\n", free_list[i].start, free_list[i].len);
            printf("| %3d  |  %3d |\n", free_list[i+1].start, free_list[i+1].len);
            printf("---------------\n");
            free_node _free;
            _free.start = free_list[i].start;
            _free.len = free_list[i].len + free_list[i + 1].len;
            free_list.erase(free_list.begin() + i, free_list.begin() + i + 2);
            free_list.insert(free_list.begin() + i, _free);
        }
        else
        {
            i++;
        }
    }
}

//显示空闲区域表和已占用表的信息
void Show()
{                                 
    sort(free_list.begin(), free_list.end(), cmp); //操作之前首先按内存从小到大排序
    printf("空闲链表的使用情况: \n");
    printf("---------------\n");
    printf("| 首址 | 长度 |\n");
    printf("---------------\n");
    for (int i = 0; i < free_list.size(); i++)
    {
        printf("| %3d  |  %3d |\n", free_list[i].start, free_list[i].len);
        printf("---------------\n");
    }
    printf("已占用链表的使用情况:\n");
    printf("----------------------------\n");
    printf("|运行进程 |   首址  |  长度|\n");
    printf("----------------------------\n");

    for (int i = 0; i < used_list.size(); i++)
    {
        printf("|  %3d    |   %3d   |  %3d |\n", used_list[i].id, used_list[i].start, used_list[i].len);
        printf("----------------------------\n");
    }
    printf("\n\n");
}

//初始化等待序列
void Init()
{
    free_node fnod;
    fnod.start = 0;
    fnod.len = 640; //初始化空闲表
    free_list.push_back(fnod);

    ready_node node;
    while (scanf("%d%d%d", &node.id, &node.flag, &node.size) != EOF)
    {
        wait_list.push(node);
    }
}

//动态分区分配函数
void Alloc(ready_node node)
{
    sort(free_list.begin(), free_list.end(), cmp);
    free_node fnod;
    int ok = 0;                     //表示是否匹配成功
    vector<free_node>::iterator it;
    for (it = free_list.begin(); it != free_list.end(); ++it)
    {
        if (((*it).len) >= node.size)
        {
            //记录已占用空间
            fnod.len = node.size;
            fnod.start = (*it).start;
            fnod.id = node.id;

            used_list.push_back(fnod); //放入已占用区域表

            (*it).start += node.size;
            (*it).len -= node.size; //修改空闲区域表的信息
            if ((*it).len == 0)
            { //剩余空闲长度为0，移除这个空闲区域
                free_list.erase(it);
            }
            ok = 1; //已找到匹配
            break;
        }
    }
    if (ok == 0)
    { //证明当前进程没有匹配成功，则放入就绪队列
        ready_list.push(node);
    }
    printf("进程%d申请进入内存,内存占用大小为%dkb：\n", node.id, node.size);
    Show();
}

//回收过程函数
void Free(ready_node node)
{
    //释放内存的过程中，进程正常都会在内存中出现，这里就假设释放的进程全部合法
    free_node fnod;
    vector<free_node>::iterator it; //定义迭代器
    for (it = used_list.begin(); it != used_list.end(); ++it)
    {
        if (((*it).id) == node.id)
        { //找到撤销进程
            //回收空闲空间，并放入空闲区域白哦，此时不用记录进程号，因为好没有进程占有空间
            fnod.start = (*it).start;
            fnod.len = node.size;
            free_list.push_back(fnod); //放入空闲区域表

            (*it).len -= node.size; //修改占用区域表的信息
            if ((*it).len == 0)
            { //撤销内存后，剩余的占有空间为0，移除这个空闲区域
                used_list.erase(it);
            }
            break;
        }
    }
    printf("进程%d申请撤销,收回内存大小为%dkb：\n", node.id, node.size);
    
    Show();
    merge();    
    
}

//显示最后控制台的空想区域表的状态,输入文件中
void Print()
{
    //cout<<free_list.size()<<endl;
    sort(free_list.begin(), free_list.end(), cmp); //操作之前首先按首地址从小到大排序
    for (int i = 0; i < free_list.size(); i++)
    {
        printf("%d %d\n", free_list[i].start, free_list[i].len);
    }
}

int main()
{
    // 重定向输入输出，对文件进行操作
    freopen("input.txt", "r", stdin);
    freopen("output2.txt", "w", stdout);
    Init(); //初始化
    ready_node node;
    while (!ready_list.empty())
    {                              //首先操作第一次未匹配的进程，此队列中只有进入内存的进程，
        node = ready_list.front(); //取出队首元素
        ready_list.pop();          //出队
        Alloc(node);
    }
    while (!wait_list.empty())
    { //操作等待数列，有分配和回收两个过程
        node = wait_list.front();
        wait_list.pop();
        if (node.flag == 1)
        { //申请进入内存的进程
            Alloc(node);
        }
        else
        { //要撤出内存的进程
            Free(node);
        }
    }
    //Print();
    return 0;
}

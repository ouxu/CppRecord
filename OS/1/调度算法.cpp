#include <iostream>
#include <vector>

using namespace std;

// 定义枚举类型，保存 State
enum State {
  Ready,
  Run,
  Block,
  Finish
};

// 利用结构体存储 PCB
struct PCB {
  int id;
  int priority;
  int cpuTime;
  int allTime;
  int startBlock;
  int blockTime;
  State state;

  void setPCB(
      int _id, int _priority, int _cpuTime, int _allTime,
      int _startBlock, int _blockTime, State _state
  ) {
    id = _id;
    priority = _priority;
    cpuTime = _cpuTime;
    allTime = _allTime;
    startBlock = _startBlock;
    blockTime = _blockTime;
  }
};

// 定义 vector 容器储存三个队列
vector<PCB> ready, block, finish;
PCB run;

//sort函数，定义按不同属性排序，方便操作队列
bool prioritySortLower(PCB &m, PCB &n) {
  if (m.priority == n.priority) return m.id > n.id;
  return m.priority < n.priority;
}
bool blockSortHigher(PCB &m, PCB &n) {
  if (m.blockTime == n.blockTime) return m.id < n.id;
  return m.blockTime > n.blockTime;
}
bool idSortHigher(PCB &m, PCB &n) {
  return m.id <= n.id;
}

// 初始化函数
void init() {
  PCB _pcb;
  int priority[] = {9, 38, 30, 29, 0};
  int cpuTime[] = {0, 0, 0, 0, 0};
  int allTime[] = {3, 3, 6, 3, 4};
  int startBlock[] = {2, -1, -1, -1, -1};
  int blockTime[] = {3, 0, 0, 0, 0};
  State state[] = {Ready, Ready, Ready, Ready, Ready};

  for (int i = 0; i < 5; i++) {
    _pcb.setPCB(i, priority[i], cpuTime[i], allTime[i], startBlock[i], blockTime[i], state[i]);
    ready.push_back(_pcb);
  }
  sort(ready.begin(), ready.end(), prioritySortLower);
}

// 打印并处理当前运行进程
void runningProg() {
  if (run.id < 0 || run.id >= 5) {
    printf("RUNNINGPROG:NULL\n");
    return;
  }
  if (!run.allTime) return;
  run.priority -= 3;
  run.allTime--;
  run.cpuTime++;
  if (run.startBlock>=0) run.startBlock--;
  printf("RUNNINGPROG:%d\n", run.id);
}

//输出 ready 队列
void readyQueue() {
  printf("READY_QUEUE:");
  if (ready.empty()) printf("NULL");
  else {
    for (int i = ready.size() - 1; i >= 0; i--) {
      printf("->%d", ready[i].id);
    }
  }
  printf("\n");
}

//输出 block 队列
void blockQueue() {
  printf("BLOCK_QUEUE:");
  if (block.empty()) printf("NULL");
  else {
    for (int i = 0; i < block.size(); i++) {
      printf("->%d", block[i].id);
    }
  }
  printf("\n");
}

// 打印当前进程表
void show() {
  readyQueue();
  blockQueue();
  vector<PCB> pcb;
  int i;

  for (i = 0; i < ready.size(); i++) {
    pcb.push_back(ready[i]);
  }
  for (i = 0; i < block.size(); i++) {
    pcb.push_back(block[i]);
  }
  for (i = 0; i < finish.size(); i++) {
    pcb.push_back(finish[i]);
  }
  if (run.id >= 0 && run.id < 5) {
    pcb.push_back(run);
  }
  sort(pcb.begin(), pcb.end(), idSortHigher);

  printf("===========================================================\n");
  printf("ID        \t%d    \t%d     \t%d     \t%d   \t%d \n",
         pcb[0].id, pcb[1].id, pcb[2].id, pcb[3].id, pcb[4].id);
  printf("PRIORITY  \t%d    \t%d     \t%d     \t%d   \t%d \n",
         pcb[0].priority, pcb[1].priority, pcb[2].priority, pcb[3].priority, pcb[4].priority);
  printf("CPUTIME   \t%d    \t%d     \t%d    \t%d    \t%d \n",
         pcb[0].cpuTime, pcb[1].cpuTime, pcb[2].cpuTime, pcb[3].cpuTime, pcb[4].cpuTime);
  printf("ALLTIME   \t%d    \t%d     \t%d     \t%d   \t%d \n",
         pcb[0].allTime, pcb[1].allTime, pcb[2].allTime, pcb[3].allTime, pcb[4].allTime);
  printf("STARTBLOCK\t%d     \t%d    \t%d     \t%d    \t%d \n",
         pcb[0].startBlock, pcb[1].startBlock, pcb[2].startBlock, pcb[3].startBlock,
         pcb[4].startBlock);
  printf("BLOCKTIME\t%d     \t%d     \t%d    \t%d    \t%d \n",
         pcb[0].blockTime, pcb[1].blockTime, pcb[2].blockTime, pcb[3].blockTime, pcb[4].blockTime);
  printf("STATE     \t");
  for (i = 0; i < 5; i++) {
    if (pcb[i].state == Run)
      printf("RUN    \t");
    else if (pcb[i].state == Ready)
      printf("READY  \t");
    else if (pcb[i].state == Finish)
      printf("FINISH\t");
    else if (pcb[i].state == Block)
      printf("BLOCK  \t");
  }
  printf("\n");
}

// 更新ready队列进程
void readyUpdate() {
  for (int i = 0; i < ready.size(); ++i) {
    ready[i].priority++;
  }
}
// 更新block队列进程
void blockUpdate() {
  for (int i = 0; i < block.size(); ++i) {
    block[i].blockTime--;

    if (!block[i].blockTime) {
      //先运行阻塞队列，需要减去1，待会在就绪队列中加回
      block[i].priority--;
      block[i].state = Ready;
      ready.push_back(block[i]);
      block.erase(block.begin() + i);
    }
  }
}

int main() {
  init();   //初始化进程
  PCB _empty = run;  // 备份空的 PCB
  int times = 0;

  // 输出初始状态
  printf("初始状态:\n");
  runningProg();
  show();

  while (1) {
    //如果ready、block队列中都没有进程且没有运行中的进程则退出循环
    if (ready.empty() && block.empty() && (run.id < 0 || run.id >= 5)) break;
    if (!ready.empty()) {
      // ready 队列为 priority 升序排列，最后一项为最大
      run = ready[ready.size() - 1];
      ready.pop_back();
    } else {
      run = block[block.size() - 1];
      block.pop_back();
      sort(block.begin(), block.end(), blockSortHigher);
    }
    run.state = Run;
    times++;

    //输出打印
    printf("\n第%d个时间片后:\n", times);
    runningProg();
    blockUpdate();
    readyUpdate();
    show();

    // 根据当前运行的进程信息判断该进程的去处
    if (!run.allTime) {
      run.state = Finish;
      finish.push_back(run);
    } else if (!run.startBlock && run.allTime > 0) {
      run.state = Block;
      block.push_back(run);
    } else {
      run.state = Ready;
      ready.push_back(run);
    }
    // 每次将 ready、block队列重排序，run置空
    sort(ready.begin(), ready.end(), prioritySortLower);
    sort(block.begin(), block.end(), blockSortHigher);
    run = _empty;
  }
  printf("\n模拟进程调度算法结束!\n");
  return 0;
}

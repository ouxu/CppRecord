#include <iostream>
#include <vector>
using namespace std;

struct Free
{
  int start; //首地址
  int len;   //长度

  void set(int _start, int _len)
  {
    start = _start;
    len = _len;
  }
  void use(int _len)
  {
    start = start + _len;
    len = len - _len;
  }
  void release(int _len)
  {
    len = len + _len;
  }
};

struct Busy
{
  int id;
  int start;
  int len;

  void set(int _id, int _start, int _len)
  {
    id = _id;
    start = _start;
    len = _len;
  }
  void use(int _start)
  {
    start = _start;
  }
};

vector<Free> freeArr;
vector<Busy> busyArr;

void init()
{
  freeArr.clear();
  busyArr.clear();
  Free _free;
  _free.set(0, 640);
  freeArr.push_back(_free);
}

void merge()
{
}
bool apply(Busy _busy)
{
  int i = 0;
  while (i < freeArr.size())
  {
    if (_busy.len <= freeArr[i].len)
    {
      _busy.use(freeArr[i].start);
      freeArr[i].use(_busy.len);
      return true;
    }
    i++;
  }
  return false;
}

void release(Busy _busy)
{
  int i = 0;
  while (i < freeArr.size())
  {
    if (_busy.start < freeArr[i].start)
    {
      if (i == 0)
      {
        Free _free;
        _free.set(_busy.start, _busy.len);
        freeArr.insert(freeArr.begin(), _free);
        busyArr.erase()
      }
    }
    i++;
  }
}
int main()
{
  return 0;
}
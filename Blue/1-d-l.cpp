# include<iostream>
# include<cstring>
# include<queue>

using namespace std;

const int MAXN = 100000;

bool vis[MAXN+5];

struct node
{
	int pos, step;
};

queue <node> q;

bool judge(int x)
{
	if (x<0 || x>MAXN || vis[x])
		return false;
	return true;
}

int bfs(int st,int ed)
{
	struct node t, nxt;

	t.pos = st;
	t.step = 0;
	vis[st] = 1;

	q.push(t);

	while (!q.empty())
	{
		t = q.front();
		q.pop();

		if (t.pos == ed)
			return t.step;

		nxt.pos = t.pos + 1;
		if (judge(nxt.pos))
		{
			nxt.step = t.step + 1;
			vis[nxt.pos] = 1;
			q.push(nxt);
		}

		nxt.pos = t.pos - 1;
		if (judge(nxt.pos))
		{
			nxt.step = t.step + 1;
			vis[nxt.pos] = 1;
			q.push(nxt);
		}

		nxt.pos = t.pos*2;
		if (judge(nxt.pos))
		{
			nxt.step = t.step + 1;
			vis[nxt.pos] = 1;
			q.push(nxt);
		}
	}
	return -1;
}

int main()
{
	int st, ed;

	while (cin >> st >> ed)
	{
		memset(vis, 0, sizeof(vis));
		while (!q.empty())
			q.pop();

		cout << bfs(st, ed) << endl;
	}

	return 0;
}

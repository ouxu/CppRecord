# include<iostream>

using namespace std;

const int MAXN = 105;

char m[MAXN][MAXN];
int book[MAXN][MAXN] = {0};
int cnt = 0;
int dir[8][2] = { { 1, 1 }, { 1, -1 }, { -1, 1 }, { -1, -1 }, { 0, 1 }, { 0, -1 }, { 1, 0 }, {-1,0} };

int N, M;

bool judge(int x, int y)
{
	if (1 <= x&&x <= N && 1 <= y&&y <= M)
		if (book[x][y] == 0)
			if (m[x][y] == 'W')
				return true;
	return false;

}

void dfs(int x,int y,int depth)
{
	
	for (int i = 0; i < 8; i++)
	{
		int tx = x + dir[i][0];
		int ty = y + dir[i][1];

		if (judge(tx, ty))
		{
			book[tx][ty] = 1;
			dfs(tx, ty, depth + 1);
		}
	}

	return;
}

int main()
{
	cin >> N >> M;

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
		{
			cin >> m[i][j];
		}

	for (int i = 1; i <= N; i++)
		for (int j = 1; j <= M; j++)
		{
			
			if (judge(i, j))
			{
				dfs(i, j, 0);
				cnt++;
			}
		}

	cout << cnt << endl;



	return 0;
}

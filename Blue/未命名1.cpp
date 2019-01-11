# include<iostream>
# include<stack>
# include<cstdio>
# include<string>
# include<cstring>

using namespace std;

string source;
string target;
char solution[200];
bool flag = false;

char s[200];
int top=1;

void print(int depth)
{
	for (int i = 0; i < depth-1; i++)
	{
		if (i == 0)
			cout << solution[i];
		else
			cout<<" "<< solution[i];
	}
	cout << endl;
}

void dfs(int npush, int npop,int depth)
{
	if (npush == target.length()&& npop == target.length())
	{
		print(depth);
		return;
	}
	if (npush < target.length())
	{
		solution[depth-1] = 'i';
		s[top++]=target[npush];
		dfs(npush + 1, npop, depth + 1);
		top--;
	}
	if (top>0 && target[npop] == s[top-1])
	{
		solution[depth-1] = 'o';
		char temp = s[top-1];
		top--;
		dfs(npush,npop+1,depth+1);
		s[top++]=temp;
	}
	return;
}


int main()
{
	while(cin>>source>>target)
	{
	
	
		top=1;
	
		cout << "[" << endl;
		if (target.length() == source.length())
		{
			dfs(0,0,1);
		}
		cout << "]" << endl;
	}

	return 0;
}





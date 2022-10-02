#include<iostream>
#include<stack>
#include<cmath>
using namespace std;

int postEval(string s)
{
	stack<int> st;
	for(int i=0; i<s.length(); i++)
	{
		if(s[i]>='0'&&s[i]<='9')
		{
			st.push(s[i]-'0');
		}
		else
		{
			int o1=st.top();
			st.pop();
			int o2=st.top();
			st.pop();
			
			switch(s[i])
			{
				case '+':
					st.push(o1+o2);
					break;
					
				case '-':
					st.push(o1-o2);
					break;
					
				case '*':
					st.push(o1*o2);
					break;
					
				case '/':
					st.push(o1/o2);
					break;
					
				case '^':
					st.push(pow(o1,o2));
					break;
			}
		}
	}
	return st.top();
}
int main()
{
	string s;
	cout<<"postfix expression= ";
	cin>>s;
	int ans;
	ans=postEval(s);
	cout<<"ans expression= "<<ans;
	return 0;
}
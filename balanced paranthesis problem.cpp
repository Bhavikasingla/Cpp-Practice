#include<iostream>
#include<stack>
using namespace std;

string convert(string infix)
{
	string balanced=" ";
	int i=0;
	stack<int> s;
	while(infix[i]!='\0')
	{
		if(infix[i]=='('||infix[i]=='['||infix[i]=='{')
		{
			s.push(infix[i]);
			i++;
		}
		else if(infix[i]==')')
		{
			if(s.top()=='(')
			{
				i++;
				s.pop();
			}
			else
			{
				cout<<"not balanced: '(' bracket"<<endl;
				i++;
				break;
			}
		}
		else if(infix[i]=='}')
		{
			if(s.top()=='{')
			{
				i++;
				s.pop();
			}
			else
			{
				cout<<"not balanced '{' bracket "<<endl;
				i++;
				break;
			}
		}
		else if(infix[i]==']')
		{
			if(s.top()=='[')
			{
				i++;
				s.pop();
			}
			else
			{
				cout<<"not balanced '[' bracket "<<endl;
				i++;
				break;
			}
		}
		else
		{
			i++;
		}
		
	}
	if(!s.empty())
	{
		cout<<"not balanced i.e. stack is not empty"<<endl;
		while(!s.empty())
	    {
		balanced+=s.top();
		s.pop();
	    }
	return balanced;
	}
	else
	{
		cout<<"balanced and stack is empty"<<endl;
	}
	return balanced;
}

int main()
{
	string infix;
	cout<<"infix expression= ";
	cin>>infix;
	string balanced;
	balanced=convert(infix);
	cout<<"unbalanced brackets left are= "<<balanced;
	return 0;
}
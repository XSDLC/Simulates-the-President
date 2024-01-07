#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "是否开始游戏:" ;
	string jeiguo1;
	int jeiguo2;
	cin >> jeiguo1;
	int fandui;
	int quanli;
	int chouheng;
	int hai2();
	{
		if (jeiguo1=="y")
		{
			fandui = 0;
			quanli = 10;
			chouheng = 0;

			cout << "游戏背景：这是一个财阀主权的年代，你，被国家最大的财阀推举，成为国家了的总统"<<endl;
			cout << "游戏目标：活下去，最后彻底掌权除掉财阀。注：注意反对值、权力值、仇恨值";
			cout << endl;
			cout << "游戏开始" << endl;
			cout << "初始值：" << endl << "1,反对值：" << fandui << endl << "2,权力值：" << quanli << endl << "3,仇恨值：" << chouheng << endl;
			cout << "你上位了，在宣誓仪式上你要说什么?";
			cout << endl << "选项：" <<endl << "1.说些好话" << endl  << "2.大骂财阀" << endl <<"3.正常说" << endl << "答案：";
			cin >> jeiguo2;
			if (jeiguo2 == 1);
			{
				cout << "反对值加一 权力值减一 仇恨值加一" << endl;
				fandui += 1;
				quanli =quanli -1;
				chouheng += 1;
				cout << "现在值：" << endl << "1,反对值：" << fandui << endl << "2,权力值：" << quanli << endl << "3,仇恨值：" << chouheng;
				cout << endl;
				cout << "原因：扶持你的财阀比较低调，不喜欢在公共场合出面";
			}
			
			
		
			
		}
	}

}

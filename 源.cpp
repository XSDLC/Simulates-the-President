#include<iostream>
#include<string>
using namespace std;
int main()
{
	cout << "�Ƿ�ʼ��Ϸ:" ;
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

			cout << "��Ϸ����������һ���Ʒ���Ȩ��������㣬���������ĲƷ��ƾ٣���Ϊ�����˵���ͳ"<<endl;
			cout << "��ϷĿ�꣺����ȥ����󳹵���Ȩ�����Ʒ���ע��ע�ⷴ��ֵ��Ȩ��ֵ�����ֵ";
			cout << endl;
			cout << "��Ϸ��ʼ" << endl;
			cout << "��ʼֵ��" << endl << "1,����ֵ��" << fandui << endl << "2,Ȩ��ֵ��" << quanli << endl << "3,���ֵ��" << chouheng << endl;
			cout << "����λ�ˣ���������ʽ����Ҫ˵ʲô?";
			cout << endl << "ѡ�" <<endl << "1.˵Щ�û�" << endl  << "2.����Ʒ�" << endl <<"3.����˵" << endl << "�𰸣�";
			cin >> jeiguo2;
			if (jeiguo2 == 1);
			{
				cout << "����ֵ��һ Ȩ��ֵ��һ ���ֵ��һ" << endl;
				fandui += 1;
				quanli =quanli -1;
				chouheng += 1;
				cout << "����ֵ��" << endl << "1,����ֵ��" << fandui << endl << "2,Ȩ��ֵ��" << quanli << endl << "3,���ֵ��" << chouheng;
				cout << endl;
				cout << "ԭ�򣺷�����ĲƷ��Ƚϵ͵�����ϲ���ڹ������ϳ���";
			}
			
			
		
			
		}
	}

}

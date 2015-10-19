#include <string>
#include <iostream>
#include <strstream>
#include <fstream>
#include <iomanip>
#include <ctime>
#include <cstdlib>
#include "BankBook.h"

using namespace std;


int main()
{
	void showAccountInterface();
	cout<<"请输入个人账户数据文件存储的路径:( 如“D:\\stl\\”，注意文件路径必须存在！):"<<endl;
	string route;
	cin>>route;
	BankBook theBankBook(route);
	int choice;
	while(true)
	{
		showAccountInterface();
		cin>>choice;
		switch(choice)
		{
		case 1:
			theBankBook.enterPersonalAccount();
			break;
		case 2:
			theBankBook.createNewPersonalAccount();
			break;
		case 0:
			exit(0);
		default:
			cout<<"输入指令错误! 请重试!"<<endl;
			break;
		}
	}
	return 0;
}
void showAccountInterface()
{
	cout<<"###  1.进入个人账户    ###\n"
		<<"###  2.创建一个新账户  ###\n"
		<<"     0.退出程序\n"
		<<"\n请选择功能:"<<endl;
}

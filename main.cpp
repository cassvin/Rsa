#include "rsa.h"
#include <iostream>

using namespace std;

int main(void)
{
	Rsa rsa;
	Key key = rsa.produce_keys();
	cout << "经过加密得出的各钥匙如下："<< endl;
	cout << "公钥：" << key.pkey << endl;
	cout << "加密密钥：" << key.ekey << endl;
	cout << "解密密钥：" << key.dkey << endl;
	long msg;
	cout << "请输入要加密的信息（数字，不能过大）：" << endl;
	cin >> msg;
	long msg_des = rsa.endecrypt(msg, key.ekey, key.pkey);
	cout << "加密后信息为：" << msg_des << endl;
	msg_des = rsa.endecrypt(msg_des, key.dkey, key.pkey);
	cout << "解密后信息为：" << msg_des << endl;
	return 0;
}

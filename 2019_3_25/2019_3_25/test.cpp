#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//using namespace std;
//int i = 1;
//class MyCls{
//public:
//	MyCls() :m_nFor(m_nThd), m_nSec(i++), m_nFir(i++), m_nThd(i++){
//		m_nThd = i;
//	}
//	void echo(){
//		cout << "result:" << m_nFir + m_nSec + m_nThd + m_nFor << endl;
//	}
//private:
//	int m_nFir;
//	int m_nSec;
//	int m_nThd;
//	int &m_nFor;
//};
//int main()
//{
//	MyCls oCls;
//	oCls.echo();
//	return 0;
//}
//


//运算符重载

//解释：
//(1)只能使用成员函数重载的运算符有： = 、()、[]、->、new、delete。
//(2)单目运算符最好重载为成员函数。
//(3) 对于复合的赋值运算符如 += 、 -= 、 *= 、 /= 、 &= 、 != 、~= 、 %= 、 >>= 、 <<= 建议重载为成员函数。
//(4) 对于其它运算符，建议重载为友元函数。
//运算符重载的方法是定义一个重载运算符的函数，在需要执行被重载的运算符时，系统就自动调用该函数，以实现相应的运算。也就是说，运算符重载是通过定义函数实现的。运算符重载实质上是函数的重载。重载运算符的函数一般格式如下：
//
//函数类型 operator 运算符名称 (形参表列)
//{
//	对运算符的重载处理
//}
//
//重载为类成员函数时参数个数 = 原操作数个数 - 1（后置++、--除外）
//重载为友元函数时 参数个数 = 原操作数个数，且至少应该有一个自定义类型的形参
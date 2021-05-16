// HelloWorld_CMake.cpp: 定义应用程序的入口点。
//

#include "HelloWorld_CMake.h"
#include "../CMakeStatic/CMakeStatic.h"

using namespace std;

int main()
{
	cout << "Hello CMake." << endl;
	MyClass a;
	cout << a.SayHello() << endl;
	return 0;
}

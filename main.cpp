#include<iostream>

class Fibonacci {
public:
	int cal[201]; //数组存过程数据
	int of(int n);  //取数函数
	void calculator(int k);
};

void Fibonacci::calculator(int k) {
	int count = 2;
	cal[0] = 0; cal[1] = 1;
	while (k > 1 && count <= k) {
		cal[count] = cal[count - 1] + cal[count - 2];
		count++;
	}
}
int Fibonacci::of(int n) {
	return cal[n];
}

int main() {
	Fibonacci fibonacci;
	fibonacci.calculator(200);
	for (int i = 1; i <= 200; i++)
	{
		std::cout << fibonacci.of(i)<<std::endl;
	}
	return 0;
}
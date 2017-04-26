#include <iostream>
#include <vector>
#include <numeric>
#include<limits>

using namespace std;


/*请完成下面这个函数，实现题目要求的功能*/
/*当然，你也可以不按照下面这个模板来作答，完全按照自己的想法来 ^-^ */
/******************************开始写代码******************************/
double date (int N) {
    float sum = 0.0f;
    for (int i = N; i > 0; --i) {
        sum += N * (1.0 / i); 
    }
    
    return sum;

}
/******************************结束写代码******************************/


int main() {
    double res;
	int N;
	cin >> N;
    
	
    res = date (N);
printf ("%.4f", res);
    
    return 0;

}

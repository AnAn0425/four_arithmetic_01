#include <iostream>

int main() {
    int n;

    // 输入 n 的值
    std::cout << "请输入 n 的值: ";
    std::cin >> n;

    // 输出乘法表
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            std::cout << i * j << "\t"; // 使用制表符格式化输出
        }
        std::cout << std::endl; // 每行结束后换行
    }

    return 0;
}

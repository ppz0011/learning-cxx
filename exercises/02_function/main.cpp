/*
 * @Author: ppz 2398672726@qq.com
 * @Date: 2024-12-15 15:17:29
 * @LastEditors: ppz 2398672726@qq.com
 * @LastEditTime: 2024-12-15 15:26:58
 * @FilePath: \learning-cxx\exercises\02_function\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "../exercise.h"

// READ: 声明 <https://zh.cppreference.com/w/cpp/language/declarations>
// NOTICE: cppreference 中的示例中指出了复杂声明的解读法，建议认真阅读。
// NOTICE: 补充由内而外读法的机翻解释 <https://learn.microsoft.com/zh-cn/cpp/c-language/interpreting-more-complex-declarators?view=msvc-170>

// TODO: 在这里声明函数
int add(int, int);


int main(int argc, char **argv) {
    ASSERT(add(123, 456) == 123 + 456, "add(123, 456) should be 123 + 456");

    auto x = 1, y = 2;
    std::cout << x << " + " << y << " = " << add(x, y) << std::endl;
    return 0;
}

int add(int a, int b) {
    // TODO: 补全函数定义，但不要移动代码行
    return a + b;
}

/*
 * @Author: ppz 2398672726@qq.com
 * @Date: 2024-12-15 15:17:29
 * @LastEditors: ppz 2398672726@qq.com
 * @LastEditTime: 2024-12-27 17:57:52
 * @FilePath: \learning-cxx\exercises\20_function_template\main.cpp
 * @Description: 这是默认设置,请设置`customMade`, 打开koroFileHeader查看配置 进行设置: https://github.com/OBKoro1/koro1FileHeader/wiki/%E9%85%8D%E7%BD%AE
 */
#include "../exercise.h"

// READ: 函数模板 <https://zh.cppreference.com/w/cpp/language/function_template>
// TODO: 将这个函数模板化
template<typename T>
T plus(T a, T b) {
    return a + b;
}

double epslion = 1e-6;

int main(int argc, char **argv) {
    ASSERT(plus(1, 2) == 3, "Plus two int");
    ASSERT(plus(1u, 2u) == 3u, "Plus two unsigned int");

    // THINK: 浮点数何时可以判断 ==？何时必须判断差值？
    //std::cout << "plus(1.25f, 2.5f) = " << plus(1.25f, 2.5f) << std::endl;
    ASSERT(plus(1.25f, 2.5f) == 3.75f, "Plus two float");
    ASSERT(plus(1.25, 2.5) == 3.75, "Plus two double");
    // TODO: 修改判断条件使测试通过
    ASSERT(std::abs(plus(0.1, 0.2) - 0.3) < epslion, "How to make this pass?");

    return 0;
}

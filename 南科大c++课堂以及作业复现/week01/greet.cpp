#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) 
{
    // argc 代表参数个数。程序名本身算 1 个，所以 argc < 2 说明没传名字
    if (argc < 2) 
    {
        cout << "报错啦！你得告诉我你的名字。" << endl;
        cout << "正确用法: " << argv[0] << " [你的名字]" << endl;
        return 1; // 返回 1 表示程序运行异常
    }

    // argv[1] 是你输入的第一个参数
    string name = argv[1]; 
    cout << "嘿，" << name << "！很高兴认识你。" << endl;

    return 0; // 返回 0 表示程序运行成功
}
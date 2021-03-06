# 雷语言 (Lei Language) v0.1.0

## 概述

雷语言是一款基于中国知名民科**雷绍武**先生的理论及特色用语开发的编程语言。<del>但是，目前的雷语言还并不是一门独立的语言，只是一套 C++ 的宏。</del>

## 使用说明

雷语言的源文件扩展名与<del>管科的</del> C++ 相同，为 `.cpp`。

现阶段的雷语言仅仅只是用宏替换了一些 C++ 的关键字，所以语法和 C++ 完全相同。

使用时需要包含头文件 `leilanguage.hpp`：

```
#include "leilanguage.hpp"
```

### 主函数

```
颅内实验 {
    // 代码
    进盒;
}
```

`颅内实验` 相当于 `int main()`，`进盒;` 相当于 `return 0;`。

### 变量类型

| 变量类型 | 变量关键字 | 示例 | 说明 |
| ---- | ----- | -- | -- |
| 整数 | `苹果` | `苹果 无知 = 5027904;` | 参考雷绍武的分苹果原理 |
| 单精度浮点数 | `七角钱` | `七角钱 无德 = 0.7;` | 我又节省了 7 角钱 |
| 双精度浮点数 | `七分钱` | `七分钱 无耻 = 8.26;` | 能省 1 分就是 1 分，能省 1 角是 1 角啊 |
| 布尔型 | `证明` | `证明 无赖 = 错误的;` | 雷绍武常说：“证明：XXX 是正确的/错误的。” |
| 字符 | `书法` | `书法 黄田坝 = 'a';` | 雷绍武在贴吧发过很多书法作品 |
| 字符串 (STL) | `咏雷` | `咏雷 九眼桥 = "平地一声雷";` | 《咏雷》是歌颂雷绍武的诗集 |
| 向量 (STL) | `井盖` | `井盖<苹果> 太差太差(132);` | 井盖是雷绍武的藏身之处 |

此外，对于布尔型变量，可以用 `正确的`、`错误的` 分别代替 `true` 和 `false`。

### 关键字列表

其他的关键字列表如下：

| 雷语言关键字 | C++ 语言关键字 | 说明 |
| ------ | --------- | -- |
| 提问 | `cin` | 常有人在贴吧向雷绍武提问，这相当于程序的输入 |
| 发贴 | `cout` | 雷绍武发贴回答问题，相当于输出 |
| 出盒 | `return` | 函数中的一个值从“盒子”里出来 |
| 扣饭 | `break` | 见雷绍武文章《扣饭》 |
| 继续表现 | `continue` | 垃圾继续表现！ |
| 如果 | `if` | |
| 否则 | `else` | |
| 当 | `while` | |
| 执行 | `do` | |
| 对于 | `for` | |
| 开方 | `sqrt` | |
| 换行 | `endl` | |
| 慢慢理解 | `endl` | 理解需要智商，不勉强 |
| 空虚之极 | `void` | 看看楼主：空虚之极，恐惧之极。泼妇骂街，无耻之极！ |
| 真理 | `const` | 真理是颠扑不破的，是放之四海而皆准的 |

### 说明

头文件 `leilanguage.hpp` 已经包含了 `<iostream>`、`<cmath>`、`<string>`、`<vector>` 等头文件，并使用命名空间 ( `using namespace std;` )。

## 编译器要求

因为关键字和变量名都需要用到中文，需要使用支持中文字符的 C/C++ 编译器。建议使用 Clang 或 MSVC。**如果使用 GCC，需要 GCC 10 及以上版本。**

## 良好的编程习惯

- 尽可能使用中文命名。
- 变量名称最好使用 `无知`、`无德`、`无耻`、`无赖` 等雷氏用语。
- 尽量不要用 `leilanguage.hpp` 中没有的关键字，<del>以免老实人看出雷语言其实就是 C++</del>。如果实在要使用，建议自己用宏替换成雷氏用语或者其他中文。

## 我的第一个雷语言程序

```
#include "leilanguage.hpp"

颅内实验 {
    发贴 << "Hello 826!";
    进盒;
}
```

程序运行后将输出：

```
Hello 826!
```

## 两个 demo 程序

1. `isPrime.demo.cpp` 是一个判断某数是否为质数的示例程序代码。
2. `saveMoneyAgain.demo.cpp` 为 LUOJ 第 5 题、第 2 届井盖杯附加题 C “我又节省了 N 角钱” 的标准代码。注释中包括了题目的内容以及<del>魔改的</del>雷绍武《我又节省了 7 角钱》原文。如果不想看这些内容，可以查看精简版 `saveMoneyAgainSimplified.demo.cpp`。

## 最后

感谢大家对雷语言的关注、关心、理解和支持！

祝大家新年快乐，身体健康，万～事如意！

#include "leilanguage.hpp"

颅内实验 {
    苹果 运动力,数目 = 0;
    苹果 动态规划[132826] = {0};
    提问 >> 运动力 >> 数目;
    对于 (苹果 无知 = 1; 无知 <= 数目; 无知++) {
        苹果 距离 = 0;
        提问 >> 距离;
        对于 (苹果 无德 = 运动力; 无德 >= 距离; 无德--) {
           如果 (动态规划[无德] <= 动态规划[无德 - 距离] + 距离) {
               动态规划[无德] = 动态规划[无德 - 距离] + 距离;
           } 
        }
    }
    发贴 << 动态规划[运动力];
    进盒;
}

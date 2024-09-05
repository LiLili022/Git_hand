// #include "algorithm.h"
#include "algorithm2.h"

int main() {
    int numParticles = 50;  // 粒子数量
    int numDimensions = 5;  // 参数数量
    double minPosition = -10.0;  // 位置下限
    double maxPosition = 10.0;  // 位置上限
    double w = 0.5;  // 惯性权重
    double c1 = 2.0;  // 自我认知系数
    double c2 = 2.0;  // 社会认知系数
    int maxIterations = 100;  // 最大迭代次数

    std::vector<double> idealCurve = {1.0, 2.0, 3.0, 4.0, 5.0};  // 理想曲线的参数

    particleSwarmOptimization(numParticles, numDimensions, minPosition, maxPosition, w, c1, c2, maxIterations, idealCurve);

    return 0;
}
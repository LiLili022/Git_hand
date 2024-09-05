#include <iostream>
#include <vector>
#include <random>
#include <cmath>

// 目标函数，这里以简单的二次函数为例
double objectiveFunction(double x) {
    // 计算函数值
    return -x * x + 5 * x;
}

class Particle {
public:
    double position;  // 粒子的当前位置
    double velocity;  // 粒子的当前速度
    double bestPosition;  // 粒子自身经历的最优位置
    double bestFitness;  // 粒子自身经历的最优适应度值

    // 构造函数，初始化粒子的位置、速度等
    Particle() {
        std::random_device rd;  // 用于获取随机数种子
        std::mt19937 gen(rd());  // 随机数生成器
        std::uniform_real_distribution<> dis(-10, 10);  // 生成 -10 到 10 之间的均匀分布

        position = dis(gen);  // 随机初始化粒子位置
        velocity = 0;  // 初始速度为 0
        bestPosition = position;  // 初始时自身最优位置即为当前位置
        bestFitness = objectiveFunction(position);  // 计算并记录初始适应度值
    }

    // 更新粒子位置
    void updatePosition() {
        position += velocity;  // 位置根据速度进行更新
    }

    // 更新粒子速度
    void updateVelocity(double globalBestPosition, double w, double c1, double c2) {
        std::random_device rd;  // 用于获取新的随机数种子
        std::mt19937 gen(rd());  // 新的随机数生成器
        std::uniform_real_distribution<> dis(0, 1);  // 生成 0 到 1 之间的均匀分布

        double r1 = dis(gen);  // 生成第一个随机数
        double r2 = dis(gen);  // 生成第二个随机数

        // 计算速度更新的认知部分（自身经验）
        double cognitiveComponent = c1 * r1 * (bestPosition - position);
        // 计算速度更新的社会部分（群体经验）
        double socialComponent = c2 * r2 * (globalBestPosition - position);

        // 综合惯性权重、认知部分和社会部分更新速度
        velocity = w * velocity + cognitiveComponent + socialComponent;
    }
};

// 粒子群优化算法的主函数
void particleSwarmOptimization(int numParticles, int numIterations, double w, double c1, double c2) {
    std::vector<Particle> particles(numParticles);  // 创建粒子群

    double globalBestFitness = particles[0].bestFitness;  // 初始化全局最优适应度值
    double globalBestPosition = particles[0].bestPosition;  // 初始化全局最优位置

    // 找出初始时全局最优的粒子
    for (int i = 1; i < numParticles; ++i) {
        if (particles[i].bestFitness > globalBestFitness) {
            globalBestFitness = particles[i].bestFitness;
            globalBestPosition = particles[i].bestPosition;
        }
    }

    // 迭代优化过程
    for (int iteration = 0; iteration < numIterations; ++iteration) {
        printf("iteration %d : \n", iteration);
        int i = 1;
        for (Particle& particle : particles) {
            // 更新粒子速度
            particle.updateVelocity(globalBestPosition, w, c1, c2);
            // 更新粒子位置
            particle.updatePosition();

            double fitness = objectiveFunction(particle.position);  // 计算当前位置的适应度值

            // 如果当前适应度值优于自身最优，更新自身最优
            if (fitness > particle.bestFitness) {
                particle.bestFitness = fitness;
                particle.bestPosition = particle.position;
            }

            // 如果当前适应度值优于全局最优，更新全局最优
            if (fitness > globalBestFitness) {
                globalBestFitness = fitness;
                globalBestPosition = particle.position;
            }

            printf("%d : position = %f , velocity = %f , bestPosition = %f , bestFitness = %f\n", i,
                 particle.position, particle.velocity, particle.bestPosition, particle.bestFitness);
            ++i;
        }
        printf("globalBestFitness = %f \n globalBestPosition = %f \n", globalBestFitness, globalBestPosition);
    }

    // 输出最终的全局最优位置和适应度值
    std::cout << "Best position: " << globalBestPosition << ", Best fitness: " << globalBestFitness << std::endl;
}

// int main() {
//     int numParticles = 20;  // 粒子数量
//     int numIterations = 100;  // 迭代次数
//     double w = 0.5;  // 惯性权重
//     double c1 = 2.0;  // 认知系数
//     double c2 = 2.0;  // 社会系数

//     particleSwarmOptimization(numParticles, numIterations, w, c1, c2);  // 调用优化函数

//     return 0;
// }
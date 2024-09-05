#include <iostream>
#include <vector>
#include <random>
#include <cmath>

// 定义粒子类
class Particle {
public:
    std::vector<double> position;  // 粒子的位置
    std::vector<double> velocity;  // 粒子的速度
    std::vector<double> bestPosition;  // 粒子的历史最优位置
    double bestFitness;  // 粒子的历史最优适应度

    // 初始化粒子
    Particle(int dimensions, double minPosition, double maxPosition) {
        position.resize(dimensions);
        velocity.resize(dimensions);
        bestPosition.resize(dimensions);

        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_real_distribution<double> dis(minPosition, maxPosition);

        for (int i = 0; i < dimensions; ++i) {
            position[i] = dis(gen);
            velocity[i] = 0.0;
            bestPosition[i] = position[i];
        }

        bestFitness = std::numeric_limits<double>::max();
    }
};

// 计算适应度（这里假设适应度是与理想曲线的拟合误差）
double fitnessFunction(const std::vector<double>& position, const std::vector<double>& idealCurve) {
    double error = 0.0;
    for (size_t i = 0; i < position.size(); ++i) {
        error += std::pow(position[i] - idealCurve[i], 2);
    }
    return std::sqrt(error);
}

// 粒子群优化算法
void particleSwarmOptimization(int numParticles, int numDimensions, double minPosition, double maxPosition,
                              double w, double c1, double c2, int maxIterations, std::vector<double>& idealCurve) {
    // std::vector<Particle> particles(numParticles);
    std::vector<Particle> particles;

    // 初始化粒子群
    for (int i = 0; i < numParticles; ++i) {
        // particles[i] = Particle(numDimensions, minPosition, maxPosition);
        particles.emplace_back(Particle(numDimensions, minPosition, maxPosition));
    }

    // 全局最优位置和适应度
    std::vector<double> globalBestPosition(numDimensions);
    double globalBestFitness = std::numeric_limits<double>::max();

    for (int iteration = 0; iteration < maxIterations; ++iteration) {
        for (int i = 0; i < numParticles; ++i) {
            // 计算当前粒子的适应度
            double currentFitness = fitnessFunction(particles[i].position, idealCurve);

            // 更新个体最优
            if (currentFitness < particles[i].bestFitness) {
                particles[i].bestFitness = currentFitness;
                particles[i].bestPosition = particles[i].position;
            }

            // 更新全局最优
            if (currentFitness < globalBestFitness) {
                globalBestFitness = currentFitness;
                globalBestPosition = particles[i].position;
            }

            // 更新速度和位置
            for (int j = 0; j < numDimensions; ++j) {
                double r1 = static_cast<double>(rand()) / RAND_MAX;
                double r2 = static_cast<double>(rand()) / RAND_MAX;

                double inertiaTerm = w * particles[i].velocity[j];
                double cognitiveComponent = c1 * r1 * (particles[i].bestPosition[j] - particles[i].position[j]);
                double socialComponent = c2 * r2 * (globalBestPosition[j] - particles[i].position[j]);

                particles[i].velocity[j] = inertiaTerm + cognitiveComponent + socialComponent;

                // 限制速度在合理范围
                if (particles[i].velocity[j] > (maxPosition - minPosition) / 2) {
                    particles[i].velocity[j] = (maxPosition - minPosition) / 2;
                } else if (particles[i].velocity[j] < -(maxPosition - minPosition) / 2) {
                    particles[i].velocity[j] = -(maxPosition - minPosition) / 2;
                }

                particles[i].position[j] += particles[i].velocity[j];

                // 限制位置在搜索空间内
                if (particles[i].position[j] > maxPosition) {
                    particles[i].position[j] = maxPosition;
                } else if (particles[i].position[j] < minPosition) {
                    particles[i].position[j] = minPosition;
                }
            }
        }
    }

    // 输出最终结果
    std::cout << "Best parameters: ";
    for (const auto& param : globalBestPosition) {
        std::cout << param << " ";
    }
    std::cout << std::endl;
}

// int main() {
//     int numParticles = 50;  // 粒子数量
//     int numDimensions = 5;  // 参数数量
//     double minPosition = -10.0;  // 位置下限
//     double maxPosition = 10.0;  // 位置上限
//     double w = 0.5;  // 惯性权重
//     double c1 = 2.0;  // 自我认知系数
//     double c2 = 2.0;  // 社会认知系数
//     int maxIterations = 100;  // 最大迭代次数

//     std::vector<double> idealCurve = {1.0, 2.0, 3.0, 4.0, 5.0};  // 理想曲线的参数

//     particleSwarmOptimization(numParticles, numDimensions, minPosition, maxPosition, w, c1, c2, maxIterations, idealCurve);

//     return 0;
// }
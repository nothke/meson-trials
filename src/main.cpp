#include <btBulletDynamicsCommon.h>
#include <iostream>

int main() {
    // Generate a basic physics world:
    btDefaultCollisionConfiguration config;
    btCollisionDispatcher dispatcher(&config);
    btDbvtBroadphase broadphase;
    btSequentialImpulseConstraintSolver solver;
    btDiscreteDynamicsWorld world(&dispatcher, &broadphase, &solver, &config);

    // Do a couple of simulation ticks:
    for (size_t i = 0; i < 100; i++)
    {
        world.stepSimulation(0.1f);
    }

    std::cout << "It works!\n";
    return 0;
}
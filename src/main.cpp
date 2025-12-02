#include <iostream>
//#include <spdlog/spdlog.h>
#include <spdlog/spdlog.h>
//#include "spdlog/sinks/stdout_color_sinks.h"

#include <btBulletDynamicsCommon.h>

int main()
{
    std::cout << "Wat??\n"
              << std::flush;

    //auto console_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
    // console_sink->set_level(spdlog::level::info);
    // auto logger = std::make_shared<spdlog::logger>("my_logger", console_sink);
    // spdlog::register_logger(logger);

    std::cout << "Wat??\n"
              << std::flush;
    std::cerr << "Error ..?\n";

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
    int myFavNum = 4;
    spdlog::info("Something to info about with a number: {}", myFavNum);
    // spdlog::warn("Wat?");
    return 0;
}
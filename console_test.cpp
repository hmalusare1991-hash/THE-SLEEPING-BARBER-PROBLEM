#include "Simulation.h"
#include "Validation.h"
#include <iostream>

int main() {
    std::cout << ">>> Running Sleeping Barber Simulation (Semaphore Test) <<<\n\n";

    SimulationConfig config;
    config.numChairs = 3;
    config.totalCustomers = 8;
    config.cutDurationMs = 150;
    config.arrivalIntervalMs = 70;

    Simulation sim(config, Simulation::AlgorithmType::Semaphore);
    sim.start();
    sim.join();

    Validation::validate(config, sim.getMetrics());

    return 0;
}

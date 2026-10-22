#pragma once

struct SimulationConfig {
    int numChairs = 3;             // Waiting room capacity
    int totalCustomers = 10;       // Total customers to simulate
    int cutDurationMs = 200;       // Time to perform a haircut
    int arrivalIntervalMs = 150;   // Interval between customer arrivals
};

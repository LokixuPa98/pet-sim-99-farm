// coins.cpp — part of pet-sim-99-farm.

#include "petsim99farm/coins.h"

#include <cstdio>

namespace petsim99farm {

Coins::Coins(const std::string& config_path)
    : config_path_(config_path) {}

void Coins::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Coins::run() {
    if (verbose_) std::fprintf(stderr, "[pet-sim-99-farm] coins: run\n");
    // core logic lives here
    return true;
}

}  // namespace petsim99farm

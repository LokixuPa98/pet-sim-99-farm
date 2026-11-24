// rare.cpp — part of pet-sim-99-farm.

#include "petsim99farm/rare.h"

#include <cstdio>

namespace petsim99farm {

Rare::Rare(const std::string& config_path)
    : config_path_(config_path) {}

void Rare::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Rare::run() {
    if (verbose_) std::fprintf(stderr, "[pet-sim-99-farm] rare: run\n");
    // core logic lives here
    return true;
}

}  // namespace petsim99farm

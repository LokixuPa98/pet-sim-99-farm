// hatch.cpp — part of pet-sim-99-farm.

#include "petsim99farm/hatch.h"

#include <cstdio>

namespace petsim99farm {

Hatch::Hatch(const std::string& config_path)
    : config_path_(config_path) {}

void Hatch::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Hatch::run() {
    if (verbose_) std::fprintf(stderr, "[pet-sim-99-farm] hatch: run\n");
    // core logic lives here
    return true;
}

}  // namespace petsim99farm

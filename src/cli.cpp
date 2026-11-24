// cli.cpp — part of pet-sim-99-farm.

#include "petsim99farm/cli.h"

#include <cstdio>

namespace petsim99farm {

Cli::Cli(const std::string& config_path)
    : config_path_(config_path) {}

void Cli::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Cli::run() {
    if (verbose_) std::fprintf(stderr, "[pet-sim-99-farm] cli: run\n");
    // core logic lives here
    return true;
}

}  // namespace petsim99farm

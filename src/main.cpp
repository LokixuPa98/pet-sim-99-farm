// main.cpp — entry point. Wires config and subsystems together.

#include "petsim99farm/settings.h"
#include "petsim99farm/coins.h"
#include "petsim99farm/hatch.h"
#include "petsim99farm/rare.h"
#include "petsim99farm/cli.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    petsim99farm::Settings settings = petsim99farm::Settings::load_default();
    petsim99farm::Coins coins(settings.store_path);
    petsim99farm::Hatch hatch(settings.store_path);
    petsim99farm::Rare rare(settings.store_path);
    petsim99farm::Cli cli(settings.store_path);
    std::fprintf(stderr, "[pet-sim-99-farm] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}

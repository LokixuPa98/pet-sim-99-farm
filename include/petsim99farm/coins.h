// coins — part of pet-sim-99-farm.

#pragma once

#include <string>
#include <vector>

namespace petsim99farm {

class Coins {
public:
    explicit Coins(const std::string& config_path);

    void configure(const std::string& key, const std::string& value);
    bool run();
    bool verbose() const { return verbose_; }

private:
    std::string config_path_;
    bool verbose_ = false;
};

}  // namespace petsim99farm

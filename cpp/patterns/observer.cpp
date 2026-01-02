#include <iostream>
#include <string>

class Observer {
public:
    virtual void update(std::string msg) = 0;
};

class ThreatMonitor : public Observer {
public:
    void update(std::string msg) override { std::cout << "Threat Alert: " << msg << "\n"; }
};

int main() {
    ThreatMonitor tm;
    tm.update("Satellite Anomaly Detected");
    return 0;
}

#ifndef D_H
#define D_H

namespace DependencyInversion {
    class Device {
    public:
        virtual void connect() = 0;
    };

    class Keyboard : public Device {
    public:
        void connect() override {
            cout << "Keyboard is connected" << endl;
        }
    };

    class Mouse : public Device {
    public:
        void connect() override {
            cout << "Mouse is connected" << endl;
        }
    };

    class NewComputer {
    private:
        Device* device;

    public:
        NewComputer(Device* dev) : device(dev) {}

        void connectDevice() {
            device->connect();
        }
    };
}

#endif // !D_H

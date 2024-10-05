#ifndef I_H
#define I_H

namespace InterfaceSegregation {
    class Coder {
    public:
        virtual void code() = 0;
    };

    class Designer {
    public:
        virtual void design() = 0;
    };

    class Manager {
    public:
        virtual void manageProject() = 0;
    };

    class Developer : public Coder {
    public:
        void code() override {
            cout << "Developer is writing code" << endl;
        }
    };

    class GraphicDesigner : public Designer {
    public:
        void design() override {
            cout << "Designer is making design" << endl;
        }
    };

    class ProjectManager : public Manager {
    public:
        void manageProject() override {
            cout << "Manager is controlling the project" << endl;
        }
    };
}
#endif // !I_H

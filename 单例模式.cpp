#include <iostream>
using namespace std;

class Singleton
{
private:
    Singleton() {
        cout << "Singleton" << endl;
    }
    ~Singleton() {
        cout << "~Singleton" << endl;
    }
    Singleton(const Singleton&);
    Singleton& operator= (const Singleton&);

public:
    static Singleton* getInstance() {
        static Singleton instance;
        return &instance;
    }
};

int main()
{
    Singleton* a = Singleton::getInstance();
    Singleton* b = Singleton::getInstance();
    return 0;
}
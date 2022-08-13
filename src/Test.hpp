#ifndef TEST_EXPORTS
#define TEST_EXPORTS
#define TEST_API __declspec(dllexport)
#else
#define TEST_EXPORTS __declspec(dllimport)
#endif

#ifndef TEST_HPP_INCLUDE
#define TEST_HPP_INCLUDE
class TestInterface{
public:
    virtual int add (int a, int b) = 0;
};
class Test: public TestInterface{
public:
    virtual TestInterface* CreateAPI();
    virtual int add(int a, int b);
};
#endif

extern "C" TestInterface* TEST_API CreateAPI();
extern "C" void TEST_API DestroyAPI(TestInterface*);
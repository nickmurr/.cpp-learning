#ifndef TEST_SIMON_H
#define TEST_SIMON_H


class Simon {
public:
    Simon(int count);

    void print();
    void cinCount();
    void done();

    int setCount(int c);
    int getCount();

private:
    int count;
};


#endif //TEST_SIMON_H

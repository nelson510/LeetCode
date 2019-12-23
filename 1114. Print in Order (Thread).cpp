class Foo {
    mutex qfirst;
    mutex qsecond;
    bool firfinish =false;
    bool secfinish = false;
public:
    Foo() {
       
    }

    void first(function<void()> printFirst) {
        qfirst.lock();
        // printFirst() outputs "first". Do not change or remove this line.
        printFirst();
        firfinish = true;
        qfirst.unlock();
    }

    void second(function<void()> printSecond) {
        qsecond.lock();
        while(!firfinish){
        std::this_thread::yield();
        }
        // printSecond() outputs "second". Do not change or remove this line.
        printSecond();
        secfinish = true;
        
        qsecond.unlock();
    }

    void third(function<void()> printThird) {
        while(!secfinish){
        std::this_thread::yield();
        }    
        // printThird() outputs "third". Do not change or remove this line.
        printThird();
        }
    
};
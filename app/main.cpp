#include <iostream>

#include <memory>




/**
 * @brief   Print out Hello World!
 *
 * @return int
 */


int increment(int b)
{
    return b+1;
}

double divide(int a, double b)
{
    return a/b;
}


int main()
{

    bool bl;
    char ch;
    short s;
    int i;
    long l;
    long long ll;

    float f;
    double d;
    long double dd;

    std::cout << "bool size: " << sizeof(bl) << std::endl;
    std::cout << "char size: " << sizeof(ch) << std::endl;
    std::cout << "short size: " << sizeof(s) << std::endl;
    std::cout << "int size: " << sizeof(i) << std::endl;
    std::cout << "long size: " << sizeof(l) << std::endl;
    std::cout << "long long size: " << sizeof(ll) << std::endl;
    std::cout << "float size: " << sizeof(f) << std::endl;
    std::cout << "double size: " << sizeof(d) << std::endl;
    std::cout << "long double size: " << sizeof(dd) << std::endl;

    std::cout <<"\n\nPointers\n";

    int *a = new int;
    int *temp = new int;
    *a = 8;
    *temp = 9; 

    std::cout <<"int *a \ta = " << a << ", *a = " << *a << ", sizeof(a) = "<< sizeof(a) << ", sizeof(a*) = "<< sizeof(*a) <<std::endl;
    // pointers size on 64bit systems is 8 bytes
    
    int **b;
    b = &a;
    std::cout << "int **b\tb = &a\n";
    std::cout << "b = " << b << ", *b = " << *b << ", sizeof(b) = "<< sizeof(b) << ", sizeof(b*) = "<< sizeof(*b) <<std::endl;

    int *c[2];
    c[0] = a;
    c[1] = temp;

    std::cout << "\nint *c[2] c[0] = a, c[1] = temp\n";
    std::cout << "c = " << c << ", c + 1 = "<< (c+1) << ", *c = " << *c << ", sizeof(c) = "<< sizeof(c)  <<std::endl;
    std::cout << "sizeof(c*) = "<< sizeof(*c) << ", c[1] = " << c[1] << ", sizeof(&c[1]) = " << sizeof(&c[1])   << std::endl;

    int (*tab2_wsk)[2] ;

    int tab_2[] = {11, 13};
    int tab_3[] = {15, 17, 19};

    tab2_wsk = &tab_2; // Assign the address of 'tab_2' to tab2_wsk

    std::cout << "\nint(*tab2_wsk)[2];\n";
    std::cout << "tab2_wsk = " << tab2_wsk << ", tab2_wsk +1 = " << tab2_wsk +1 << ", *tab2_wsk = " << *tab2_wsk << ", sizeof(tab2_wsk) = " << sizeof(tab2_wsk) << std::endl;
    std::cout << "sizeof(*tab2_wsk) = " << sizeof(*tab2_wsk) 
                << ", (*tab2_wsk)[1] = " << (*tab2_wsk)[1] 
                << ", sizeof(&(*tab2_wsk)[1]) = " << sizeof(&(*tab2_wsk)[1]) << std::endl;

    // cannot convert ‘int (*)[3]’ to ‘int (*)[2]’ in assignment
    // tab2_wsk = &tab_3;  

    int (*func)(int);
    int (*func2)(int);
    func = increment;
    std::cout << "\nint (*func)(int);\n";
    std::cout << "func = " << func << ", func(1) = " << func(1) << std::endl; 

    double (*func1)(int, double);
    func1 = divide;
    std::cout << "\nint (*func1)(int, double);\n";
    std::cout << "func1 = " << &func1 << ", func(1, 2) = " << func1(1, 2.0) << std::endl; 
    std::cout << "divide = " << divide << std::endl;    // this will always return true;
    std::cout << "func2 = " << func2 << std::endl;      // this will always return true;

    return 0;
}

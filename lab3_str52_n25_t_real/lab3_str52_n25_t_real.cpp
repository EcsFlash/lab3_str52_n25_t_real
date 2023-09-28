// lab3_str52_n25_t_real.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

double power(double a, double x) {
    if (x == 0) {
        return a;
    }
    else {
        double value = 1;
        for (int k = 1; k <= x; k++) {
            value *= a;
        }
        return value;
    }
    
}

int fact(int n) {
    int factorial = 1;
    if (n > 0){
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        return factorial;
    }
    else {
        return 1;
    }

}
int main()
{
   
    
    double N, E, count;
    count = 0;
    float x, s, s_m, t;
    s_m = 0;
    cout << "Enter x,N,E" << endl;
    cin >> x >> N >> E;
    s = 1;

 
  
    double currentValue = x / 1;
    for (int i = 1; i < N; i++) {
        s += currentValue * x / i;
    }
    cout << "Summa:" << '\t' << s << endl;
    cout << "e^x = " << exp(x) << endl;


    s_m = 0;
    currentValue = 1;
    int i = 0;
    t = currentValue;
    while(abs(t) > E){
        //cout << t << endl;
        s_m += t;
        count++;
        i++;
        currentValue = currentValue * x / (i);
        t = currentValue;
    }
    cout << "E = " << E << " summa =" << s_m << " Count = " << count << endl;
     

    E = E / 10.;
    count = 0;
    t = 1;
    i = 0;
    currentValue = 1;
    s_m = 0;
    while (abs(t) > E) {
        //cout << t << endl;
        s_m += t;
        count++;
        i++;
        currentValue = currentValue * x / (i);
        t = currentValue;
    }
    
    cout << "E = " << E << " summa =" << s_m << " Count = " << count << endl;
    
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

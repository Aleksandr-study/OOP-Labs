#include <iostream>
#include <ctime>
#include <cstdlib>
//#inlcude <iomanip>

using namespace std;

#define N 3 
//структура параметрів
typedef struct NamedType
{
    float dx, x1, x2, beta;
    int a, b, alfa;
}parameters_of_function;
//функції
void ReadPar(parameters_of_function* parameters);
void Tab(float x, float y);
void Print(int* local_values, int sizeFX, int alfa);

int main(void)
{
    srand(time(NULL));
    parameters_of_function parameters[N];
    //вводимо параметри
    ReadPar(parameters);
    int sizeFX = (parameters->x2 - parameters->x1) / parameters->dx;
    float* array_fx = new float[sizeFX];
    char symbol = '#';
    cout << "#       x:    #      F(x):  #\n";
    int i = 0;
    float x = parameters->x1;
    //рахуємо F(x):
    while (x < parameters->x2)
    {
        if (x < -0.5)
        {

            *(array_fx + i) = parameters->a * x - parameters->b;
        }
        else
        {
            *(array_fx + i) = (-x - parameters->a) / parameters->b;
        }
        //виводимо таблицю
        Tab(x, *(array_fx + i));
        x += parameters->dx;
        i++;
    }
    cout << endl;
    float* rnd = new float[sizeFX];
    float S1 = 0;
    float S2 = *(array_fx + 0);
    float min = *(array_fx + 0);
    float max = *(array_fx + 0);
    for (int i = 0; i < sizeFX; i++)
    {
        if (min > * (array_fx + i))
        {
            min = *(array_fx + i);
        }
        if (max < *(array_fx + i))
        {
            max = *(array_fx + i);
        }
        if (i % 2 != 0)
        {
            S1 += *(array_fx + i);
            if (*(array_fx + i) > S2)
            {
                S2 = *(array_fx + i);
            }
        }
    }
    float S_min = S1;
    float S_max = S2;
    if (S_min > S_max)
    {
        S_min = S_max + S_min;
        S_max = S_min - S_max;
        S_min = S_min - S_max;
    }
    //Крок випадкових значень
    float S_avg = (S_min + S_max) / 2;
    float step = parameters->beta * S_avg;
    rnd[0] = ((S_max - S_min) * ((float)rand() / RAND_MAX)) + S_min;
    for (int i = 1; i < sizeFX; i++) {
        float min_rand = rnd[i - 1] - step;
        float max_rand = rnd[i - 1] + step;
        float generated_value = (rand() % 2 == 0) ? min_rand : max_rand;
        if (generated_value > S_max || generated_value < S_min) {
            rnd[i] = (generated_value == min_rand) ? max_rand : min_rand;
        }
        else {
            rnd[i] = generated_value;
        }
    }
    for (int i = 0; i < sizeFX; i++)
    {
        cout << "rnd[" << i << "] = " << rnd[i] << endl;
    }
    //Визначеняя лінійної функції перетворення розрахованих значень функції f(x)
    int* local_values = new int[sizeFX];
    for (int i = 0; i < sizeFX; i++) {
        // Використаємо нормалізацію мінімум-максимум з довільним набором значень
        local_values[i] = (*(array_fx + i) - min) * parameters->alfa / (max - min);
    }
    //Виведення вертикальної залежності функції 
    Print(local_values, sizeFX, parameters->alfa);
    return 0;
}

void ReadPar(parameters_of_function* parameters)
{
    //вводимо параметри
    std::cout << "Enter the parametr a: " << endl;
    std::cin >> parameters->a;

    std::cout << "Enter the parametr b: " << endl;
    std::cin >> parameters->b;

    std::cout << "Enter the parametr A: " << endl;
    std::cin >> parameters->alfa; 

    std::cout << "Enter the parametr B: " << endl;
    std::cin >> parameters->beta; 
    while (1)
    {
        std::cout << "Enter the boundary value x1: \n";
        std::cin >> parameters->x1; 

        std::cout << "Enter the boundary value x2: \n";
        std::cin >> parameters->x2;

        if (parameters->x1 != parameters->x2) 
        {
            break;
        }
        else
        {
            std::cout << "Enter different values for x1 and x2!\n";
        }
    }

    if (parameters->x1 > parameters->x2)
    {
        float temporary = parameters->x1;
        parameters->x1 = parameters->x2;
        parameters->x2 = temporary;
    }

    std::cout << "Enter the argument step dx: \n";
    std::cin >> parameters->dx; 
}

void Tab(float x, float y)
{
    char symbol = '#';
    printf("%-7c%-7.2f%-7c%-7.3f%-7c\n", symbol, x, symbol, y, symbol);
    
}

void Print(int* local_values, int sizeFX, int alfa)
{
    cout << endl;
    char syvbol = 0xF8;
    for (int i = sizeFX - 1; i >= 0; i--)
    {
        for (int j = 0; j < alfa; j++)
        {
            if (j != local_values[i])
            {
                std::cout << " ";
            }
            else
            {
                std::cout << syvbol;
            }
        }
        std::cout << endl;
    }
}
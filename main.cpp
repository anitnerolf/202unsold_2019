/*
** EPITECH PROJECT, 2020
** 202unsold
** File description:
** main
*/

#include "Unsold.hpp"

UnsoldValues::UnsoldValues()
{
}

UnsoldValues::~UnsoldValues()
{
}

void	UnsoldValues::usage(void)
{
    std::cout << "USAGE" << std::endl;
    std::cout << "\t./202unsold a b" << std::endl;
    std::cout << "\nDESCRIPTION" << std::endl;
    std::cout << "\ta\tconstant computed from past results" << std::endl;
    std::cout << "\tb\tconstant computed from past results" << std::endl;
}

float	UnsoldValues::calculate(float a, float b, float x, float y)
{
    float ret = ((a - x) * (b - y)) / ((5.0 * a - 150.0) * (5.0 * b - 150.0));
    return ret;
}

void	UnsoldValues::compute_variations(float xy1, float xy2, float xy3, float xy4, float xy5)
{
    float x = ((10.0 * (calculate(this->a, this->b, xy1, xy1) + calculate(this->a, this->b, xy1, xy2) + calculate(this->a, this->b, xy1, xy3) + calculate(this->a, this->b, xy1, xy4) + calculate(this->a, this->b, xy1, xy5))) + (20.0 * (calculate(this->a, this->b, xy2, xy1) + calculate(this->a, this->b, xy2, xy2) + calculate(this->a, this->b, xy2, xy3) + calculate(this->a, this->b, xy2, xy4) + calculate(this->a, this->b, xy2, xy5))) + (30.0 * (calculate(this->a, this->b, xy3, xy1) + calculate(this->a, this->b, xy3, xy2) + calculate(this->a, this->b, xy3, xy3) + calculate(this->a, this->b, xy3, xy4) + calculate(this->a, this->b, xy3, xy5))) + (40.0 * (calculate(this->a, this->b, xy4, xy1) + calculate(this->a, this->b, xy4, xy2) + calculate(this->a, this->b, xy4, xy3) + calculate(this->a, this->b, xy4, xy4) + calculate(this->a, this->b, xy4, xy5))) + (50.0 * (calculate(this->a, this->b, xy5, xy1) + calculate(this->a, this->b, xy5, xy2) + calculate(this->a, this->b, xy5, xy3) + calculate(this->a, this->b, xy5, xy4) + calculate(this->a, this->b, xy5, xy5))));
    float y = ((10.0 * (calculate(this->a, this->b, xy1, xy1) + calculate(this->a, this->b, xy2, xy1) + calculate(this->a, this->b, xy3, xy1) + calculate(this->a, this->b, xy4, xy1) + calculate(this->a, this->b, xy5, xy1))) + (20.0 * (calculate(this->a, this->b, xy1, xy2) + calculate(this->a, this->b, xy2, xy2) + calculate(this->a, this->b, xy3, xy2) + calculate(this->a, this->b, xy4, xy2) + calculate(this->a, this->b, xy5, xy2))) + (30.0 * (calculate(this->a, this->b, xy1, xy3) + calculate(this->a, this->b, xy2, xy3) + calculate(this->a, this->b, xy3, xy3) + calculate(this->a, this->b, xy4, xy3) + calculate(this->a, this->b, xy5, xy3))) + (40.0 * (calculate(this->a, this->b, xy1, xy4) + calculate(this->a, this->b, xy2, xy4) + calculate(this->a, this->b, xy3, xy4) + calculate(this->a, this->b, xy4, xy4) + calculate(this->a, this->b, xy5, xy4))) + (50.0 * (calculate(this->a, this->b, xy1, xy5) + calculate(this->a, this->b, xy2, xy5) + calculate(this->a, this->b, xy3, xy5) + calculate(this->a, this->b, xy4, xy5) + calculate(this->a, this->b, xy5, xy5))));
    float z = ((20.0 * (calculate(this->a, this->b, xy1, xy1))) + (30.0 * (calculate(this->a, this->b, xy1, xy2) + calculate(this->a, this->b, xy2, xy1))) + (40.0 * (calculate(this->a, this->b, xy1, xy3) + calculate(this->a, this->b, xy2, xy2) + calculate(this->a, this->b, xy3, xy1))) + (50.0 * (calculate(this->a, this->b, xy1, xy4) + calculate(this->a, this->b, xy2, xy3) + calculate(this->a, this->b, xy3, xy2) + calculate(this->a, this->b, xy4, xy1))) + (60.0 * (calculate(this->a, this->b, xy1, xy5) + calculate(this->a, this->b, xy2, xy4) + calculate(this->a, this->b, xy3, xy3) + calculate(this->a, this->b, xy4, xy2) + calculate(this->a, this->b, xy5, xy1))) + (70.0 * (calculate(this->a, this->b, xy2, xy5) + calculate(this->a, this->b, xy3, xy4) + calculate(this->a, this->b, xy4, xy3) + calculate(this->a, this->b, xy5, xy2))) + (80.0 * (calculate(this->a, this->b, xy3, xy5) + calculate(this->a, this->b, xy4, xy4) + calculate(this->a, this->b, xy5, xy3))) + (90.0 * (calculate(this->a, this->b, xy4, xy5) + calculate(this->a, this->b, xy5, xy4))) + (100.0 * calculate(this->a, this->b, xy5, xy5)));
    std::cout << "expected value of X:\t" << std::fixed << std::setprecision(1) << x << std::endl;
    std::cout << "variance of X:\t\t" << std::fixed << std::setprecision(1) << (((10.0 - x) * (10.0 - x) * (calculate(this->a, this->b, xy1, xy1) + calculate(this->a, this->b, xy1, xy2) + calculate(this->a, this->b, xy1, xy3) + calculate(this->a, this->b, xy1, xy4) + calculate(this->a, this->b, xy1, xy5))) + ((20.0 - x) * (20.0 - x) * (calculate(this->a, this->b, xy2, xy1) + calculate(this->a, this->b, xy2, xy2) + calculate(this->a, this->b, xy2, xy3) + calculate(this->a, this->b, xy2, xy4) + calculate(this->a, this->b, xy2, xy5))) + ((30.0 - x) * (30.0 - x) * (calculate(this->a, this->b, xy3, xy1) + calculate(this->a, this->b, xy3, xy2) + calculate(this->a, this->b, xy3, xy3) + calculate(this->a, this->b, xy3, xy4) + calculate(this->a, this->b, xy3, xy5))) + ((40.0 - x) * (40.0 - x) * (calculate(this->a, this->b, xy4, xy1) + calculate(this->a, this->b, xy4, xy2) + calculate(this->a, this->b, xy4, xy3) + calculate(this->a, this->b, xy4, xy4) + calculate(this->a, this->b, xy4, xy5))) + ((50.0 - x) * (50.0 - x) * (calculate(this->a, this->b, xy5, xy1) + calculate(this->a, this->b, xy5, xy2) + calculate(this->a, this->b, xy5, xy3) + calculate(this->a, this->b, xy5, xy4) + calculate(this->a, this->b, xy5, xy5)))) << std::endl;
    std::cout << "expected value of Y:\t" << std::fixed << std::setprecision(1) << y << std::endl;
    std::cout << "variance of Y:\t\t" << std::fixed << std::setprecision(1) << (((10.0 - y) * (10.0 - y) * (calculate(this->a, this->b, xy1, xy1) + calculate(this->a, this->b, xy2, xy1) + calculate(this->a, this->b, xy3, xy1) + calculate(this->a, this->b, xy4, xy1) + calculate(this->a, this->b, xy5, xy1))) + ((20.0 - y) * (20.0 - y) * (calculate(this->a, this->b, xy1, xy2) + calculate(this->a, this->b, xy2, xy2) + calculate(this->a, this->b, xy3, xy2) + calculate(this->a, this->b, xy4, xy2) + calculate(this->a, this->b, xy5, xy2))) + ((30.0 - y) * (30.0 - y) * (calculate(this->a, this->b, xy1, xy3) + calculate(this->a, this->b, xy2, xy3) + calculate(this->a, this->b, xy3, xy3) + calculate(this->a, this->b, xy4, xy3) + calculate(this->a, this->b, xy5, xy3))) + ((40.0 - y) * (40.0 - y) * (calculate(this->a, this->b, xy1, xy4) + calculate(this->a, this->b, xy2, xy4) + calculate(this->a, this->b, xy3, xy4) + calculate(this->a, this->b, xy4, xy4) + calculate(this->a, this->b, xy5, xy4))) + ((50.0 - y) * (50.0 - y) * (calculate(this->a, this->b, xy1, xy5) + calculate(this->a, this->b, xy2, xy5) + calculate(this->a, this->b, xy3, xy5) + calculate(this->a, this->b, xy4, xy5) + calculate(this->a, this->b, xy5, xy5)))) << std::endl;
    std::cout << "expected value of Z:\t" << std::fixed << std::setprecision(1) << z << std::endl;
    std::cout << "variance of Z:\t\t" << std::fixed << std::setprecision(1) << (((20.0 - z) * (20.0 - z) * (calculate(this->a, this->b, xy1, xy1))) + ((30.0 - z) * (30.0 - z) * (calculate(this->a, this->b, xy1, xy2) + calculate(this->a, this->b, xy2, xy1))) + ((40.0 - z) * (40.0 - z) * (calculate(this->a, this->b, xy1, xy3) + calculate(this->a, this->b, xy2, xy2) + calculate(this->a, this->b, xy3, xy1))) + ((50.0 - z) * (50.0 - z) * (calculate(this->a, this->b, xy1, xy4) + calculate(this->a, this->b, xy2, xy3) + calculate(this->a, this->b, xy3, xy2) + calculate(this->a, this->b, xy4, xy1))) + ((60.0 - z) * (60.0 - z) * (calculate(this->a, this->b, xy1, xy5) + calculate(this->a, this->b, xy2, xy4) + calculate(this->a, this->b, xy3, xy3) + calculate(this->a, this->b, xy4, xy2) + calculate(this->a, this->b, xy5, xy1))) + ((70.0 - z) * (70.0 - z) * (calculate(this->a, this->b, xy2, xy5) + calculate(this->a, this->b, xy3, xy4) + calculate(this->a, this->b, xy4, xy3) + calculate(this->a, this->b, xy5, xy2))) + ((80.0 - z) * (80.0 - z) * (calculate(this->a, this->b, xy3, xy5) + calculate(this->a, this->b, xy4, xy4) + calculate(this->a, this->b, xy5, xy3))) + ((90.0 - z) * (90.0 - z) * (calculate(this->a, this->b, xy4, xy5) + calculate(this->a, this->b, xy5, xy4))) + ((100.0 - z) * (100.0 -z) * calculate(this->a, this->b, xy5, xy5))) << std::endl;
    std::cout << "--------------------------------------------------------------------------------" << std::endl;
}

void	UnsoldValues::compute_z(float xy1, float xy2, float xy3, float xy4, float xy5)
{
    std::cout << "z" << "\t20\t30\t40\t50\t60\t70\t80\t90\t100" << std::endl;
    std::cout << "p(Z=z)" << "\t" << std::fixed << std::setprecision(3) << (calculate(this->a, this->b, xy1, xy1)) << "\t" << (calculate(this->a, this->b, xy1, xy2) + calculate(this->a, this->b, xy2, xy1)) << "\t" << (calculate(this->a, this->b, xy1, xy3) + calculate(this->a, this->b, xy2, xy2) + calculate(this->a, this->b, xy3, xy1)) << "\t" << (calculate(this->a, this->b, xy1, xy4) + calculate(this->a, this->b, xy2, xy3) + calculate(this->a, this->b, xy3, xy2) + calculate(this->a, this->b, xy4, xy1)) << "\t" << (calculate(this->a, this->b, xy1, xy5) + calculate(this->a, this->b, xy2, xy4) + calculate(this->a, this->b, xy3, xy3) + calculate(this->a, this->b, xy4, xy2) + calculate(this->a, this->b, xy5, xy1)) << "\t" << (calculate(this->a, this->b, xy2, xy5) + calculate(this->a, this->b, xy3, xy4) + calculate(this->a, this->b, xy4, xy3) + calculate(this->a, this->b, xy5, xy2)) << "\t" << (calculate(this->a, this->b, xy3, xy5) + calculate(this->a, this->b, xy4, xy4) + calculate(this->a, this->b, xy5, xy3)) << "\t" << (calculate(this->a, this->b, xy4, xy5) + calculate(this->a, this->b, xy5, xy4)) << "\t" << calculate(this->a, this->b, xy5, xy5) << std::endl;
    std::cout << "--------------------------------------------------------------------------------" << std::endl;
}

int	UnsoldValues::print_values(void)
{
    float xy1 = 10.0;
    float xy2 = 20.0;
    float xy3 = 30.0;
    float xy4 = 40.0;
    float xy5 = 50.0;

    std::cout << "--------------------------------------------------------------------------------" << std::endl;
    std::cout << "\t" << "X=10" << "\tX=20" << "\tX=30" << "\tX=40" << "\tX=50" << "\tY law" << std::endl;
    std::cout << "Y=10" << "\t" << std::fixed << std::setprecision(3) << calculate(this->a, this->b, xy1, xy1) << "\t" << calculate(this->a, this->b, xy2, xy1) << "\t" << calculate(this->a, this->b, xy3, xy1) << "\t" << calculate(this->a, this->b, xy4, xy1) << "\t" << calculate(this->a, this->b, xy5, xy1) << "\t" << (calculate(this->a, this->b, xy1, xy1) + calculate(this->a, this->b, xy2, xy1) + calculate(this->a, this->b, xy3, xy1) + calculate(this->a, this->b, xy4, xy1) + calculate(this->a, this->b, xy5, xy1)) << std::endl;
    std::cout << "Y=20" << "\t" << std::fixed << std::setprecision(3) << calculate(this->a, this->b, xy1, xy2) << "\t" << calculate(this->a, this->b, xy2, xy2) << "\t" << calculate(this->a, this->b, xy3, xy2) << "\t" << calculate(this->a, this->b, xy4, xy2) << "\t" << calculate(this->a, this->b, xy5, xy2) << "\t" << (calculate(this->a, this->b, xy1, xy2) + calculate(this->a, this->b, xy2, xy2) + calculate(this->a, this->b, xy3, xy2) + calculate(this->a, this->b, xy4, xy2) + calculate(this->a, this->b, xy5, xy2)) << std::endl;
    std::cout << "Y=30" << "\t" << std::fixed << std::setprecision(3) << calculate(this->a, this->b, xy1, xy3) << "\t" << calculate(this->a, this->b, xy2, xy3) << "\t" << calculate(this->a, this->b, xy3, xy3) << "\t" << calculate(this->a, this->b, xy4, xy3) << "\t" << calculate(this->a, this->b, xy5, xy3) << "\t" << (calculate(this->a, this->b, xy1, xy3) + calculate(this->a, this->b, xy2, xy3) + calculate(this->a, this->b, xy3, xy3) + calculate(this->a, this->b, xy4, xy3) + calculate(this->a, this->b, xy5, xy3)) << std::endl;
    std::cout << "Y=40" << "\t" << std::fixed << std::setprecision(3) << calculate(this->a, this->b, xy1, xy4) << "\t" << calculate(this->a, this->b, xy2, xy4) << "\t" << calculate(this->a, this->b, xy3, xy4) << "\t" << calculate(this->a, this->b, xy4, xy4) << "\t" << calculate(this->a, this->b, xy5, xy4) << "\t" << (calculate(this->a, this->b, xy1, xy4) + calculate(this->a, this->b, xy2, xy4) + calculate(this->a, this->b, xy3, xy4) + calculate(this->a, this->b, xy4, xy4) + calculate(this->a, this->b, xy5, xy4)) << std::endl;
    std::cout << "Y=50" << "\t" << std::fixed << std::setprecision(3) << calculate(this->a, this->b, xy1, xy5) << "\t" << calculate(this->a, this->b, xy2, xy5) << "\t" << calculate(this->a, this->b, xy3, xy5) << "\t" << calculate(this->a, this->b, xy4, xy5) << "\t" << calculate(this->a, this->b, xy5, xy5) << "\t" << (calculate(this->a, this->b, xy1, xy5) + calculate(this->a, this->b, xy2, xy5) + calculate(this->a, this->b, xy3, xy5) + calculate(this->a, this->b, xy4, xy5) + calculate(this->a, this->b, xy5, xy5)) << std::endl;
    std::cout << "X law" << "\t" << std::fixed << std::setprecision(3) << (calculate(this->a, this->b, xy1, xy1) + calculate(this->a, this->b, xy1, xy2) + calculate(this->a, this->b, xy1, xy3) + calculate(this->a, this->b, xy1, xy4) + calculate(this->a, this->b, xy1, xy5)) << "\t" << (calculate(this->a, this->b, xy2, xy1) + calculate(this->a, this->b, xy2, xy2) + calculate(this->a, this->b, xy2, xy3) + calculate(this->a, this->b, xy2, xy4) + calculate(this->a, this->b, xy2, xy5)) << "\t" << (calculate(this->a, this->b, xy3, xy1) + calculate(this->a, this->b, xy3, xy2) + calculate(this->a, this->b, xy3, xy3) + calculate(this->a, this->b, xy3, xy4) + calculate(this->a, this->b, xy3, xy5)) << "\t" << (calculate(this->a, this->b, xy4, xy1) + calculate(this->a, this->b, xy4, xy2) + calculate(this->a, this->b, xy4, xy3) + calculate(this->a, this->b, xy4, xy4) + calculate(this->a, this->b, xy4, xy5)) << "\t" << (calculate(this->a, this->b, xy5, xy1) + calculate(this->a, this->b, xy5, xy2) + calculate(this->a, this->b, xy5, xy3) + calculate(this->a, this->b, xy5, xy4) + calculate(this->a, this->b, xy5, xy5)) << "\t" << ((calculate(this->a, this->b, xy1, xy1) + calculate(this->a, this->b, xy1, xy2) + calculate(this->a, this->b, xy1, xy3) + calculate(this->a, this->b, xy1, xy4) + calculate(this->a, this->b, xy1, xy5)) + (calculate(this->a, this->b, xy2, xy1) + calculate(this->a, this->b, xy2, xy2) + calculate(this->a, this->b, xy2, xy3) + calculate(this->a, this->b, xy2, xy4) + calculate(this->a, this->b, xy2, xy5)) + (calculate(this->a, this->b, xy3, xy1) + calculate(this->a, this->b, xy3, xy2) + calculate(this->a, this->b, xy3, xy3) + calculate(this->a, this->b, xy3, xy4) + calculate(this->a, this->b, xy3, xy5)) + (calculate(this->a, this->b, xy4, xy1) + calculate(this->a, this->b, xy4, xy2) + calculate(this->a, this->b, xy4, xy3) + calculate(this->a, this->b, xy4, xy4) + calculate(this->a, this->b, xy4, xy5)) + (calculate(this->a, this->b, xy5, xy1) + calculate(this->a, this->b, xy5, xy2) + calculate(this->a, this->b, xy5, xy3) + calculate(this->a, this->b, xy5, xy4) + calculate(this->a, this->b, xy5, xy5))) << std::endl;
    std::cout << "--------------------------------------------------------------------------------" << std::endl;
    this->compute_z(xy1, xy2, xy3, xy4, xy5);
    this->compute_variations(xy1, xy2, xy3, xy4, xy5);
    return 0;
}

int	UnsoldValues::saveValues(int ac, char **av)
{
    std::string a = av[1];
    std::string b = av[2];
    for (int i = 0; i < a.length(); i++) {
        if (a[i] < 48 || a[i] > 57) {
            std::cerr << "Invalid value of constant!" << std::endl;
            exit (84);
        }
    }
    for (int j = 0; j < b.length(); j++) {
        if (a[j] < 48 || a[j] > 57) {
            std::cerr << "Invalid value of constant!" << std::endl;
            exit (84);
        }
    }
    this->a = atof(av[1]);
    this->b = atof(av[2]);
    if (this->a <= 50.0 || this->b <= 50.0) {
        std::cerr << "Constant must have a value greater than 50." << std::endl;
        exit (84);
    } else {
        this->print_values();
    }
    return 0;
}

int	main(int ac, char **av)
{
    UnsoldValues val;
    if (ac == 2) {
        if (av[1][0] == '-' && av[1][1] == 'h' && !av[1][2])
            val.usage();
        else {
            std::cerr << "Not enough arguments given!" << std::endl;
            exit (84);
        }
    } else if (ac == 3) {
        val.saveValues(ac, av);
    } else {
        std::cerr << "Wrong number of arguments!" << std::endl;
        exit (84);
    }
    return 0;
}

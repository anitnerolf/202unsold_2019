/*
** EPITECH PROJECT, 2020
** 202unsold
** File description:
** unsold.hpp
*/

#ifndef UNSOLD_HPP_
#define UNSOLD_HPP_

#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cmath>

class UnsoldValues
{
public:
    UnsoldValues();
    ~UnsoldValues();
    float a;
    float b;
    void usage(void);
    float calculate(float a1, float b1, float x, float y);
    void compute_variations(float xy1, float xy2, float xy3, float xy4, float xy5);
    void compute_z(float xy1, float xy2, float xy3, float xy4, float xy5);
    int print_values(void);
    int saveValues(int ac, char **av);
};

#endif /* UNSOLD_HPP_ */

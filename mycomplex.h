/*!
    @file
    @brief заголовочный файл класса Complex
*/
#ifndef _MY_COMPLEX_H_
#define _MY_COMPLEX_H_
#include <iostream>

using namespace std;

/*!
    @brief  ласс комплексного числа
*/
class Complex
{
    /*!
        @brief ƒействительан€ составл€юща€
    */
    double Re;

    /*!
        @brief ћнима€ составл€юща€
    */
    double Im;

    /*!
        @brief —писок членов класса
        @param aRe ƒействительна€ составл€юща€
        @param aIm ћнима€ составл€юща€
    */
    public:
        Complex(double aRe = 0, double aIm = 0);
        Complex(const Complex &);
        ~ Complex();

        /*!
            @brief ”становление мнимой и действительной состовл€ющих
        */
        void Set(double aRe, double aIm = 0);
        operator double();

        /*!
            @brief модуль комплексного числа
        */
        double abs();

        /*!
            @brief ѕерегрузка оператора ввода >>
        */
        friend istream & operator >> (istream &, Complex &);

        /*!
            @brief ѕерегрузка оператора вывода <<
        */
        friend ostream & operator << (ostream &, Complex &);
        Complex operator + (const Complex &);
        Complex operator - (const Complex &);
        Complex operator + (const double &);

        /*!
            @brief  операци€ сложени€
        */
        friend Complex operator + (const double &, const Complex &);
        Complex operator - (const double &);

        /*!
            @brief  операци€ вычитани€
        */
        friend Complex operator - (const double &, const Complex &);
        Complex operator * (const Complex &);
        Complex operator * (const double&);

        /*!
            @brief  операци€ умножени€
        */
        friend Complex operator * (const double &, const Complex &);
        Complex operator / (const double &);
        Complex & operator += (const Complex &);
        Complex & operator -= (const Complex &);
        Complex & operator *= (const Complex &);
        Complex & operator += (const double &);
        Complex & operator -= (const double &);
        Complex & operator *= (const double &);
        Complex & operator /= (const double &);
        Complex & operator = (const Complex &);
        Complex & operator = (const double &);
};
#endif

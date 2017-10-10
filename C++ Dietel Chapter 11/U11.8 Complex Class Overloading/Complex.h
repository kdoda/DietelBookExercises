#ifndef COMPLEX_H
#define COMPLEX_H


class Complex
{
    public:
        Complex(double =0.0,double =0.0);
        ~Complex();
        Complex operator+(const Complex &) const;    //Complex& operator+( Complex &) const;   e kam ber si prov
        Complex operator-(const Complex &) const;
        Complex operator*(const Complex &) const;
        bool operator==(const Complex &) const;
        bool operator!=(const Complex &) const;
        void print() const;


    private:
        double real;
        double imaginary;
};

#endif // COMPLEX_H

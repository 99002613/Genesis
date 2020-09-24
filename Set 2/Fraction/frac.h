
class Fraction {

    private:
        int m_numerator,m_denominator;
    public:
        Fraction();
        Fraction(int,int);
        Fraction(int);
        Fraction operator +(const Fraction &);
        Fraction operator -(const Fraction &);
        Fraction operator *(const Fraction &);
        Fraction operator +(int);
        Fraction operator -(int);
        bool operator == (const Fraction &);
        Fraction operator < (int);
        Fraction operator > (int);
        void simplify(int,int);
        bool isSimplest(int,int);
        void display();
        int getnumerator();
        int getdenominator();
        int gcd(const Fraction &,int);
        int lcm(int,const Fraction &);
};



class Distance
{
    int m_feet,m_inch;
public:
    Distance();
    Distance(int,int);
    Distance operator+(const Distance &);
    Distance operator-(const Distance &);
    Distance operator+(int);
    Distance operator-(int);
   Distance& operator++();
   Distance operator++(int);
   bool operator==(const Distance &);
   Distance operator>(const Distance &);
    Distance operator<(const Distance &);
    Distance display();
};

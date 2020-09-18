using namespace std;
class MyDate{
private:
    int year;
    int month;
    int day;
public:
    int getYear() { return year; }
    int getMonth() { return month; }
    int getDay() { return day; }

    MyDate(int year, int month, int day) : year(year), month(month), day(day){
    }
}

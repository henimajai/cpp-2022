#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    //1.
    cout << "1. exercise" << endl;
    vector <string> fruits{
            "melon", "strawberry", "raspberry", "apple", "banana", "walnut", "lemon"
    };

    string what = "berry";

    auto result1 = find_if(fruits.begin(), fruits.end(), [&what](const string& e){
        //return e.contains(what);
        return e.find(what);
    });

    cout << *result1 << endl << endl;


    //2.
    cout << "2. exercise" << endl;
    vector<int> v = {1,2,3,4,5};
    for_each(v.begin(), v.end(),[](const int& e){
        cout << e << " ";
    });
    cout << endl;
    std::generate(v.begin(), v.end(), [n = 0] () mutable { return n+=2; });
    for_each(v.begin(), v.end(),[](const int& e){
        cout << e << " ";
    });
    cout << endl;
    auto result2 = all_of(v.begin(),v.end(),[](const int& e){
        return e%2 == 0;
    });
    cout << (result2 ? "All even" : "Not all are even") << endl;

    //3.
    for_each(v.begin(), v.end(),[](int& e){
        e += e;
    });
    cout << endl << "3. exercise" << endl;
    for_each(v.begin(),v.end(),[](const int& e){
        cout << e << " ";
    });
    cout << endl;

    //4.
    cout << endl << "4. exercise" << endl;
    vector<string> months {
            "January", "February", "March", "April", "May", "June",
            "July", "August", "September", "October", "November", "December"
    };
    auto result4 = count_if(months.begin(), months.end(),[](string &e){
        return e.length() == 5;


    });

    cout << result4 << endl;

    //5.
    cout << endl << "5. exercise" << endl;
    //lambda
    cout << "DESC using lambda" << endl;
    sort(v.begin(),v.end(),[](int a, int b){
        return a > b;
    });

    for_each(v.begin(),v.end(),[](const int& e){
        cout << e << " ";
    });
    cout << endl;
    //greater
    cout << "DESC using greater<>() func:" << endl;
    sort(v.begin(), v.end(),greater<int>());
    for_each(v.begin(),v.end(),[](const int& e){
        cout << e << " ";
    });
    cout << endl << endl;

    //6.
    cout << "6. exercise" << endl;
    vector<pair<string, double>>temperature{
            {"January", 2.5}, {"February", -2.7}, {"March", 10}, {"April", 16}, {"May", 18},
            {"June", 23}, {"July", 31}, {"August", 28}, {"September", 17}, {"October", 11}, {"November", 7}, {"December", 1}
    };

    cout << "Before sort:" << endl;
    for_each(temperature.begin(), temperature.end(), [](const pair<string,double>& e){
        cout << "\t" << e.first << ' ' << e.second << endl;
    });

    cout << "After sort:" << endl;
    sort(temperature.begin(), temperature.end(), [](pair<string,double> a, pair <string, double> b){
        return a.second < b.second;
    } );
    for_each(temperature.begin(), temperature.end(), [](const pair<string,double>& e){
        cout << "\t" << e.first << ' ' << e.second << endl;
    });
    cout << endl;

    //7.
    cout << "7. exercise" << endl;
    vector<int> v2 = {5,-2,3,-4,1};
    sort(v2.begin(),v2.end(),[](int a, int b){
       return abs(a) < abs (b);
    });
    for_each(v2.begin(),v2.end(),[](const int& e){
        cout << e << " ";
    });
    cout << endl << endl;

    //8.
    cout << "8. exercise" << endl;
    for_each(months.begin(), months.end(),[](string& e){
        e[0] += 32;
    });
    for_each(months.begin(),months.end(),[](const string& e){
        cout << e << " ";
    });
    cout << endl << endl;

    //9.
    cout << "9. exercise" << endl;
    vector<char> abc= {'a','b','c','d','e','f',
                         'g','h','i','j','k','l','m','n','o','p',
                         'q','r','s','t','u','v','w','x','y','z'};

    cout << "Random abc:" << endl;
    random_shuffle(abc.begin(),abc.end());
    for_each(abc.begin(),abc.end(),[](const char& e){
        cout << e << " ";
    });

    sort(months.begin(), months.end(),[abc](string &m1, string &m2){
        int m1Ind = find(abc.begin(),abc.end(),m1[0]) - abc.begin();
        int m2Ind = find(abc.begin(),abc.end(),m2[0]) - abc.begin();
        return m1Ind < m2Ind;

    });
    cout << endl;
    cout << "Sort by random abc:" << endl;
    for_each(months.begin(),months.end(),[](const string& e){
        cout << e << " ";
    });

    return 0;
}
#include <iostream>
#include <time.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "russian");
    const int size1 = 10;
    const int size2 = 100;
    const int size3 = 1000;
    const int size4 = 10000;
    const int size5 = 100000;
    const int size6 = 1000000;

    int masiv1[size1];
    int masiv2[size2];
    int masiv3[size3];
    int masiv4[size4];
    int masiv5[size5];
    int masiv6[size6];

    int tmp = 0;
    int x = 0;
    srand(time(NULL));


    ///*********** Сортування бульбашкою **************/
    ///***** 10 *****/
    //cout << "\nРандомний масив \nРозмiр ==> " << size1 << endl;
    //for (int i = 0; i < size1; i++) 
    //{
    //    masiv1[i] = 1 + rand() % 100;
    //    cout << masiv1[i] << " ";

    //}
    //for (int i = size1 - 1; i >= x; i) 
    //{
    //    for (int j = size1 - 1; j >= x; j--) 
    //    {
    //        if (masiv1[j] < masiv1[j - 1]) {
    //            tmp = masiv1[j];
    //            masiv1[j] = masiv1[j - 1];
    //            masiv1[j - 1] = tmp;
    //        }
    //    }
    //    x++;
    //}
    //cout << "\nВиведення вiдсортованого масиву (бульбашка):" << endl;
    //for (int i = 0; i < size1; i++) 
    //{cout << "Елемент має значення \t" << masiv1[i] << endl;}
    //system("pause");

    ///***** 100 *****/
    //cout << "\nРандомний масив \nРозмiр ==> " << size2 << endl;
    //for (int i = 0; i < size2; i++)
    //{
    //    masiv2[i] = 1 + rand() % 100;
    //    cout << masiv2[i] << " ";

    //}
    //for (int i = size2 - 1; i >= x; i)
    //{
    //    for (int j = size2 - 1; j >= x; j--)
    //    {
    //        if (masiv2[j] < masiv2[j - 1]) {
    //            tmp = masiv2[j];
    //            masiv2[j] = masiv2[j - 1];
    //            masiv2[j - 1] = tmp;
    //        }
    //    }
    //    x++;
    //}
    //cout << "\nВиведення вiдсортованого масиву (бульбашка):" << endl;
    //for (int i = 0; i < size2; i++) {cout << "Елемент має значення \t" << masiv2[i] << endl;}
    //system("pause");

    ///***** 1000 *****/
    //cout << "\nРандомний масив \nРозмiр ==> " << size3 << endl;
    //for (int i = 0; i < size3; i++)
    //{
    //    masiv3[i] = 1 + rand() % 100;
    //    cout << masiv3[i] << " ";

    //}
    //for (int i = size3 - 1; i >= x; i)
    //{
    //    for (int j = size3 - 1; j >= x; j--)
    //    {
    //        if (masiv3[j] < masiv3[j - 1]) {
    //            tmp = masiv3[j];
    //            masiv3[j] = masiv3[j - 1];
    //            masiv3[j - 1] = tmp;
    //        }
    //    }
    //    x++;
    //}
    //cout << "\nВиведення вiдсортованого масиву (бульбашка):" << endl;
    //for (int i = 0; i < size3; i++) {cout << "Елемент має значення \t" << masiv3[i] << endl;}
    //system("pause");

    ///***** 10000 *****/
    //cout << "\nРандомний масив \nРозмiр ==> " << size4 << endl;
    //for (int i = 0; i < size4; i++)
    //{
    //    masiv4[i] = 1 + rand() % 100;
    //    cout << masiv4[i] << " ";

    //}
    //for (int i = size4 - 1; i >= x; i)
    //{
    //    for (int j = size4 - 1; j >= x; j--)
    //    {
    //        if (masiv4[j] < masiv4[j - 1]) {
    //            tmp = masiv4[j];
    //            masiv4[j] = masiv4[j - 1];
    //            masiv4[j - 1] = tmp;
    //        }
    //    }
    //    x++;
    //}
    //cout << "\nВиведення вiдсортованого масиву (бульбашка):" << endl;
    //for (int i = 0; i < size4; i++) {cout << "Елемент має значення \t" << masiv4[i] << endl;}
    //system("pause");







    ///*********** Сортування вибором **************/
    ///***** 10 *****/
    //cout << "\nРандомний масив \nРозмiр ==> " << size1 << endl;
    //for (int i = 0; i < size1; i++)
    //{
    //    masiv1[i] = 1 + rand() % 100;
    //    cout << masiv1[i] << " ";

    //}
    //for (int i = 0; i < size1; i++)
    //{
    //    x = i; 
    //    for (int j = i + 1; j < size1; j++)
    //        x = (masiv1[j] < masiv1[x]) ? j : x;
    //    if (i != x)
    //    {
    //        tmp = masiv1[i];
    //        masiv1[i] = masiv1[x];
    //        masiv1[x] = tmp;
    //    }
    //}
    //cout << "\nВиведення вiдсортованого масиву (вибiр):" << endl;
    //for (int i = 0; i < size1; i++) {cout << masiv1[i] << " "; }
    //system("pause");

    ///***** 100 *****/
    //cout << "\nРандомний масив \nРозмiр ==> " << size2 << endl;
    //for (int i = 0; i < size2; i++)
    //{
    //    masiv2[i] = 1 + rand() % 100;
    //    cout << masiv2[i] << " ";

    //}
    //for (int i = 0; i < size2; i++)
    //{
    //    x = i;
    //    for (int j = i + 1; j < size2; j++)
    //        x = (masiv2[j] < masiv2[x]) ? j : x;
    //    if (i != x)
    //    {
    //        tmp = masiv2[i];
    //        masiv2[i] = masiv2[x];
    //        masiv2[x] = tmp;
    //    }
    //}
    //cout << "\nВиведення вiдсортованого масиву (вибiр):" << endl;
    //for (int i = 0; i < size2; i++) { cout << masiv2[i] << " "; }
    //system("pause");

    ///***** 1000 *****/
    //cout << "\nРандомний масив \nРозмiр ==> " << size3 << endl;
    //for (int i = 0; i < size3; i++)
    //{
    //    masiv3[i] = 1 + rand() % 100;
    //    cout << masiv3[i] << " ";

    //}
    //for (int i = 0; i < size3; i++)
    //{
    //    x = i;
    //    for (int j = i + 1; j < size3; j++)
    //        x = (masiv3[j] < masiv3[x]) ? j : x;
    //    if (i != x)
    //    {
    //        tmp = masiv3[i];
    //        masiv3[i] = masiv3[x];
    //        masiv3[x] = tmp;
    //    }
    //}
    //cout << "\nВиведення вiдсортованого масиву (вибiр):" << endl;
    //for (int i = 0; i < size3; i++) { cout << masiv3[i] << " "; }
    //system("pause");

    ///***** 10000 *****/
    //cout << "\nРандомний масив \nРозмiр ==> " << size4 << endl;
    //for (int i = 0; i < size4; i++)
    //{
    //    masiv4[i] = 1 + rand() % 100;
    //    cout << masiv4[i] << " ";

    //}
    //for (int i = 0; i < size4; i++)
    //{
    //    x = i;
    //    for (int j = i + 1; j < size4; j++)
    //        x = (masiv4[j] < masiv4[x]) ? j : x;
    //    if (i != x)
    //    {
    //        tmp = masiv4[i];
    //        masiv4[i] = masiv4[x];
    //        masiv4[x] = tmp;
    //    }
    //}
    //cout << "\nВиведення вiдсортованого масиву (вибiр):" << endl;
    //for (int i = 0; i < size4; i++) { cout << masiv4[i] << " "; }
    //system("pause");

    ///***** 100000 *****/
    //cout << "\nРандомний масив \nРозмiр ==> " << size5 << endl;
    //for (int i = 0; i < size5; i++)
    //{
    //    masiv5[i] = 1 + rand() % 100;
    //    cout << masiv5[i] << " ";

    //}
    //for (int i = 0; i < size5; i++)
    //{
    //    x = i;
    //    for (int j = i + 1; j < size5; j++)
    //        x = (masiv5[j] < masiv5[x]) ? j : x;
    //    if (i != x)
    //    {
    //        tmp = masiv5[i];
    //        masiv5[i] = masiv5[x];
    //        masiv5[x] = tmp;
    //    }
    //}
    //cout << "\nВиведення вiдсортованого масиву (вибiр):" << endl;
    //for (int i = 0; i < size5; i++) { cout << masiv5[i] << " "; }
    //system("pause");

    /***** 1000000 *****/
    cout << "\nРандомний масив \nРозмiр ==> " << size6 << endl;
    for (int i = 0; i < size6; i++)
    {
        masiv6[i] = 1 + rand() % 100;
        cout << masiv6[i] << " ";

    }
    for (int i = 0; i < size6; i++)
    {
        x = i;
        for (int j = i + 1; j < size6; j++)
            x = (masiv6[j] < masiv6[x]) ? j : x;
        if (i != x)
        {
            tmp = masiv6[i];
            masiv6[i] = masiv6[x];
            masiv6[x] = tmp;
        }
    }
    cout << "\nВиведення вiдсортованого масиву (вибiр):" << endl;
    for (int i = 0; i < size6; i++) { cout << masiv6[i] << " "; }
    system("pause");
    /**********************************************/

        


    system("pause");
    return 0;
}




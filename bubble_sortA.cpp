#include <iostream>
#include <string>
using namespace std;

int arr[20]; //deklarasi variable global array a dengan ukuran 20
int n;  //deklarasi variable global n menyimpan banyaknya elemen bilangan bulat

void input()
{
    int d;
    while (true)
    {
        cout <<"Masukan banyaknya elemen pada array : ";
        cin >> n;
        if (n<=20)
            break;
        else
        {
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
        }
    }

        cout << endl;
        cout << "=====================" << endl;
        cout << "masukkan elemen array" << endl;
        cout << "=====================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
}
}
void bubblesortarray()
{
    int pass= 1 ;
    do
    {
      for (int j = 0; j < n - pass; j++)
      { // step 2
        if (arr[j] > arr [j + 1])
        {
            int temp = arr [j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        } 
      }  
      pass += 1;

        cout << "\npass " << pass - 1 << ": ";
        for (int k = 0; k < n; k++)
        {
            cout << arr[k] << " "; // menampilkan data pada number of pass
        }   
        cout << endl;
    
    } while (pass <= n - 1); // step 5
}

void display()
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "Elemen array yang telah tersusun: " << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << " ";
        if (j < n - 1)
        {
            cout << " --> ";
        }
    }
    cout << endl;
    cout << endl;


    cout << "jumlah pass = " << n - 1 << endl; // menampilkan jumlah dari pass
    cout << endl;
    cout << endl;
}

int main()
{
    input();

    bubblesortarray();
    display();

    system("pause");
    return 0;
}
      
    
    

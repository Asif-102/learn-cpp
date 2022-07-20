#include <bits/stdc++.h>
using namespace std;

class Shop
{
public:
    string product_name[10];
    int product_price[10];
    int product_quantity[10];

protected:
    int total_income;

public:
    void setProductData(int idx, string product_name, int product_price, int product_quantity)
    {
        this->product_name[idx] = product_name;
        this->product_price[idx] = product_price;
        this->product_quantity[idx] = product_quantity;
    }

    void set_initial_total_income()
    {
        this->total_income = 0;
    }

    int buyProduct(int idx, int product_quantity)
    {
        int update_quantity = this->product_quantity[idx] - product_quantity;

        if(update_quantity >= 0)
        {
            this->product_quantity[idx] -= product_quantity;
            return 1;
        }
        return -1;
    }

    int get_total_income(int idx, int product_quantity)
    {
        this->total_income += this->product_price[idx] * product_quantity;
        return this->total_income;
    }
};

int main(void)
{
    int pn;
    cout << "Number of products : ";
    cin >> pn;

    Shop products;

    for(int i = 0; i < pn; i++)
    {
        string name;
        int price, quantity;

        cout << "Product " << i+1 << " Name: ";
        cin >> name;

        cout << "Product " << i+1 << " Price: ";
        cin >> price;

        cout << "Product " << i+1 << " Quantity: ";
        cin >> quantity;

        products.setProductData(i, name, price, quantity);
    }

    products.set_initial_total_income();

    Flag:
        cout << endl << "\t\tBuy PRODUCT" << endl << "\t\t____________" << endl;

        cout << "Product Index";
        for(int i=0; i < pn; i++)
        {
            cout << "\t\t" << i+1;
        }

        cout << endl << "Product Name";
        for(int i=0; i < pn; i++)
        {
            cout << "\t\t" << products.product_name[i];
        }

        cout << endl << "Product Price";
        for(int i=0; i < pn; i++)
        {
            cout << "\t\t" << products.product_price[i];
        }

        cout << endl << "Product Quantity";
        for(int i=0; i < pn; i++)
        {
            if(i>0)
            {
                cout << "\t\t" << products.product_quantity[i];
            }
            else
            {
                cout << "\t" << products.product_quantity[i];
            }
        }
        cout << endl << endl << "Which product do you want? From " << 1 <<" to " << pn << " : ";

        int product_idx, product_quantity, buying_status;
        cin >> product_idx;

        cout << "What is the quantity that you want of " << products.product_name[product_idx-1] << " : ";
        cin >> product_quantity;

        buying_status = products.buyProduct(product_idx-1, product_quantity);

        if(buying_status == 1)
        {
            cout << endl << products.product_name[product_idx-1] << " bought " << product_quantity << " pc successfully" << endl;
            cout << "Your total income : " << products.get_total_income(product_idx-1, product_quantity) << endl;
        }
        else
        {
            cout << endl << "This quantity is not available" << endl;
        }
        goto Flag;
}

#include <iostream>

#include<string>

#include<conio.h>

using namespace std;

class Invoice

{

    private:

    std::string part_int;

    std::string part_description;

    int quantity;

    int price_per_item;

    double VAT;

    double discount_rate;



    public:

    Invoice(std::string const& pn,std::string const& pd, int qn, int ppi, int v=0.2, int d=0) : part_int(pn), part_description(pd), quantity(qn), price_per_item (ppi), VAT(v), discount_rate (d) 

    {  }





    string getPartNumber()

    {

        return part_int;

    }



    void setPartNumber(std::string const& gpn)

    {

        part_int=gpn;

    }



    string getPartDescription()

    {

        return part_description;

    }



    void setPartDescription(std::string const& gpd)

    {

        part_description=gpd;

    }

    int getQuantity()

    {

        return quantity;

    }



    void setQuantity(int q)

    {

        quantity=q;

    }

    int getPricePerItem()

    {

        return price_per_item;

    }



    void setPricePerItem(int p)

    {

        price_per_item=p;

    }

    int getVAT()

    {

        return VAT;

    }



    void setVAT(int v)

    {

        VAT=v;

    }

    int getInvoiceAmount()

    {

        int amount, tax, disc, net_amount;

        amount = quantity*price_per_item;

        tax = amount*VAT;

        disc = amount * discount_rate;

        net_amount=amount+tax-disc;

        return net_amount;

    }



};

int main()

{

    Invoice inv ("A5", "City Center", 5, 500);

    int n = inv.getInvoiceAmount ();

    std::cout<<n;

    getch();

}


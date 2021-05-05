#pragma once
#include <iostream>
#include <fstream>
using namespace System;
struct adress {
    char city[30];
    char street[30];
    int numOfHouse;
};
struct person {
    char firstName[30];
    char lastName[30];
    char mobilePhone[30];
    adress Adress;
};
class data {
protected:
    person* Vidpravnyk;
    person* Otrymuvatch;
public:
    data() {
        Vidpravnyk = new person;
        Otrymuvatch = new person;
        for (int i = 0; i < 30; i++) {
            Vidpravnyk->firstName[i] = 0;
            Vidpravnyk->lastName[i] = 0;
            Vidpravnyk->Adress.city[i] = 0;
            Vidpravnyk->Adress.street[i] = 0;
            Otrymuvatch->firstName[i] = 0;
            Otrymuvatch->lastName[i] = 0;
            Otrymuvatch->Adress.city[i] = 0;
            Otrymuvatch->Adress.street[i] = 0;
        }
        for (int i = 0; i < 30; i++) {
            Vidpravnyk->mobilePhone[i] = 0;
            Otrymuvatch->mobilePhone[i] = 0;
        }
        Vidpravnyk->Adress.numOfHouse = 0;
        Otrymuvatch->Adress.numOfHouse = 0;
    }
    ~data() {
        delete[]Vidpravnyk;
        delete[]Otrymuvatch;
    }
    void Delete() {
        this->~data();
    }
    void SetVidpravnyk(char *FirstName, char *LastName, char *Num, char *City, char *Street, int NumOfHouse) {
        for (int i = 0; i < 30; i++) {
            Vidpravnyk->firstName[i] = FirstName[i];
            Vidpravnyk->lastName[i] = LastName[i];
            Vidpravnyk->Adress.city[i] = City[i];
            Vidpravnyk->Adress.street[i] = Street[i];
        }
        for (int i = 0; i < 30; i++) {
            Vidpravnyk->mobilePhone[i] = Num[30];
        }
        Vidpravnyk->Adress.numOfHouse = NumOfHouse;
    }
    void SetOtr(char* FirstName, char* LastName, char* Num, char* City, char* Street, int NumOfHouse) {
        for (int i = 0; i < 30; i++) {
            Otrymuvatch->firstName[i] = FirstName[i];
            Otrymuvatch->lastName[i] = LastName[i];
            Otrymuvatch->Adress.city[i] = City[i];
            Otrymuvatch->Adress.street[i] = Street[i];
        }
        for (int i = 0; i < 30; i++) {
            Otrymuvatch->mobilePhone[i] = Num[30];
        }
        Otrymuvatch->Adress.numOfHouse = NumOfHouse;
    }
    person * GetV() {
        return Vidpravnyk;
    }
    person* GetO() {
        return Otrymuvatch;
    }
   virtual char* print(){
        return "Class Data";
    }
   virtual void PrintToFile(long num1, long num2) {
       std::fstream file;
       file.open("res.txt", std::ios::out);
       file << print() << std::endl;
       file << "\nVidpravnyk\n "<< std::endl;
       file << "First name: " << Vidpravnyk->firstName << std::endl;
       file << "Last name: " << Vidpravnyk->lastName << std::endl;
       file << "NumOfMobile: " <<num1 << std::endl;
       file << "\nOtrymuvatch\n" << std::endl;
       file << "First name: " << Otrymuvatch->firstName << std::endl;
       file << "Last name: " << Otrymuvatch->lastName << std::endl;
       file << "NumOfMobile: " << num2 << std::endl;
       file.close();
   }
};
class parcel :public data {
protected:
    double* weight;
    double* price;
    bool* isPaid;
public:
    parcel() {
        weight = new double;
        *weight = 0;
        price = new double;
        *price = 0;
        isPaid = new bool;
        *isPaid = false;
    }
    parcel(parcel& p) {
        this->Vidpravnyk = new person;
        this->Otrymuvatch = new person;
        this->SetVidpravnyk(p.GetV()->firstName, p.GetV()->lastName, p.GetV()->mobilePhone, p.GetV()->Adress.city, p.GetV()->Adress.street, p.GetV()->Adress.numOfHouse);
        this->SetOtr(p.GetO()->firstName, p.GetO()->lastName, p.GetO()->mobilePhone, p.GetO()->Adress.city, p.GetO()->Adress.street, p.GetO()->Adress.numOfHouse);
        this->weight = new double;
        *weight = p.GetWeight();
        this->price = new double;
        *price = p.GetPrice();
        this->isPaid = new bool;
        *isPaid = p.IsPaid();
    }
    void operator=(parcel& p) {
        delete[]weight;
        delete[]price;
        delete[]isPaid;
        this->Vidpravnyk = new person;
        this->Otrymuvatch = new person;
        this->SetVidpravnyk(p.GetV()->firstName, p.GetV()->lastName, p.GetV()->mobilePhone, p.GetV()->Adress.city, p.GetV()->Adress.street, p.GetV()->Adress.numOfHouse);
        this->SetOtr(p.GetO()->firstName, p.GetO()->lastName, p.GetO()->mobilePhone, p.GetO()->Adress.city, p.GetO()->Adress.street, p.GetO()->Adress.numOfHouse);
        this->weight = new double;
        *weight = p.GetWeight();
        this->price = new double;
        *price = p.GetPrice();
        this->isPaid = new bool;
        *isPaid = p.IsPaid();
    }
    ~parcel() {
        Delete();
    }
    void Delete() {
        delete[]weight;
        delete[]price;
        delete[]isPaid;
    }
    void SetWeight(double Weight) {
        *weight = Weight;
        *price = 40 + (*weight) * 0.1;
    }
    double GetWeight() {
        return *weight;
    }
    double GetPrice() {
        return *price;
    }
    void Paying(bool is) {
        *isPaid = is;
    }
    bool IsPaid() {
        return *isPaid;
    }
    virtual char* print() override {
        return "Class parcel";
    }
    virtual void PrintToFile(long num1, long num2) override {
        std::fstream file;
        file.open("res.txt", std::ios::out);
        file << print() << std::endl;
        file << "\nVidpravnyk\n " << std::endl;
        file << "First name: " << Vidpravnyk->firstName << std::endl;
        file << "Last name: " << Vidpravnyk->lastName << std::endl;
        file << "NumOfMobile: " << num1 << std::endl;
        file << "\nOtrymuvatch\n " << std::endl;
        file << "First name: " << Otrymuvatch->firstName << std::endl;
        file << "Last name: " << Otrymuvatch->lastName << std::endl;
        file << "NumOfMobile: " << num2 << std::endl;
        file << "\nWeight: " << *weight << std::endl;
        file << "Price: " << *price << std::endl;
        if (!isPaid)file << "Paid. " << std::endl;
        else file << "NotPaid. " << std::endl;
        file.close();
    }
};

class pricedParcel :public parcel {
protected:
    double* parcelPrice;
public:
    pricedParcel() {
        parcelPrice = new double;
        *parcelPrice = 0;
    }
    pricedParcel(pricedParcel& p) {
        Vidpravnyk = new person;
        Otrymuvatch = new person;
        SetVidpravnyk(p.GetV()->firstName, p.GetV()->lastName, p.GetV()->mobilePhone, p.GetV()->Adress.city, p.GetV()->Adress.street, p.GetV()->Adress.numOfHouse);
        SetOtr(p.GetO()->firstName, p.GetO()->lastName, p.GetO()->mobilePhone, p.GetO()->Adress.city, p.GetO()->Adress.street, p.GetO()->Adress.numOfHouse);
        weight = new double;
        *weight = p.GetWeight();
        price = new double;
        *price = p.GetPrice();
        isPaid = new bool;
        *isPaid = p.IsPaid();
        parcelPrice = new double;
        *parcelPrice = p.GetParcelPrice();
    }
    void operator=(pricedParcel & p) {
       delete[]parcelPrice;
       Vidpravnyk = new person;
       Otrymuvatch = new person;
       SetVidpravnyk(p.GetV()->firstName, p.GetV()->lastName, p.GetV()->mobilePhone, p.GetV()->Adress.city, p.GetV()->Adress.street, p.GetV()->Adress.numOfHouse);
       SetOtr(p.GetO()->firstName, p.GetO()->lastName, p.GetO()->mobilePhone, p.GetO()->Adress.city, p.GetO()->Adress.street, p.GetO()->Adress.numOfHouse);
       weight = new double;
       *weight = p.GetWeight();
       price = new double;
       *price = p.GetPrice();
       isPaid = new bool;
       *isPaid = p.IsPaid();
       parcelPrice = new double;
       *parcelPrice = p.GetParcelPrice();
    }
    ~pricedParcel() {
        Delete();
    }
    void Delete() {

        delete[]parcelPrice;
    }
    void SetParcelPrice(double ParcelPrice) {
        *parcelPrice = ParcelPrice;
    }
    double GetParcelPrice() {
        return *parcelPrice;
    }
    double GetPrice() {
        *price += 0.15 * (*parcelPrice);
        return *price;
    }
    virtual char* print() override final {
        return "Class pricedParcel";
    } 
    virtual void PrintToFile(long num1, long num2) override final{
        std::fstream file;
        file.open("res.txt", std::ios::out);
        file << print() << std::endl;
        file << "\nVidpravnyk\n " << std::endl;
        file << "First name: " << Vidpravnyk->firstName << std::endl;
        file << "Last name: " << Vidpravnyk->lastName << std::endl;
        file << "NumOfMobile: " << num1 << std::endl;
        file << "\nOtrymuvatch\n " << std::endl;
        file << "First name: " << Otrymuvatch->firstName << std::endl;
        file << "Last name: " << Otrymuvatch->lastName << std::endl;
        file << "NumOfMobile: " << num2 << std::endl;
        file << "\nWeight: " << *weight << std::endl;
        file << "Price: " << *price << std::endl;
        file << "Komisiya: " << *price - 40 << std::endl;
        if (isPaid)file << "Paid. " << std::endl;
        else file << "NotPaid. " << std::endl;
        file.close();
    }
};

class Perekaz :protected data {
protected:
    double* money;
    double* komisiya;
    bool *isPaid;
public:
    Perekaz() {
        money = new double;
        *money = 0;
        komisiya = new double;
        *komisiya = 0;
        isPaid = new bool;
    }
    Perekaz(Perekaz& p) {
        Vidpravnyk = new person;
        Otrymuvatch = new person;
        SetVidpravnyk(p.GetV()->firstName, p.GetV()->lastName, p.GetV()->mobilePhone, p.GetV()->Adress.city, p.GetV()->Adress.street, p.GetV()->Adress.numOfHouse);
        SetOtr(p.GetO()->firstName, p.GetO()->lastName, p.GetO()->mobilePhone, p.GetO()->Adress.city, p.GetO()->Adress.street, p.GetO()->Adress.numOfHouse);
        money = new double;
        *money = p.GetAll()-p.GetKomisiya();
        komisiya = new double;
        *komisiya = p.GetKomisiya();
        isPaid = new bool;
        *isPaid = p.IsPaid();
    }
    void operator=(Perekaz& p) {
        delete[]money;
        delete[]komisiya;
        Vidpravnyk = new person;
        Otrymuvatch = new person;
        SetVidpravnyk(p.GetV()->firstName, p.GetV()->lastName, p.GetV()->mobilePhone, p.GetV()->Adress.city, p.GetV()->Adress.street, p.GetV()->Adress.numOfHouse);
        SetOtr(p.GetO()->firstName, p.GetO()->lastName, p.GetO()->mobilePhone, p.GetO()->Adress.city, p.GetO()->Adress.street, p.GetO()->Adress.numOfHouse);
        money = new double;
        *money = p.GetAll() - p.GetKomisiya();
        komisiya = new double;
        *komisiya = p.GetKomisiya();
        isPaid = new bool;
        *isPaid = p.IsPaid();
    }
    ~Perekaz() {
        Delete();
    }
    void Delete() {
        delete[]money;
        delete[]komisiya;
    }
    void SetV(char* FirstName, char* LastName, char* Num, char* City, char* Street, int NumOfHouse) {
        SetVidpravnyk(FirstName, LastName, Num, City, Street, NumOfHouse);
    }
    void SetO(char* FirstName, char* LastName, char* Num, char* City, char* Street, int NumOfHouse) {
        SetOtr(FirstName, LastName, Num, City, Street, NumOfHouse);
    }
    void SetMoney(double filky) {
        *money = filky;
        *komisiya = (*money) * 0.05;
    }
    double GetKomisiya() {
        return *komisiya;
    }
    double GetAll() {
        return (*money) + (*komisiya);
    }
    void Paying(bool is) {
        *isPaid = is;
    }
    bool IsPaid() {
        return *isPaid;
    }
    virtual char* print() override final {
        return "Class Perekaz";
    }
    virtual void PrintToFile(long num1, long num2) override final{
        std::fstream file;
        file.open("res.txt", std::ios::out);
        file << print() << std::endl;
        file << "\nVidpravnyk\n " << std::endl;
        file << "First name: " << Vidpravnyk->firstName << std::endl;
        file << "Last name: " << Vidpravnyk->lastName << std::endl;
        file << "NumOfMobile: " << num1 << std::endl;
        file << "\nOtrymuvatch\n" << std::endl;
        file << "First name: " << Otrymuvatch->firstName << std::endl;
        file << "Last name: " << Otrymuvatch->lastName << std::endl;
        file << "NumOfMobile: " << num2 << std::endl;
        file << "\nCosts: " << *money << std::endl;
        file << "Komisiya: " << *komisiya << std::endl;
        if(isPaid)file << "Paid. "<< std::endl;
        else file << "NotPaid. " << std::endl;
        file.close();
    }
};

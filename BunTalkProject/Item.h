#pragma once
using namespace System;
ref class Item : public IComparable<Item^>
{
public:
	
	String^ ItemName;
	String^ Description;
	double Price;

    // Implement the generic CompareTo method with the Temperature class 
    // as the Type parameter. 
    virtual Int32 CompareTo(Item^ other) {

        // If other is not a valid object reference, this instance 
        // is greater.
        if (other == nullptr) return 1;

        // The temperature comparison depends on the comparison of the
        // the underlying Double values. 
        return ItemName->CompareTo(other->ItemName);
    }

    // Define the is greater than operator.
    bool operator>=  (Item^ other)
    {
        return CompareTo(other) >= 0;
    }

    // Define the is less than operator.
    bool operator<  (Item^ other)
    {
        return CompareTo(other) < 0;
    }

    // Define the is greater than or equal to operator.
    bool operator>  (Item^ other)
    {
        return CompareTo(other) > 0;
    }

    // Define the is less than or equal to operator.
    bool operator<=  (Item^ other)
    {
        return CompareTo(other) <= 0;
    }
};


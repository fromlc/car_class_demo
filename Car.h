//------------------------------------------------------------------------------
// Car class declaration and definition file
//------------------------------------------------------------------------------
#pragma once

#include <string>

using namespace std;

//------------------------------------------------------------------------------
// Car class
//------------------------------------------------------------------------------
class Car {
private:
    string m_make;
    string m_model;
    string m_year;
    string m_color;

public:
    // constructor
    Car() {
        m_make = "Default make";
        m_model = "Default model",
        m_year = "Default year";
        m_color = "Default color";
    }

    // accessor (setters)/mutators (getters)
    void setMake(const string& make) { m_make = make; }
    string getMake() const { return m_make; }

    void setModel(const string& model) { m_model = model; }
    string getModel() const { return m_model; }

    void setYear(const string& year) { m_year = year; }
    string getYear() const { return m_year; }

    void setColor(const string& color) { m_color = color; }
    string getColor() const { return m_color; }
};

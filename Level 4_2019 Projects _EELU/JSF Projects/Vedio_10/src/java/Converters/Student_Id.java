/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Converters;

/**
 *
 * @author MonierAshraf
 */
public class Student_Id {
    private int year;
    private  int number;
    public  Student_Id (int year ,int number)
    {
    this .year=year;
    this.number=number;
    }

    public int getYear() {
        return year;
    }

    public void setYear(int year) {
        this.year = year;
    }

    public int getNumber() {
        return number;
    }

    public void setNumber(int number) {
        this.number = number;
    }
    
}

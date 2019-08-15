/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Converters;

import java.io.Serializable;
import java.text.DecimalFormat;
import javax.faces.component.UIComponent;
import javax.faces.context.FacesContext;
import javax.faces.convert.Converter;
import javax.faces.convert.FacesConverter;

/**
 *
 * @author MonierAshraf
 */
@FacesConverter("Id_Converter")
public class StudentID_Converter implements Converter, Serializable {

    @Override
    public Object getAsObject(FacesContext context, UIComponent component, String value) {
        String year_string = value.substring(0, 2);
        String nmber_string = value.substring(3, 8);

        int year = Integer.valueOf(year_string);
        int number = Integer.valueOf(nmber_string);

        Student_Id id = new Student_Id(year, number);
        return id;
    }

    @Override
    public String getAsString(FacesContext context, UIComponent component, Object value) {
        Student_Id id = (Student_Id) value;
        DecimalFormat f1=new DecimalFormat ("00");
           DecimalFormat f2=new DecimalFormat ("00000");
        return f1.format(id.getYear()) + "-" + f2.format(id.getNumber());

    }

}

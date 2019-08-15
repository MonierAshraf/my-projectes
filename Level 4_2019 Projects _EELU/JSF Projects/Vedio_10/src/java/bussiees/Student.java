/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bussiees;

import Converters.Student_Id;
import javax.inject.Named;
import javax.enterprise.context.SessionScoped;
import java.io.Serializable;

/**
 *
 * @author MonierAshraf
 */
@Named(value = "student")
@SessionScoped



public class Student implements Serializable {

    /**
     * Creates a new instance of Student
     */
    
    Student_Id id;

    public Student_Id getId() {
        return id;
    }

    public void setId(Student_Id id) {
        this.id = id;
    }

 
    public Student() {
    }
    
}

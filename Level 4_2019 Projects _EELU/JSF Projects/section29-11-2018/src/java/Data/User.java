/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Data;

import javax.faces.bean.ManagedBean;
import javax.faces.bean.SessionScoped;

/**
 *
 * @author MonierAshraf
 */
@ManagedBean
@SessionScoped
public class User {

    /**
     * Creates a new instance of User
     */
    Person parr[] = {new Person(25, "Ali", "ALex", 1), new Person(26, "Hanssan", "Cario", 2),
         new Person(27, "Mohmed", "Assiut", 3)};

    public User() {

    }

    public Person[] getParr() {
        return parr;
    }

    public void setParr(Person[] parr) {
        this.parr = parr;
    }

}

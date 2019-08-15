/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package mydone;

import javax.inject.Named;
import javax.enterprise.context.SessionScoped;
import java.io.Serializable;

/**
 *
 * @author MonierAshraf
 */
@Named(value = "user")
@SessionScoped
public class User implements Serializable {

    /**
     * Creates a new instance of User
     */
    
    private String name;
    private String adress;
    private String  sp[];
private String gender;
private  String country;

    public String getCountry() {
        return country;
    }

    public void setCountry(String country) {
        this.country = country;
    }

  
    public String getGender() {
        return gender;
    }

    public void setGender(String gender) {
        this.gender = gender;
    }
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public String getAdress() {
        return adress;
    }

    public void setAdress(String adress) {
        this.adress = adress;
    }

    public String[] getSp() {
        return sp;
    }

    public void setSp(String[] sp) {
        this.sp = sp;
    }

   
    public User() {
    }
    
}

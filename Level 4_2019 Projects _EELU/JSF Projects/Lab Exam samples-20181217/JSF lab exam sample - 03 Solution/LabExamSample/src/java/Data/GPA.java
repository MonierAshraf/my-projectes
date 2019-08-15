/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Data;

import javax.faces.bean.ManagedBean;
import javax.faces.bean.RequestScoped;

/**
 *
 * @author hsameh
 */
@ManagedBean
@RequestScoped
public class GPA {

    /**
     * Creates a new instance of GPA
     */
    private String gpagrade;
    private String gpaletter;
   
    public GPA() {
    }

    public String getGpagrade() {
        return gpagrade;
    }

    public String getGpaletter() {
        return gpaletter;
    }

    public void setGpagrade(String gpagrade) {
        this.gpagrade = gpagrade;
    }

    public void setGpaletter(String gpaletter) {
        this.gpaletter = gpaletter;
    }
    
    public String convert()
    {
        int temp=Integer.parseInt(gpagrade);
        if(temp>0 &&temp<60)
            gpaletter="F";
        else if(temp>=60 && temp<70)
            gpaletter="D";
        else if(temp>=70 && temp<80)
            gpaletter="C";
        else if(temp>=80 && temp<90)
            gpaletter="B";
        else if(temp>=90 && temp<101)
            gpaletter="A";
        return "Result.xhtml";
    }
}

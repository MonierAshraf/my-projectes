/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Web;

import javax.inject.Named;
import javax.enterprise.context.SessionScoped;
import java.io.Serializable;

/**
 *
 * @author Abdo
 */
@Named(value = "bMIbean")
@SessionScoped
public class BMIbean implements Serializable {

    float enteredValue;
    String conversionType;

    public String getConversionType() {
        return conversionType;
    }

    public void setConversionType(String conversionType) {
        this.conversionType = conversionType;
    }

   
    public float getEnteredValue() {
        return enteredValue;
    }

    public void setEnteredValue(float enteredValue) {
        this.enteredValue = enteredValue;
    }
    
    public float Convert()
    {
        if(conversionType.equals("1"))
        {
            return enteredValue*1000;
        }
            
        if(conversionType.equals("2"))
           {
            return enteredValue*1000000;
        }     
        else
            {
            return enteredValue*1000000000;
        }
            
    }
    public BMIbean() {
    }
    
   
    }
    


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Code_Package;

import javax.faces.bean.ManagedBean;
import javax.faces.bean.SessionScoped;
import javax.faces.component.UIComponent;

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
    
    
    UIComponent comp;

    public UIComponent getComp() {
        return comp;
    }

    public void setComp(UIComponent comp) {
        this.comp = comp;
    }
    
    
    
    public User() {
    }
    
}

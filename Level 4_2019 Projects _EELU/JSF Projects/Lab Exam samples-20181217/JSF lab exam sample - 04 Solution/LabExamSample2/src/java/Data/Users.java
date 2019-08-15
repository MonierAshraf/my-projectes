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
public class Users {

    /**
     * Creates a new instance of Users
     */
    public Users() {
    }
    private User u=new User();
    User [] Users={new User("rahmed","123A45"),new User("mali","125N38")};

    public User[] getUsers() {
        return Users;
    }

    public void setUsers(User[] Users) {
        this.Users = Users;
    }
    
    public void setUsers(int i,User u) {
    Users[i]=u;
    }
    public User getUsers(int i) {
        return Users[i];
    }
    public String logIn()
    {
        for(int i=0;i<Users.length;i++)
        {
            if(u.getUserName().equals(Users[i].getUserName()))
            {
                if(u.getPassword().equals(Users[i].getPassword()))
                    return "welcome.xhtml";
            }
        }
        return null;
    }

    public User getU() {
        return u;
    }

    public void setU(User u) {
        this.u = u;
    }
    
}

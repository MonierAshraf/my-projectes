/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Converters;

import static com.sun.faces.el.FacesCompositeELResolver.ELResolverChainType.Faces;
import javax.faces.application.FacesMessage;
import javax.faces.component.UIComponent;
import javax.faces.context.FacesContext;
import javax.faces.validator.FacesValidator;
import javax.faces.validator.Validator;
import javax.faces.validator.ValidatorException;

/**
 *
 * @author MonierAshraf
 */
@FacesValidator("Student_id_Age")
public class Student_id_Age implements Validator   {

    @Override
    public void validate(FacesContext context, UIComponent component, Object value) throws ValidatorException {
        Student_Id id =(Student_Id) value;
        if (id.getYear()>18) {
            FacesMessage message =new FacesMessage(FacesMessage.SEVERITY_ERROR,"It is Possible in have futer Id","2018");
             throw new ValidatorException(message);
        }
    
    }
    
}

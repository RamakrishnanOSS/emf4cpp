// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * xpand3/DeclaredParameter.hpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON Gmbh 2016 <soeren.henning@inchron.com>
 *
 * EMF4CPP is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * EMF4CPP is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef XPAND3_DECLAREDPARAMETER_HPP
#define XPAND3_DECLAREDPARAMETER_HPP

#include <xpand3_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <xpand3/dllXpand3.hpp>

#include <ecore_forward.hpp>
#include <xpand3/SyntaxElement.hpp>

/*PROTECTED REGION ID(DeclaredParameter_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace xpand3
{

class EXPORT_XPAND3_DLL DeclaredParameter : public virtual ::xpand3::SyntaxElement
{
public:
    DeclaredParameter();

    virtual ~DeclaredParameter();

    virtual void _initialize();

    // Operations

    // Attributes

    // References
    ::xpand3::Identifier_ptr getName () const;
    void setName (::xpand3::Identifier_ptr _name);

    ::xpand3::Identifier_ptr getType () const;
    void setType (::xpand3::Identifier_ptr _type);

    /*PROTECTED REGION ID(DeclaredParameter) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

    // EObjectImpl
    virtual ::ecore::EJavaObject eGet ( ::ecore::EInt _featureID, ::ecore::EBoolean _resolve);
    virtual void eSet ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual ::ecore::EBoolean eIsSet ( ::ecore::EInt _featureID);
    virtual void eUnset ( ::ecore::EInt _featureID);
    virtual ::ecore::EClass_ptr _eClass ();
    virtual void _inverseAdd ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _newValue);
    virtual void _inverseRemove ( ::ecore::EInt _featureID, ::ecore::EJavaObject const& _oldValue);

    /*PROTECTED REGION ID(DeclaredParameterImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    // References

    ::xpand3::Identifier_ptr m_name;

    ::xpand3::Identifier_ptr m_type;

};

}
 // xpand3

#endif // XPAND3_DECLAREDPARAMETER_HPP


// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * idlmm/AttributeDef.hpp
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

#ifndef IDLMM_ATTRIBUTEDEF_HPP
#define IDLMM_ATTRIBUTEDEF_HPP

#include <idlmm_forward.hpp>
#include <ecorecpp/mapping_forward.hpp>

#include <idlmm/dllIdlmm.hpp>

#include <ecore_forward.hpp>
#include <idlmm/Contained.hpp>
#include <idlmm/Typed.hpp>

/*PROTECTED REGION ID(AttributeDef_pre) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

namespace idlmm
{

class EXPORT_IDLMM_DLL AttributeDef : public virtual ::idlmm::Contained, public virtual ::idlmm::Typed
{
public:
    AttributeDef();

    virtual ~AttributeDef();

    virtual void _initialize();

    // Operations

    // Attributes
    ::ecore::EBoolean isIsReadonly () const;
    void setIsReadonly (::ecore::EBoolean _isReadonly);

    // References
    const ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef >& getGetRaises () const;
    ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef >& getGetRaises ();

    const ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef >& getSetRaises () const;
    ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef >& getSetRaises ();

    /*PROTECTED REGION ID(AttributeDef) START*/
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

    /*PROTECTED REGION ID(AttributeDefImpl) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/

protected:
    // Attributes

    ::ecore::EBoolean m_isReadonly;

    // References

    ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef > > m_getRaises;

    ::ecorecpp::mapping::out_ptr< ::ecorecpp::mapping::EList< ::idlmm::ExceptionDef > > m_setRaises;

};

}
 // idlmm

#endif // IDLMM_ATTRIBUTEDEF_HPP


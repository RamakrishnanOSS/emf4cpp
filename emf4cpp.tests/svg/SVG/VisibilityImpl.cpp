// -*- mode: c++; c-basic-style: "bsd"; c-basic-offset: 4; -*-
/*
 * SVG/VisibilityImpl.cpp
 * Copyright (C) Cátedra SAES-UMU 2010 <andres.senac@um.es>
 * Copyright (C) INCHRON GmbH 2016 <soeren.henning@inchron.com>
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

#include "Visibility.hpp"
#include <SVG/SVGPackage.hpp>
#include <SVG/Attribute.hpp>
#include <SVG/Element.hpp>
#include <ecore/EObject.hpp>
#include <ecore/EClass.hpp>
#include <ecore/EStructuralFeature.hpp>
#include <ecore/EReference.hpp>
#include <ecore/EObject.hpp>
#include <ecorecpp/mapping.hpp>

/*PROTECTED REGION ID(VisibilityImpl.cpp) START*/
// Please, enable the protected region if you add manually written code.
// To do this, add the keyword ENABLED before START.
/*PROTECTED REGION END*/

using namespace ::SVG;

void Visibility::_initialize()
{
    // Supertypes
    ::SVG::Attribute::_initialize();

    // References

    /*PROTECTED REGION ID(VisibilityImpl__initialize) START*/
    // Please, enable the protected region if you add manually written code.
    // To do this, add the keyword ENABLED before START.
    /*PROTECTED REGION END*/
}

// Operations

// EObject
::ecore::EJavaObject Visibility::eGet(::ecore::EInt _featureID,
        ::ecore::EBoolean _resolve)
{
    ::ecore::EJavaObject _any;
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
    {
        _any = m_attOwner->asEListOf< ::ecore::EObject_ptr >();
    }
        return _any;
    case ::SVG::SVGPackage::VISIBILITY__VISIBLE:
    {
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Boolean
                > ::toAny(_any, m_visible);
    }
        return _any;

    }
    throw "Error";
}

void Visibility::eSet(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
    {
        ::ecorecpp::mapping::EList< ::ecore::EObject_ptr >::ptr_type _t0 =
                ::ecorecpp::mapping::any::any_cast < ::ecorecpp::mapping::EList
                        < ::ecore::EObject_ptr > ::ptr_type > (_newValue);
        ::SVG::Attribute::getAttOwner().clear();
        ::SVG::Attribute::getAttOwner().insert_all(*_t0);
    }
        return;
    case ::SVG::SVGPackage::VISIBILITY__VISIBLE:
    {
        ::PrimitiveTypes::Boolean _t0;
        ::ecorecpp::mapping::any_traits < ::PrimitiveTypes::Boolean
                > ::fromAny(_newValue, _t0);
        ::SVG::Visibility::setVisible(_t0);
    }
        return;

    }
    throw "Error";
}

::ecore::EBoolean Visibility::eIsSet(::ecore::EInt _featureID)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
        return m_attOwner && m_attOwner->size();
    case ::SVG::SVGPackage::VISIBILITY__VISIBLE:
        return ::ecorecpp::mapping::set_traits < ::PrimitiveTypes::Boolean
                > ::is_set(m_visible);

    }
    throw "Error";
}

void Visibility::eUnset(::ecore::EInt _featureID)
{
    switch (_featureID)
    {

    }
    throw "Error";
}

::ecore::EClass_ptr Visibility::_eClass()
{
    static ::ecore::EClass_ptr _eclass =
            dynamic_cast< ::SVG::SVGPackage* >(::SVG::SVGPackage::_instance().get())->getVisibility();
    return _eclass;
}

/** Set the local end of a reference with an EOpposite property.
 */
void Visibility::_inverseAdd(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _newValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_newValue);
        ::SVG::Element_ptr _t1 = dynamic_cast< ::SVG::Element* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Element_ptr,
                        -1, false, true >&) ::SVG::Attribute::getAttOwner();
        container.basicAdd(_t1);
    }
        return;

    }
    throw "Error: _inverseAdd() does not handle this featureID";
}

/** Unset the local end of a reference with an EOpposite property.
 */
void Visibility::_inverseRemove(::ecore::EInt _featureID,
        ::ecore::EJavaObject const& _oldValue)
{
    switch (_featureID)
    {
    case ::SVG::SVGPackage::ATTRIBUTE__ATTOWNER:
    {
        ::ecore::EObject_ptr _t0 = ::ecorecpp::mapping::any::any_cast
                < ::ecore::EObject_ptr > (_oldValue);
        ::SVG::Element_ptr _t1 = dynamic_cast< ::SVG::Element* >(_t0.get());

        // add to a list
        auto& container =
                (::ecorecpp::mapping::ReferenceEListImpl< ::SVG::Element_ptr,
                        -1, false, true >&) ::SVG::Attribute::getAttOwner();
        container.basicRemove(_t1);
    }
        return;

    }
    throw "Error: _inverseRemove() does not handle this featureID";
}


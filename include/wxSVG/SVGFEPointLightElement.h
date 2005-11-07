//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEPointLightElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_POINT_LIGHT_ELEMENT_H
#define WX_SVG_FE_POINT_LIGHT_ELEMENT_H

#include "SVGElement.h"
#include "SVGAnimatedNumber.h"
#include "String.h"
#include "Element.h"

class wxSVGFEPointLightElement:
  public wxSVGElement
{
  protected:
    wxSVGAnimatedNumber m_x;
    wxSVGAnimatedNumber m_y;
    wxSVGAnimatedNumber m_z;

  public:
    inline const wxSVGAnimatedNumber& GetX() const { return m_x; }
    inline void SetX(const wxSVGAnimatedNumber& n) { m_x = n; }
    inline void SetX(float n) { m_x.SetBaseVal(n); }

    inline const wxSVGAnimatedNumber& GetY() const { return m_y; }
    inline void SetY(const wxSVGAnimatedNumber& n) { m_y = n; }
    inline void SetY(float n) { m_y.SetBaseVal(n); }

    inline const wxSVGAnimatedNumber& GetZ() const { return m_z; }
    inline void SetZ(const wxSVGAnimatedNumber& n) { m_z = n; }
    inline void SetZ(float n) { m_z.SetBaseVal(n); }

  public:
    wxSVGFEPointLightElement(wxString tagName = wxT("fePointLight")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGFEPointLightElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGFEPointLightElement(*this); }
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxXmlAttrHash GetAttributes() const;
    virtual const wxSVGDTD GetDtd() const { return wxSVG_FEPOINTLIGHT_ELEMENT; }
};

#endif // WX_SVG_FE_POINT_LIGHT_ELEMENT_H

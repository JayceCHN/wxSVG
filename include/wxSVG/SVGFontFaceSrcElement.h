//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFontFaceSrcElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FONT_FACE_SRC_ELEMENT_H
#define WX_SVG_FONT_FACE_SRC_ELEMENT_H

#include "SVGElement.h"
#include "String.h"
#include "Element.h"

class wxSVGFontFaceSrcElement:
  public wxSVGElement
{
  public:
    wxSVGFontFaceSrcElement(wxString tagName = wxT("font-face-src")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGFontFaceSrcElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGFontFaceSrcElement(*this); }
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxXmlAttrHash GetAttributes() const;
    virtual const wxSVGDTD GetDtd() const { return wxSVG_FONT_FACE_SRC_ELEMENT; }
};

#endif // WX_SVG_FONT_FACE_SRC_ELEMENT_H

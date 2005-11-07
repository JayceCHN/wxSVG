//////////////////////////////////////////////////////////////////////////////
// Name:        SVGGlyphElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_GLYPH_ELEMENT_H
#define WX_SVG_GLYPH_ELEMENT_H

#include "SVGElement.h"
#include "SVGStylable.h"
#include "String.h"
#include "Element.h"

class wxSVGGlyphElement:
  public wxSVGElement,
  public wxSVGStylable
{
  public:
    wxSVGGlyphElement(wxString tagName = wxT("glyph")):
      wxSVGElement(tagName) {}
    virtual ~wxSVGGlyphElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGGlyphElement(*this); }
    bool HasAttribute(const wxString& name);
    wxString GetAttribute(const wxString& name);
    bool SetAttribute(const wxString& name, const wxString& value);
    wxXmlAttrHash GetAttributes() const;
    virtual const wxSVGDTD GetDtd() const { return wxSVG_GLYPH_ELEMENT; }
};

#endif // WX_SVG_GLYPH_ELEMENT_H

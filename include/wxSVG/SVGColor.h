//////////////////////////////////////////////////////////////////////////////
// Name:        SVGColor.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_COLOR_H
#define WX_SVG_COLOR_H

#include "CSSValue.h"
#include "RGBColor.h"
#include "SVGICCColor.h"
#include "String.h"


enum wxSVG_COLORTYPE
{
  wxSVG_COLORTYPE_UNKNOWN = 0,
  wxSVG_COLORTYPE_RGBCOLOR = 1,
  wxSVG_COLORTYPE_RGBCOLOR_ICCCOLOR = 2,
  wxSVG_COLORTYPE_CURRENTCOLOR = 3
};

class wxSVGColor:
  public wxCSSValue
{
  protected:
    wxSVG_COLORTYPE m_colorType;
    wxRGBColor m_rgbColor;
    wxSVGICCColor m_iccColor;

  public:
    inline wxSVG_COLORTYPE GetColorType() const { return m_colorType; }
    inline void SetColorType(const wxSVG_COLORTYPE& n) { m_colorType = n; }

  public:
    wxSVGColor(): wxCSSValue(wxCSS_SVG_COLOR),
      m_colorType(wxSVG_COLORTYPE_UNKNOWN) {}
    wxSVGColor(wxRGBColor color): wxCSSValue(wxCSS_SVG_COLOR),
      m_colorType(wxSVG_COLORTYPE_RGBCOLOR), m_rgbColor(color) {}
    wxSVGColor(unsigned char r, unsigned char g, unsigned char b):
      wxCSSValue(wxCSS_SVG_COLOR),
      m_colorType(wxSVG_COLORTYPE_RGBCOLOR), m_rgbColor(r, g, b) {}
    virtual ~wxSVGColor() {}
    wxCSSValue* Clone() const { return new wxSVGColor(*this); }
    
    wxString GetCSSText() const;
    
    inline const wxRGBColor& GetRGBColor() const { return m_rgbColor; }
    virtual void SetRGBColor(const wxRGBColor& rgbColor);
    
    inline const wxSVGICCColor& GetICCColor() const { return m_iccColor; }
    virtual void SetICCColor(const wxSVGICCColor& iccColor);
    
    virtual void SetRGBColor(const wxString& rgbColor);
    virtual void SetRGBColorICCColor(const wxString& rgbColor, const wxString& iccColor);
    virtual void SetColor(wxSVG_COLORTYPE colorType, const wxString& rgbColor, const wxString& iccColor);
};

#endif // WX_SVG_COLOR_H

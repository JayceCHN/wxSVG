//////////////////////////////////////////////////////////////////////////////
// Name:        SVGICCColor.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ICC_COLOR_H
#define WX_SVG_ICC_COLOR_H

#include "String.h"
#include "SVGNumberList.h"

class wxSVGICCColor
{
  protected:
    wxString m_colorProfile;
    wxSVGNumberList m_colors;

  public:
    inline const wxString& GetColorProfile() const { return m_colorProfile; }
    inline void SetColorProfile(const wxString& n) { m_colorProfile = n; }

    inline const wxSVGNumberList& GetColors() const { return m_colors; }
    inline void SetColors(const wxSVGNumberList& n) { m_colors = n; }

  public:
    virtual ~wxSVGICCColor() {}
};

#endif // WX_SVG_ICC_COLOR_H

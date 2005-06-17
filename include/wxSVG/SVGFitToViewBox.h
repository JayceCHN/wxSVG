//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFitToViewBox.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FIT_TO_VIEW_BOX_H
#define WX_SVG_FIT_TO_VIEW_BOX_H

#include "SVGAnimatedRect.h"
#include "SVGAnimatedPreserveAspectRatio.h"
#include "String.h"

class wxSVGFitToViewBox
{
  protected:
    wxSVGAnimatedRect m_viewBox;
    wxSVGAnimatedPreserveAspectRatio m_preserveAspectRatio;

  public:
    inline const wxSVGAnimatedRect& GetViewBox() const { return m_viewBox; }
    inline void SetViewBox(const wxSVGAnimatedRect& n) { m_viewBox = n; }
    inline void SetViewBox(const wxSVGRect& n) { m_viewBox.SetBaseVal(n); }

    inline const wxSVGAnimatedPreserveAspectRatio& GetPreserveAspectRatio() const { return m_preserveAspectRatio; }
    inline void SetPreserveAspectRatio(const wxSVGAnimatedPreserveAspectRatio& n) { m_preserveAspectRatio = n; }
    inline void SetPreserveAspectRatio(const wxSVGPreserveAspectRatio& n) { m_preserveAspectRatio.SetBaseVal(n); }

  public:
    virtual ~wxSVGFitToViewBox() {}
    bool SetAttribute(const wxString& name, const wxString& value);
};

#endif // WX_SVG_FIT_TO_VIEW_BOX_H

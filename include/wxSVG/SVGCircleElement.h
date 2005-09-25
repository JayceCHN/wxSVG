//////////////////////////////////////////////////////////////////////////////
// Name:        SVGCircleElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_CIRCLE_ELEMENT_H
#define WX_SVG_CIRCLE_ELEMENT_H

class wxSVGCanvasItem;

#include "SVGElement.h"
#include "SVGTests.h"
#include "SVGLangSpace.h"
#include "SVGExternalResourcesRequired.h"
#include "SVGStylable.h"
#include "SVGTransformable.h"
#include "EventTarget.h"
#include "SVGAnimatedLength.h"
#include "SVGSVGElement.h"
#include "String.h"

class wxSVGCircleElement:
  public wxSVGElement,
  public wxSVGTests,
  public wxSVGLangSpace,
  public wxSVGExternalResourcesRequired,
  public wxSVGStylable,
  public wxSVGTransformable,
  public wxEventTarget
{
  protected:
    wxSVGAnimatedLength m_cx;
    wxSVGAnimatedLength m_cy;
    wxSVGAnimatedLength m_r;

  public:
    inline const wxSVGAnimatedLength& GetCx() const { WX_SVG_ANIM_LENGTH_CALC_WIDTH(m_cx, GetViewportElement()); return m_cx; }
    inline void SetCx(const wxSVGAnimatedLength& n) { m_cx = n; }
    inline void SetCx(const wxSVGLength& n) { m_cx.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetCy() const { WX_SVG_ANIM_LENGTH_CALC_HEIGHT(m_cy, GetViewportElement()); return m_cy; }
    inline void SetCy(const wxSVGAnimatedLength& n) { m_cy = n; }
    inline void SetCy(const wxSVGLength& n) { m_cy.SetBaseVal(n); }

    inline const wxSVGAnimatedLength& GetR() const { WX_SVG_ANIM_LENGTH_CALC_SIZE(m_r, GetViewportElement()); return m_r; }
    inline void SetR(const wxSVGAnimatedLength& n) { m_r = n; }
    inline void SetR(const wxSVGLength& n) { m_r.SetBaseVal(n); }


  protected:
	wxSVGCanvasItem* m_canvasItem;
  public:
	inline wxSVGCanvasItem* GetCanvasItem() { return m_canvasItem; }
	inline void SetCanvasItem(wxSVGCanvasItem* canvasItem) { m_canvasItem = canvasItem; }

  public:
    wxSVGCircleElement(wxSVGDocument* doc, wxString tagName = wxT("circle")):
      wxSVGElement(doc, tagName), m_canvasItem(NULL) {}
    wxSVGCircleElement(wxSVGCircleElement& src);
    virtual ~wxSVGCircleElement() {}
    wxXmlNode* CloneNode(bool deep = true) { return new wxSVGCircleElement(*this); }
    wxSVGRect GetBBox();
    bool SetAttribute(const wxString& name, const wxString& value);
    virtual const wxSVGDTD GetDtd() const { return wxSVG_CIRCLE_ELEMENT; }
};

#endif // WX_SVG_CIRCLE_ELEMENT_H

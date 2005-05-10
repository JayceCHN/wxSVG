//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEBlendElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_BLEND_ELEMENT_H
#define WX_SVG_FE_BLEND_ELEMENT_H

#include "SVGElement.h"
#include "SVGFilterPrimitiveStandardAttributes.h"
#include "SVGAnimatedString.h"
#include "SVGAnimatedEnumeration.h"
#include "String.h"

class wxSVGFEBlendElement:
  public wxSVGElement,
  public wxSVGFilterPrimitiveStandardAttributes
{
  public:

	enum wxSVG_FEBLEND_MODE
	{
	  wxSVG_FEBLEND_MODE_UNKNOWN = 0,
	  wxSVG_FEBLEND_MODE_NORMAL = 1,
	  wxSVG_FEBLEND_MODE_MULTIPLY = 2,
	  wxSVG_FEBLEND_MODE_SCREEN = 3,
	  wxSVG_FEBLEND_MODE_DARKEN = 4,
	  wxSVG_FEBLEND_MODE_LIGHTEN = 5
	};

  protected:
	wxSVGAnimatedString m_in1;
	wxSVGAnimatedString m_in2;
	wxSVGAnimatedEnumeration m_mode;

  public:
	inline wxString GetIn1() const { return m_in1.GetBaseVal(); }
	inline void SetIn1(const wxString& n) { m_in1.GetBaseVal() = n; }

	inline wxString GetIn2() const { return m_in2.GetBaseVal(); }
	inline void SetIn2(const wxString& n) { m_in2.GetBaseVal() = n; }

	inline char GetMode() const { return m_mode.GetBaseVal(); }
	inline void SetMode(const char n) { m_mode.GetBaseVal() = n; }

  public:
	inline wxString GetAnimatedIn1() const { return m_in1.GetAnimVal(); }
	inline void SetAnimatedIn1(const wxString& n) { m_in1.GetAnimVal() = n; }

	inline wxString GetAnimatedIn2() const { return m_in2.GetAnimVal(); }
	inline void SetAnimatedIn2(const wxString& n) { m_in2.GetAnimVal() = n; }

	inline char GetAnimatedMode() const { return m_mode.GetAnimVal(); }
	inline void SetAnimatedMode(const char n) { m_mode.GetAnimVal() = n; }

  public:
	wxSVGFEBlendElement(wxSVGDocument* doc, wxString tagName = wxT("feBlend")):
	  wxSVGElement(doc, tagName) {}
	virtual ~wxSVGFEBlendElement() {}
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_FEBLEND_ELEMENT; }
};

#endif // WX_SVG_FE_BLEND_ELEMENT_H

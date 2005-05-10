//////////////////////////////////////////////////////////////////////////////
// Name:        SVGFEMorphologyElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_FE_MORPHOLOGY_ELEMENT_H
#define WX_SVG_FE_MORPHOLOGY_ELEMENT_H

#include "SVGElement.h"
#include "SVGFilterPrimitiveStandardAttributes.h"
#include "SVGAnimatedString.h"
#include "SVGAnimatedEnumeration.h"
#include "SVGAnimatedLength.h"
#include "String.h"

class wxSVGFEMorphologyElement:
  public wxSVGElement,
  public wxSVGFilterPrimitiveStandardAttributes
{
  public:

	enum wxSVG_MORPHOLOGY_OPERATOR
	{
	  wxSVG_MORPHOLOGY_OPERATOR_UNKNOWN = 0,
	  wxSVG_MORPHOLOGY_OPERATOR_ERODE = 1,
	  wxSVG_MORPHOLOGY_OPERATOR_DILATE = 2
	};

  protected:
	wxSVGAnimatedString m_in1;
	wxSVGAnimatedEnumeration m_operator_;
	wxSVGAnimatedLength m_radiusX;
	wxSVGAnimatedLength m_radiusY;

  public:
	inline wxString GetIn1() const { return m_in1.GetBaseVal(); }
	inline void SetIn1(const wxString& n) { m_in1.GetBaseVal() = n; }

	inline char GetOperator() const { return m_operator_.GetBaseVal(); }
	inline void SetOperator(const char n) { m_operator_.GetBaseVal() = n; }

	inline wxSVGLength& GetRadiusX() { return m_radiusX.GetBaseVal(); }
	inline void SetRadiusX(const wxSVGLength& n) { m_radiusX.GetBaseVal() = n; }

	inline wxSVGLength& GetRadiusY() { return m_radiusY.GetBaseVal(); }
	inline void SetRadiusY(const wxSVGLength& n) { m_radiusY.GetBaseVal() = n; }

  public:
	inline wxString GetAnimatedIn1() const { return m_in1.GetAnimVal(); }
	inline void SetAnimatedIn1(const wxString& n) { m_in1.GetAnimVal() = n; }

	inline char GetAnimatedOperator() const { return m_operator_.GetAnimVal(); }
	inline void SetAnimatedOperator(const char n) { m_operator_.GetAnimVal() = n; }

	inline wxSVGLength& GetAnimatedRadiusX() { return m_radiusX.GetAnimVal(); }
	inline void SetAnimatedRadiusX(const wxSVGLength& n) { m_radiusX.GetAnimVal() = n; }

	inline wxSVGLength& GetAnimatedRadiusY() { return m_radiusY.GetAnimVal(); }
	inline void SetAnimatedRadiusY(const wxSVGLength& n) { m_radiusY.GetAnimVal() = n; }

  public:
	wxSVGFEMorphologyElement(wxSVGDocument* doc, wxString tagName = wxT("feMorphology")):
	  wxSVGElement(doc, tagName) {}
	virtual ~wxSVGFEMorphologyElement() {}
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_FEMORPHOLOGY_ELEMENT; }
};

#endif // WX_SVG_FE_MORPHOLOGY_ELEMENT_H

//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimateTransformElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ANIMATE_TRANSFORM_ELEMENT_H
#define WX_SVG_ANIMATE_TRANSFORM_ELEMENT_H

#include "SVGAnimationElement.h"
#include "String.h"

class wxSVGAnimateTransformElement:
  public wxSVGAnimationElement
{
  public:
	wxSVGAnimateTransformElement(wxSVGDocument* doc, wxString tagName = wxT("animateTransform")):
	  wxSVGAnimationElement(doc, tagName) {}
	virtual ~wxSVGAnimateTransformElement() {}
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_ANIMATETRANSFORM_ELEMENT; }
};

#endif // WX_SVG_ANIMATE_TRANSFORM_ELEMENT_H

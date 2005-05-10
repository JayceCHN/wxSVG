//////////////////////////////////////////////////////////////////////////////
// Name:        SVGTextElement.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_TEXT_ELEMENT_H
#define WX_SVG_TEXT_ELEMENT_H

#include "SVGTextPositioningElement.h"
#include "SVGTransformable.h"
#include "String.h"

class wxSVGTextElement:
  public wxSVGTextPositioningElement,
  public wxSVGTransformable
{
  public:
	wxSVGTextElement(wxSVGDocument* doc, wxString tagName = wxT("text")):
	  wxSVGTextPositioningElement(doc, tagName) {}
	virtual ~wxSVGTextElement() {}
	bool SetAttribute(const wxString& name, const wxString& value);
	virtual const wxSVGDTD GetDtd() const { return wxSVG_TEXT_ELEMENT; }
};

#endif // WX_SVG_TEXT_ELEMENT_H

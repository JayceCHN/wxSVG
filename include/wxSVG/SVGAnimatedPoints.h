//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimatedPoints.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by generate.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ANIMATED_POINTS_H
#define WX_SVG_ANIMATED_POINTS_H

#include "SVGPointList.h"
#include "String.h"

class wxSVGAnimatedPoints
{
  protected:
	wxSVGPointList m_points;
	wxSVGPointList m_animatedPoints;

  public:
	inline wxSVGPointList& GetPoints() { return m_points; }
	inline void SetPoints(const wxSVGPointList& n) { m_points = n; }

	inline wxSVGPointList& GetAnimatedPoints() { return m_animatedPoints; }
	inline void SetAnimatedPoints(const wxSVGPointList& n) { m_animatedPoints = n; }

  public:
	virtual ~wxSVGAnimatedPoints() {}
	bool SetAttribute(const wxString& name, const wxString& value);
};

#endif // WX_SVG_ANIMATED_POINTS_H

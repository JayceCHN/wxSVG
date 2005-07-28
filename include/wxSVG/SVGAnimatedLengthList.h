//////////////////////////////////////////////////////////////////////////////
// Name:        SVGAnimatedLengthList.h
// Author:      Alex Thuering
// Copyright:   (c) 2005 Alex Thuering
// Licence:     wxWindows licence
// Notes:       generated by genAnimated.py
//////////////////////////////////////////////////////////////////////////////

#ifndef WX_SVG_ANIMATED_LENGTH_LIST_H
#define WX_SVG_ANIMATED_LENGTH_LIST_H

#include "SVGLengthList.h"

class wxSVGAnimatedLengthList
{
  public:
    wxSVGAnimatedLengthList(): m_animVal(NULL) {}
    wxSVGAnimatedLengthList(const wxSVGLengthList& value): m_baseVal(value), m_animVal(NULL) {}
    wxSVGAnimatedLengthList(const wxSVGAnimatedLengthList& value): m_baseVal(value.m_baseVal), m_animVal(NULL)
    { if (value.m_animVal != NULL) m_animVal = new wxSVGLengthList(*value.m_animVal); }
    ~wxSVGAnimatedLengthList() { ResetAnimVal(); }
    
    inline wxSVGAnimatedLengthList& operator=(const wxSVGAnimatedLengthList& value)
    { m_baseVal = value.m_baseVal; m_animVal = value.m_animVal != NULL ? m_animVal = new wxSVGLengthList(*value.m_animVal) : NULL; return *this; }
    
    inline wxSVGLengthList& GetBaseVal() { return m_baseVal; }
    inline const wxSVGLengthList& GetBaseVal() const { return m_baseVal; }
    inline void SetBaseVal(const wxSVGLengthList& value) { m_baseVal = value; ResetAnimVal(); }
    
    inline wxSVGLengthList& GetAnimVal()
    {
      if (!m_animVal)
        m_animVal = new wxSVGLengthList(m_baseVal);
      return *m_animVal;
    }
    inline const wxSVGLengthList& GetAnimVal() const
    {
        return m_animVal ? *m_animVal : m_baseVal;
    }
    inline void SetAnimVal(const wxSVGLengthList& value)
    {
      if (!m_animVal)
        m_animVal = new wxSVGLengthList(value);
      else
        *m_animVal = value;
    }
    inline void ResetAnimVal()
    {
      if (m_animVal)
      {
        delete m_animVal;
        m_animVal = NULL;
      }
    }
    
  public:
    inline operator const wxSVGLengthList&() const { return GetAnimVal(); }
    
  protected:
    wxSVGLengthList m_baseVal;
    wxSVGLengthList* m_animVal;
};


#endif // WX_SVG_ANIMATED_LENGTH_LIST_H

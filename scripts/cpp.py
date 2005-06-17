##############################################################################
## Name:        cpp.py
## Purpose:     
## Author:      Alex Thuering
## Created:     2005/01/19
## RCS-ID:      $Id: cpp.py,v 1.3 2005-06-17 13:22:29 ntalex Exp $
## Copyright:   (c) 2005 Alex Thuering
## Notes:		some modules adapted from svgl project
##############################################################################

import string

builtin_types = ["float", "double", "int", "unsigned long", "long", "unsigned short", "char", "bool", "void"]
number_types = ["float", "double", "int", "unsigned long", "long", "unsigned short", "char", "bool"]

def make_name(name):
    tmp=name
    tmp = string.replace(tmp,'-','_')
    tmp = string.replace(tmp,':','_')
    return tmp

def make_attr_name(name):
    return 'm_' + make_name(name)

def fix_typename(name):
    pos = string.find(name, "::")
    if pos>0:
        name = name[pos+2:]
    if name == "boolean":
        name = "bool"
    elif name == "float":
        name = "double"
    elif name == "DOMString" or name == "String":
        name = "wxString"
    elif name == "Document" or name == "Element":
        name = "wxXml" + name
    elif name not in builtin_types:  #elif name[:3]=="SVG":
        name = "wx" + name
    return name


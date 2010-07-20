///////////////////////////////////////////////////////////////////////////
// Author: Martial TOLA
// Year: 2010
// CNRS-Lyon, LIRIS UMR 5205
///////////////////////////////////////////////////////////////////////////
#ifndef HEADER_MEPP_CONFIG
#define HEADER_MEPP_CONFIG

#define ORGANIZATION QObject::tr("LIRIS")
#define APPLICATION QObject::tr("MEPP")

#define MAINWINDOW_TITLE QObject::tr("MEPP : 3D MEsh Processing Platform")

#define EMPTY_MESH QObject::tr("empty mesh")
#define INTERNAL_MESH QObject::tr("internal mesh sample")

enum { Normal, Space, Time, Specific };
//enum { MaxManipulatedFrame = 19 };


#include <polyhedron_enrichment_define.h>


#endif
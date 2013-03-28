// Copyright (c) 2011, XMOS Ltd., All rights reserved
// This software is freely distributable under a derivative of the
// University of Illinois/NCSA Open Source License posted in
// LICENSE.txt and at <http://github.xcore.com/>

/*===========================================================================
 Info
 ----
 
 ===========================================================================*/

#ifndef _modbus_tcp_server_h_
#define _modbus_tcp_server_h_

/*---------------------------------------------------------------------------
 nested include files
 ---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 constants
 ---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 typedefs
 ---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 global variables
 ---------------------------------------------------------------------------*/

/*---------------------------------------------------------------------------
 extern variables
 ---------------------------------------------------------------------------*/
 
/*---------------------------------------------------------------------------
 prototypes
 ---------------------------------------------------------------------------*/

/*==========================================================================*/
/**
 *  The Modbus TCP server
 *
 *  \param c_tcp_svr  server channel connecting to ethernet component
 *  \param c_modbus   modbus data/cmd channel connecting to application
 *  \return None
 **/
void modbus_tcp_server(chanend c_tcp_svr, chanend c_modbus);

#endif // _modbus_tcp_server_h_
/*==========================================================================*/

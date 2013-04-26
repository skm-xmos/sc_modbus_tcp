// Copyright (c) 2011, XMOS Ltd., All rights reserved
// This software is freely distributable under a derivative of the
// University of Illinois/NCSA Open Source License posted in
// LICENSE.txt and at <http://github.xcore.com/>

/*===========================================================================
 Info
 ----

 ===========================================================================*/

#ifndef __modbus_h__
#define __modbus_h__

/*---------------------------------------------------------------------------
 nested include files
 ---------------------------------------------------------------------------*/
#include "ethernet_board_support.h"
#include "xtcp.h"
#include "mb_codes.h"
#include <xccompat.h>

#ifdef __modbus_conf_h_exists__
#include "modbus_conf.h"
#endif

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
 *  Modbus Server
 *
 *  \param xxx    description of xxx
 *  \param yyy    description of yyy
 *  \return None
 **/
void modbus_server(chanend c_modbus,
                   REFERENCE_PARAM(ethernet_xtcp_ports_t, xtcp_ports),
                   REFERENCE_PARAM(xtcp_ipconfig_t, ipconfig));

#endif // __modbus_h__
/*==========================================================================*/

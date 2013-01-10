/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file OnewayCallTestServerImpl.cxx
 * This source file contains the definition of the skeleton for interface OnewayCallTest. This definitions have to be implemented.
 *
 * This file was generated by the tool rpcddsgen.
 */
 
#include "OnewayCallTestServerImpl.h"

static CORBA::Long l = 0;
static CORBA::Boolean b = false;
static char *s = NULL;
static Structure st;
 
void OnewayCallTestServerImpl::setLong(/*in*/ CORBA::Long lo1) 
{
	l = lo1;
} 
 
CORBA::Long OnewayCallTestServerImpl::getLong() 
{
    return l;
} 
 
void OnewayCallTestServerImpl::setBoolean(/*in*/ CORBA::Boolean bo1) 
{
    b = bo1;
} 
 
CORBA::Boolean OnewayCallTestServerImpl::getBoolean() 
{
    return b;
} 
 
void OnewayCallTestServerImpl::setString(/*in*/ char* s1) 
{
    s = strdup(s1);
} 
 
char* OnewayCallTestServerImpl::getString() 
{
    return s;
} 
 
void OnewayCallTestServerImpl::setStruct(/*in*/ const Structure& ev) 
{
    st.dato = ev.dato;
    st.message = strdup(ev.message);
} 
 
Structure OnewayCallTestServerImpl::getStruct() 
{
    return st;
} 
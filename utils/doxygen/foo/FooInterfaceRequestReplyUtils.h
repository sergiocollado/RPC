/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file FooInterfaceRequestReplyUtils.h
 * This header file contains the declaration of helpful functions for the DDS messages for interface FooInterface.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _FooInterface_REQUEST_REPLY_UTILS_H_
#define _FooInterface_REQUEST_REPLY_UTILS_H_

#include "utils/Messages.h"
#include "FooInterfaceRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


/**
 * \brief This class contains helpful operations for the generated topic FooInterface_FooProcedureRequest.
 * @ingroup FOOEXAMPLE
 */
class FooInterface_FooProcedureRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure FooInterface_FooProcedureRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure FooInterface_FooProcedureRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure FooInterface_FooProcedureRequest.
         *
         * \param instance Pointer to the structure FooInterface_FooProcedureRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(FooInterface_FooProcedureRequest& instance);
        
        /**
         * \brief This function extracts the parameters from the members of the structure FooInterface_FooProcedureRequest.
         *
         * \param data Pointer to the structure FooInterface_FooProcedureRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(FooInterface_FooProcedureRequest& data);
};


/**
 * \brief This class contains helpful operations for the generated topic FooInterface_FooProcedureReply.
 * @ingroup FOOEXAMPLE
 */
class FooInterface_FooProcedureReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure FooInterface_FooProcedureReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure FooInterface_FooProcedureReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure FooInterface_FooProcedureReply.
         *
         * \param instance Pointer to the structure FooInterface_FooProcedureReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(FooInterface_FooProcedureReply& instance);
        
        /**
         * \brief This function extracts the parameters from the members of the structure FooInterface_FooProcedureReply.
         *
         * \param data Pointer to the structure FooInterface_FooProcedureReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(FooInterface_FooProcedureReply& data, eProsima::RPCDDS::ReturnMessage& retcode);
};

 
#endif // _FooInterface_REQUEST_REPLY_UTILS_H_

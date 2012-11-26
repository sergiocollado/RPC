/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file StructTestRequestReplyUtils.h
 * This header file contains the declaration of helpful functions for the DDS messages for interface StructTest.
 *
 * This file was generated by the tool rpcddsgen.
 */

#ifndef _StructTest_REQUEST_REPLY_UTILS_H_
#define _StructTest_REQUEST_REPLY_UTILS_H_

#include "utils/Messages.h"
#include "StructTestRequestReplySupport.h"

#include "ndds_namespace_cpp.h"


/**
 * \brief This class contains helpful operations for the generated topic StructTest_duplicateRequest.
 */
class StructTest_duplicateRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure StructTest_duplicateRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure StructTest_duplicateRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure StructTest_duplicateRequest.
         *
         * \param instance Pointer to the structure StructTest_duplicateRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(StructTest_duplicateRequest& instance, /*in*/ const Envio& ev);
        
        /**
         * \brief This function extracts the parameters from the members of the structure StructTest_duplicateRequest.
         *
         * \param data Pointer to the structure StructTest_duplicateRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(StructTest_duplicateRequest& data, /*in*/ Envio& ev);
};


/**
 * \brief This class contains helpful operations for the generated topic StructTest_duplicateReply.
 */
class StructTest_duplicateReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure StructTest_duplicateReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure StructTest_duplicateReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure StructTest_duplicateReply.
         *
         * \param instance Pointer to the structure StructTest_duplicateReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(StructTest_duplicateReply& instance, /*out*/ const Recepcion& duplicate_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure StructTest_duplicateReply.
         *
         * \param data Pointer to the structure StructTest_duplicateReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(StructTest_duplicateReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ Recepcion& duplicate_ret);
};


/**
 * \brief This class contains helpful operations for the generated topic StructTest_sumaRequest.
 */
class StructTest_sumaRequestUtils
{
    public:

        /**
         * \brief This function registers the type of the structure StructTest_sumaRequest in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure StructTest_sumaRequest.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure StructTest_sumaRequest.
         *
         * \param instance Pointer to the structure StructTest_sumaRequest that will be filled. Cannot be NULL.
         */
        static void setTypeData(StructTest_sumaRequest& instance, /*in*/ const Envio& ev1, /*in*/ const Envio& ev2);
        
        /**
         * \brief This function extracts the parameters from the members of the structure StructTest_sumaRequest.
         *
         * \param data Pointer to the structure StructTest_sumaRequest that contains the parameters' data. Cannot be NULL.
         */
        static void extractTypeData(StructTest_sumaRequest& data, /*in*/ Envio& ev1, /*in*/ Envio& ev2);
};


/**
 * \brief This class contains helpful operations for the generated topic StructTest_sumaReply.
 */
class StructTest_sumaReplyUtils
{
    public:

        /**
         * \brief This function registers the type of the structure StructTest_sumaReply in the DDS domain participant.
         *
         * \param participant Pointer to the DDS domain participant. Cannot be NULL.
         * \return The type name of the structure StructTest_sumaReply.
         */
        static const char* registerType(DDS::DomainParticipant *participant);
        
        /**
         * \brief This function sets the parameters into the members of the structure StructTest_sumaReply.
         *
         * \param instance Pointer to the structure StructTest_sumaReply that will be filled. Cannot be NULL.
         */
        static void setTypeData(StructTest_sumaReply& instance, /*out*/ const Recepcion& suma_ret);
        
        /**
         * \brief This function extracts the parameters from the members of the structure StructTest_sumaReply.
         *
         * \param data Pointer to the structure StructTest_sumaReply that contains the parameters' data. Cannot be NULL.
* \param retcode Internal message returned from the server.
         */
        static void extractTypeData(StructTest_sumaReply& data, eProsima::RPCDDS::ReturnMessage& retcode, /*out*/ Recepcion& suma_ret);
};

 
#endif // _StructTest_REQUEST_REPLY_UTILS_H_

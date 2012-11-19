#ifndef _AsyncCallTest_PROXY_H_
#define _AsyncCallTest_PROXY_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/Client.h"
#include "AsyncCallTestRequestReplyUtils.h"
#include "AsyncCallTestClientRPCSupport.h"
#include "exceptions/Exception.h"

/**
 * \brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class AsyncCallTest_getLongCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getLong(/*inout*/ DDS_Long lo2, /*out*/ DDS_Long lo3, /*out*/ DDS_Long getLong_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::RPCDDS::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class AsyncCallTest_getBooleanCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getBoolean(/*inout*/ DDS_Boolean bo2, /*out*/ DDS_Boolean bo3, /*out*/ DDS_Boolean getBoolean_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::RPCDDS::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class AsyncCallTest_getStringCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void getString(/*inout*/ char* s2, /*out*/ char* s3, /*out*/ char* getString_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::RPCDDS::Exception &ex) = 0;
};
/**
 * \brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class AsyncCallTest_duplicateCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void duplicate(/*out*/ const Structure& duplicate_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::RPCDDS::Exception &ex) = 0;
};

/**
 * \brief This class implements a specific server's proxy for the defined interface AsyncCallTest.
 */
class AsyncCallTestProxy : public eProsima::RPCDDS::Client
{
    public:
    
        /**
         * \brief Default constructor. The server's proxy will use the default eProsima::RPCDDS::UDPTransport.
         *
         * \param remoteServiceName The service's name that the remote server uses and the proxy will use to connect with it. 
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         * \param timeout Timeout used in each call to remotely procedures.
         *        If the call exceeds the time, a eProsima::RPCDDS::ServerTimeoutException is thrown.
         * \exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
         */
        AsyncCallTestProxy(std::string remoteServiceName, int domainId = 0, long timeout = 10000);

        /**
         * \brief This constructor sets the transport that will be used by the server's proxy.
         *
         * \param remoteServiceName The service's name that the remote server uses and the proxy will use to connect with it. 
         * \param transport The network transport that server's proxy has to use.
         *        This transport's object is not deleted by this class in its destrcutor. Cannot be NULL.
         * \param domainId The DDS domain that DDS will use to work. Default value: 0
         * \param timeout Timeout used in each call to remotely procedures.
         *        If the call exceeds the time, a eProsima::RPCDDS::ServerTimeoutException is thrown.
         * \exception eProsima::RPCDDS::InitializeException This exception is thrown when the initialization was wrong.
         */
        AsyncCallTestProxy(std::string remoteServiceName, eProsima::RPCDDS::Transport *transport, int domainId = 0, long timeout = 10000);

        /// \brief The default destructor.
        virtual ~AsyncCallTestProxy();
        
         
        DDS_Long getLong(/*in*/ DDS_Long lo1, /*inout*/ DDS_Long& lo2, /*out*/ DDS_Long& lo3);
         
        DDS_Boolean getBoolean(/*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean& bo2, /*out*/ DDS_Boolean& bo3);
         
        char* getString(/*in*/ char* s1, /*inout*/ char*& s2, /*out*/ char*& s3);
         
        Structure duplicate(/*in*/ const Structure& ev);
        
         
        void getLong_async(AsyncCallTest_getLongCallbackHandler &obj, /*in*/ DDS_Long lo1, /*inout*/ DDS_Long lo2);
         
        void getBoolean_async(AsyncCallTest_getBooleanCallbackHandler &obj, /*in*/ DDS_Boolean bo1, /*inout*/ DDS_Boolean bo2);
         
        void getString_async(AsyncCallTest_getStringCallbackHandler &obj, /*in*/ char* s1, /*inout*/ char* s2);
         
        void duplicate_async(AsyncCallTest_duplicateCallbackHandler &obj, /*in*/ const Structure& ev);
        
    private:
        /**
         * \brief This function creates all RPC endpoints for each remote procedure.
         */
        void createRPCs();
        
        eProsima::RPCDDS::ClientRPC *getLong_Service;
        eProsima::RPCDDS::ClientRPC *getBoolean_Service;
        eProsima::RPCDDS::ClientRPC *getString_Service;
        eProsima::RPCDDS::ClientRPC *duplicate_Service; 
};

#endif // _AsyncCallTest_PROXY_H_
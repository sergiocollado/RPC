#ifndef _ServerException_PROXY_H_
#define _ServerException_PROXY_H_

/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "client/Client.h"
#include "ServerExceptionRequestReplyUtils.h"
#include "ServerExceptionClientRPCSupport.h"
#include "exceptions/Exception.h"

/**
 * \brief This abstract class defines the callbacks that RPCDDS will call in an asynchronous call.
 *        These callback has to be implemented in a derived class.
 */
class ServerException_sendExceptionCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void sendException() = 0;
        
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
class ServerException_sendExceptionTwoCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void sendExceptionTwo(/*inout*/ char* message2, /*out*/ char* message3, /*out*/ char* sendExceptionTwo_ret) = 0;
        
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
class ServerException_sendExceptionThreeCallbackHandler
{
    public:
        /**
         * This function is called when is received the reply from the server.
         */
        virtual void sendExceptionThree(/*inout*/ const Estructura& es2, /*out*/ const Estructura& es3, /*out*/ const Estructura& sendExceptionThree_ret) = 0;
        
        /**
         * \brief This function is called when an exception occurs.
         *        This exception can be launched in the server's side or in the client's side.
         *
         * \param ex The exception that will be launched.
         */
        virtual void on_exception(const eProsima::RPCDDS::Exception &ex) = 0;
};

/**
 * \brief This class implements a specific server's proxy for the defined interface ServerException.
 */
class ServerExceptionProxy : public eProsima::RPCDDS::Client
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
        ServerExceptionProxy(std::string remoteServiceName, int domainId = 0, long timeout = 10000);

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
        ServerExceptionProxy(std::string remoteServiceName, eProsima::RPCDDS::Transport *transport, int domainId = 0, long timeout = 10000);

        /// \brief The default destructor.
        virtual ~ServerExceptionProxy();
        
         
        void sendException();
         
        char* sendExceptionTwo(/*in*/ char* message, /*inout*/ char*& message2, /*out*/ char*& message3);
         
        Estructura sendExceptionThree(/*in*/ const Estructura& es, /*inout*/ Estructura& es2, /*out*/ Estructura& es3);
        
         
        void sendException_async(ServerException_sendExceptionCallbackHandler &obj);
         
        void sendExceptionTwo_async(ServerException_sendExceptionTwoCallbackHandler &obj, /*in*/ char* message, /*inout*/ char* message2);
         
        void sendExceptionThree_async(ServerException_sendExceptionThreeCallbackHandler &obj, /*in*/ const Estructura& es, /*inout*/ const Estructura& es2);
        
    private:
        /**
         * \brief This function creates all RPC endpoints for each remote procedure.
         */
        void createRPCs();
        
        eProsima::RPCDDS::ClientRPC *sendException_Service;
        eProsima::RPCDDS::ClientRPC *sendExceptionTwo_Service;
        eProsima::RPCDDS::ClientRPC *sendExceptionThree_Service; 
};

#endif // _ServerException_PROXY_H_
/** 
 * Generated by DDSCS: Do not edit.  Version 1.0 *
 */

#include "TypedefTestServer.h"
#include "TypedefTestRequestReplyPlugin.h"
#include "TypedefTestServerRPCSupport.h"

TypedefTestServer::TypedefTestServer(int domainId, unsigned int threadCount,
const char *qosLibrary, const char *qosProfile) : Server(domainId, threadCount, qosLibrary, qosProfile)
{
    _impl = new TypedefTestImpl();
    
    this->setRPC(new getLargoServerRPC("getLargo", this,
                getLargoRequestUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                getLargoReplyUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                &TypedefTestServer::getLargo, getParticipant()));
    this->setRPC(new getLarguisimoServerRPC("getLarguisimo", this,
                getLarguisimoRequestUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                getLarguisimoReplyUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                &TypedefTestServer::getLarguisimo, getParticipant()));
    this->setRPC(new getDatosDefServerRPC("getDatosDef", this,
                getDatosDefRequestUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                getDatosDefReplyUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                &TypedefTestServer::getDatosDef, getParticipant()));
    this->setRPC(new getDatosDefondoServerRPC("getDatosDefondo", this,
                getDatosDefondoRequestUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                getDatosDefondoReplyUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                &TypedefTestServer::getDatosDefondo, getParticipant()));
    this->setRPC(new getCadenaServerRPC("getCadena", this,
                getCadenaRequestUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                getCadenaReplyUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                &TypedefTestServer::getCadena, getParticipant()));
    this->setRPC(new getCorreaServerRPC("getCorrea", this,
                getCorreaRequestUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                getCorreaReplyUtils::registerType(getParticipant()),
    "TypedefTest_Library",
    "TypedefTest_Profile",
                &TypedefTestServer::getCorrea, getParticipant()));

}
TypedefTestServer::~TypedefTestServer()
{
    delete _impl;    
}

void TypedefTestServer::getLargo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = (TypedefTestServer*)server;
    largo  l1 ;       
   
    largo  l2 ;    
    largo  getLargo_ret ;       
    eProsima::DDSRPC::ReturnMessage  returnedValue ;        
    getLargoReply *replyData = NULL;

    getLargoRequestUtils::extractTypeData((getLargoRequest*)requestData, l1  );
                                         
    returnedValue = srv->_impl->getLargo(l1  ,l2  , getLargo_ret  );
           
    replyData = getLargoReplyUtils::createTypeData(l2  , getLargo_ret  );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
    
    getLargoReplyTypeSupport::delete_data(replyData);
    getLargoRequestTypeSupport::delete_data((getLargoRequest*)requestData);
    
        
        
}
void TypedefTestServer::getLarguisimo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = (TypedefTestServer*)server;
    larguisimo  ll1 ;       
   
    larguisimo  ll2 ;    
    larguisimo  getLarguisimo_ret ;       
    eProsima::DDSRPC::ReturnMessage  returnedValue ;        
    getLarguisimoReply *replyData = NULL;

    getLarguisimoRequestUtils::extractTypeData((getLarguisimoRequest*)requestData, ll1  );
                                         
    returnedValue = srv->_impl->getLarguisimo(ll1  ,ll2  , getLarguisimo_ret  );
           
    replyData = getLarguisimoReplyUtils::createTypeData(ll2  , getLarguisimo_ret  );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
    
    getLarguisimoReplyTypeSupport::delete_data(replyData);
    getLarguisimoRequestTypeSupport::delete_data((getLarguisimoRequest*)requestData);
    
        
        
}
void TypedefTestServer::getDatosDef(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = (TypedefTestServer*)server;
    DatosDef *d1 = NULL;       
   
    DatosDef *d2 = DatosDefPluginSupport_create_data();    
    DatosDef *getDatosDef_ret = DatosDefPluginSupport_create_data();       
    eProsima::DDSRPC::ReturnMessage  returnedValue ;        
    getDatosDefReply *replyData = NULL;

    getDatosDefRequestUtils::extractTypeData((getDatosDefRequest*)requestData, d1  );
                                         
    returnedValue = srv->_impl->getDatosDef(d1  ,d2  , getDatosDef_ret  );
           
    replyData = getDatosDefReplyUtils::createTypeData(d2  , getDatosDef_ret  );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
    
    getDatosDefReplyTypeSupport::delete_data(replyData);
    getDatosDefRequestTypeSupport::delete_data((getDatosDefRequest*)requestData);
    
    DatosDefPluginSupport_destroy_data(d2);    
    DatosDefPluginSupport_destroy_data(getDatosDef_ret);    
}
void TypedefTestServer::getDatosDefondo(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = (TypedefTestServer*)server;
    DatosDefondo *dd1 = NULL;       
   
    DatosDefondo *dd2 = DatosDefondoPluginSupport_create_data();    
    DatosDefondo *getDatosDefondo_ret = DatosDefondoPluginSupport_create_data();       
    eProsima::DDSRPC::ReturnMessage  returnedValue ;        
    getDatosDefondoReply *replyData = NULL;

    getDatosDefondoRequestUtils::extractTypeData((getDatosDefondoRequest*)requestData, dd1  );
                                         
    returnedValue = srv->_impl->getDatosDefondo(dd1  ,dd2  , getDatosDefondo_ret  );
           
    replyData = getDatosDefondoReplyUtils::createTypeData(dd2  , getDatosDefondo_ret  );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
    
    getDatosDefondoReplyTypeSupport::delete_data(replyData);
    getDatosDefondoRequestTypeSupport::delete_data((getDatosDefondoRequest*)requestData);
    
    DatosDefondoPluginSupport_destroy_data(dd2);    
    DatosDefondoPluginSupport_destroy_data(getDatosDefondo_ret);    
}
void TypedefTestServer::getCadena(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = (TypedefTestServer*)server;
    cadena  c1  = NULL;       
   
    cadena  c2  = NULL;    
    cadena  getCadena_ret  = NULL;       
    eProsima::DDSRPC::ReturnMessage  returnedValue ;        
    getCadenaReply *replyData = NULL;

    getCadenaRequestUtils::extractTypeData((getCadenaRequest*)requestData, c1  );
                                         
    returnedValue = srv->_impl->getCadena(c1  ,c2  , getCadena_ret  );
           
    replyData = getCadenaReplyUtils::createTypeData(c2  , getCadena_ret  );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
    
    getCadenaReplyTypeSupport::delete_data(replyData);
    getCadenaRequestTypeSupport::delete_data((getCadenaRequest*)requestData);
    
    if(c2 != NULL) DDS::String_free(c2);    
    if(getCadena_ret != NULL) DDS::String_free(getCadena_ret);    
}
void TypedefTestServer::getCorrea(eProsima::DDSRPC::Server *server, void *requestData, eProsima::DDSRPC::ServerRPC *service) 
{ 
    TypedefTestServer *srv = (TypedefTestServer*)server;
    correa  cc1  = NULL;       
   
    correa  cc2  = NULL;    
    correa  getCorrea_ret  = NULL;       
    eProsima::DDSRPC::ReturnMessage  returnedValue ;        
    getCorreaReply *replyData = NULL;

    getCorreaRequestUtils::extractTypeData((getCorreaRequest*)requestData, cc1  );
                                         
    returnedValue = srv->_impl->getCorrea(cc1  ,cc2  , getCorrea_ret  );
           
    replyData = getCorreaReplyUtils::createTypeData(cc2  , getCorrea_ret  );
                                                  
    // sendReply takes care of deleting the data
    service->sendReply(requestData, replyData, returnedValue);
    
    getCorreaReplyTypeSupport::delete_data(replyData);
    getCorreaRequestTypeSupport::delete_data((getCorreaRequest*)requestData);
    
    if(cc2 != NULL) DDS::String_free(cc2);    
    if(getCorrea_ret != NULL) DDS::String_free(getCorrea_ret);    
}
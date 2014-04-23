/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This generated file is licensed to you under the terms described in the
 * FASTRPC_LICENSE file included in this FASTRPC distribution.
 *
 *************************************************************************
 * 
 * @file BasicTypeTestClientExample.cxx
 * This source file shows a simple example of how to create a proxy for an interface.
 *
 * This file was generated by the tool fastrpcgen.
 */

#include "BasicTypeTestProxy.h"
#include "BasicTypeTest.h"
#include "BasicTypeTestCDRProtocol.h"
#include "fastrpc/transports/TCPProxyTransport.h"
#include "fastrpc/exceptions/Exceptions.h"

#include <iostream>
#include <unistd.h>

using namespace eprosima::fastrpc;
using namespace ::exception;
using namespace ::transport;
using namespace ::protocol::fastcdr;

int main(int argc, char **argv)
{
    BasicTypeTestProtocol *protocol = NULL;
    TCPProxyTransport *transport = NULL;
    BasicTypeTestProxy *proxy = NULL;
    
    // Creation of the proxy for interface "BasicTypeTest".
    try
    {
        protocol = new BasicTypeTestProtocol();
        transport = new TCPProxyTransport("127.0.0.1:8080");
        proxy = new BasicTypeTestProxy(*transport, *protocol);
    }
    catch(InitializeException &ex)
    {
        std::cout << ex.what() << std::endl;
        return -1;
    }
    
    uint8_t  oc1 = oc1_value;    
    uint8_t  oc2 = BasicTypeTest::oc2_value;    
    uint8_t  oc3 = 0;    
    uint8_t  getOctetRetValue = 0;       

    try
    {
        getOctetRetValue = proxy->getOctet(oc1, oc2, oc3);

        if(oc3 != 2 ||
                getOctetRetValue != 1 ||
                oc2 != 3 ||
                oc1 != 1)
        {
            std::cout << "TEST FAILED<getOctet>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getOctet>: " <<  ex.what() << std::endl;
        _exit(-1);
    }

    char  ch1 = ch1_value;       
    char  ch2 = BasicTypeTest::ch2_value;       
    char  ch3 = 0;    
    char  getCharRetValue = 0;       

    try
    {
        getCharRetValue = proxy->getChar(ch1, ch2, ch3);   

        if(ch3 != 2 ||
                getCharRetValue != 1 ||
                ch2 != 3 ||
                ch1 != 1)
        {
            std::cout << "TEST FAILED<getChar>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getChar>: " << ex.what() << std::endl;
        _exit(-1);
    }

    wchar_t  wch1 = wch1_value;       
    wchar_t  wch2 = BasicTypeTest::wch2_value;       
    wchar_t  wch3 = 0; 
    wchar_t  getWCharRetValue = 0;       

    try
    {
        getWCharRetValue = proxy->getWChar(wch1, wch2, wch3);

        if(wch3 != 2 ||
                getWCharRetValue != 1 ||
                wch2 != 3 ||
                wch1 != 1)
        {
            std::cout << "TEST FAILED<getWChar>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getWChar>: %s" << ex.what() << std::endl;
        _exit(-1);
    }

    int16_t  sh1 = sh1_value;       
    int16_t  sh2 = BasicTypeTest::sh2_value;       
    int16_t  sh3 = 0;    
    int16_t  getShortRetValue = 0;       

    try
    {
        getShortRetValue = proxy->getShort(sh1, sh2, sh3);

        if(sh3 != 2 ||
                getShortRetValue != 1 ||
                sh2 != 3 ||
                sh1 != 1)
        {
            std::cout << "TEST FAILED<getShort>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getShort>: " << ex.what() << std::endl;
        _exit(-1);
    }

    uint16_t  ush1 = ush1_value;       
    uint16_t  ush2 = BasicTypeTest::ush2_value;       
    uint16_t  ush3 = 0;    
    uint16_t  getUShortRetValue = 0;       

    try
    {
        getUShortRetValue = proxy->getUShort(ush1, ush2, ush3);

        if(ush3 != 2 ||
                getUShortRetValue != 1 ||
                ush2 != 3 ||
                ush1 != 1)
        {
            std::cout << "TEST FAILED<getUShort>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getUShort>: " << ex.what() << std::endl;
        _exit(-1);
    }

    int32_t  lo1 = lo1_value;       
    int32_t  lo2 = BasicTypeTest::lo2_value;       
    int32_t  lo3 = 0;    
    int32_t  getLongRetValue = 0;       

    try
    {
        getLongRetValue = proxy->getLong(lo1, lo2, lo3);

        if(lo3 != 2 ||
                getLongRetValue != 1 ||
                lo2 != 3 ||
                lo1 != 1)
        {
            std::cout << "TEST FAILED<getLong>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getLong>: " << ex.what() << std::endl;
        _exit(-1);
    }

    uint32_t  ulo1 = ulo1_value;       
    uint32_t  ulo2 = BasicTypeTest::ulo2_value;       
    uint32_t  ulo3 = 0;    
    uint32_t  getULongRetValue = 0;       

    try
    {
        getULongRetValue = proxy->getULong(ulo1, ulo2, ulo3);

        if(ulo3 != 2 ||
                getULongRetValue != 1 ||
                ulo2 != 3 ||
                ulo1 != 1)
        {
            std::cout << "TEST FAILED<getULong>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getULong>: " << ex.what() << std::endl;
        _exit(-1);
    }

    int64_t  llo1 = llo1_value;       
    int64_t  llo2 = BasicTypeTest::llo2_value;       
    int64_t  llo3 = 0;    
    int64_t  getLLongRetValue = 0;       

    try
    {
        getLLongRetValue = proxy->getLLong(llo1, llo2, llo3);

        if(llo3 != 2 ||
                getLLongRetValue != 1 ||
                llo2 != 3 ||
                llo1 != 1)
        {
            std::cout << "TEST FAILED<getLLong>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getLLong>: " << ex.what() << std::endl;
        _exit(-1);
    }

    uint64_t  ullo1 = ullo1_value;       
    uint64_t  ullo2 = BasicTypeTest::ullo2_value;       
    uint64_t  ullo3 = 0;    
    uint64_t  getULLongRetValue = 0;       

    try
    {
        getULLongRetValue = proxy->getULLong(ullo1, ullo2, ullo3);

        if(ullo3 != 2 ||
                getULLongRetValue != 1 ||
                ullo2 != 3 ||
                ullo1 != 1)
        {
            std::cout << "TEST FAILED<getULLong>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getULLong>: " << ex.what() << std::endl;
        _exit(-1);
    }

    float  fl1 = fl1_value;       
    float  fl2 = BasicTypeTest::fl2_value;       
    float  fl3 = 0;    
    float  getFloatRetValue = 0;       

    try
    {
        getFloatRetValue = proxy->getFloat(fl1, fl2, fl3);

        if(fl3 != 2.0 ||
                getFloatRetValue != 1.0 ||
                fl2 != 3.0 ||
                fl1 != 1.0)
        {
            std::cout << "TEST FAILED<getFloat>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getFloat>: " << ex.what() << std::endl;
        _exit(-1);
    }

    double  do1 = do1_value;       
    double  do2 = BasicTypeTest::do2_value;       
    double  do3 = 0;    
    double  getDoubleRetValue = 0;       

    try
    {
        getDoubleRetValue = proxy->getDouble(do1, do2, do3);

        if(do3 != 2.0 ||
                getDoubleRetValue != 1.0 ||
                do2 != 3.0 ||
                do1 != 1.0)
        {
            std::cout << "TEST FAILED<getDouble>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getDouble>: " << ex.what() << std::endl;
        _exit(-1);
    }

    bool  bo1 = bo1_value;       
    bool  bo2 = BasicTypeTest::bo2_value;       
    bool  bo3 = false;    
    bool  getBooleanRetValue = false;       

    try
    {
        getBooleanRetValue = proxy->getBoolean(bo1, bo2, bo3);

        if(bo3 != false ||
                getBooleanRetValue != true ||
                bo2 != true ||
                bo1 != true)
        {
            std::cout << "TEST FAILED<getBoolean>: Wrong values" << std::endl;
            _exit(-1);
        }
    }
    catch(SystemException &ex)
    {
        std::cout << "TEST FAILED<getBoolean>: " << ex.what() << std::endl;
        _exit(-1);
    }

    std::cout << "TEST SUCCESFULLY" << std::endl;

    delete(proxy);
    delete(transport);
    delete(protocol);

    _exit(0);
    return 0;
}

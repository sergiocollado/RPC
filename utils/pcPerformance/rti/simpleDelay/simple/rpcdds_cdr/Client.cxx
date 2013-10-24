/*************************************************************************
 * Copyright (c) 2012 eProsima. All rights reserved.
 *
 * This copy of RPCDDS is licensed to you under the terms described in the
 * RPCDDS_LICENSE file included in this distribution.
 *
 *************************************************************************
 * 
 * @file Client.cxx
 * This source file shows a simple example of how to create a proxy for interface SimpleDelay.
 *
 * This file was generated by the tool rpcddsgen.
 */

#include "SimpleDelayProxy.h"
#include "SimpleDelayCDRProtocol.h"
#include "transports/TCPProxyTransport.h"
#include "exceptions/Exceptions.h"

#include <iostream>
#include <fstream>
#include <boost/chrono.hpp>

using namespace eprosima::rpcdds;
using namespace ::exception;
using namespace ::transport;
using namespace ::protocol::cdr;

int main(int argc, char **argv)
{
    boost::chrono::duration<double> suma_call_seconds[10000];
    boost::chrono::duration<double> duplicate_call_seconds[10000];
    boost::chrono::duration<double> suma_procedure_seconds;
    boost::chrono::duration<double> duplicate_procedure_seconds;
    boost::chrono::duration<double> program_seconds;

    if(argc == 3)
    {
        uint16_t ip[4];
        uint32_t data_size;

        // Check that the parameter is a IP address.
        if(sscanf(argv[1], "%hu.%hu.%hu.%hu", &ip[0], &ip[1], &ip[2], &ip[3]) == 4)
        {
            if(sscanf(argv[2], "%u", &data_size) == 1)
            {
                SimpleDelayProtocol *protocol = NULL;
                TCPProxyTransport *transport = NULL;
                SimpleDelayProxy *proxy = NULL;

                // Creation of the proxy for interface "SimpleDelay".
                try
                {
                    protocol = new SimpleDelayProtocol();
                    transport = new TCPProxyTransport(argv[1]);
                    proxy = new SimpleDelayProxy(*transport, *protocol);
                }
                catch(InitializeException &ex)
                {
                    std::cout << ex.what() << std::endl;
                    return -1;
                }

                sleep(10);

                boost::chrono::system_clock::time_point program_start = boost::chrono::system_clock::now();

                //boost::chrono::system_clock::time_point procedure_start = boost::chrono::system_clock::now();
                // Testing suma procedure.
                /*for(int i = 0; i < 10000; ++i)
                  {
                  boost::chrono::system_clock::time_point call_start = boost::chrono::system_clock::now();
                  int32_t result = proxy->suma(10, i);
                  suma_call_seconds[i] = boost::chrono::system_clock::now() - call_start;
                  }*/

                //suma_procedure_seconds = boost::chrono::system_clock::now() - procedure_start;

                //procedure_start = boost::chrono::system_clock::now();
                // Testing ducplicate procedure.
                for(int i = 0; i < 10000; ++i)
                {
                    Estructura es, ret;
                    Estructura_initialize(&es);
                    es.valor1 = i;
                    es.valor2 = i*2;
                    es.valor3 = "Esto es una prueba para el test de performance rpcdds vs thrift vs rpcdds";
                    es.seq.ensure_length(data_size, data_size);
                    for(int j = 0; j < data_size; ++j)
                        es.seq[j] = j;

                    boost::chrono::system_clock::time_point call_start = boost::chrono::system_clock::now();
                    ret = proxy->duplicate(es);
                    duplicate_call_seconds[i] = boost::chrono::system_clock::now() - call_start;
                    es.valor3 = NULL;
                    Estructura_finalize(&es);
                }

                //duplicate_procedure_seconds = boost::chrono::system_clock::now() - procedure_start;

                program_seconds = boost::chrono::system_clock::now() - program_start;

                // Print the suma call times.
                //for(int i = 0; i < 10000; ++i)
                //    std::cout << i << " > suma in " << suma_call_seconds[i].count() << " seconds." << std::endl;
                // Print the all suma procedure time.
                //std::cout << "Executed 10000 suma procedures in " << suma_procedure_seconds.count() << " seconds." << std::endl;

                // Print the duplicate call times.
                //for(int i = 0; i < 10000; ++i)
                //    std::cout << i << " > duplicate in " << duplicate_call_seconds[i].count() << " seconds." << std::endl;
                // Print the all duplicate procedure time.
                //std::cout << "Executed 10000 duplicate procedures in " << duplicate_procedure_seconds.count() << " seconds." << std::endl;

                // Print total execution time.
                std::cout << "Program execution in " << program_seconds.count() << " seconds." << std::endl;

                // Calcular latencia media y el que más tarda.
                boost::chrono::duration<double> max_dur = duplicate_call_seconds[0];
                int max_pos = 0;
                boost::chrono::duration<double> min_dur = duplicate_call_seconds[0];
                int min_pos = 0;
                boost::chrono::duration<double> suma_dur = duplicate_call_seconds[0];

                for(int count = 1; count < 10000; ++count)
                {
                    if(duplicate_call_seconds[count] > max_dur)
                    {
                        max_dur = duplicate_call_seconds[count];
                        max_pos = count;
                    }

                    if(duplicate_call_seconds[count] < min_dur)
                    {
                        min_dur = duplicate_call_seconds[count];
                        min_pos = count;
                    }

                    suma_dur = suma_dur + duplicate_call_seconds[count];
                }

                std::sort(duplicate_call_seconds, duplicate_call_seconds + 10000);

                std::cout << "The faster call was " << min_pos << " with " << min_dur << std::endl;
                std::cout << "The slowest call was " << max_pos << " with " << max_dur << std::endl;
                std::cout << "The latency average was " << suma_dur / 10000 << std::endl;
                std::cout << "The 5000th value was " << duplicate_call_seconds[4999] << std::endl;

                // Guardar datos en ficheros.
                std::ofstream file;
                file.open("client.txt", std::ios::app);
                file << min_dur << " " << max_dur << " " << suma_dur/10000 << " " << duplicate_call_seconds[4999] << std::endl;
                file.close();

                delete proxy;
                delete transport;
                delete protocol;
            }
            else
            {
                std::cout << "Second parameter is not a valid data size." << std::endl;
            }
        }
        else
        {
            std::cout << "First parameter is not a valid IPv4 address." << std::endl;
        }
    }
    else
    {
        std::cout << "Usage: SimpleDelayClient <Server IP address> <Data size>" << std::endl;
    }

    return 0;
}
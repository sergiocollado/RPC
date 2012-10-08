#ifndef _SERVER_SERVER_H_
#define _SERVER_SERVER_H_

#include "utils/ddsrpc.h"
#include "utils/Messages.h"
#include "utils/Typedefs.h"
#include "utils/Version.h"

#include <list>

#define DDSRPC_DEFAULT_PERIOD_MILLISEC 5000

namespace eProsima
{
	namespace DDSRPC
	{

        class ServerStrategy;
        class Transport;
		class ServerRPC;
	 
		/**
		 * \brief This class implements the common functionalities that the server have.
		 */
		class DDSRPC_WIN32_DLL_API Server
		{

			public:

				/// \brief This function introduces the thread in a loop.
				void wait(unsigned int milliseconds = DDSRPC_DEFAULT_PERIOD_MILLISEC);

				/**
				 * \brief This function schedules a new request that was received.
				 *
				 * \param execFunction The function that has to be called by the server to execute the request. Cannot be NULL.
				 * \param data The received request. Cannot be NULL.
				 * \param service The remote procedure that has received the request. Cannot be NULL.
				 */
				void schedule(fExecFunction execFunction, void *data, ServerRPC *service);

			protected:

				/**
				 * \brief A constructor. The associated domain participant is created.
				 *
				 * \param strategy The strategy used by the server to execute new requests. Cannot be NULL.
				 * \param transport The transport that will be use the server.
				 * \param domainId The domain id's value that the server proxy will set in the domain participant.
				 * \exception eProsima::DDSRPC::ResourceException 
				 */
				Server(ServerStrategy *strategy, Transport *transport, int domainId = 0);

				/// \brief The default destructor.
				virtual ~Server();

				/**
				 * \brief This function adds a new remote procedure call.
				 *
				 * \param newRPC The new remote procedure. Cannot be NULL.
				 * \return 0 value is returned if remote procedure was added succesfully. In other case, -1 value is returned.
				 */
				int setRPC(ServerRPC *newRPC);

				/**
				 * \brief This function returns the DDS domain participant that use this server.
				 *
				 * \return Pointer to the DDS domain participant.
				 */
				DDS::DomainParticipant* getParticipant();

			private:

				/// \brief The domain identifier.
				int m_domainId;

				/// \brief The strategy used by the server with new requests.
                ServerStrategy *m_strategy;

				/**
				 * \brief Each server is associated with a DDS DomainParticipant. This participant have to be created in the server creation.
				 * This pointer should never be NULL.
				 */
				DDS::DomainParticipant *m_participant;
        
				/// \brief The list that contains all the remote procedures..
				std::list<ServerRPC*> m_rpcList;

				void deleteRPCs();
		};

	} // namespace DDSRPC
} // namespace eProsima

#endif // _SERVER_SERVER_H_

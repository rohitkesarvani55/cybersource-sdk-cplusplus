/* soapINVPTransactionProcessorService.cpp
   Generated by gSOAP 2.8.116 for ../wsdl/service.h

gSOAP XML Web services tools
Copyright (C) 2000-2021, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapINVPTransactionProcessorService.h"

INVPTransactionProcessorService::INVPTransactionProcessorService()
{	this->soap = soap_new();
	this->soap_own = true;
	INVPTransactionProcessorService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

INVPTransactionProcessorService::INVPTransactionProcessorService(const INVPTransactionProcessorService& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
}

INVPTransactionProcessorService::INVPTransactionProcessorService(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	INVPTransactionProcessorService_init(_soap->imode, _soap->omode);
}

INVPTransactionProcessorService::INVPTransactionProcessorService(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	INVPTransactionProcessorService_init(iomode, iomode);
}

INVPTransactionProcessorService::INVPTransactionProcessorService(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	INVPTransactionProcessorService_init(imode, omode);
}

INVPTransactionProcessorService::~INVPTransactionProcessorService()
{	if (this->soap_own)
	{	INVPTransactionProcessorService::destroy();
		soap_free(this->soap);
	}
}

void INVPTransactionProcessorService::INVPTransactionProcessorService_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	static const struct Namespace namespaces[] = {
        { "SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL },
        { "SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL },
        { "xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL },
        { "xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL },
        { "ns2", "urn:schemas-cybersource-com:transaction-data-1.183", NULL, NULL },
        { "ns1", "urn:schemas-cybersource-com:transaction-data:TransactionProcessor", NULL, NULL },
        { NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

void INVPTransactionProcessorService::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void INVPTransactionProcessorService::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	INVPTransactionProcessorService_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

#ifndef WITH_PURE_VIRTUAL
INVPTransactionProcessorService *INVPTransactionProcessorService::copy()
{	INVPTransactionProcessorService *dup = SOAP_NEW_UNMANAGED(INVPTransactionProcessorService);
	if (dup)
	{	soap_done(dup->soap);
		soap_copy_context(dup->soap, this->soap);
	}
	return dup;
}
#endif

INVPTransactionProcessorService& INVPTransactionProcessorService::operator=(const INVPTransactionProcessorService& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
	}
	return *this;
}

int INVPTransactionProcessorService::soap_close_socket()
{	return soap_closesock(this->soap);
}

int INVPTransactionProcessorService::soap_force_close_socket()
{	return soap_force_closesock(this->soap);
}

int INVPTransactionProcessorService::soap_senderfault(const char *string, const char *detailXML)
{	return ::soap_sender_fault(this->soap, string, detailXML);
}

int INVPTransactionProcessorService::soap_senderfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_sender_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

int INVPTransactionProcessorService::soap_receiverfault(const char *string, const char *detailXML)
{	return ::soap_receiver_fault(this->soap, string, detailXML);
}

int INVPTransactionProcessorService::soap_receiverfault(const char *subcodeQName, const char *string, const char *detailXML)
{	return ::soap_receiver_fault_subcode(this->soap, subcodeQName, string, detailXML);
}

void INVPTransactionProcessorService::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void INVPTransactionProcessorService::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *INVPTransactionProcessorService::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

void INVPTransactionProcessorService::soap_noheader()
{	this->soap->header = NULL;
}

::SOAP_ENV__Header *INVPTransactionProcessorService::soap_header()
{	return this->soap->header;
}

#ifndef WITH_NOIO
int INVPTransactionProcessorService::run(int port, int backlog)
{	if (!soap_valid_socket(this->soap->master) && !soap_valid_socket(this->bind(NULL, port, backlog)))
		return this->soap->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->soap->errnum == 0) // timeout?
				this->soap->error = SOAP_OK;
			break;
		}
		if (this->serve())
			break;
		this->destroy();
	}
	return this->soap->error;
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int INVPTransactionProcessorService::ssl_run(int port, int backlog)
{	if (!soap_valid_socket(this->soap->master) && !soap_valid_socket(this->bind(NULL, port, backlog)))
		return this->soap->error;
	for (;;)
	{	if (!soap_valid_socket(this->accept()))
		{	if (this->soap->errnum == 0) // timeout?
				this->soap->error = SOAP_OK;
			break;
		}
		if (this->ssl_accept() || this->serve())
			break;
		this->destroy();
	}
	return this->soap->error;
}
#endif

SOAP_SOCKET INVPTransactionProcessorService::bind(const char *host, int port, int backlog)
{	return soap_bind(this->soap, host, port, backlog);
}

SOAP_SOCKET INVPTransactionProcessorService::accept()
{	return soap_accept(this->soap);
}

#if defined(WITH_OPENSSL) || defined(WITH_GNUTLS)
int INVPTransactionProcessorService::ssl_accept()
{	return soap_ssl_accept(this->soap);
}
#endif
#endif

int INVPTransactionProcessorService::serve()
{
#ifndef WITH_FASTCGI
	this->soap->keep_alive = this->soap->max_keep_alive + 1;
#endif
	do
	{
#ifndef WITH_FASTCGI
		if (this->soap->keep_alive > 0 && this->soap->max_keep_alive > 0)
			this->soap->keep_alive--;
#endif
		if (soap_begin_serve(this->soap))
		{	if (this->soap->error >= SOAP_STOP)
				continue;
			return this->soap->error;
		}
		if ((dispatch() || (this->soap->fserveloop && this->soap->fserveloop(this->soap))) && this->soap->error && this->soap->error < SOAP_STOP)
		{
#ifdef WITH_FASTCGI
			soap_send_fault(this->soap);
#else
			return soap_send_fault(this->soap);
#endif
		}
#ifdef WITH_FASTCGI
		soap_destroy(this->soap);
		soap_end(this->soap);
	} while (1);
#else
	} while (this->soap->keep_alive);
#endif
	return SOAP_OK;
}

static int serve___ns1__runTransaction(struct soap*, INVPTransactionProcessorService*);

int INVPTransactionProcessorService::dispatch()
{	return dispatch(this->soap);
}

int INVPTransactionProcessorService::dispatch(struct soap* soap)
{
	INVPTransactionProcessorService_init(soap->imode, soap->omode);
	(void)soap_peek_element(soap);
	if (!soap_match_tag(soap, soap->tag, "ns2:nvpRequest"))
		return serve___ns1__runTransaction(soap, this);
	return soap->error = SOAP_NO_METHOD;
}

static int serve___ns1__runTransaction(struct soap *soap, INVPTransactionProcessorService *service)
{	struct __ns1__runTransaction soap_tmp___ns1__runTransaction;
	struct __ns1__runTransactionResponse soap_tmp___ns1__runTransactionResponse;
	soap_default___ns1__runTransactionResponse(soap, &soap_tmp___ns1__runTransactionResponse);
	soap_default___ns1__runTransaction(soap, &soap_tmp___ns1__runTransaction);
	if (!soap_get___ns1__runTransaction(soap, &soap_tmp___ns1__runTransaction, "-ns1:runTransaction", NULL))
		return soap->error;
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap->error;
	soap->error = service->runTransaction(soap_tmp___ns1__runTransaction.ns2__nvpRequest, soap_tmp___ns1__runTransactionResponse.ns2__nvpReply);
	if (soap->error)
		return soap->error;
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__runTransactionResponse(soap, &soap_tmp___ns1__runTransactionResponse);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__runTransactionResponse(soap, &soap_tmp___ns1__runTransactionResponse, "-ns1:runTransactionResponse", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	};
	if (soap_end_count(soap)
	 || soap_response(soap, SOAP_OK)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__runTransactionResponse(soap, &soap_tmp___ns1__runTransactionResponse, "-ns1:runTransactionResponse", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap->error;
	return soap_closesock(soap);
}
/* End of server object code */

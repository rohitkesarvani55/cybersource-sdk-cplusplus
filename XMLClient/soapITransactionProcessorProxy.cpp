/* soapITransactionProcessorProxy.cpp
   Generated by gSOAP 2.8.116 for service.h

gSOAP XML Web services tools
Copyright (C) 2000-2021, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/

#include "soapITransactionProcessorProxy.h"

#include "wsseapi.h"

ITransactionProcessorProxy::ITransactionProcessorProxy()
{	this->soap = soap_new();
	this->soap_own = true;
	ITransactionProcessorProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

ITransactionProcessorProxy::ITransactionProcessorProxy(const ITransactionProcessorProxy& rhs)
{	this->soap = rhs.soap;
	this->soap_own = false;
	this->soap_endpoint = rhs.soap_endpoint;
}

ITransactionProcessorProxy::ITransactionProcessorProxy(struct soap *_soap)
{	this->soap = _soap;
	this->soap_own = false;
	ITransactionProcessorProxy_init(_soap->imode, _soap->omode);
}

ITransactionProcessorProxy::ITransactionProcessorProxy(struct soap *_soap, const char *soap_endpoint_url)
{	this->soap = _soap;
	this->soap_own = false;
	ITransactionProcessorProxy_init(_soap->imode, _soap->omode);
	soap_endpoint = soap_endpoint_url;
}

ITransactionProcessorProxy::ITransactionProcessorProxy(const char *soap_endpoint_url)
{	this->soap = soap_new();
	this->soap_own = true;
	ITransactionProcessorProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
	soap_endpoint = soap_endpoint_url;
}

ITransactionProcessorProxy::ITransactionProcessorProxy(soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	ITransactionProcessorProxy_init(iomode, iomode);
}

ITransactionProcessorProxy::ITransactionProcessorProxy(const char *soap_endpoint_url, soap_mode iomode)
{	this->soap = soap_new();
	this->soap_own = true;
	ITransactionProcessorProxy_init(iomode, iomode);
	soap_endpoint = soap_endpoint_url;
}

ITransactionProcessorProxy::ITransactionProcessorProxy(soap_mode imode, soap_mode omode)
{	this->soap = soap_new();
	this->soap_own = true;
	ITransactionProcessorProxy_init(imode, omode);
}

ITransactionProcessorProxy::~ITransactionProcessorProxy()
{	if (this->soap_own)
	{	ITransactionProcessorProxy::destroy();
		soap_free(this->soap);
	}
}

void ITransactionProcessorProxy::ITransactionProcessorProxy_init(soap_mode imode, soap_mode omode)
{	soap_imode(this->soap, imode);
	soap_omode(this->soap, omode);
	soap_endpoint = NULL;
	static const struct Namespace namespaces[] = {
        { "SOAP-ENV", "http://schemas.xmlsoap.org/soap/envelope/", "http://www.w3.org/*/soap-envelope", NULL },
        { "SOAP-ENC", "http://schemas.xmlsoap.org/soap/encoding/", "http://www.w3.org/*/soap-encoding", NULL },
        { "xsi", "http://www.w3.org/2001/XMLSchema-instance", "http://www.w3.org/*/XMLSchema-instance", NULL },
        { "xsd", "http://www.w3.org/2001/XMLSchema", "http://www.w3.org/*/XMLSchema", NULL },
        { "c14n", "http://www.w3.org/2001/10/xml-exc-c14n#", NULL, NULL },
        { "ds", "http://www.w3.org/2000/09/xmldsig#", NULL, NULL },
        { "saml1", "urn:oasis:names:tc:SAML:1.0:assertion", NULL, NULL },
        { "saml2", "urn:oasis:names:tc:SAML:2.0:assertion", NULL, NULL },
        { "wsu", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-utility-1.0.xsd", NULL, NULL },
        { "xenc", "http://www.w3.org/2001/04/xmlenc#", NULL, NULL },
        { "wsc", "http://docs.oasis-open.org/ws-sx/ws-secureconversation/200512", "http://schemas.xmlsoap.org/ws/2005/02/sc", NULL },
        { "wsse", "http://docs.oasis-open.org/wss/2004/01/oasis-200401-wss-wssecurity-secext-1.0.xsd", "http://docs.oasis-open.org/wss/oasis-wss-wssecurity-secext-1.1.xsd", NULL },
        { "ns1", "urn:schemas-cybersource-com:transaction-data:TransactionProcessor", NULL, NULL },
        { "ns2", "urn:schemas-cybersource-com:transaction-data-1.183", NULL, NULL },
        { NULL, NULL, NULL, NULL}
    };
	soap_set_namespaces(this->soap, namespaces);
}

ITransactionProcessorProxy *ITransactionProcessorProxy::copy()
{	ITransactionProcessorProxy *dup = SOAP_NEW_UNMANAGED(ITransactionProcessorProxy);
	if (dup)
	{	soap_done(dup->soap);
		soap_copy_context(dup->soap, this->soap);
	}
	return dup;
}

ITransactionProcessorProxy& ITransactionProcessorProxy::operator=(const ITransactionProcessorProxy& rhs)
{	if (this->soap != rhs.soap)
	{	if (this->soap_own)
			soap_free(this->soap);
		this->soap = rhs.soap;
		this->soap_own = false;
		this->soap_endpoint = rhs.soap_endpoint;
	}
	return *this;
}

void ITransactionProcessorProxy::destroy()
{	soap_destroy(this->soap);
	soap_end(this->soap);
}

void ITransactionProcessorProxy::reset()
{	this->destroy();
	soap_done(this->soap);
	soap_initialize(this->soap);
	ITransactionProcessorProxy_init(SOAP_IO_DEFAULT, SOAP_IO_DEFAULT);
}

void ITransactionProcessorProxy::soap_noheader()
{	this->soap->header = NULL;
}

void ITransactionProcessorProxy::soap_header(struct _wsse__Security *wsse__Security)
{
	::soap_header(this->soap);
	this->soap->header->wsse__Security = wsse__Security;
}

::SOAP_ENV__Header *ITransactionProcessorProxy::soap_header()
{	return this->soap->header;
}

::SOAP_ENV__Fault *ITransactionProcessorProxy::soap_fault()
{	return this->soap->fault;
}

const char *ITransactionProcessorProxy::soap_fault_subcode()
{	return ::soap_fault_subcode(this->soap);
}

const char *ITransactionProcessorProxy::soap_fault_string()
{	return ::soap_fault_string(this->soap);
}

const char *ITransactionProcessorProxy::soap_fault_detail()
{	return ::soap_fault_detail(this->soap);
}

int ITransactionProcessorProxy::soap_close_socket()
{	return ::soap_closesock(this->soap);
}

int ITransactionProcessorProxy::soap_force_close_socket()
{	return ::soap_force_closesock(this->soap);
}

void ITransactionProcessorProxy::soap_print_fault(FILE *fd)
{	::soap_print_fault(this->soap, fd);
}

#ifndef WITH_LEAN
#ifndef WITH_COMPAT
void ITransactionProcessorProxy::soap_stream_fault(std::ostream& os)
{	::soap_stream_fault(this->soap, os);
}
#endif

char *ITransactionProcessorProxy::soap_sprint_fault(char *buf, size_t len)
{	return ::soap_sprint_fault(this->soap, buf, len);
}
#endif

int ITransactionProcessorProxy::send_runTransaction(const char *soap_endpoint_url, const char *soap_action, ns2__RequestMessage *ns2__requestMessage)
{
	struct __ns1__runTransaction soap_tmp___ns1__runTransaction;
	if (soap_endpoint_url != NULL)
		soap_endpoint = soap_endpoint_url;
	if (soap_endpoint == NULL)
		soap_endpoint = "https://ics2ws.ic3.com:443/commerce/1.x/transactionProcessor";
	if (soap_action == NULL)
		soap_action = "runTransaction";
	soap_tmp___ns1__runTransaction.ns2__requestMessage = ns2__requestMessage;
	soap_begin(soap);
	soap->encodingStyle = NULL; /* use SOAP literal style */
	soap_serializeheader(soap);
	soap_serialize___ns1__runTransaction(soap, &soap_tmp___ns1__runTransaction);
	if (soap_begin_count(soap))
		return soap->error;
	if ((soap->mode & SOAP_IO_LENGTH))
	{	if (soap_envelope_begin_out(soap)
		 || soap_putheader(soap)
		 || soap_body_begin_out(soap)
		 || soap_put___ns1__runTransaction(soap, &soap_tmp___ns1__runTransaction, "-ns1:runTransaction", "")
		 || soap_body_end_out(soap)
		 || soap_envelope_end_out(soap))
			 return soap->error;
	}
	if (soap_end_count(soap))
		return soap->error;
	if (soap_connect(soap, soap_endpoint, soap_action)
	 || soap_envelope_begin_out(soap)
	 || soap_putheader(soap)
	 || soap_body_begin_out(soap)
	 || soap_put___ns1__runTransaction(soap, &soap_tmp___ns1__runTransaction, "-ns1:runTransaction", "")
	 || soap_body_end_out(soap)
	 || soap_envelope_end_out(soap)
	 || soap_end_send(soap))
		return soap_closesock(soap);
	return SOAP_OK;
}

int ITransactionProcessorProxy::recv_runTransaction(ns2__ReplyMessage &ns2__replyMessage)
{
	ns2__replyMessage.soap_default(soap);
	if (soap_begin_recv(soap)
	 || soap_envelope_begin_in(soap)
	 || soap_recv_header(soap)
	 || soap_body_begin_in(soap))
		return soap_closesock(soap);
	ns2__replyMessage.soap_get(soap, "ns2:replyMessage", NULL);
	if (soap->error)
		return soap_recv_fault(soap, 0);
	if (soap_body_end_in(soap)
	 || soap_envelope_end_in(soap)
	 || soap_end_recv(soap))
		return soap_closesock(soap);
	return soap_closesock(soap);
}
/* End of client proxy code */

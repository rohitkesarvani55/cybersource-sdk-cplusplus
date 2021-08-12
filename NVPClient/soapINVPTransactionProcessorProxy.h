/* soapINVPTransactionProcessorProxy.h
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

#ifndef soapINVPTransactionProcessorProxy_H
#define soapINVPTransactionProcessorProxy_H
#include "soapH.h"

    class SOAP_CMAC INVPTransactionProcessorProxy {
      public:
        /// Context to manage proxy IO and data
        struct soap *soap;
        /// flag indicating that this context is owned by this proxy and should be deleted by the destructor
        bool soap_own;
        /// Endpoint URL of service 'INVPTransactionProcessorProxy' (change as needed)
        const char *soap_endpoint;
        /// Variables globally declared in service.h, if any
        /// Construct a proxy with new managing context
        INVPTransactionProcessorProxy();
        /// Copy constructor
        INVPTransactionProcessorProxy(const INVPTransactionProcessorProxy& rhs);
        /// Construct proxy given a shared managing context
        INVPTransactionProcessorProxy(struct soap*);
        /// Construct proxy given a shared managing context and endpoint URL
        INVPTransactionProcessorProxy(struct soap*, const char *soap_endpoint_url);
        /// Constructor taking an endpoint URL
        INVPTransactionProcessorProxy(const char *soap_endpoint_url);
        /// Constructor taking input and output mode flags for the new managing context
        INVPTransactionProcessorProxy(soap_mode iomode);
        /// Constructor taking endpoint URL and input and output mode flags for the new managing context
        INVPTransactionProcessorProxy(const char *soap_endpoint_url, soap_mode iomode);
        /// Constructor taking input and output mode flags for the new managing context
        INVPTransactionProcessorProxy(soap_mode imode, soap_mode omode);
        /// Destructor deletes deserialized data and its managing context, when the context was allocated by the constructor
        virtual ~INVPTransactionProcessorProxy();
        /// Initializer used by constructors
        virtual void INVPTransactionProcessorProxy_init(soap_mode imode, soap_mode omode);
        /// Return a copy that has a new managing context with the same engine state
        virtual INVPTransactionProcessorProxy *copy();
        /// Copy assignment
        INVPTransactionProcessorProxy& operator=(const INVPTransactionProcessorProxy&);
        /// Delete all deserialized data (uses soap_destroy() and soap_end())
        virtual void destroy();
        /// Delete all deserialized data and reset to default
        virtual void reset();
        /// Disables and removes SOAP Header from message by setting soap->header = NULL
        virtual void soap_noheader();
        /// Add SOAP Header to message
        virtual void soap_header(struct _wsse__Security *wsse__Security);
        /// Get SOAP Header structure (i.e. soap->header, which is NULL when absent)
        virtual ::SOAP_ENV__Header *soap_header();
        /// Get SOAP Fault structure (i.e. soap->fault, which is NULL when absent)
        virtual ::SOAP_ENV__Fault *soap_fault();
        /// Get SOAP Fault subcode QName string (NULL when absent)
        virtual const char *soap_fault_subcode();
        /// Get SOAP Fault string/reason (NULL when absent)
        virtual const char *soap_fault_string();
        /// Get SOAP Fault detail XML string (NULL when absent)
        virtual const char *soap_fault_detail();
        /// Close connection (normally automatic, except for send_X ops)
        virtual int soap_close_socket();
        /// Force close connection (can kill a thread blocked on IO)
        virtual int soap_force_close_socket();
        /// Print fault
        virtual void soap_print_fault(FILE*);
    #ifndef WITH_LEAN
    #ifndef WITH_COMPAT
        /// Print fault to stream
        virtual void soap_stream_fault(std::ostream&);
    #endif
        /// Write fault to buffer
        virtual char *soap_sprint_fault(char *buf, size_t len);
    #endif
        //
        /// Web service synchronous operation 'runTransaction' with default endpoint and default SOAP Action header, returns SOAP_OK or error code
        virtual int runTransaction(const std::string& ns2__nvpRequest, std::string &ns2__nvpReply) { return this->runTransaction(NULL, NULL, ns2__nvpRequest, ns2__nvpReply); }
        /// Web service synchronous operation 'runTransaction' to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int runTransaction(const char *soap_endpoint_url, const char *soap_action, const std::string& ns2__nvpRequest, std::string &ns2__nvpReply) { return this->send_runTransaction(soap_endpoint_url, soap_action, ns2__nvpRequest) || this->recv_runTransaction(ns2__nvpReply) ? this->soap->error : SOAP_OK; }
        /// Web service asynchronous operation 'send_runTransaction' to send a request message to the specified endpoint and SOAP Action header, returns SOAP_OK or error code
        virtual int send_runTransaction(const char *soap_endpoint_url, const char *soap_action, const std::string& ns2__nvpRequest);
        /// Web service asynchronous operation 'recv_runTransaction' to receive a response message from the connected endpoint, returns SOAP_OK or error code
        virtual int recv_runTransaction(std::string &ns2__nvpReply);
    };
#endif

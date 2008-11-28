//
// H460pres.h
//
// Code automatically generated by asnparse.
//

#if ! H323_DISABLE_H460P

#ifndef __H460P_H
#define __H460P_H

#ifdef P_USE_PRAGMA
#pragma interface
#endif

#include <ptclib/asner.h>

#include "h225.h"
#include "h235.h"


//
// PresenceMessage
//

class H460P_PresenceStatus;
class H460P_PresenceInstruct;
class H460P_PresenceAuthorize;
class H460P_PresenceNotify;
class H460P_PresenceRequest;
class H460P_PresenceResponse;
class H460P_PresenceAlive;
class H460P_PresenceRemove;
class H460P_PresenceAlert;

class H460P_PresenceMessage : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceMessage, PASN_Choice);
#endif
  public:
    H460P_PresenceMessage(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_presenceStatus,
      e_presenceInstruct,
      e_presenceAuthorize,
      e_presenceNotify,
      e_presenceRequest,
      e_presenceResponse,
      e_presenceAlive,
      e_presenceRemove,
      e_presenceAlert
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceStatus &() const;
#else
    operator H460P_PresenceStatus &();
    operator const H460P_PresenceStatus &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceInstruct &() const;
#else
    operator H460P_PresenceInstruct &();
    operator const H460P_PresenceInstruct &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceAuthorize &() const;
#else
    operator H460P_PresenceAuthorize &();
    operator const H460P_PresenceAuthorize &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceNotify &() const;
#else
    operator H460P_PresenceNotify &();
    operator const H460P_PresenceNotify &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceRequest &() const;
#else
    operator H460P_PresenceRequest &();
    operator const H460P_PresenceRequest &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceResponse &() const;
#else
    operator H460P_PresenceResponse &();
    operator const H460P_PresenceResponse &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceAlive &() const;
#else
    operator H460P_PresenceAlive &();
    operator const H460P_PresenceAlive &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceRemove &() const;
#else
    operator H460P_PresenceRemove &();
    operator const H460P_PresenceRemove &() const;
#endif
#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H460P_PresenceAlert &() const;
#else
    operator H460P_PresenceAlert &();
    operator const H460P_PresenceAlert &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// PresenceInstruction
//

class H225_AliasAddress;

class H460P_PresenceInstruction : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceInstruction, PASN_Choice);
#endif
  public:
    H460P_PresenceInstruction(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_subscribe,
      e_unsubscribe,
      e_block,
      e_unblock
    };

#if defined(__GNUC__) && __GNUC__ <= 2 && __GNUC_MINOR__ < 9
    operator H225_AliasAddress &() const;
#else
    operator H225_AliasAddress &();
    operator const H225_AliasAddress &() const;
#endif

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// PresenceIdentifier
//

class H460P_PresenceIdentifier : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceIdentifier, PASN_Sequence);
#endif
  public:
    H460P_PresenceIdentifier(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_OctetString m_guid;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceState
//

class H460P_PresenceState : public PASN_Choice
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceState, PASN_Choice);
#endif
  public:
    H460P_PresenceState(unsigned tag = 0, TagClass tagClass = UniversalTagClass);

    enum Choices {
      e_hidden,
      e_available,
      e_online,
      e_offline,
      e_onCall,
      e_voiceMail,
      e_notAvailable,
      e_generic
    };

    PBoolean CreateObject();
    PObject * Clone() const;
};


//
// ArrayOf_PresenceNotification
//

class H460P_PresenceNotification;

class H460P_ArrayOf_PresenceNotification : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceNotification, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceNotification(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceNotification & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceInstruction
//

class H460P_PresenceInstruction;

class H460P_ArrayOf_PresenceInstruction : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceInstruction, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceInstruction(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceInstruction & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceSubscription
//

class H460P_PresenceSubscription;

class H460P_ArrayOf_PresenceSubscription : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceSubscription, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceSubscription(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceSubscription & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_ClearToken
//

class H235_ClearToken;

class H460P_ArrayOf_ClearToken : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_ClearToken, PASN_Array);
#endif
  public:
    H460P_ArrayOf_ClearToken(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H235_ClearToken & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_CryptoH323Token
//

class H225_CryptoH323Token;

class H460P_ArrayOf_CryptoH323Token : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_CryptoH323Token, PASN_Array);
#endif
  public:
    H460P_ArrayOf_CryptoH323Token(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H225_CryptoH323Token & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_PresenceIdentifier
//

class H460P_PresenceIdentifier;

class H460P_ArrayOf_PresenceIdentifier : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_PresenceIdentifier, PASN_Array);
#endif
  public:
    H460P_ArrayOf_PresenceIdentifier(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H460P_PresenceIdentifier & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_AliasAddress
//

class H225_AliasAddress;

class H460P_ArrayOf_AliasAddress : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_AliasAddress, PASN_Array);
#endif
  public:
    H460P_ArrayOf_AliasAddress(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H225_AliasAddress & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// ArrayOf_GenericData
//

class H225_GenericData;

class H460P_ArrayOf_GenericData : public PASN_Array
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_ArrayOf_GenericData, PASN_Array);
#endif
  public:
    H460P_ArrayOf_GenericData(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    PASN_Object * CreateObject() const;
    H225_GenericData & operator[](PINDEX i) const;
    PObject * Clone() const;
};


//
// PresenceStatus
//

class H460P_PresenceStatus : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceStatus, PASN_Sequence);
#endif
  public:
    H460P_PresenceStatus(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_instruction
    };

    H460P_ArrayOf_PresenceNotification m_notification;
    H460P_ArrayOf_PresenceInstruction m_instruction;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceInstruct
//

class H460P_PresenceInstruct : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceInstruct, PASN_Sequence);
#endif
  public:
    H460P_PresenceInstruct(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceInstruction m_instruction;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceAuthorize
//

class H460P_PresenceAuthorize : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceAuthorize, PASN_Sequence);
#endif
  public:
    H460P_PresenceAuthorize(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceSubscription m_subscription;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceNotify
//

class H460P_PresenceNotify : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceNotify, PASN_Sequence);
#endif
  public:
    H460P_PresenceNotify(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceNotification m_notification;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceRequest
//

class H460P_PresenceRequest : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceRequest, PASN_Sequence);
#endif
  public:
    H460P_PresenceRequest(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_tokens,
      e_cryptoTokens
    };

    H460P_ArrayOf_PresenceSubscription m_subscription;
    H460P_ArrayOf_ClearToken m_tokens;
    H460P_ArrayOf_CryptoH323Token m_cryptoTokens;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceResponse
//

class H460P_PresenceResponse : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceResponse, PASN_Sequence);
#endif
  public:
    H460P_PresenceResponse(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_tokens,
      e_cryptoTokens
    };

    H460P_ArrayOf_PresenceSubscription m_subscription;
    H460P_ArrayOf_ClearToken m_tokens;
    H460P_ArrayOf_CryptoH323Token m_cryptoTokens;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceAlive
//

class H460P_PresenceAlive : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceAlive, PASN_Sequence);
#endif
  public:
    H460P_PresenceAlive(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceIdentifier m_identifier;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceRemove
//

class H460P_PresenceRemove : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceRemove, PASN_Sequence);
#endif
  public:
    H460P_PresenceRemove(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceIdentifier m_identifier;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceAlert
//

class H460P_PresenceAlert : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceAlert, PASN_Sequence);
#endif
  public:
    H460P_PresenceAlert(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    H460P_ArrayOf_PresenceNotification m_notification;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceSubscription
//

class H460P_PresenceSubscription : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceSubscription, PASN_Sequence);
#endif
  public:
    H460P_PresenceSubscription(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_approved,
      e_rasAddress,
      e_timeToLive,
      e_identifier,
      e_genericData
    };

    H225_AliasAddress m_subscribe;
    H460P_ArrayOf_AliasAddress m_aliases;
    PASN_Boolean m_approved;
    H225_TransportAddress m_rasAddress;
    H225_TimeToLive m_timeToLive;
    H460P_PresenceIdentifier m_identifier;
    H460P_ArrayOf_GenericData m_genericData;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// Presentity
//

class H460P_Presentity : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_Presentity, PASN_Sequence);
#endif
  public:
    H460P_Presentity(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_display,
      e_geolocation,
      e_genericData
    };

    H460P_PresenceState m_state;
    PASN_BMPString m_display;
    PASN_OctetString m_geolocation;
    H460P_ArrayOf_GenericData m_genericData;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


//
// PresenceNotification
//

class H460P_PresenceNotification : public PASN_Sequence
{
#ifndef PASN_LEANANDMEAN
    PCLASSINFO(H460P_PresenceNotification, PASN_Sequence);
#endif
  public:
    H460P_PresenceNotification(unsigned tag = UniversalSequence, TagClass tagClass = UniversalTagClass);

    enum OptionalFields {
      e_aliasAddress,
      e_subscribers
    };

    H460P_Presentity m_presentity;
    H225_AliasAddress m_aliasAddress;
    H460P_ArrayOf_PresenceIdentifier m_subscribers;

    PINDEX GetDataLength() const;
    PBoolean Decode(PASN_Stream & strm);
    void Encode(PASN_Stream & strm) const;
#ifndef PASN_NOPRINTON
    void PrintOn(ostream & strm) const;
#endif
    Comparison Compare(const PObject & obj) const;
    PObject * Clone() const;
};


#endif // __H460P_H

#endif // if ! H323_DISABLE_H460P


// End of H460pres.h
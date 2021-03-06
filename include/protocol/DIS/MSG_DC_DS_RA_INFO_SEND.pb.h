// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DC_DS_RA_INFO_SEND.proto

#ifndef PROTOBUF_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto__INCLUDED
#define PROTOBUF_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2006000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2006000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();
void protobuf_AssignDesc_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();
void protobuf_ShutdownFile_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();

class MSG_DC_DS_RA_INFO_SEND;
class MSG_DC_DS_RA_INFO_SEND_RA_INFO;
class MSG_DS_DC_RA_INFO_SEND_ACK;

// ===================================================================

class MSG_DC_DS_RA_INFO_SEND_RA_INFO : public ::google::protobuf::Message {
 public:
  MSG_DC_DS_RA_INFO_SEND_RA_INFO();
  virtual ~MSG_DC_DS_RA_INFO_SEND_RA_INFO();

  MSG_DC_DS_RA_INFO_SEND_RA_INFO(const MSG_DC_DS_RA_INFO_SEND_RA_INFO& from);

  inline MSG_DC_DS_RA_INFO_SEND_RA_INFO& operator=(const MSG_DC_DS_RA_INFO_SEND_RA_INFO& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MSG_DC_DS_RA_INFO_SEND_RA_INFO& default_instance();

  void Swap(MSG_DC_DS_RA_INFO_SEND_RA_INFO* other);

  // implements Message ----------------------------------------------

  MSG_DC_DS_RA_INFO_SEND_RA_INFO* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DC_DS_RA_INFO_SEND_RA_INFO& from);
  void MergeFrom(const MSG_DC_DS_RA_INFO_SEND_RA_INFO& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required string raIP = 1;
  inline bool has_raip() const;
  inline void clear_raip();
  static const int kRaIPFieldNumber = 1;
  inline const ::std::string& raip() const;
  inline void set_raip(const ::std::string& value);
  inline void set_raip(const char* value);
  inline void set_raip(const char* value, size_t size);
  inline ::std::string* mutable_raip();
  inline ::std::string* release_raip();
  inline void set_allocated_raip(::std::string* raip);

  // required uint32 raPort = 2;
  inline bool has_raport() const;
  inline void clear_raport();
  static const int kRaPortFieldNumber = 2;
  inline ::google::protobuf::uint32 raport() const;
  inline void set_raport(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:MSG_DC_DS_RA_INFO_SEND.RA_INFO)
 private:
  inline void set_has_raip();
  inline void clear_has_raip();
  inline void set_has_raport();
  inline void clear_has_raport();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* raip_;
  ::google::protobuf::uint32 raport_;
  friend void  protobuf_AddDesc_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_DC_DS_RA_INFO_SEND_RA_INFO* default_instance_;
};
// -------------------------------------------------------------------

class MSG_DC_DS_RA_INFO_SEND : public ::google::protobuf::Message {
 public:
  MSG_DC_DS_RA_INFO_SEND();
  virtual ~MSG_DC_DS_RA_INFO_SEND();

  MSG_DC_DS_RA_INFO_SEND(const MSG_DC_DS_RA_INFO_SEND& from);

  inline MSG_DC_DS_RA_INFO_SEND& operator=(const MSG_DC_DS_RA_INFO_SEND& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MSG_DC_DS_RA_INFO_SEND& default_instance();

  void Swap(MSG_DC_DS_RA_INFO_SEND* other);

  // implements Message ----------------------------------------------

  MSG_DC_DS_RA_INFO_SEND* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DC_DS_RA_INFO_SEND& from);
  void MergeFrom(const MSG_DC_DS_RA_INFO_SEND& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  typedef MSG_DC_DS_RA_INFO_SEND_RA_INFO RA_INFO;

  // accessors -------------------------------------------------------

  // repeated .MSG_DC_DS_RA_INFO_SEND.RA_INFO raInfo = 1;
  inline int rainfo_size() const;
  inline void clear_rainfo();
  static const int kRaInfoFieldNumber = 1;
  inline const ::MSG_DC_DS_RA_INFO_SEND_RA_INFO& rainfo(int index) const;
  inline ::MSG_DC_DS_RA_INFO_SEND_RA_INFO* mutable_rainfo(int index);
  inline ::MSG_DC_DS_RA_INFO_SEND_RA_INFO* add_rainfo();
  inline const ::google::protobuf::RepeatedPtrField< ::MSG_DC_DS_RA_INFO_SEND_RA_INFO >&
      rainfo() const;
  inline ::google::protobuf::RepeatedPtrField< ::MSG_DC_DS_RA_INFO_SEND_RA_INFO >*
      mutable_rainfo();

  // @@protoc_insertion_point(class_scope:MSG_DC_DS_RA_INFO_SEND)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::MSG_DC_DS_RA_INFO_SEND_RA_INFO > rainfo_;
  friend void  protobuf_AddDesc_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_DC_DS_RA_INFO_SEND* default_instance_;
};
// -------------------------------------------------------------------

class MSG_DS_DC_RA_INFO_SEND_ACK : public ::google::protobuf::Message {
 public:
  MSG_DS_DC_RA_INFO_SEND_ACK();
  virtual ~MSG_DS_DC_RA_INFO_SEND_ACK();

  MSG_DS_DC_RA_INFO_SEND_ACK(const MSG_DS_DC_RA_INFO_SEND_ACK& from);

  inline MSG_DS_DC_RA_INFO_SEND_ACK& operator=(const MSG_DS_DC_RA_INFO_SEND_ACK& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const MSG_DS_DC_RA_INFO_SEND_ACK& default_instance();

  void Swap(MSG_DS_DC_RA_INFO_SEND_ACK* other);

  // implements Message ----------------------------------------------

  MSG_DS_DC_RA_INFO_SEND_ACK* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DS_DC_RA_INFO_SEND_ACK& from);
  void MergeFrom(const MSG_DS_DC_RA_INFO_SEND_ACK& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 statusCode = 1;
  inline bool has_statuscode() const;
  inline void clear_statuscode();
  static const int kStatusCodeFieldNumber = 1;
  inline ::google::protobuf::int32 statuscode() const;
  inline void set_statuscode(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MSG_DS_DC_RA_INFO_SEND_ACK)
 private:
  inline void set_has_statuscode();
  inline void clear_has_statuscode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 statuscode_;
  friend void  protobuf_AddDesc_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_DS_DC_RA_INFO_SEND_ACK* default_instance_;
};
// ===================================================================


// ===================================================================

// MSG_DC_DS_RA_INFO_SEND_RA_INFO

// required string raIP = 1;
inline bool MSG_DC_DS_RA_INFO_SEND_RA_INFO::has_raip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::set_has_raip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::clear_has_raip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::clear_raip() {
  if (raip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    raip_->clear();
  }
  clear_has_raip();
}
inline const ::std::string& MSG_DC_DS_RA_INFO_SEND_RA_INFO::raip() const {
  // @@protoc_insertion_point(field_get:MSG_DC_DS_RA_INFO_SEND.RA_INFO.raIP)
  return *raip_;
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::set_raip(const ::std::string& value) {
  set_has_raip();
  if (raip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    raip_ = new ::std::string;
  }
  raip_->assign(value);
  // @@protoc_insertion_point(field_set:MSG_DC_DS_RA_INFO_SEND.RA_INFO.raIP)
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::set_raip(const char* value) {
  set_has_raip();
  if (raip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    raip_ = new ::std::string;
  }
  raip_->assign(value);
  // @@protoc_insertion_point(field_set_char:MSG_DC_DS_RA_INFO_SEND.RA_INFO.raIP)
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::set_raip(const char* value, size_t size) {
  set_has_raip();
  if (raip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    raip_ = new ::std::string;
  }
  raip_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MSG_DC_DS_RA_INFO_SEND.RA_INFO.raIP)
}
inline ::std::string* MSG_DC_DS_RA_INFO_SEND_RA_INFO::mutable_raip() {
  set_has_raip();
  if (raip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    raip_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MSG_DC_DS_RA_INFO_SEND.RA_INFO.raIP)
  return raip_;
}
inline ::std::string* MSG_DC_DS_RA_INFO_SEND_RA_INFO::release_raip() {
  clear_has_raip();
  if (raip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = raip_;
    raip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::set_allocated_raip(::std::string* raip) {
  if (raip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete raip_;
  }
  if (raip) {
    set_has_raip();
    raip_ = raip;
  } else {
    clear_has_raip();
    raip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:MSG_DC_DS_RA_INFO_SEND.RA_INFO.raIP)
}

// required uint32 raPort = 2;
inline bool MSG_DC_DS_RA_INFO_SEND_RA_INFO::has_raport() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::set_has_raport() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::clear_has_raport() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::clear_raport() {
  raport_ = 0u;
  clear_has_raport();
}
inline ::google::protobuf::uint32 MSG_DC_DS_RA_INFO_SEND_RA_INFO::raport() const {
  // @@protoc_insertion_point(field_get:MSG_DC_DS_RA_INFO_SEND.RA_INFO.raPort)
  return raport_;
}
inline void MSG_DC_DS_RA_INFO_SEND_RA_INFO::set_raport(::google::protobuf::uint32 value) {
  set_has_raport();
  raport_ = value;
  // @@protoc_insertion_point(field_set:MSG_DC_DS_RA_INFO_SEND.RA_INFO.raPort)
}

// -------------------------------------------------------------------

// MSG_DC_DS_RA_INFO_SEND

// repeated .MSG_DC_DS_RA_INFO_SEND.RA_INFO raInfo = 1;
inline int MSG_DC_DS_RA_INFO_SEND::rainfo_size() const {
  return rainfo_.size();
}
inline void MSG_DC_DS_RA_INFO_SEND::clear_rainfo() {
  rainfo_.Clear();
}
inline const ::MSG_DC_DS_RA_INFO_SEND_RA_INFO& MSG_DC_DS_RA_INFO_SEND::rainfo(int index) const {
  // @@protoc_insertion_point(field_get:MSG_DC_DS_RA_INFO_SEND.raInfo)
  return rainfo_.Get(index);
}
inline ::MSG_DC_DS_RA_INFO_SEND_RA_INFO* MSG_DC_DS_RA_INFO_SEND::mutable_rainfo(int index) {
  // @@protoc_insertion_point(field_mutable:MSG_DC_DS_RA_INFO_SEND.raInfo)
  return rainfo_.Mutable(index);
}
inline ::MSG_DC_DS_RA_INFO_SEND_RA_INFO* MSG_DC_DS_RA_INFO_SEND::add_rainfo() {
  // @@protoc_insertion_point(field_add:MSG_DC_DS_RA_INFO_SEND.raInfo)
  return rainfo_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::MSG_DC_DS_RA_INFO_SEND_RA_INFO >&
MSG_DC_DS_RA_INFO_SEND::rainfo() const {
  // @@protoc_insertion_point(field_list:MSG_DC_DS_RA_INFO_SEND.raInfo)
  return rainfo_;
}
inline ::google::protobuf::RepeatedPtrField< ::MSG_DC_DS_RA_INFO_SEND_RA_INFO >*
MSG_DC_DS_RA_INFO_SEND::mutable_rainfo() {
  // @@protoc_insertion_point(field_mutable_list:MSG_DC_DS_RA_INFO_SEND.raInfo)
  return &rainfo_;
}

// -------------------------------------------------------------------

// MSG_DS_DC_RA_INFO_SEND_ACK

// required int32 statusCode = 1;
inline bool MSG_DS_DC_RA_INFO_SEND_ACK::has_statuscode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DS_DC_RA_INFO_SEND_ACK::set_has_statuscode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DS_DC_RA_INFO_SEND_ACK::clear_has_statuscode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DS_DC_RA_INFO_SEND_ACK::clear_statuscode() {
  statuscode_ = 0;
  clear_has_statuscode();
}
inline ::google::protobuf::int32 MSG_DS_DC_RA_INFO_SEND_ACK::statuscode() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_RA_INFO_SEND_ACK.statusCode)
  return statuscode_;
}
inline void MSG_DS_DC_RA_INFO_SEND_ACK::set_statuscode(::google::protobuf::int32 value) {
  set_has_statuscode();
  statuscode_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_DC_RA_INFO_SEND_ACK.statusCode)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MSG_5fDC_5fDS_5fRA_5fINFO_5fSEND_2eproto__INCLUDED

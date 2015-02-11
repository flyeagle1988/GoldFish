// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DS_DC_HEARTBEAT_SEND.proto

#ifndef PROTOBUF_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto__INCLUDED
#define PROTOBUF_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto__INCLUDED

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
void  protobuf_AddDesc_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto();
void protobuf_AssignDesc_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto();
void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto();

class MSG_DS_DC_HEARTBEAT_SEND;
class MSG_DC_DS_HEARTBEAT_SEND_ACK;

// ===================================================================

class MSG_DS_DC_HEARTBEAT_SEND : public ::google::protobuf::Message {
 public:
  MSG_DS_DC_HEARTBEAT_SEND();
  virtual ~MSG_DS_DC_HEARTBEAT_SEND();

  MSG_DS_DC_HEARTBEAT_SEND(const MSG_DS_DC_HEARTBEAT_SEND& from);

  inline MSG_DS_DC_HEARTBEAT_SEND& operator=(const MSG_DS_DC_HEARTBEAT_SEND& from) {
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
  static const MSG_DS_DC_HEARTBEAT_SEND& default_instance();

  void Swap(MSG_DS_DC_HEARTBEAT_SEND* other);

  // implements Message ----------------------------------------------

  MSG_DS_DC_HEARTBEAT_SEND* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DS_DC_HEARTBEAT_SEND& from);
  void MergeFrom(const MSG_DS_DC_HEARTBEAT_SEND& from);
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

  // required uint32 cpu = 1;
  inline bool has_cpu() const;
  inline void clear_cpu();
  static const int kCpuFieldNumber = 1;
  inline ::google::protobuf::uint32 cpu() const;
  inline void set_cpu(::google::protobuf::uint32 value);

  // required uint32 memory = 2;
  inline bool has_memory() const;
  inline void clear_memory();
  static const int kMemoryFieldNumber = 2;
  inline ::google::protobuf::uint32 memory() const;
  inline void set_memory(::google::protobuf::uint32 value);

  // optional uint32 importTaskID = 3;
  inline bool has_importtaskid() const;
  inline void clear_importtaskid();
  static const int kImportTaskIDFieldNumber = 3;
  inline ::google::protobuf::uint32 importtaskid() const;
  inline void set_importtaskid(::google::protobuf::uint32 value);

  // optional uint32 loadTaskID = 4;
  inline bool has_loadtaskid() const;
  inline void clear_loadtaskid();
  static const int kLoadTaskIDFieldNumber = 4;
  inline ::google::protobuf::uint32 loadtaskid() const;
  inline void set_loadtaskid(::google::protobuf::uint32 value);

  // optional uint32 importSchedule = 5;
  inline bool has_importschedule() const;
  inline void clear_importschedule();
  static const int kImportScheduleFieldNumber = 5;
  inline ::google::protobuf::uint32 importschedule() const;
  inline void set_importschedule(::google::protobuf::uint32 value);

  // optional uint32 loadSchedule = 6;
  inline bool has_loadschedule() const;
  inline void clear_loadschedule();
  static const int kLoadScheduleFieldNumber = 6;
  inline ::google::protobuf::uint32 loadschedule() const;
  inline void set_loadschedule(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:MSG_DS_DC_HEARTBEAT_SEND)
 private:
  inline void set_has_cpu();
  inline void clear_has_cpu();
  inline void set_has_memory();
  inline void clear_has_memory();
  inline void set_has_importtaskid();
  inline void clear_has_importtaskid();
  inline void set_has_loadtaskid();
  inline void clear_has_loadtaskid();
  inline void set_has_importschedule();
  inline void clear_has_importschedule();
  inline void set_has_loadschedule();
  inline void clear_has_loadschedule();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 cpu_;
  ::google::protobuf::uint32 memory_;
  ::google::protobuf::uint32 importtaskid_;
  ::google::protobuf::uint32 loadtaskid_;
  ::google::protobuf::uint32 importschedule_;
  ::google::protobuf::uint32 loadschedule_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_DS_DC_HEARTBEAT_SEND* default_instance_;
};
// -------------------------------------------------------------------

class MSG_DC_DS_HEARTBEAT_SEND_ACK : public ::google::protobuf::Message {
 public:
  MSG_DC_DS_HEARTBEAT_SEND_ACK();
  virtual ~MSG_DC_DS_HEARTBEAT_SEND_ACK();

  MSG_DC_DS_HEARTBEAT_SEND_ACK(const MSG_DC_DS_HEARTBEAT_SEND_ACK& from);

  inline MSG_DC_DS_HEARTBEAT_SEND_ACK& operator=(const MSG_DC_DS_HEARTBEAT_SEND_ACK& from) {
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
  static const MSG_DC_DS_HEARTBEAT_SEND_ACK& default_instance();

  void Swap(MSG_DC_DS_HEARTBEAT_SEND_ACK* other);

  // implements Message ----------------------------------------------

  MSG_DC_DS_HEARTBEAT_SEND_ACK* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DC_DS_HEARTBEAT_SEND_ACK& from);
  void MergeFrom(const MSG_DC_DS_HEARTBEAT_SEND_ACK& from);
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

  // @@protoc_insertion_point(class_scope:MSG_DC_DS_HEARTBEAT_SEND_ACK)
 private:
  inline void set_has_statuscode();
  inline void clear_has_statuscode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 statuscode_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_DC_DS_HEARTBEAT_SEND_ACK* default_instance_;
};
// ===================================================================


// ===================================================================

// MSG_DS_DC_HEARTBEAT_SEND

// required uint32 cpu = 1;
inline bool MSG_DS_DC_HEARTBEAT_SEND::has_cpu() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_has_cpu() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_has_cpu() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_cpu() {
  cpu_ = 0u;
  clear_has_cpu();
}
inline ::google::protobuf::uint32 MSG_DS_DC_HEARTBEAT_SEND::cpu() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_HEARTBEAT_SEND.cpu)
  return cpu_;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_cpu(::google::protobuf::uint32 value) {
  set_has_cpu();
  cpu_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_DC_HEARTBEAT_SEND.cpu)
}

// required uint32 memory = 2;
inline bool MSG_DS_DC_HEARTBEAT_SEND::has_memory() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_has_memory() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_has_memory() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_memory() {
  memory_ = 0u;
  clear_has_memory();
}
inline ::google::protobuf::uint32 MSG_DS_DC_HEARTBEAT_SEND::memory() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_HEARTBEAT_SEND.memory)
  return memory_;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_memory(::google::protobuf::uint32 value) {
  set_has_memory();
  memory_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_DC_HEARTBEAT_SEND.memory)
}

// optional uint32 importTaskID = 3;
inline bool MSG_DS_DC_HEARTBEAT_SEND::has_importtaskid() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_has_importtaskid() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_has_importtaskid() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_importtaskid() {
  importtaskid_ = 0u;
  clear_has_importtaskid();
}
inline ::google::protobuf::uint32 MSG_DS_DC_HEARTBEAT_SEND::importtaskid() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_HEARTBEAT_SEND.importTaskID)
  return importtaskid_;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_importtaskid(::google::protobuf::uint32 value) {
  set_has_importtaskid();
  importtaskid_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_DC_HEARTBEAT_SEND.importTaskID)
}

// optional uint32 loadTaskID = 4;
inline bool MSG_DS_DC_HEARTBEAT_SEND::has_loadtaskid() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_has_loadtaskid() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_has_loadtaskid() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_loadtaskid() {
  loadtaskid_ = 0u;
  clear_has_loadtaskid();
}
inline ::google::protobuf::uint32 MSG_DS_DC_HEARTBEAT_SEND::loadtaskid() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_HEARTBEAT_SEND.loadTaskID)
  return loadtaskid_;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_loadtaskid(::google::protobuf::uint32 value) {
  set_has_loadtaskid();
  loadtaskid_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_DC_HEARTBEAT_SEND.loadTaskID)
}

// optional uint32 importSchedule = 5;
inline bool MSG_DS_DC_HEARTBEAT_SEND::has_importschedule() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_has_importschedule() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_has_importschedule() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_importschedule() {
  importschedule_ = 0u;
  clear_has_importschedule();
}
inline ::google::protobuf::uint32 MSG_DS_DC_HEARTBEAT_SEND::importschedule() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_HEARTBEAT_SEND.importSchedule)
  return importschedule_;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_importschedule(::google::protobuf::uint32 value) {
  set_has_importschedule();
  importschedule_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_DC_HEARTBEAT_SEND.importSchedule)
}

// optional uint32 loadSchedule = 6;
inline bool MSG_DS_DC_HEARTBEAT_SEND::has_loadschedule() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_has_loadschedule() {
  _has_bits_[0] |= 0x00000020u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_has_loadschedule() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::clear_loadschedule() {
  loadschedule_ = 0u;
  clear_has_loadschedule();
}
inline ::google::protobuf::uint32 MSG_DS_DC_HEARTBEAT_SEND::loadschedule() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_HEARTBEAT_SEND.loadSchedule)
  return loadschedule_;
}
inline void MSG_DS_DC_HEARTBEAT_SEND::set_loadschedule(::google::protobuf::uint32 value) {
  set_has_loadschedule();
  loadschedule_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_DC_HEARTBEAT_SEND.loadSchedule)
}

// -------------------------------------------------------------------

// MSG_DC_DS_HEARTBEAT_SEND_ACK

// required int32 statusCode = 1;
inline bool MSG_DC_DS_HEARTBEAT_SEND_ACK::has_statuscode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DC_DS_HEARTBEAT_SEND_ACK::set_has_statuscode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DC_DS_HEARTBEAT_SEND_ACK::clear_has_statuscode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DC_DS_HEARTBEAT_SEND_ACK::clear_statuscode() {
  statuscode_ = 0;
  clear_has_statuscode();
}
inline ::google::protobuf::int32 MSG_DC_DS_HEARTBEAT_SEND_ACK::statuscode() const {
  // @@protoc_insertion_point(field_get:MSG_DC_DS_HEARTBEAT_SEND_ACK.statusCode)
  return statuscode_;
}
inline void MSG_DC_DS_HEARTBEAT_SEND_ACK::set_statuscode(::google::protobuf::int32 value) {
  set_has_statuscode();
  statuscode_ = value;
  // @@protoc_insertion_point(field_set:MSG_DC_DS_HEARTBEAT_SEND_ACK.statusCode)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MSG_5fDS_5fDC_5fHEARTBEAT_5fSEND_2eproto__INCLUDED
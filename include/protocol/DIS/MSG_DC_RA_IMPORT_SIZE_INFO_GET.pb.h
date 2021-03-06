// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DC_RA_IMPORT_SIZE_INFO_GET.proto

#ifndef PROTOBUF_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto__INCLUDED
#define PROTOBUF_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto__INCLUDED

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
void  protobuf_AddDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
void protobuf_AssignDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
void protobuf_ShutdownFile_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();

class IMP_INFO;
class MSG_DC_RA_IMPORT_SIZE_INFO_GET;
class MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK;

// ===================================================================

class IMP_INFO : public ::google::protobuf::Message {
 public:
  IMP_INFO();
  virtual ~IMP_INFO();

  IMP_INFO(const IMP_INFO& from);

  inline IMP_INFO& operator=(const IMP_INFO& from) {
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
  static const IMP_INFO& default_instance();

  void Swap(IMP_INFO* other);

  // implements Message ----------------------------------------------

  IMP_INFO* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const IMP_INFO& from);
  void MergeFrom(const IMP_INFO& from);
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

  // required string tableName = 1;
  inline bool has_tablename() const;
  inline void clear_tablename();
  static const int kTableNameFieldNumber = 1;
  inline const ::std::string& tablename() const;
  inline void set_tablename(const ::std::string& value);
  inline void set_tablename(const char* value);
  inline void set_tablename(const char* value, size_t size);
  inline ::std::string* mutable_tablename();
  inline ::std::string* release_tablename();
  inline void set_allocated_tablename(::std::string* tablename);

  // required uint32 dbID = 2;
  inline bool has_dbid() const;
  inline void clear_dbid();
  static const int kDbIDFieldNumber = 2;
  inline ::google::protobuf::uint32 dbid() const;
  inline void set_dbid(::google::protobuf::uint32 value);

  // repeated string colName = 3;
  inline int colname_size() const;
  inline void clear_colname();
  static const int kColNameFieldNumber = 3;
  inline const ::std::string& colname(int index) const;
  inline ::std::string* mutable_colname(int index);
  inline void set_colname(int index, const ::std::string& value);
  inline void set_colname(int index, const char* value);
  inline void set_colname(int index, const char* value, size_t size);
  inline ::std::string* add_colname();
  inline void add_colname(const ::std::string& value);
  inline void add_colname(const char* value);
  inline void add_colname(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& colname() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_colname();

  // @@protoc_insertion_point(class_scope:IMP_INFO)
 private:
  inline void set_has_tablename();
  inline void clear_has_tablename();
  inline void set_has_dbid();
  inline void clear_has_dbid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* tablename_;
  ::google::protobuf::RepeatedPtrField< ::std::string> colname_;
  ::google::protobuf::uint32 dbid_;
  friend void  protobuf_AddDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();

  void InitAsDefaultInstance();
  static IMP_INFO* default_instance_;
};
// -------------------------------------------------------------------

class MSG_DC_RA_IMPORT_SIZE_INFO_GET : public ::google::protobuf::Message {
 public:
  MSG_DC_RA_IMPORT_SIZE_INFO_GET();
  virtual ~MSG_DC_RA_IMPORT_SIZE_INFO_GET();

  MSG_DC_RA_IMPORT_SIZE_INFO_GET(const MSG_DC_RA_IMPORT_SIZE_INFO_GET& from);

  inline MSG_DC_RA_IMPORT_SIZE_INFO_GET& operator=(const MSG_DC_RA_IMPORT_SIZE_INFO_GET& from) {
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
  static const MSG_DC_RA_IMPORT_SIZE_INFO_GET& default_instance();

  void Swap(MSG_DC_RA_IMPORT_SIZE_INFO_GET* other);

  // implements Message ----------------------------------------------

  MSG_DC_RA_IMPORT_SIZE_INFO_GET* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DC_RA_IMPORT_SIZE_INFO_GET& from);
  void MergeFrom(const MSG_DC_RA_IMPORT_SIZE_INFO_GET& from);
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

  // required uint32 taskID = 1;
  inline bool has_taskid() const;
  inline void clear_taskid();
  static const int kTaskIDFieldNumber = 1;
  inline ::google::protobuf::uint32 taskid() const;
  inline void set_taskid(::google::protobuf::uint32 value);

  // repeated .IMP_INFO impInfo = 2;
  inline int impinfo_size() const;
  inline void clear_impinfo();
  static const int kImpInfoFieldNumber = 2;
  inline const ::IMP_INFO& impinfo(int index) const;
  inline ::IMP_INFO* mutable_impinfo(int index);
  inline ::IMP_INFO* add_impinfo();
  inline const ::google::protobuf::RepeatedPtrField< ::IMP_INFO >&
      impinfo() const;
  inline ::google::protobuf::RepeatedPtrField< ::IMP_INFO >*
      mutable_impinfo();

  // @@protoc_insertion_point(class_scope:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
 private:
  inline void set_has_taskid();
  inline void clear_has_taskid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::IMP_INFO > impinfo_;
  ::google::protobuf::uint32 taskid_;
  friend void  protobuf_AddDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();

  void InitAsDefaultInstance();
  static MSG_DC_RA_IMPORT_SIZE_INFO_GET* default_instance_;
};
// -------------------------------------------------------------------

class MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK : public ::google::protobuf::Message {
 public:
  MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK();
  virtual ~MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK();

  MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK(const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK& from);

  inline MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK& operator=(const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK& from) {
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
  static const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK& default_instance();

  void Swap(MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK* other);

  // implements Message ----------------------------------------------

  MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK& from);
  void MergeFrom(const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK& from);
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

  // required uint32 taskID = 1;
  inline bool has_taskid() const;
  inline void clear_taskid();
  static const int kTaskIDFieldNumber = 1;
  inline ::google::protobuf::uint32 taskid() const;
  inline void set_taskid(::google::protobuf::uint32 value);

  // optional int32 statuscCode = 2;
  inline bool has_statusccode() const;
  inline void clear_statusccode();
  static const int kStatuscCodeFieldNumber = 2;
  inline ::google::protobuf::int32 statusccode() const;
  inline void set_statusccode(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
 private:
  inline void set_has_taskid();
  inline void clear_has_taskid();
  inline void set_has_statusccode();
  inline void clear_has_statusccode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 taskid_;
  ::google::protobuf::int32 statusccode_;
  friend void  protobuf_AddDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();

  void InitAsDefaultInstance();
  static MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK* default_instance_;
};
// ===================================================================


// ===================================================================

// IMP_INFO

// required string tableName = 1;
inline bool IMP_INFO::has_tablename() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void IMP_INFO::set_has_tablename() {
  _has_bits_[0] |= 0x00000001u;
}
inline void IMP_INFO::clear_has_tablename() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void IMP_INFO::clear_tablename() {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_->clear();
  }
  clear_has_tablename();
}
inline const ::std::string& IMP_INFO::tablename() const {
  // @@protoc_insertion_point(field_get:IMP_INFO.tableName)
  return *tablename_;
}
inline void IMP_INFO::set_tablename(const ::std::string& value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set:IMP_INFO.tableName)
}
inline void IMP_INFO::set_tablename(const char* value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set_char:IMP_INFO.tableName)
}
inline void IMP_INFO::set_tablename(const char* value, size_t size) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IMP_INFO.tableName)
}
inline ::std::string* IMP_INFO::mutable_tablename() {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:IMP_INFO.tableName)
  return tablename_;
}
inline ::std::string* IMP_INFO::release_tablename() {
  clear_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = tablename_;
    tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void IMP_INFO::set_allocated_tablename(::std::string* tablename) {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete tablename_;
  }
  if (tablename) {
    set_has_tablename();
    tablename_ = tablename;
  } else {
    clear_has_tablename();
    tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:IMP_INFO.tableName)
}

// required uint32 dbID = 2;
inline bool IMP_INFO::has_dbid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void IMP_INFO::set_has_dbid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void IMP_INFO::clear_has_dbid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void IMP_INFO::clear_dbid() {
  dbid_ = 0u;
  clear_has_dbid();
}
inline ::google::protobuf::uint32 IMP_INFO::dbid() const {
  // @@protoc_insertion_point(field_get:IMP_INFO.dbID)
  return dbid_;
}
inline void IMP_INFO::set_dbid(::google::protobuf::uint32 value) {
  set_has_dbid();
  dbid_ = value;
  // @@protoc_insertion_point(field_set:IMP_INFO.dbID)
}

// repeated string colName = 3;
inline int IMP_INFO::colname_size() const {
  return colname_.size();
}
inline void IMP_INFO::clear_colname() {
  colname_.Clear();
}
inline const ::std::string& IMP_INFO::colname(int index) const {
  // @@protoc_insertion_point(field_get:IMP_INFO.colName)
  return colname_.Get(index);
}
inline ::std::string* IMP_INFO::mutable_colname(int index) {
  // @@protoc_insertion_point(field_mutable:IMP_INFO.colName)
  return colname_.Mutable(index);
}
inline void IMP_INFO::set_colname(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:IMP_INFO.colName)
  colname_.Mutable(index)->assign(value);
}
inline void IMP_INFO::set_colname(int index, const char* value) {
  colname_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:IMP_INFO.colName)
}
inline void IMP_INFO::set_colname(int index, const char* value, size_t size) {
  colname_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:IMP_INFO.colName)
}
inline ::std::string* IMP_INFO::add_colname() {
  return colname_.Add();
}
inline void IMP_INFO::add_colname(const ::std::string& value) {
  colname_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:IMP_INFO.colName)
}
inline void IMP_INFO::add_colname(const char* value) {
  colname_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:IMP_INFO.colName)
}
inline void IMP_INFO::add_colname(const char* value, size_t size) {
  colname_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:IMP_INFO.colName)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
IMP_INFO::colname() const {
  // @@protoc_insertion_point(field_list:IMP_INFO.colName)
  return colname_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
IMP_INFO::mutable_colname() {
  // @@protoc_insertion_point(field_mutable_list:IMP_INFO.colName)
  return &colname_;
}

// -------------------------------------------------------------------

// MSG_DC_RA_IMPORT_SIZE_INFO_GET

// required uint32 taskID = 1;
inline bool MSG_DC_RA_IMPORT_SIZE_INFO_GET::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DC_RA_IMPORT_SIZE_INFO_GET::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DC_RA_IMPORT_SIZE_INFO_GET::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DC_RA_IMPORT_SIZE_INFO_GET::clear_taskid() {
  taskid_ = 0u;
  clear_has_taskid();
}
inline ::google::protobuf::uint32 MSG_DC_RA_IMPORT_SIZE_INFO_GET::taskid() const {
  // @@protoc_insertion_point(field_get:MSG_DC_RA_IMPORT_SIZE_INFO_GET.taskID)
  return taskid_;
}
inline void MSG_DC_RA_IMPORT_SIZE_INFO_GET::set_taskid(::google::protobuf::uint32 value) {
  set_has_taskid();
  taskid_ = value;
  // @@protoc_insertion_point(field_set:MSG_DC_RA_IMPORT_SIZE_INFO_GET.taskID)
}

// repeated .IMP_INFO impInfo = 2;
inline int MSG_DC_RA_IMPORT_SIZE_INFO_GET::impinfo_size() const {
  return impinfo_.size();
}
inline void MSG_DC_RA_IMPORT_SIZE_INFO_GET::clear_impinfo() {
  impinfo_.Clear();
}
inline const ::IMP_INFO& MSG_DC_RA_IMPORT_SIZE_INFO_GET::impinfo(int index) const {
  // @@protoc_insertion_point(field_get:MSG_DC_RA_IMPORT_SIZE_INFO_GET.impInfo)
  return impinfo_.Get(index);
}
inline ::IMP_INFO* MSG_DC_RA_IMPORT_SIZE_INFO_GET::mutable_impinfo(int index) {
  // @@protoc_insertion_point(field_mutable:MSG_DC_RA_IMPORT_SIZE_INFO_GET.impInfo)
  return impinfo_.Mutable(index);
}
inline ::IMP_INFO* MSG_DC_RA_IMPORT_SIZE_INFO_GET::add_impinfo() {
  // @@protoc_insertion_point(field_add:MSG_DC_RA_IMPORT_SIZE_INFO_GET.impInfo)
  return impinfo_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::IMP_INFO >&
MSG_DC_RA_IMPORT_SIZE_INFO_GET::impinfo() const {
  // @@protoc_insertion_point(field_list:MSG_DC_RA_IMPORT_SIZE_INFO_GET.impInfo)
  return impinfo_;
}
inline ::google::protobuf::RepeatedPtrField< ::IMP_INFO >*
MSG_DC_RA_IMPORT_SIZE_INFO_GET::mutable_impinfo() {
  // @@protoc_insertion_point(field_mutable_list:MSG_DC_RA_IMPORT_SIZE_INFO_GET.impInfo)
  return &impinfo_;
}

// -------------------------------------------------------------------

// MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK

// required uint32 taskID = 1;
inline bool MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::clear_taskid() {
  taskid_ = 0u;
  clear_has_taskid();
}
inline ::google::protobuf::uint32 MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::taskid() const {
  // @@protoc_insertion_point(field_get:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK.taskID)
  return taskid_;
}
inline void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::set_taskid(::google::protobuf::uint32 value) {
  set_has_taskid();
  taskid_ = value;
  // @@protoc_insertion_point(field_set:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK.taskID)
}

// optional int32 statuscCode = 2;
inline bool MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::has_statusccode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::set_has_statusccode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::clear_has_statusccode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::clear_statusccode() {
  statusccode_ = 0;
  clear_has_statusccode();
}
inline ::google::protobuf::int32 MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::statusccode() const {
  // @@protoc_insertion_point(field_get:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK.statuscCode)
  return statusccode_;
}
inline void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::set_statusccode(::google::protobuf::int32 value) {
  set_has_statusccode();
  statusccode_ = value;
  // @@protoc_insertion_point(field_set:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK.statuscCode)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto__INCLUDED

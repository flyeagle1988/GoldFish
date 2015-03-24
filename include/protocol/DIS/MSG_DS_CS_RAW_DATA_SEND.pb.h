// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DS_CS_RAW_DATA_SEND.proto

#ifndef PROTOBUF_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto__INCLUDED
#define PROTOBUF_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();
void protobuf_AssignDesc_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();
void protobuf_ShutdownFile_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();

class DIC_VALUE;
class MSG_DS_CS_RAW_DATA_SEND;
class MSG_CS_DS_RAW_DATA_SEND_ACK;

enum MSG_DS_CS_RAW_DATA_SEND_COL_TYPE {
  MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_STRING = 1,
  MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_INT = 2,
  MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_FLOAT = 3,
  MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_DOUBLE = 4
};
bool MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_IsValid(int value);
const MSG_DS_CS_RAW_DATA_SEND_COL_TYPE MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_COL_TYPE_MIN = MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_STRING;
const MSG_DS_CS_RAW_DATA_SEND_COL_TYPE MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_COL_TYPE_MAX = MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_DOUBLE;
const int MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_COL_TYPE_ARRAYSIZE = MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_COL_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_descriptor();
inline const ::std::string& MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_Name(MSG_DS_CS_RAW_DATA_SEND_COL_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_descriptor(), value);
}
inline bool MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_Parse(
    const ::std::string& name, MSG_DS_CS_RAW_DATA_SEND_COL_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MSG_DS_CS_RAW_DATA_SEND_COL_TYPE>(
    MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_descriptor(), name, value);
}
// ===================================================================

class DIC_VALUE : public ::google::protobuf::Message {
 public:
  DIC_VALUE();
  virtual ~DIC_VALUE();

  DIC_VALUE(const DIC_VALUE& from);

  inline DIC_VALUE& operator=(const DIC_VALUE& from) {
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
  static const DIC_VALUE& default_instance();

  void Swap(DIC_VALUE* other);

  // implements Message ----------------------------------------------

  DIC_VALUE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DIC_VALUE& from);
  void MergeFrom(const DIC_VALUE& from);
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

  // optional string strValue = 1;
  inline bool has_strvalue() const;
  inline void clear_strvalue();
  static const int kStrValueFieldNumber = 1;
  inline const ::std::string& strvalue() const;
  inline void set_strvalue(const ::std::string& value);
  inline void set_strvalue(const char* value);
  inline void set_strvalue(const char* value, size_t size);
  inline ::std::string* mutable_strvalue();
  inline ::std::string* release_strvalue();
  inline void set_allocated_strvalue(::std::string* strvalue);

  // optional int32 iValue = 2;
  inline bool has_ivalue() const;
  inline void clear_ivalue();
  static const int kIValueFieldNumber = 2;
  inline ::google::protobuf::int32 ivalue() const;
  inline void set_ivalue(::google::protobuf::int32 value);

  // optional float fValue = 3;
  inline bool has_fvalue() const;
  inline void clear_fvalue();
  static const int kFValueFieldNumber = 3;
  inline float fvalue() const;
  inline void set_fvalue(float value);

  // optional double dValue = 4;
  inline bool has_dvalue() const;
  inline void clear_dvalue();
  static const int kDValueFieldNumber = 4;
  inline double dvalue() const;
  inline void set_dvalue(double value);

  // @@protoc_insertion_point(class_scope:DIC_VALUE)
 private:
  inline void set_has_strvalue();
  inline void clear_has_strvalue();
  inline void set_has_ivalue();
  inline void clear_has_ivalue();
  inline void set_has_fvalue();
  inline void clear_has_fvalue();
  inline void set_has_dvalue();
  inline void clear_has_dvalue();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* strvalue_;
  ::google::protobuf::int32 ivalue_;
  float fvalue_;
  double dvalue_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static DIC_VALUE* default_instance_;
};
// -------------------------------------------------------------------

class MSG_DS_CS_RAW_DATA_SEND : public ::google::protobuf::Message {
 public:
  MSG_DS_CS_RAW_DATA_SEND();
  virtual ~MSG_DS_CS_RAW_DATA_SEND();

  MSG_DS_CS_RAW_DATA_SEND(const MSG_DS_CS_RAW_DATA_SEND& from);

  inline MSG_DS_CS_RAW_DATA_SEND& operator=(const MSG_DS_CS_RAW_DATA_SEND& from) {
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
  static const MSG_DS_CS_RAW_DATA_SEND& default_instance();

  void Swap(MSG_DS_CS_RAW_DATA_SEND* other);

  // implements Message ----------------------------------------------

  MSG_DS_CS_RAW_DATA_SEND* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DS_CS_RAW_DATA_SEND& from);
  void MergeFrom(const MSG_DS_CS_RAW_DATA_SEND& from);
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

  typedef MSG_DS_CS_RAW_DATA_SEND_COL_TYPE COL_TYPE;
  static const COL_TYPE STRING = MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_STRING;
  static const COL_TYPE INT = MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_INT;
  static const COL_TYPE FLOAT = MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_FLOAT;
  static const COL_TYPE DOUBLE = MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_DOUBLE;
  static inline bool COL_TYPE_IsValid(int value) {
    return MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_IsValid(value);
  }
  static const COL_TYPE COL_TYPE_MIN =
    MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_COL_TYPE_MIN;
  static const COL_TYPE COL_TYPE_MAX =
    MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_COL_TYPE_MAX;
  static const int COL_TYPE_ARRAYSIZE =
    MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_COL_TYPE_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  COL_TYPE_descriptor() {
    return MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_descriptor();
  }
  static inline const ::std::string& COL_TYPE_Name(COL_TYPE value) {
    return MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_Name(value);
  }
  static inline bool COL_TYPE_Parse(const ::std::string& name,
      COL_TYPE* value) {
    return MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required uint32 taskID = 1;
  inline bool has_taskid() const;
  inline void clear_taskid();
  static const int kTaskIDFieldNumber = 1;
  inline ::google::protobuf::uint32 taskid() const;
  inline void set_taskid(::google::protobuf::uint32 value);

  // required uint32 dbID = 2;
  inline bool has_dbid() const;
  inline void clear_dbid();
  static const int kDbIDFieldNumber = 2;
  inline ::google::protobuf::uint32 dbid() const;
  inline void set_dbid(::google::protobuf::uint32 value);

  // required string tableName = 3;
  inline bool has_tablename() const;
  inline void clear_tablename();
  static const int kTableNameFieldNumber = 3;
  inline const ::std::string& tablename() const;
  inline void set_tablename(const ::std::string& value);
  inline void set_tablename(const char* value);
  inline void set_tablename(const char* value, size_t size);
  inline ::std::string* mutable_tablename();
  inline ::std::string* release_tablename();
  inline void set_allocated_tablename(::std::string* tablename);

  // required string columnName = 4;
  inline bool has_columnname() const;
  inline void clear_columnname();
  static const int kColumnNameFieldNumber = 4;
  inline const ::std::string& columnname() const;
  inline void set_columnname(const ::std::string& value);
  inline void set_columnname(const char* value);
  inline void set_columnname(const char* value, size_t size);
  inline ::std::string* mutable_columnname();
  inline ::std::string* release_columnname();
  inline void set_allocated_columnname(::std::string* columnname);

  // required .MSG_DS_CS_RAW_DATA_SEND.COL_TYPE columnType = 5;
  inline bool has_columntype() const;
  inline void clear_columntype();
  static const int kColumnTypeFieldNumber = 5;
  inline ::MSG_DS_CS_RAW_DATA_SEND_COL_TYPE columntype() const;
  inline void set_columntype(::MSG_DS_CS_RAW_DATA_SEND_COL_TYPE value);

  // repeated .DIC_VALUE dicValue = 6;
  inline int dicvalue_size() const;
  inline void clear_dicvalue();
  static const int kDicValueFieldNumber = 6;
  inline const ::DIC_VALUE& dicvalue(int index) const;
  inline ::DIC_VALUE* mutable_dicvalue(int index);
  inline ::DIC_VALUE* add_dicvalue();
  inline const ::google::protobuf::RepeatedPtrField< ::DIC_VALUE >&
      dicvalue() const;
  inline ::google::protobuf::RepeatedPtrField< ::DIC_VALUE >*
      mutable_dicvalue();

  // repeated uint64 indexOffsets = 7;
  inline int indexoffsets_size() const;
  inline void clear_indexoffsets();
  static const int kIndexOffsetsFieldNumber = 7;
  inline ::google::protobuf::uint64 indexoffsets(int index) const;
  inline void set_indexoffsets(int index, ::google::protobuf::uint64 value);
  inline void add_indexoffsets(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      indexoffsets() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_indexoffsets();

  // repeated uint64 indexPosting = 8;
  inline int indexposting_size() const;
  inline void clear_indexposting();
  static const int kIndexPostingFieldNumber = 8;
  inline ::google::protobuf::uint64 indexposting(int index) const;
  inline void set_indexposting(int index, ::google::protobuf::uint64 value);
  inline void add_indexposting(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      indexposting() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_indexposting();

  // required uint32 sliceNo = 9;
  inline bool has_sliceno() const;
  inline void clear_sliceno();
  static const int kSliceNoFieldNumber = 9;
  inline ::google::protobuf::uint32 sliceno() const;
  inline void set_sliceno(::google::protobuf::uint32 value);

  // required uint32 sliceNum = 10;
  inline bool has_slicenum() const;
  inline void clear_slicenum();
  static const int kSliceNumFieldNumber = 10;
  inline ::google::protobuf::uint32 slicenum() const;
  inline void set_slicenum(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:MSG_DS_CS_RAW_DATA_SEND)
 private:
  inline void set_has_taskid();
  inline void clear_has_taskid();
  inline void set_has_dbid();
  inline void clear_has_dbid();
  inline void set_has_tablename();
  inline void clear_has_tablename();
  inline void set_has_columnname();
  inline void clear_has_columnname();
  inline void set_has_columntype();
  inline void clear_has_columntype();
  inline void set_has_sliceno();
  inline void clear_has_sliceno();
  inline void set_has_slicenum();
  inline void clear_has_slicenum();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 taskid_;
  ::google::protobuf::uint32 dbid_;
  ::std::string* tablename_;
  ::std::string* columnname_;
  ::google::protobuf::RepeatedPtrField< ::DIC_VALUE > dicvalue_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > indexoffsets_;
  int columntype_;
  ::google::protobuf::uint32 sliceno_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > indexposting_;
  ::google::protobuf::uint32 slicenum_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_DS_CS_RAW_DATA_SEND* default_instance_;
};
// -------------------------------------------------------------------

class MSG_CS_DS_RAW_DATA_SEND_ACK : public ::google::protobuf::Message {
 public:
  MSG_CS_DS_RAW_DATA_SEND_ACK();
  virtual ~MSG_CS_DS_RAW_DATA_SEND_ACK();

  MSG_CS_DS_RAW_DATA_SEND_ACK(const MSG_CS_DS_RAW_DATA_SEND_ACK& from);

  inline MSG_CS_DS_RAW_DATA_SEND_ACK& operator=(const MSG_CS_DS_RAW_DATA_SEND_ACK& from) {
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
  static const MSG_CS_DS_RAW_DATA_SEND_ACK& default_instance();

  void Swap(MSG_CS_DS_RAW_DATA_SEND_ACK* other);

  // implements Message ----------------------------------------------

  MSG_CS_DS_RAW_DATA_SEND_ACK* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_CS_DS_RAW_DATA_SEND_ACK& from);
  void MergeFrom(const MSG_CS_DS_RAW_DATA_SEND_ACK& from);
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

  // required int32 statusCode = 2;
  inline bool has_statuscode() const;
  inline void clear_statuscode();
  static const int kStatusCodeFieldNumber = 2;
  inline ::google::protobuf::int32 statuscode() const;
  inline void set_statuscode(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:MSG_CS_DS_RAW_DATA_SEND_ACK)
 private:
  inline void set_has_taskid();
  inline void clear_has_taskid();
  inline void set_has_statuscode();
  inline void clear_has_statuscode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 taskid_;
  ::google::protobuf::int32 statuscode_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_CS_DS_RAW_DATA_SEND_ACK* default_instance_;
};
// ===================================================================


// ===================================================================

// DIC_VALUE

// optional string strValue = 1;
inline bool DIC_VALUE::has_strvalue() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DIC_VALUE::set_has_strvalue() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DIC_VALUE::clear_has_strvalue() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DIC_VALUE::clear_strvalue() {
  if (strvalue_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    strvalue_->clear();
  }
  clear_has_strvalue();
}
inline const ::std::string& DIC_VALUE::strvalue() const {
  // @@protoc_insertion_point(field_get:DIC_VALUE.strValue)
  return *strvalue_;
}
inline void DIC_VALUE::set_strvalue(const ::std::string& value) {
  set_has_strvalue();
  if (strvalue_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    strvalue_ = new ::std::string;
  }
  strvalue_->assign(value);
  // @@protoc_insertion_point(field_set:DIC_VALUE.strValue)
}
inline void DIC_VALUE::set_strvalue(const char* value) {
  set_has_strvalue();
  if (strvalue_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    strvalue_ = new ::std::string;
  }
  strvalue_->assign(value);
  // @@protoc_insertion_point(field_set_char:DIC_VALUE.strValue)
}
inline void DIC_VALUE::set_strvalue(const char* value, size_t size) {
  set_has_strvalue();
  if (strvalue_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    strvalue_ = new ::std::string;
  }
  strvalue_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:DIC_VALUE.strValue)
}
inline ::std::string* DIC_VALUE::mutable_strvalue() {
  set_has_strvalue();
  if (strvalue_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    strvalue_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:DIC_VALUE.strValue)
  return strvalue_;
}
inline ::std::string* DIC_VALUE::release_strvalue() {
  clear_has_strvalue();
  if (strvalue_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = strvalue_;
    strvalue_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DIC_VALUE::set_allocated_strvalue(::std::string* strvalue) {
  if (strvalue_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete strvalue_;
  }
  if (strvalue) {
    set_has_strvalue();
    strvalue_ = strvalue;
  } else {
    clear_has_strvalue();
    strvalue_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:DIC_VALUE.strValue)
}

// optional int32 iValue = 2;
inline bool DIC_VALUE::has_ivalue() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DIC_VALUE::set_has_ivalue() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DIC_VALUE::clear_has_ivalue() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DIC_VALUE::clear_ivalue() {
  ivalue_ = 0;
  clear_has_ivalue();
}
inline ::google::protobuf::int32 DIC_VALUE::ivalue() const {
  // @@protoc_insertion_point(field_get:DIC_VALUE.iValue)
  return ivalue_;
}
inline void DIC_VALUE::set_ivalue(::google::protobuf::int32 value) {
  set_has_ivalue();
  ivalue_ = value;
  // @@protoc_insertion_point(field_set:DIC_VALUE.iValue)
}

// optional float fValue = 3;
inline bool DIC_VALUE::has_fvalue() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DIC_VALUE::set_has_fvalue() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DIC_VALUE::clear_has_fvalue() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DIC_VALUE::clear_fvalue() {
  fvalue_ = 0;
  clear_has_fvalue();
}
inline float DIC_VALUE::fvalue() const {
  // @@protoc_insertion_point(field_get:DIC_VALUE.fValue)
  return fvalue_;
}
inline void DIC_VALUE::set_fvalue(float value) {
  set_has_fvalue();
  fvalue_ = value;
  // @@protoc_insertion_point(field_set:DIC_VALUE.fValue)
}

// optional double dValue = 4;
inline bool DIC_VALUE::has_dvalue() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DIC_VALUE::set_has_dvalue() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DIC_VALUE::clear_has_dvalue() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DIC_VALUE::clear_dvalue() {
  dvalue_ = 0;
  clear_has_dvalue();
}
inline double DIC_VALUE::dvalue() const {
  // @@protoc_insertion_point(field_get:DIC_VALUE.dValue)
  return dvalue_;
}
inline void DIC_VALUE::set_dvalue(double value) {
  set_has_dvalue();
  dvalue_ = value;
  // @@protoc_insertion_point(field_set:DIC_VALUE.dValue)
}

// -------------------------------------------------------------------

// MSG_DS_CS_RAW_DATA_SEND

// required uint32 taskID = 1;
inline bool MSG_DS_CS_RAW_DATA_SEND::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_taskid() {
  taskid_ = 0u;
  clear_has_taskid();
}
inline ::google::protobuf::uint32 MSG_DS_CS_RAW_DATA_SEND::taskid() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RAW_DATA_SEND.taskID)
  return taskid_;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_taskid(::google::protobuf::uint32 value) {
  set_has_taskid();
  taskid_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RAW_DATA_SEND.taskID)
}

// required uint32 dbID = 2;
inline bool MSG_DS_CS_RAW_DATA_SEND::has_dbid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_has_dbid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_has_dbid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_dbid() {
  dbid_ = 0u;
  clear_has_dbid();
}
inline ::google::protobuf::uint32 MSG_DS_CS_RAW_DATA_SEND::dbid() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RAW_DATA_SEND.dbID)
  return dbid_;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_dbid(::google::protobuf::uint32 value) {
  set_has_dbid();
  dbid_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RAW_DATA_SEND.dbID)
}

// required string tableName = 3;
inline bool MSG_DS_CS_RAW_DATA_SEND::has_tablename() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_has_tablename() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_has_tablename() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_tablename() {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_->clear();
  }
  clear_has_tablename();
}
inline const ::std::string& MSG_DS_CS_RAW_DATA_SEND::tablename() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RAW_DATA_SEND.tableName)
  return *tablename_;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_tablename(const ::std::string& value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RAW_DATA_SEND.tableName)
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_tablename(const char* value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set_char:MSG_DS_CS_RAW_DATA_SEND.tableName)
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_tablename(const char* value, size_t size) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MSG_DS_CS_RAW_DATA_SEND.tableName)
}
inline ::std::string* MSG_DS_CS_RAW_DATA_SEND::mutable_tablename() {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MSG_DS_CS_RAW_DATA_SEND.tableName)
  return tablename_;
}
inline ::std::string* MSG_DS_CS_RAW_DATA_SEND::release_tablename() {
  clear_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = tablename_;
    tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_allocated_tablename(::std::string* tablename) {
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
  // @@protoc_insertion_point(field_set_allocated:MSG_DS_CS_RAW_DATA_SEND.tableName)
}

// required string columnName = 4;
inline bool MSG_DS_CS_RAW_DATA_SEND::has_columnname() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_has_columnname() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_has_columnname() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_columnname() {
  if (columnname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_->clear();
  }
  clear_has_columnname();
}
inline const ::std::string& MSG_DS_CS_RAW_DATA_SEND::columnname() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RAW_DATA_SEND.columnName)
  return *columnname_;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_columnname(const ::std::string& value) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(value);
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RAW_DATA_SEND.columnName)
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_columnname(const char* value) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(value);
  // @@protoc_insertion_point(field_set_char:MSG_DS_CS_RAW_DATA_SEND.columnName)
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_columnname(const char* value, size_t size) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MSG_DS_CS_RAW_DATA_SEND.columnName)
}
inline ::std::string* MSG_DS_CS_RAW_DATA_SEND::mutable_columnname() {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MSG_DS_CS_RAW_DATA_SEND.columnName)
  return columnname_;
}
inline ::std::string* MSG_DS_CS_RAW_DATA_SEND::release_columnname() {
  clear_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = columnname_;
    columnname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_allocated_columnname(::std::string* columnname) {
  if (columnname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete columnname_;
  }
  if (columnname) {
    set_has_columnname();
    columnname_ = columnname;
  } else {
    clear_has_columnname();
    columnname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:MSG_DS_CS_RAW_DATA_SEND.columnName)
}

// required .MSG_DS_CS_RAW_DATA_SEND.COL_TYPE columnType = 5;
inline bool MSG_DS_CS_RAW_DATA_SEND::has_columntype() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_has_columntype() {
  _has_bits_[0] |= 0x00000010u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_has_columntype() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_columntype() {
  columntype_ = 1;
  clear_has_columntype();
}
inline ::MSG_DS_CS_RAW_DATA_SEND_COL_TYPE MSG_DS_CS_RAW_DATA_SEND::columntype() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RAW_DATA_SEND.columnType)
  return static_cast< ::MSG_DS_CS_RAW_DATA_SEND_COL_TYPE >(columntype_);
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_columntype(::MSG_DS_CS_RAW_DATA_SEND_COL_TYPE value) {
  assert(::MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_IsValid(value));
  set_has_columntype();
  columntype_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RAW_DATA_SEND.columnType)
}

// repeated .DIC_VALUE dicValue = 6;
inline int MSG_DS_CS_RAW_DATA_SEND::dicvalue_size() const {
  return dicvalue_.size();
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_dicvalue() {
  dicvalue_.Clear();
}
inline const ::DIC_VALUE& MSG_DS_CS_RAW_DATA_SEND::dicvalue(int index) const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RAW_DATA_SEND.dicValue)
  return dicvalue_.Get(index);
}
inline ::DIC_VALUE* MSG_DS_CS_RAW_DATA_SEND::mutable_dicvalue(int index) {
  // @@protoc_insertion_point(field_mutable:MSG_DS_CS_RAW_DATA_SEND.dicValue)
  return dicvalue_.Mutable(index);
}
inline ::DIC_VALUE* MSG_DS_CS_RAW_DATA_SEND::add_dicvalue() {
  // @@protoc_insertion_point(field_add:MSG_DS_CS_RAW_DATA_SEND.dicValue)
  return dicvalue_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DIC_VALUE >&
MSG_DS_CS_RAW_DATA_SEND::dicvalue() const {
  // @@protoc_insertion_point(field_list:MSG_DS_CS_RAW_DATA_SEND.dicValue)
  return dicvalue_;
}
inline ::google::protobuf::RepeatedPtrField< ::DIC_VALUE >*
MSG_DS_CS_RAW_DATA_SEND::mutable_dicvalue() {
  // @@protoc_insertion_point(field_mutable_list:MSG_DS_CS_RAW_DATA_SEND.dicValue)
  return &dicvalue_;
}

// repeated uint64 indexOffsets = 7;
inline int MSG_DS_CS_RAW_DATA_SEND::indexoffsets_size() const {
  return indexoffsets_.size();
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_indexoffsets() {
  indexoffsets_.Clear();
}
inline ::google::protobuf::uint64 MSG_DS_CS_RAW_DATA_SEND::indexoffsets(int index) const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RAW_DATA_SEND.indexOffsets)
  return indexoffsets_.Get(index);
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_indexoffsets(int index, ::google::protobuf::uint64 value) {
  indexoffsets_.Set(index, value);
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RAW_DATA_SEND.indexOffsets)
}
inline void MSG_DS_CS_RAW_DATA_SEND::add_indexoffsets(::google::protobuf::uint64 value) {
  indexoffsets_.Add(value);
  // @@protoc_insertion_point(field_add:MSG_DS_CS_RAW_DATA_SEND.indexOffsets)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
MSG_DS_CS_RAW_DATA_SEND::indexoffsets() const {
  // @@protoc_insertion_point(field_list:MSG_DS_CS_RAW_DATA_SEND.indexOffsets)
  return indexoffsets_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
MSG_DS_CS_RAW_DATA_SEND::mutable_indexoffsets() {
  // @@protoc_insertion_point(field_mutable_list:MSG_DS_CS_RAW_DATA_SEND.indexOffsets)
  return &indexoffsets_;
}

// repeated uint64 indexPosting = 8;
inline int MSG_DS_CS_RAW_DATA_SEND::indexposting_size() const {
  return indexposting_.size();
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_indexposting() {
  indexposting_.Clear();
}
inline ::google::protobuf::uint64 MSG_DS_CS_RAW_DATA_SEND::indexposting(int index) const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RAW_DATA_SEND.indexPosting)
  return indexposting_.Get(index);
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_indexposting(int index, ::google::protobuf::uint64 value) {
  indexposting_.Set(index, value);
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RAW_DATA_SEND.indexPosting)
}
inline void MSG_DS_CS_RAW_DATA_SEND::add_indexposting(::google::protobuf::uint64 value) {
  indexposting_.Add(value);
  // @@protoc_insertion_point(field_add:MSG_DS_CS_RAW_DATA_SEND.indexPosting)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
MSG_DS_CS_RAW_DATA_SEND::indexposting() const {
  // @@protoc_insertion_point(field_list:MSG_DS_CS_RAW_DATA_SEND.indexPosting)
  return indexposting_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
MSG_DS_CS_RAW_DATA_SEND::mutable_indexposting() {
  // @@protoc_insertion_point(field_mutable_list:MSG_DS_CS_RAW_DATA_SEND.indexPosting)
  return &indexposting_;
}

// required uint32 sliceNo = 9;
inline bool MSG_DS_CS_RAW_DATA_SEND::has_sliceno() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_has_sliceno() {
  _has_bits_[0] |= 0x00000100u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_has_sliceno() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_sliceno() {
  sliceno_ = 0u;
  clear_has_sliceno();
}
inline ::google::protobuf::uint32 MSG_DS_CS_RAW_DATA_SEND::sliceno() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RAW_DATA_SEND.sliceNo)
  return sliceno_;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_sliceno(::google::protobuf::uint32 value) {
  set_has_sliceno();
  sliceno_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RAW_DATA_SEND.sliceNo)
}

// required uint32 sliceNum = 10;
inline bool MSG_DS_CS_RAW_DATA_SEND::has_slicenum() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_has_slicenum() {
  _has_bits_[0] |= 0x00000200u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_has_slicenum() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void MSG_DS_CS_RAW_DATA_SEND::clear_slicenum() {
  slicenum_ = 0u;
  clear_has_slicenum();
}
inline ::google::protobuf::uint32 MSG_DS_CS_RAW_DATA_SEND::slicenum() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RAW_DATA_SEND.sliceNum)
  return slicenum_;
}
inline void MSG_DS_CS_RAW_DATA_SEND::set_slicenum(::google::protobuf::uint32 value) {
  set_has_slicenum();
  slicenum_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RAW_DATA_SEND.sliceNum)
}

// -------------------------------------------------------------------

// MSG_CS_DS_RAW_DATA_SEND_ACK

// required uint32 taskID = 1;
inline bool MSG_CS_DS_RAW_DATA_SEND_ACK::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_CS_DS_RAW_DATA_SEND_ACK::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_CS_DS_RAW_DATA_SEND_ACK::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_CS_DS_RAW_DATA_SEND_ACK::clear_taskid() {
  taskid_ = 0u;
  clear_has_taskid();
}
inline ::google::protobuf::uint32 MSG_CS_DS_RAW_DATA_SEND_ACK::taskid() const {
  // @@protoc_insertion_point(field_get:MSG_CS_DS_RAW_DATA_SEND_ACK.taskID)
  return taskid_;
}
inline void MSG_CS_DS_RAW_DATA_SEND_ACK::set_taskid(::google::protobuf::uint32 value) {
  set_has_taskid();
  taskid_ = value;
  // @@protoc_insertion_point(field_set:MSG_CS_DS_RAW_DATA_SEND_ACK.taskID)
}

// required int32 statusCode = 2;
inline bool MSG_CS_DS_RAW_DATA_SEND_ACK::has_statuscode() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_CS_DS_RAW_DATA_SEND_ACK::set_has_statuscode() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_CS_DS_RAW_DATA_SEND_ACK::clear_has_statuscode() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_CS_DS_RAW_DATA_SEND_ACK::clear_statuscode() {
  statuscode_ = 0;
  clear_has_statuscode();
}
inline ::google::protobuf::int32 MSG_CS_DS_RAW_DATA_SEND_ACK::statuscode() const {
  // @@protoc_insertion_point(field_get:MSG_CS_DS_RAW_DATA_SEND_ACK.statusCode)
  return statuscode_;
}
inline void MSG_CS_DS_RAW_DATA_SEND_ACK::set_statuscode(::google::protobuf::int32 value) {
  set_has_statuscode();
  statuscode_ = value;
  // @@protoc_insertion_point(field_set:MSG_CS_DS_RAW_DATA_SEND_ACK.statusCode)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::MSG_DS_CS_RAW_DATA_SEND_COL_TYPE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::MSG_DS_CS_RAW_DATA_SEND_COL_TYPE>() {
  return ::MSG_DS_CS_RAW_DATA_SEND_COL_TYPE_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MSG_5fDS_5fCS_5fRAW_5fDATA_5fSEND_2eproto__INCLUDED
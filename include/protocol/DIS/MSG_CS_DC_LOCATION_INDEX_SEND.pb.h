// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_CS_DC_LOCATION_INDEX_SEND.proto

#ifndef PROTOBUF_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto__INCLUDED
#define PROTOBUF_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto__INCLUDED

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
void  protobuf_AddDesc_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();
void protobuf_AssignDesc_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();
void protobuf_ShutdownFile_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();

class DICT_VALUE;
class INDEX_BORDER;
class MSG_CS_DC_LOCATION_INDEX_SEND;
class MSG_DC_CS_LOCATION_INDEX_SEND_ACK;

enum INDEX_BORDER_DICT_TYPE {
  INDEX_BORDER_DICT_TYPE_STRING = 0,
  INDEX_BORDER_DICT_TYPE_INT = 1,
  INDEX_BORDER_DICT_TYPE_FLOAT = 2,
  INDEX_BORDER_DICT_TYPE_DOUBLE = 3
};
bool INDEX_BORDER_DICT_TYPE_IsValid(int value);
const INDEX_BORDER_DICT_TYPE INDEX_BORDER_DICT_TYPE_DICT_TYPE_MIN = INDEX_BORDER_DICT_TYPE_STRING;
const INDEX_BORDER_DICT_TYPE INDEX_BORDER_DICT_TYPE_DICT_TYPE_MAX = INDEX_BORDER_DICT_TYPE_DOUBLE;
const int INDEX_BORDER_DICT_TYPE_DICT_TYPE_ARRAYSIZE = INDEX_BORDER_DICT_TYPE_DICT_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* INDEX_BORDER_DICT_TYPE_descriptor();
inline const ::std::string& INDEX_BORDER_DICT_TYPE_Name(INDEX_BORDER_DICT_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    INDEX_BORDER_DICT_TYPE_descriptor(), value);
}
inline bool INDEX_BORDER_DICT_TYPE_Parse(
    const ::std::string& name, INDEX_BORDER_DICT_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<INDEX_BORDER_DICT_TYPE>(
    INDEX_BORDER_DICT_TYPE_descriptor(), name, value);
}
// ===================================================================

class DICT_VALUE : public ::google::protobuf::Message {
 public:
  DICT_VALUE();
  virtual ~DICT_VALUE();

  DICT_VALUE(const DICT_VALUE& from);

  inline DICT_VALUE& operator=(const DICT_VALUE& from) {
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
  static const DICT_VALUE& default_instance();

  void Swap(DICT_VALUE* other);

  // implements Message ----------------------------------------------

  DICT_VALUE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DICT_VALUE& from);
  void MergeFrom(const DICT_VALUE& from);
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

  // @@protoc_insertion_point(class_scope:DICT_VALUE)
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
  friend void  protobuf_AddDesc_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static DICT_VALUE* default_instance_;
};
// -------------------------------------------------------------------

class INDEX_BORDER : public ::google::protobuf::Message {
 public:
  INDEX_BORDER();
  virtual ~INDEX_BORDER();

  INDEX_BORDER(const INDEX_BORDER& from);

  inline INDEX_BORDER& operator=(const INDEX_BORDER& from) {
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
  static const INDEX_BORDER& default_instance();

  void Swap(INDEX_BORDER* other);

  // implements Message ----------------------------------------------

  INDEX_BORDER* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const INDEX_BORDER& from);
  void MergeFrom(const INDEX_BORDER& from);
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

  typedef INDEX_BORDER_DICT_TYPE DICT_TYPE;
  static const DICT_TYPE STRING = INDEX_BORDER_DICT_TYPE_STRING;
  static const DICT_TYPE INT = INDEX_BORDER_DICT_TYPE_INT;
  static const DICT_TYPE FLOAT = INDEX_BORDER_DICT_TYPE_FLOAT;
  static const DICT_TYPE DOUBLE = INDEX_BORDER_DICT_TYPE_DOUBLE;
  static inline bool DICT_TYPE_IsValid(int value) {
    return INDEX_BORDER_DICT_TYPE_IsValid(value);
  }
  static const DICT_TYPE DICT_TYPE_MIN =
    INDEX_BORDER_DICT_TYPE_DICT_TYPE_MIN;
  static const DICT_TYPE DICT_TYPE_MAX =
    INDEX_BORDER_DICT_TYPE_DICT_TYPE_MAX;
  static const int DICT_TYPE_ARRAYSIZE =
    INDEX_BORDER_DICT_TYPE_DICT_TYPE_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  DICT_TYPE_descriptor() {
    return INDEX_BORDER_DICT_TYPE_descriptor();
  }
  static inline const ::std::string& DICT_TYPE_Name(DICT_TYPE value) {
    return INDEX_BORDER_DICT_TYPE_Name(value);
  }
  static inline bool DICT_TYPE_Parse(const ::std::string& name,
      DICT_TYPE* value) {
    return INDEX_BORDER_DICT_TYPE_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .INDEX_BORDER.DICT_TYPE dictType = 1 [default = STRING];
  inline bool has_dicttype() const;
  inline void clear_dicttype();
  static const int kDictTypeFieldNumber = 1;
  inline ::INDEX_BORDER_DICT_TYPE dicttype() const;
  inline void set_dicttype(::INDEX_BORDER_DICT_TYPE value);

  // required .DICT_VALUE dictUpper = 2;
  inline bool has_dictupper() const;
  inline void clear_dictupper();
  static const int kDictUpperFieldNumber = 2;
  inline const ::DICT_VALUE& dictupper() const;
  inline ::DICT_VALUE* mutable_dictupper();
  inline ::DICT_VALUE* release_dictupper();
  inline void set_allocated_dictupper(::DICT_VALUE* dictupper);

  // required .DICT_VALUE dictLower = 3;
  inline bool has_dictlower() const;
  inline void clear_dictlower();
  static const int kDictLowerFieldNumber = 3;
  inline const ::DICT_VALUE& dictlower() const;
  inline ::DICT_VALUE* mutable_dictlower();
  inline ::DICT_VALUE* release_dictlower();
  inline void set_allocated_dictlower(::DICT_VALUE* dictlower);

  // required uint32 entryUpper = 4;
  inline bool has_entryupper() const;
  inline void clear_entryupper();
  static const int kEntryUpperFieldNumber = 4;
  inline ::google::protobuf::uint32 entryupper() const;
  inline void set_entryupper(::google::protobuf::uint32 value);

  // required uint32 entryLower = 5;
  inline bool has_entrylower() const;
  inline void clear_entrylower();
  static const int kEntryLowerFieldNumber = 5;
  inline ::google::protobuf::uint32 entrylower() const;
  inline void set_entrylower(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:INDEX_BORDER)
 private:
  inline void set_has_dicttype();
  inline void clear_has_dicttype();
  inline void set_has_dictupper();
  inline void clear_has_dictupper();
  inline void set_has_dictlower();
  inline void clear_has_dictlower();
  inline void set_has_entryupper();
  inline void clear_has_entryupper();
  inline void set_has_entrylower();
  inline void clear_has_entrylower();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::DICT_VALUE* dictupper_;
  int dicttype_;
  ::google::protobuf::uint32 entryupper_;
  ::DICT_VALUE* dictlower_;
  ::google::protobuf::uint32 entrylower_;
  friend void  protobuf_AddDesc_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static INDEX_BORDER* default_instance_;
};
// -------------------------------------------------------------------

class MSG_CS_DC_LOCATION_INDEX_SEND : public ::google::protobuf::Message {
 public:
  MSG_CS_DC_LOCATION_INDEX_SEND();
  virtual ~MSG_CS_DC_LOCATION_INDEX_SEND();

  MSG_CS_DC_LOCATION_INDEX_SEND(const MSG_CS_DC_LOCATION_INDEX_SEND& from);

  inline MSG_CS_DC_LOCATION_INDEX_SEND& operator=(const MSG_CS_DC_LOCATION_INDEX_SEND& from) {
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
  static const MSG_CS_DC_LOCATION_INDEX_SEND& default_instance();

  void Swap(MSG_CS_DC_LOCATION_INDEX_SEND* other);

  // implements Message ----------------------------------------------

  MSG_CS_DC_LOCATION_INDEX_SEND* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_CS_DC_LOCATION_INDEX_SEND& from);
  void MergeFrom(const MSG_CS_DC_LOCATION_INDEX_SEND& from);
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

  // required uint32 dbID = 1;
  inline bool has_dbid() const;
  inline void clear_dbid();
  static const int kDbIDFieldNumber = 1;
  inline ::google::protobuf::uint32 dbid() const;
  inline void set_dbid(::google::protobuf::uint32 value);

  // required string tableName = 2;
  inline bool has_tablename() const;
  inline void clear_tablename();
  static const int kTableNameFieldNumber = 2;
  inline const ::std::string& tablename() const;
  inline void set_tablename(const ::std::string& value);
  inline void set_tablename(const char* value);
  inline void set_tablename(const char* value, size_t size);
  inline ::std::string* mutable_tablename();
  inline ::std::string* release_tablename();
  inline void set_allocated_tablename(::std::string* tablename);

  // required string columnName = 3;
  inline bool has_columnname() const;
  inline void clear_columnname();
  static const int kColumnNameFieldNumber = 3;
  inline const ::std::string& columnname() const;
  inline void set_columnname(const ::std::string& value);
  inline void set_columnname(const char* value);
  inline void set_columnname(const char* value, size_t size);
  inline ::std::string* mutable_columnname();
  inline ::std::string* release_columnname();
  inline void set_allocated_columnname(::std::string* columnname);

  // required .INDEX_BORDER colIndexBorder = 4;
  inline bool has_colindexborder() const;
  inline void clear_colindexborder();
  static const int kColIndexBorderFieldNumber = 4;
  inline const ::INDEX_BORDER& colindexborder() const;
  inline ::INDEX_BORDER* mutable_colindexborder();
  inline ::INDEX_BORDER* release_colindexborder();
  inline void set_allocated_colindexborder(::INDEX_BORDER* colindexborder);

  // @@protoc_insertion_point(class_scope:MSG_CS_DC_LOCATION_INDEX_SEND)
 private:
  inline void set_has_dbid();
  inline void clear_has_dbid();
  inline void set_has_tablename();
  inline void clear_has_tablename();
  inline void set_has_columnname();
  inline void clear_has_columnname();
  inline void set_has_colindexborder();
  inline void clear_has_colindexborder();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* tablename_;
  ::std::string* columnname_;
  ::INDEX_BORDER* colindexborder_;
  ::google::protobuf::uint32 dbid_;
  friend void  protobuf_AddDesc_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_CS_DC_LOCATION_INDEX_SEND* default_instance_;
};
// -------------------------------------------------------------------

class MSG_DC_CS_LOCATION_INDEX_SEND_ACK : public ::google::protobuf::Message {
 public:
  MSG_DC_CS_LOCATION_INDEX_SEND_ACK();
  virtual ~MSG_DC_CS_LOCATION_INDEX_SEND_ACK();

  MSG_DC_CS_LOCATION_INDEX_SEND_ACK(const MSG_DC_CS_LOCATION_INDEX_SEND_ACK& from);

  inline MSG_DC_CS_LOCATION_INDEX_SEND_ACK& operator=(const MSG_DC_CS_LOCATION_INDEX_SEND_ACK& from) {
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
  static const MSG_DC_CS_LOCATION_INDEX_SEND_ACK& default_instance();

  void Swap(MSG_DC_CS_LOCATION_INDEX_SEND_ACK* other);

  // implements Message ----------------------------------------------

  MSG_DC_CS_LOCATION_INDEX_SEND_ACK* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DC_CS_LOCATION_INDEX_SEND_ACK& from);
  void MergeFrom(const MSG_DC_CS_LOCATION_INDEX_SEND_ACK& from);
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

  // @@protoc_insertion_point(class_scope:MSG_DC_CS_LOCATION_INDEX_SEND_ACK)
 private:
  inline void set_has_statuscode();
  inline void clear_has_statuscode();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int32 statuscode_;
  friend void  protobuf_AddDesc_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_DC_CS_LOCATION_INDEX_SEND_ACK* default_instance_;
};
// ===================================================================


// ===================================================================

// DICT_VALUE

// optional string strValue = 1;
inline bool DICT_VALUE::has_strvalue() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DICT_VALUE::set_has_strvalue() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DICT_VALUE::clear_has_strvalue() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DICT_VALUE::clear_strvalue() {
  if (strvalue_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    strvalue_->clear();
  }
  clear_has_strvalue();
}
inline const ::std::string& DICT_VALUE::strvalue() const {
  // @@protoc_insertion_point(field_get:DICT_VALUE.strValue)
  return *strvalue_;
}
inline void DICT_VALUE::set_strvalue(const ::std::string& value) {
  set_has_strvalue();
  if (strvalue_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    strvalue_ = new ::std::string;
  }
  strvalue_->assign(value);
  // @@protoc_insertion_point(field_set:DICT_VALUE.strValue)
}
inline void DICT_VALUE::set_strvalue(const char* value) {
  set_has_strvalue();
  if (strvalue_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    strvalue_ = new ::std::string;
  }
  strvalue_->assign(value);
  // @@protoc_insertion_point(field_set_char:DICT_VALUE.strValue)
}
inline void DICT_VALUE::set_strvalue(const char* value, size_t size) {
  set_has_strvalue();
  if (strvalue_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    strvalue_ = new ::std::string;
  }
  strvalue_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:DICT_VALUE.strValue)
}
inline ::std::string* DICT_VALUE::mutable_strvalue() {
  set_has_strvalue();
  if (strvalue_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    strvalue_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:DICT_VALUE.strValue)
  return strvalue_;
}
inline ::std::string* DICT_VALUE::release_strvalue() {
  clear_has_strvalue();
  if (strvalue_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = strvalue_;
    strvalue_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void DICT_VALUE::set_allocated_strvalue(::std::string* strvalue) {
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
  // @@protoc_insertion_point(field_set_allocated:DICT_VALUE.strValue)
}

// optional int32 iValue = 2;
inline bool DICT_VALUE::has_ivalue() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void DICT_VALUE::set_has_ivalue() {
  _has_bits_[0] |= 0x00000002u;
}
inline void DICT_VALUE::clear_has_ivalue() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void DICT_VALUE::clear_ivalue() {
  ivalue_ = 0;
  clear_has_ivalue();
}
inline ::google::protobuf::int32 DICT_VALUE::ivalue() const {
  // @@protoc_insertion_point(field_get:DICT_VALUE.iValue)
  return ivalue_;
}
inline void DICT_VALUE::set_ivalue(::google::protobuf::int32 value) {
  set_has_ivalue();
  ivalue_ = value;
  // @@protoc_insertion_point(field_set:DICT_VALUE.iValue)
}

// optional float fValue = 3;
inline bool DICT_VALUE::has_fvalue() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void DICT_VALUE::set_has_fvalue() {
  _has_bits_[0] |= 0x00000004u;
}
inline void DICT_VALUE::clear_has_fvalue() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void DICT_VALUE::clear_fvalue() {
  fvalue_ = 0;
  clear_has_fvalue();
}
inline float DICT_VALUE::fvalue() const {
  // @@protoc_insertion_point(field_get:DICT_VALUE.fValue)
  return fvalue_;
}
inline void DICT_VALUE::set_fvalue(float value) {
  set_has_fvalue();
  fvalue_ = value;
  // @@protoc_insertion_point(field_set:DICT_VALUE.fValue)
}

// optional double dValue = 4;
inline bool DICT_VALUE::has_dvalue() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void DICT_VALUE::set_has_dvalue() {
  _has_bits_[0] |= 0x00000008u;
}
inline void DICT_VALUE::clear_has_dvalue() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void DICT_VALUE::clear_dvalue() {
  dvalue_ = 0;
  clear_has_dvalue();
}
inline double DICT_VALUE::dvalue() const {
  // @@protoc_insertion_point(field_get:DICT_VALUE.dValue)
  return dvalue_;
}
inline void DICT_VALUE::set_dvalue(double value) {
  set_has_dvalue();
  dvalue_ = value;
  // @@protoc_insertion_point(field_set:DICT_VALUE.dValue)
}

// -------------------------------------------------------------------

// INDEX_BORDER

// required .INDEX_BORDER.DICT_TYPE dictType = 1 [default = STRING];
inline bool INDEX_BORDER::has_dicttype() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void INDEX_BORDER::set_has_dicttype() {
  _has_bits_[0] |= 0x00000001u;
}
inline void INDEX_BORDER::clear_has_dicttype() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void INDEX_BORDER::clear_dicttype() {
  dicttype_ = 0;
  clear_has_dicttype();
}
inline ::INDEX_BORDER_DICT_TYPE INDEX_BORDER::dicttype() const {
  // @@protoc_insertion_point(field_get:INDEX_BORDER.dictType)
  return static_cast< ::INDEX_BORDER_DICT_TYPE >(dicttype_);
}
inline void INDEX_BORDER::set_dicttype(::INDEX_BORDER_DICT_TYPE value) {
  assert(::INDEX_BORDER_DICT_TYPE_IsValid(value));
  set_has_dicttype();
  dicttype_ = value;
  // @@protoc_insertion_point(field_set:INDEX_BORDER.dictType)
}

// required .DICT_VALUE dictUpper = 2;
inline bool INDEX_BORDER::has_dictupper() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void INDEX_BORDER::set_has_dictupper() {
  _has_bits_[0] |= 0x00000002u;
}
inline void INDEX_BORDER::clear_has_dictupper() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void INDEX_BORDER::clear_dictupper() {
  if (dictupper_ != NULL) dictupper_->::DICT_VALUE::Clear();
  clear_has_dictupper();
}
inline const ::DICT_VALUE& INDEX_BORDER::dictupper() const {
  // @@protoc_insertion_point(field_get:INDEX_BORDER.dictUpper)
  return dictupper_ != NULL ? *dictupper_ : *default_instance_->dictupper_;
}
inline ::DICT_VALUE* INDEX_BORDER::mutable_dictupper() {
  set_has_dictupper();
  if (dictupper_ == NULL) dictupper_ = new ::DICT_VALUE;
  // @@protoc_insertion_point(field_mutable:INDEX_BORDER.dictUpper)
  return dictupper_;
}
inline ::DICT_VALUE* INDEX_BORDER::release_dictupper() {
  clear_has_dictupper();
  ::DICT_VALUE* temp = dictupper_;
  dictupper_ = NULL;
  return temp;
}
inline void INDEX_BORDER::set_allocated_dictupper(::DICT_VALUE* dictupper) {
  delete dictupper_;
  dictupper_ = dictupper;
  if (dictupper) {
    set_has_dictupper();
  } else {
    clear_has_dictupper();
  }
  // @@protoc_insertion_point(field_set_allocated:INDEX_BORDER.dictUpper)
}

// required .DICT_VALUE dictLower = 3;
inline bool INDEX_BORDER::has_dictlower() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void INDEX_BORDER::set_has_dictlower() {
  _has_bits_[0] |= 0x00000004u;
}
inline void INDEX_BORDER::clear_has_dictlower() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void INDEX_BORDER::clear_dictlower() {
  if (dictlower_ != NULL) dictlower_->::DICT_VALUE::Clear();
  clear_has_dictlower();
}
inline const ::DICT_VALUE& INDEX_BORDER::dictlower() const {
  // @@protoc_insertion_point(field_get:INDEX_BORDER.dictLower)
  return dictlower_ != NULL ? *dictlower_ : *default_instance_->dictlower_;
}
inline ::DICT_VALUE* INDEX_BORDER::mutable_dictlower() {
  set_has_dictlower();
  if (dictlower_ == NULL) dictlower_ = new ::DICT_VALUE;
  // @@protoc_insertion_point(field_mutable:INDEX_BORDER.dictLower)
  return dictlower_;
}
inline ::DICT_VALUE* INDEX_BORDER::release_dictlower() {
  clear_has_dictlower();
  ::DICT_VALUE* temp = dictlower_;
  dictlower_ = NULL;
  return temp;
}
inline void INDEX_BORDER::set_allocated_dictlower(::DICT_VALUE* dictlower) {
  delete dictlower_;
  dictlower_ = dictlower;
  if (dictlower) {
    set_has_dictlower();
  } else {
    clear_has_dictlower();
  }
  // @@protoc_insertion_point(field_set_allocated:INDEX_BORDER.dictLower)
}

// required uint32 entryUpper = 4;
inline bool INDEX_BORDER::has_entryupper() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void INDEX_BORDER::set_has_entryupper() {
  _has_bits_[0] |= 0x00000008u;
}
inline void INDEX_BORDER::clear_has_entryupper() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void INDEX_BORDER::clear_entryupper() {
  entryupper_ = 0u;
  clear_has_entryupper();
}
inline ::google::protobuf::uint32 INDEX_BORDER::entryupper() const {
  // @@protoc_insertion_point(field_get:INDEX_BORDER.entryUpper)
  return entryupper_;
}
inline void INDEX_BORDER::set_entryupper(::google::protobuf::uint32 value) {
  set_has_entryupper();
  entryupper_ = value;
  // @@protoc_insertion_point(field_set:INDEX_BORDER.entryUpper)
}

// required uint32 entryLower = 5;
inline bool INDEX_BORDER::has_entrylower() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void INDEX_BORDER::set_has_entrylower() {
  _has_bits_[0] |= 0x00000010u;
}
inline void INDEX_BORDER::clear_has_entrylower() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void INDEX_BORDER::clear_entrylower() {
  entrylower_ = 0u;
  clear_has_entrylower();
}
inline ::google::protobuf::uint32 INDEX_BORDER::entrylower() const {
  // @@protoc_insertion_point(field_get:INDEX_BORDER.entryLower)
  return entrylower_;
}
inline void INDEX_BORDER::set_entrylower(::google::protobuf::uint32 value) {
  set_has_entrylower();
  entrylower_ = value;
  // @@protoc_insertion_point(field_set:INDEX_BORDER.entryLower)
}

// -------------------------------------------------------------------

// MSG_CS_DC_LOCATION_INDEX_SEND

// required uint32 dbID = 1;
inline bool MSG_CS_DC_LOCATION_INDEX_SEND::has_dbid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_has_dbid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::clear_has_dbid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::clear_dbid() {
  dbid_ = 0u;
  clear_has_dbid();
}
inline ::google::protobuf::uint32 MSG_CS_DC_LOCATION_INDEX_SEND::dbid() const {
  // @@protoc_insertion_point(field_get:MSG_CS_DC_LOCATION_INDEX_SEND.dbID)
  return dbid_;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_dbid(::google::protobuf::uint32 value) {
  set_has_dbid();
  dbid_ = value;
  // @@protoc_insertion_point(field_set:MSG_CS_DC_LOCATION_INDEX_SEND.dbID)
}

// required string tableName = 2;
inline bool MSG_CS_DC_LOCATION_INDEX_SEND::has_tablename() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_has_tablename() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::clear_has_tablename() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::clear_tablename() {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_->clear();
  }
  clear_has_tablename();
}
inline const ::std::string& MSG_CS_DC_LOCATION_INDEX_SEND::tablename() const {
  // @@protoc_insertion_point(field_get:MSG_CS_DC_LOCATION_INDEX_SEND.tableName)
  return *tablename_;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_tablename(const ::std::string& value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set:MSG_CS_DC_LOCATION_INDEX_SEND.tableName)
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_tablename(const char* value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set_char:MSG_CS_DC_LOCATION_INDEX_SEND.tableName)
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_tablename(const char* value, size_t size) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MSG_CS_DC_LOCATION_INDEX_SEND.tableName)
}
inline ::std::string* MSG_CS_DC_LOCATION_INDEX_SEND::mutable_tablename() {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MSG_CS_DC_LOCATION_INDEX_SEND.tableName)
  return tablename_;
}
inline ::std::string* MSG_CS_DC_LOCATION_INDEX_SEND::release_tablename() {
  clear_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = tablename_;
    tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_allocated_tablename(::std::string* tablename) {
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
  // @@protoc_insertion_point(field_set_allocated:MSG_CS_DC_LOCATION_INDEX_SEND.tableName)
}

// required string columnName = 3;
inline bool MSG_CS_DC_LOCATION_INDEX_SEND::has_columnname() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_has_columnname() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::clear_has_columnname() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::clear_columnname() {
  if (columnname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_->clear();
  }
  clear_has_columnname();
}
inline const ::std::string& MSG_CS_DC_LOCATION_INDEX_SEND::columnname() const {
  // @@protoc_insertion_point(field_get:MSG_CS_DC_LOCATION_INDEX_SEND.columnName)
  return *columnname_;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_columnname(const ::std::string& value) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(value);
  // @@protoc_insertion_point(field_set:MSG_CS_DC_LOCATION_INDEX_SEND.columnName)
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_columnname(const char* value) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(value);
  // @@protoc_insertion_point(field_set_char:MSG_CS_DC_LOCATION_INDEX_SEND.columnName)
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_columnname(const char* value, size_t size) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MSG_CS_DC_LOCATION_INDEX_SEND.columnName)
}
inline ::std::string* MSG_CS_DC_LOCATION_INDEX_SEND::mutable_columnname() {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MSG_CS_DC_LOCATION_INDEX_SEND.columnName)
  return columnname_;
}
inline ::std::string* MSG_CS_DC_LOCATION_INDEX_SEND::release_columnname() {
  clear_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = columnname_;
    columnname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_allocated_columnname(::std::string* columnname) {
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
  // @@protoc_insertion_point(field_set_allocated:MSG_CS_DC_LOCATION_INDEX_SEND.columnName)
}

// required .INDEX_BORDER colIndexBorder = 4;
inline bool MSG_CS_DC_LOCATION_INDEX_SEND::has_colindexborder() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_has_colindexborder() {
  _has_bits_[0] |= 0x00000008u;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::clear_has_colindexborder() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::clear_colindexborder() {
  if (colindexborder_ != NULL) colindexborder_->::INDEX_BORDER::Clear();
  clear_has_colindexborder();
}
inline const ::INDEX_BORDER& MSG_CS_DC_LOCATION_INDEX_SEND::colindexborder() const {
  // @@protoc_insertion_point(field_get:MSG_CS_DC_LOCATION_INDEX_SEND.colIndexBorder)
  return colindexborder_ != NULL ? *colindexborder_ : *default_instance_->colindexborder_;
}
inline ::INDEX_BORDER* MSG_CS_DC_LOCATION_INDEX_SEND::mutable_colindexborder() {
  set_has_colindexborder();
  if (colindexborder_ == NULL) colindexborder_ = new ::INDEX_BORDER;
  // @@protoc_insertion_point(field_mutable:MSG_CS_DC_LOCATION_INDEX_SEND.colIndexBorder)
  return colindexborder_;
}
inline ::INDEX_BORDER* MSG_CS_DC_LOCATION_INDEX_SEND::release_colindexborder() {
  clear_has_colindexborder();
  ::INDEX_BORDER* temp = colindexborder_;
  colindexborder_ = NULL;
  return temp;
}
inline void MSG_CS_DC_LOCATION_INDEX_SEND::set_allocated_colindexborder(::INDEX_BORDER* colindexborder) {
  delete colindexborder_;
  colindexborder_ = colindexborder;
  if (colindexborder) {
    set_has_colindexborder();
  } else {
    clear_has_colindexborder();
  }
  // @@protoc_insertion_point(field_set_allocated:MSG_CS_DC_LOCATION_INDEX_SEND.colIndexBorder)
}

// -------------------------------------------------------------------

// MSG_DC_CS_LOCATION_INDEX_SEND_ACK

// required int32 statusCode = 1;
inline bool MSG_DC_CS_LOCATION_INDEX_SEND_ACK::has_statuscode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DC_CS_LOCATION_INDEX_SEND_ACK::set_has_statuscode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DC_CS_LOCATION_INDEX_SEND_ACK::clear_has_statuscode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DC_CS_LOCATION_INDEX_SEND_ACK::clear_statuscode() {
  statuscode_ = 0;
  clear_has_statuscode();
}
inline ::google::protobuf::int32 MSG_DC_CS_LOCATION_INDEX_SEND_ACK::statuscode() const {
  // @@protoc_insertion_point(field_get:MSG_DC_CS_LOCATION_INDEX_SEND_ACK.statusCode)
  return statuscode_;
}
inline void MSG_DC_CS_LOCATION_INDEX_SEND_ACK::set_statuscode(::google::protobuf::int32 value) {
  set_has_statuscode();
  statuscode_ = value;
  // @@protoc_insertion_point(field_set:MSG_DC_CS_LOCATION_INDEX_SEND_ACK.statusCode)
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::INDEX_BORDER_DICT_TYPE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::INDEX_BORDER_DICT_TYPE>() {
  return ::INDEX_BORDER_DICT_TYPE_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MSG_5fCS_5fDC_5fLOCATION_5fINDEX_5fSEND_2eproto__INCLUDED

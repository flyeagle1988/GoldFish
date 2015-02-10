// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DC_RA_DATABASE_INFO_GET.proto

#ifndef PROTOBUF_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto__INCLUDED
#define PROTOBUF_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto__INCLUDED

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
void  protobuf_AddDesc_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();
void protobuf_AssignDesc_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();
void protobuf_ShutdownFile_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();

class COLUMN_INFO;
class TABLE_INFO;
class DATABASE_INFO;
class MSG_RA_DC_DATABASE_INFO_GET_ACK;

enum COLUMN_INFO_COLUMN_TYPE {
  COLUMN_INFO_COLUMN_TYPE_STRING = 0,
  COLUMN_INFO_COLUMN_TYPE_INT = 1,
  COLUMN_INFO_COLUMN_TYPE_FLOAT = 2,
  COLUMN_INFO_COLUMN_TYPE_DOUBLE = 3
};
bool COLUMN_INFO_COLUMN_TYPE_IsValid(int value);
const COLUMN_INFO_COLUMN_TYPE COLUMN_INFO_COLUMN_TYPE_COLUMN_TYPE_MIN = COLUMN_INFO_COLUMN_TYPE_STRING;
const COLUMN_INFO_COLUMN_TYPE COLUMN_INFO_COLUMN_TYPE_COLUMN_TYPE_MAX = COLUMN_INFO_COLUMN_TYPE_DOUBLE;
const int COLUMN_INFO_COLUMN_TYPE_COLUMN_TYPE_ARRAYSIZE = COLUMN_INFO_COLUMN_TYPE_COLUMN_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* COLUMN_INFO_COLUMN_TYPE_descriptor();
inline const ::std::string& COLUMN_INFO_COLUMN_TYPE_Name(COLUMN_INFO_COLUMN_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    COLUMN_INFO_COLUMN_TYPE_descriptor(), value);
}
inline bool COLUMN_INFO_COLUMN_TYPE_Parse(
    const ::std::string& name, COLUMN_INFO_COLUMN_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<COLUMN_INFO_COLUMN_TYPE>(
    COLUMN_INFO_COLUMN_TYPE_descriptor(), name, value);
}
// ===================================================================

class COLUMN_INFO : public ::google::protobuf::Message {
 public:
  COLUMN_INFO();
  virtual ~COLUMN_INFO();

  COLUMN_INFO(const COLUMN_INFO& from);

  inline COLUMN_INFO& operator=(const COLUMN_INFO& from) {
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
  static const COLUMN_INFO& default_instance();

  void Swap(COLUMN_INFO* other);

  // implements Message ----------------------------------------------

  COLUMN_INFO* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const COLUMN_INFO& from);
  void MergeFrom(const COLUMN_INFO& from);
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

  typedef COLUMN_INFO_COLUMN_TYPE COLUMN_TYPE;
  static const COLUMN_TYPE STRING = COLUMN_INFO_COLUMN_TYPE_STRING;
  static const COLUMN_TYPE INT = COLUMN_INFO_COLUMN_TYPE_INT;
  static const COLUMN_TYPE FLOAT = COLUMN_INFO_COLUMN_TYPE_FLOAT;
  static const COLUMN_TYPE DOUBLE = COLUMN_INFO_COLUMN_TYPE_DOUBLE;
  static inline bool COLUMN_TYPE_IsValid(int value) {
    return COLUMN_INFO_COLUMN_TYPE_IsValid(value);
  }
  static const COLUMN_TYPE COLUMN_TYPE_MIN =
    COLUMN_INFO_COLUMN_TYPE_COLUMN_TYPE_MIN;
  static const COLUMN_TYPE COLUMN_TYPE_MAX =
    COLUMN_INFO_COLUMN_TYPE_COLUMN_TYPE_MAX;
  static const int COLUMN_TYPE_ARRAYSIZE =
    COLUMN_INFO_COLUMN_TYPE_COLUMN_TYPE_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  COLUMN_TYPE_descriptor() {
    return COLUMN_INFO_COLUMN_TYPE_descriptor();
  }
  static inline const ::std::string& COLUMN_TYPE_Name(COLUMN_TYPE value) {
    return COLUMN_INFO_COLUMN_TYPE_Name(value);
  }
  static inline bool COLUMN_TYPE_Parse(const ::std::string& name,
      COLUMN_TYPE* value) {
    return COLUMN_INFO_COLUMN_TYPE_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required string colName = 1;
  inline bool has_colname() const;
  inline void clear_colname();
  static const int kColNameFieldNumber = 1;
  inline const ::std::string& colname() const;
  inline void set_colname(const ::std::string& value);
  inline void set_colname(const char* value);
  inline void set_colname(const char* value, size_t size);
  inline ::std::string* mutable_colname();
  inline ::std::string* release_colname();
  inline void set_allocated_colname(::std::string* colname);

  // required .COLUMN_INFO.COLUMN_TYPE colType = 2 [default = STRING];
  inline bool has_coltype() const;
  inline void clear_coltype();
  static const int kColTypeFieldNumber = 2;
  inline ::COLUMN_INFO_COLUMN_TYPE coltype() const;
  inline void set_coltype(::COLUMN_INFO_COLUMN_TYPE value);

  // @@protoc_insertion_point(class_scope:COLUMN_INFO)
 private:
  inline void set_has_colname();
  inline void clear_has_colname();
  inline void set_has_coltype();
  inline void clear_has_coltype();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* colname_;
  int coltype_;
  friend void  protobuf_AddDesc_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();

  void InitAsDefaultInstance();
  static COLUMN_INFO* default_instance_;
};
// -------------------------------------------------------------------

class TABLE_INFO : public ::google::protobuf::Message {
 public:
  TABLE_INFO();
  virtual ~TABLE_INFO();

  TABLE_INFO(const TABLE_INFO& from);

  inline TABLE_INFO& operator=(const TABLE_INFO& from) {
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
  static const TABLE_INFO& default_instance();

  void Swap(TABLE_INFO* other);

  // implements Message ----------------------------------------------

  TABLE_INFO* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TABLE_INFO& from);
  void MergeFrom(const TABLE_INFO& from);
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

  // repeated .COLUMN_INFO columnData = 2;
  inline int columndata_size() const;
  inline void clear_columndata();
  static const int kColumnDataFieldNumber = 2;
  inline const ::COLUMN_INFO& columndata(int index) const;
  inline ::COLUMN_INFO* mutable_columndata(int index);
  inline ::COLUMN_INFO* add_columndata();
  inline const ::google::protobuf::RepeatedPtrField< ::COLUMN_INFO >&
      columndata() const;
  inline ::google::protobuf::RepeatedPtrField< ::COLUMN_INFO >*
      mutable_columndata();

  // required uint32 rowNum = 3;
  inline bool has_rownum() const;
  inline void clear_rownum();
  static const int kRowNumFieldNumber = 3;
  inline ::google::protobuf::uint32 rownum() const;
  inline void set_rownum(::google::protobuf::uint32 value);

  // required uint64 tableSize = 4;
  inline bool has_tablesize() const;
  inline void clear_tablesize();
  static const int kTableSizeFieldNumber = 4;
  inline ::google::protobuf::uint64 tablesize() const;
  inline void set_tablesize(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:TABLE_INFO)
 private:
  inline void set_has_tablename();
  inline void clear_has_tablename();
  inline void set_has_rownum();
  inline void clear_has_rownum();
  inline void set_has_tablesize();
  inline void clear_has_tablesize();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* tablename_;
  ::google::protobuf::RepeatedPtrField< ::COLUMN_INFO > columndata_;
  ::google::protobuf::uint64 tablesize_;
  ::google::protobuf::uint32 rownum_;
  friend void  protobuf_AddDesc_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();

  void InitAsDefaultInstance();
  static TABLE_INFO* default_instance_;
};
// -------------------------------------------------------------------

class DATABASE_INFO : public ::google::protobuf::Message {
 public:
  DATABASE_INFO();
  virtual ~DATABASE_INFO();

  DATABASE_INFO(const DATABASE_INFO& from);

  inline DATABASE_INFO& operator=(const DATABASE_INFO& from) {
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
  static const DATABASE_INFO& default_instance();

  void Swap(DATABASE_INFO* other);

  // implements Message ----------------------------------------------

  DATABASE_INFO* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const DATABASE_INFO& from);
  void MergeFrom(const DATABASE_INFO& from);
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

  // required int32 DBID = 1;
  inline bool has_dbid() const;
  inline void clear_dbid();
  static const int kDBIDFieldNumber = 1;
  inline ::google::protobuf::int32 dbid() const;
  inline void set_dbid(::google::protobuf::int32 value);

  // repeated .TABLE_INFO tableInfo = 2;
  inline int tableinfo_size() const;
  inline void clear_tableinfo();
  static const int kTableInfoFieldNumber = 2;
  inline const ::TABLE_INFO& tableinfo(int index) const;
  inline ::TABLE_INFO* mutable_tableinfo(int index);
  inline ::TABLE_INFO* add_tableinfo();
  inline const ::google::protobuf::RepeatedPtrField< ::TABLE_INFO >&
      tableinfo() const;
  inline ::google::protobuf::RepeatedPtrField< ::TABLE_INFO >*
      mutable_tableinfo();

  // @@protoc_insertion_point(class_scope:DATABASE_INFO)
 private:
  inline void set_has_dbid();
  inline void clear_has_dbid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::TABLE_INFO > tableinfo_;
  ::google::protobuf::int32 dbid_;
  friend void  protobuf_AddDesc_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();

  void InitAsDefaultInstance();
  static DATABASE_INFO* default_instance_;
};
// -------------------------------------------------------------------

class MSG_RA_DC_DATABASE_INFO_GET_ACK : public ::google::protobuf::Message {
 public:
  MSG_RA_DC_DATABASE_INFO_GET_ACK();
  virtual ~MSG_RA_DC_DATABASE_INFO_GET_ACK();

  MSG_RA_DC_DATABASE_INFO_GET_ACK(const MSG_RA_DC_DATABASE_INFO_GET_ACK& from);

  inline MSG_RA_DC_DATABASE_INFO_GET_ACK& operator=(const MSG_RA_DC_DATABASE_INFO_GET_ACK& from) {
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
  static const MSG_RA_DC_DATABASE_INFO_GET_ACK& default_instance();

  void Swap(MSG_RA_DC_DATABASE_INFO_GET_ACK* other);

  // implements Message ----------------------------------------------

  MSG_RA_DC_DATABASE_INFO_GET_ACK* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_RA_DC_DATABASE_INFO_GET_ACK& from);
  void MergeFrom(const MSG_RA_DC_DATABASE_INFO_GET_ACK& from);
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

  // required string statusMsg = 2;
  inline bool has_statusmsg() const;
  inline void clear_statusmsg();
  static const int kStatusMsgFieldNumber = 2;
  inline const ::std::string& statusmsg() const;
  inline void set_statusmsg(const ::std::string& value);
  inline void set_statusmsg(const char* value);
  inline void set_statusmsg(const char* value, size_t size);
  inline ::std::string* mutable_statusmsg();
  inline ::std::string* release_statusmsg();
  inline void set_allocated_statusmsg(::std::string* statusmsg);

  // repeated .DATABASE_INFO dbInfo = 3;
  inline int dbinfo_size() const;
  inline void clear_dbinfo();
  static const int kDbInfoFieldNumber = 3;
  inline const ::DATABASE_INFO& dbinfo(int index) const;
  inline ::DATABASE_INFO* mutable_dbinfo(int index);
  inline ::DATABASE_INFO* add_dbinfo();
  inline const ::google::protobuf::RepeatedPtrField< ::DATABASE_INFO >&
      dbinfo() const;
  inline ::google::protobuf::RepeatedPtrField< ::DATABASE_INFO >*
      mutable_dbinfo();

  // @@protoc_insertion_point(class_scope:MSG_RA_DC_DATABASE_INFO_GET_ACK)
 private:
  inline void set_has_statuscode();
  inline void clear_has_statuscode();
  inline void set_has_statusmsg();
  inline void clear_has_statusmsg();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* statusmsg_;
  ::google::protobuf::RepeatedPtrField< ::DATABASE_INFO > dbinfo_;
  ::google::protobuf::int32 statuscode_;
  friend void  protobuf_AddDesc_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto();

  void InitAsDefaultInstance();
  static MSG_RA_DC_DATABASE_INFO_GET_ACK* default_instance_;
};
// ===================================================================


// ===================================================================

// COLUMN_INFO

// required string colName = 1;
inline bool COLUMN_INFO::has_colname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void COLUMN_INFO::set_has_colname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void COLUMN_INFO::clear_has_colname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void COLUMN_INFO::clear_colname() {
  if (colname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    colname_->clear();
  }
  clear_has_colname();
}
inline const ::std::string& COLUMN_INFO::colname() const {
  // @@protoc_insertion_point(field_get:COLUMN_INFO.colName)
  return *colname_;
}
inline void COLUMN_INFO::set_colname(const ::std::string& value) {
  set_has_colname();
  if (colname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    colname_ = new ::std::string;
  }
  colname_->assign(value);
  // @@protoc_insertion_point(field_set:COLUMN_INFO.colName)
}
inline void COLUMN_INFO::set_colname(const char* value) {
  set_has_colname();
  if (colname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    colname_ = new ::std::string;
  }
  colname_->assign(value);
  // @@protoc_insertion_point(field_set_char:COLUMN_INFO.colName)
}
inline void COLUMN_INFO::set_colname(const char* value, size_t size) {
  set_has_colname();
  if (colname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    colname_ = new ::std::string;
  }
  colname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:COLUMN_INFO.colName)
}
inline ::std::string* COLUMN_INFO::mutable_colname() {
  set_has_colname();
  if (colname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    colname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:COLUMN_INFO.colName)
  return colname_;
}
inline ::std::string* COLUMN_INFO::release_colname() {
  clear_has_colname();
  if (colname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = colname_;
    colname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void COLUMN_INFO::set_allocated_colname(::std::string* colname) {
  if (colname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete colname_;
  }
  if (colname) {
    set_has_colname();
    colname_ = colname;
  } else {
    clear_has_colname();
    colname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:COLUMN_INFO.colName)
}

// required .COLUMN_INFO.COLUMN_TYPE colType = 2 [default = STRING];
inline bool COLUMN_INFO::has_coltype() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void COLUMN_INFO::set_has_coltype() {
  _has_bits_[0] |= 0x00000002u;
}
inline void COLUMN_INFO::clear_has_coltype() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void COLUMN_INFO::clear_coltype() {
  coltype_ = 0;
  clear_has_coltype();
}
inline ::COLUMN_INFO_COLUMN_TYPE COLUMN_INFO::coltype() const {
  // @@protoc_insertion_point(field_get:COLUMN_INFO.colType)
  return static_cast< ::COLUMN_INFO_COLUMN_TYPE >(coltype_);
}
inline void COLUMN_INFO::set_coltype(::COLUMN_INFO_COLUMN_TYPE value) {
  assert(::COLUMN_INFO_COLUMN_TYPE_IsValid(value));
  set_has_coltype();
  coltype_ = value;
  // @@protoc_insertion_point(field_set:COLUMN_INFO.colType)
}

// -------------------------------------------------------------------

// TABLE_INFO

// required string tableName = 1;
inline bool TABLE_INFO::has_tablename() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TABLE_INFO::set_has_tablename() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TABLE_INFO::clear_has_tablename() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TABLE_INFO::clear_tablename() {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_->clear();
  }
  clear_has_tablename();
}
inline const ::std::string& TABLE_INFO::tablename() const {
  // @@protoc_insertion_point(field_get:TABLE_INFO.tableName)
  return *tablename_;
}
inline void TABLE_INFO::set_tablename(const ::std::string& value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set:TABLE_INFO.tableName)
}
inline void TABLE_INFO::set_tablename(const char* value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set_char:TABLE_INFO.tableName)
}
inline void TABLE_INFO::set_tablename(const char* value, size_t size) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:TABLE_INFO.tableName)
}
inline ::std::string* TABLE_INFO::mutable_tablename() {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:TABLE_INFO.tableName)
  return tablename_;
}
inline ::std::string* TABLE_INFO::release_tablename() {
  clear_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = tablename_;
    tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void TABLE_INFO::set_allocated_tablename(::std::string* tablename) {
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
  // @@protoc_insertion_point(field_set_allocated:TABLE_INFO.tableName)
}

// repeated .COLUMN_INFO columnData = 2;
inline int TABLE_INFO::columndata_size() const {
  return columndata_.size();
}
inline void TABLE_INFO::clear_columndata() {
  columndata_.Clear();
}
inline const ::COLUMN_INFO& TABLE_INFO::columndata(int index) const {
  // @@protoc_insertion_point(field_get:TABLE_INFO.columnData)
  return columndata_.Get(index);
}
inline ::COLUMN_INFO* TABLE_INFO::mutable_columndata(int index) {
  // @@protoc_insertion_point(field_mutable:TABLE_INFO.columnData)
  return columndata_.Mutable(index);
}
inline ::COLUMN_INFO* TABLE_INFO::add_columndata() {
  // @@protoc_insertion_point(field_add:TABLE_INFO.columnData)
  return columndata_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::COLUMN_INFO >&
TABLE_INFO::columndata() const {
  // @@protoc_insertion_point(field_list:TABLE_INFO.columnData)
  return columndata_;
}
inline ::google::protobuf::RepeatedPtrField< ::COLUMN_INFO >*
TABLE_INFO::mutable_columndata() {
  // @@protoc_insertion_point(field_mutable_list:TABLE_INFO.columnData)
  return &columndata_;
}

// required uint32 rowNum = 3;
inline bool TABLE_INFO::has_rownum() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TABLE_INFO::set_has_rownum() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TABLE_INFO::clear_has_rownum() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TABLE_INFO::clear_rownum() {
  rownum_ = 0u;
  clear_has_rownum();
}
inline ::google::protobuf::uint32 TABLE_INFO::rownum() const {
  // @@protoc_insertion_point(field_get:TABLE_INFO.rowNum)
  return rownum_;
}
inline void TABLE_INFO::set_rownum(::google::protobuf::uint32 value) {
  set_has_rownum();
  rownum_ = value;
  // @@protoc_insertion_point(field_set:TABLE_INFO.rowNum)
}

// required uint64 tableSize = 4;
inline bool TABLE_INFO::has_tablesize() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TABLE_INFO::set_has_tablesize() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TABLE_INFO::clear_has_tablesize() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TABLE_INFO::clear_tablesize() {
  tablesize_ = GOOGLE_ULONGLONG(0);
  clear_has_tablesize();
}
inline ::google::protobuf::uint64 TABLE_INFO::tablesize() const {
  // @@protoc_insertion_point(field_get:TABLE_INFO.tableSize)
  return tablesize_;
}
inline void TABLE_INFO::set_tablesize(::google::protobuf::uint64 value) {
  set_has_tablesize();
  tablesize_ = value;
  // @@protoc_insertion_point(field_set:TABLE_INFO.tableSize)
}

// -------------------------------------------------------------------

// DATABASE_INFO

// required int32 DBID = 1;
inline bool DATABASE_INFO::has_dbid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void DATABASE_INFO::set_has_dbid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void DATABASE_INFO::clear_has_dbid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void DATABASE_INFO::clear_dbid() {
  dbid_ = 0;
  clear_has_dbid();
}
inline ::google::protobuf::int32 DATABASE_INFO::dbid() const {
  // @@protoc_insertion_point(field_get:DATABASE_INFO.DBID)
  return dbid_;
}
inline void DATABASE_INFO::set_dbid(::google::protobuf::int32 value) {
  set_has_dbid();
  dbid_ = value;
  // @@protoc_insertion_point(field_set:DATABASE_INFO.DBID)
}

// repeated .TABLE_INFO tableInfo = 2;
inline int DATABASE_INFO::tableinfo_size() const {
  return tableinfo_.size();
}
inline void DATABASE_INFO::clear_tableinfo() {
  tableinfo_.Clear();
}
inline const ::TABLE_INFO& DATABASE_INFO::tableinfo(int index) const {
  // @@protoc_insertion_point(field_get:DATABASE_INFO.tableInfo)
  return tableinfo_.Get(index);
}
inline ::TABLE_INFO* DATABASE_INFO::mutable_tableinfo(int index) {
  // @@protoc_insertion_point(field_mutable:DATABASE_INFO.tableInfo)
  return tableinfo_.Mutable(index);
}
inline ::TABLE_INFO* DATABASE_INFO::add_tableinfo() {
  // @@protoc_insertion_point(field_add:DATABASE_INFO.tableInfo)
  return tableinfo_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::TABLE_INFO >&
DATABASE_INFO::tableinfo() const {
  // @@protoc_insertion_point(field_list:DATABASE_INFO.tableInfo)
  return tableinfo_;
}
inline ::google::protobuf::RepeatedPtrField< ::TABLE_INFO >*
DATABASE_INFO::mutable_tableinfo() {
  // @@protoc_insertion_point(field_mutable_list:DATABASE_INFO.tableInfo)
  return &tableinfo_;
}

// -------------------------------------------------------------------

// MSG_RA_DC_DATABASE_INFO_GET_ACK

// required int32 statusCode = 1;
inline bool MSG_RA_DC_DATABASE_INFO_GET_ACK::has_statuscode() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::set_has_statuscode() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::clear_has_statuscode() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::clear_statuscode() {
  statuscode_ = 0;
  clear_has_statuscode();
}
inline ::google::protobuf::int32 MSG_RA_DC_DATABASE_INFO_GET_ACK::statuscode() const {
  // @@protoc_insertion_point(field_get:MSG_RA_DC_DATABASE_INFO_GET_ACK.statusCode)
  return statuscode_;
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::set_statuscode(::google::protobuf::int32 value) {
  set_has_statuscode();
  statuscode_ = value;
  // @@protoc_insertion_point(field_set:MSG_RA_DC_DATABASE_INFO_GET_ACK.statusCode)
}

// required string statusMsg = 2;
inline bool MSG_RA_DC_DATABASE_INFO_GET_ACK::has_statusmsg() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::set_has_statusmsg() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::clear_has_statusmsg() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::clear_statusmsg() {
  if (statusmsg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    statusmsg_->clear();
  }
  clear_has_statusmsg();
}
inline const ::std::string& MSG_RA_DC_DATABASE_INFO_GET_ACK::statusmsg() const {
  // @@protoc_insertion_point(field_get:MSG_RA_DC_DATABASE_INFO_GET_ACK.statusMsg)
  return *statusmsg_;
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::set_statusmsg(const ::std::string& value) {
  set_has_statusmsg();
  if (statusmsg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    statusmsg_ = new ::std::string;
  }
  statusmsg_->assign(value);
  // @@protoc_insertion_point(field_set:MSG_RA_DC_DATABASE_INFO_GET_ACK.statusMsg)
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::set_statusmsg(const char* value) {
  set_has_statusmsg();
  if (statusmsg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    statusmsg_ = new ::std::string;
  }
  statusmsg_->assign(value);
  // @@protoc_insertion_point(field_set_char:MSG_RA_DC_DATABASE_INFO_GET_ACK.statusMsg)
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::set_statusmsg(const char* value, size_t size) {
  set_has_statusmsg();
  if (statusmsg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    statusmsg_ = new ::std::string;
  }
  statusmsg_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MSG_RA_DC_DATABASE_INFO_GET_ACK.statusMsg)
}
inline ::std::string* MSG_RA_DC_DATABASE_INFO_GET_ACK::mutable_statusmsg() {
  set_has_statusmsg();
  if (statusmsg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    statusmsg_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MSG_RA_DC_DATABASE_INFO_GET_ACK.statusMsg)
  return statusmsg_;
}
inline ::std::string* MSG_RA_DC_DATABASE_INFO_GET_ACK::release_statusmsg() {
  clear_has_statusmsg();
  if (statusmsg_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = statusmsg_;
    statusmsg_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::set_allocated_statusmsg(::std::string* statusmsg) {
  if (statusmsg_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete statusmsg_;
  }
  if (statusmsg) {
    set_has_statusmsg();
    statusmsg_ = statusmsg;
  } else {
    clear_has_statusmsg();
    statusmsg_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:MSG_RA_DC_DATABASE_INFO_GET_ACK.statusMsg)
}

// repeated .DATABASE_INFO dbInfo = 3;
inline int MSG_RA_DC_DATABASE_INFO_GET_ACK::dbinfo_size() const {
  return dbinfo_.size();
}
inline void MSG_RA_DC_DATABASE_INFO_GET_ACK::clear_dbinfo() {
  dbinfo_.Clear();
}
inline const ::DATABASE_INFO& MSG_RA_DC_DATABASE_INFO_GET_ACK::dbinfo(int index) const {
  // @@protoc_insertion_point(field_get:MSG_RA_DC_DATABASE_INFO_GET_ACK.dbInfo)
  return dbinfo_.Get(index);
}
inline ::DATABASE_INFO* MSG_RA_DC_DATABASE_INFO_GET_ACK::mutable_dbinfo(int index) {
  // @@protoc_insertion_point(field_mutable:MSG_RA_DC_DATABASE_INFO_GET_ACK.dbInfo)
  return dbinfo_.Mutable(index);
}
inline ::DATABASE_INFO* MSG_RA_DC_DATABASE_INFO_GET_ACK::add_dbinfo() {
  // @@protoc_insertion_point(field_add:MSG_RA_DC_DATABASE_INFO_GET_ACK.dbInfo)
  return dbinfo_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::DATABASE_INFO >&
MSG_RA_DC_DATABASE_INFO_GET_ACK::dbinfo() const {
  // @@protoc_insertion_point(field_list:MSG_RA_DC_DATABASE_INFO_GET_ACK.dbInfo)
  return dbinfo_;
}
inline ::google::protobuf::RepeatedPtrField< ::DATABASE_INFO >*
MSG_RA_DC_DATABASE_INFO_GET_ACK::mutable_dbinfo() {
  // @@protoc_insertion_point(field_mutable_list:MSG_RA_DC_DATABASE_INFO_GET_ACK.dbInfo)
  return &dbinfo_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::COLUMN_INFO_COLUMN_TYPE> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::COLUMN_INFO_COLUMN_TYPE>() {
  return ::COLUMN_INFO_COLUMN_TYPE_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MSG_5fDC_5fRA_5fDATABASE_5fINFO_5fGET_2eproto__INCLUDED

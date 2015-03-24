// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DS_CS_RTABLE_SEND.proto

#ifndef PROTOBUF_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto__INCLUDED
#define PROTOBUF_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto__INCLUDED

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
void  protobuf_AddDesc_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto();
void protobuf_AssignDesc_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto();
void protobuf_ShutdownFile_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto();

class MSG_DS_CS_RTABLE_SEND;
class MSG_DS_CS_RTABLE_SEND_ROW_TABLE;

// ===================================================================

class MSG_DS_CS_RTABLE_SEND_ROW_TABLE : public ::google::protobuf::Message {
 public:
  MSG_DS_CS_RTABLE_SEND_ROW_TABLE();
  virtual ~MSG_DS_CS_RTABLE_SEND_ROW_TABLE();

  MSG_DS_CS_RTABLE_SEND_ROW_TABLE(const MSG_DS_CS_RTABLE_SEND_ROW_TABLE& from);

  inline MSG_DS_CS_RTABLE_SEND_ROW_TABLE& operator=(const MSG_DS_CS_RTABLE_SEND_ROW_TABLE& from) {
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
  static const MSG_DS_CS_RTABLE_SEND_ROW_TABLE& default_instance();

  void Swap(MSG_DS_CS_RTABLE_SEND_ROW_TABLE* other);

  // implements Message ----------------------------------------------

  MSG_DS_CS_RTABLE_SEND_ROW_TABLE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DS_CS_RTABLE_SEND_ROW_TABLE& from);
  void MergeFrom(const MSG_DS_CS_RTABLE_SEND_ROW_TABLE& from);
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

  // required string columnName = 1;
  inline bool has_columnname() const;
  inline void clear_columnname();
  static const int kColumnNameFieldNumber = 1;
  inline const ::std::string& columnname() const;
  inline void set_columnname(const ::std::string& value);
  inline void set_columnname(const char* value);
  inline void set_columnname(const char* value, size_t size);
  inline ::std::string* mutable_columnname();
  inline ::std::string* release_columnname();
  inline void set_allocated_columnname(::std::string* columnname);

  // repeated uint64 entry = 2;
  inline int entry_size() const;
  inline void clear_entry();
  static const int kEntryFieldNumber = 2;
  inline ::google::protobuf::uint64 entry(int index) const;
  inline void set_entry(int index, ::google::protobuf::uint64 value);
  inline void add_entry(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      entry() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_entry();

  // repeated uint64 rowKey = 3;
  inline int rowkey_size() const;
  inline void clear_rowkey();
  static const int kRowKeyFieldNumber = 3;
  inline ::google::protobuf::uint64 rowkey(int index) const;
  inline void set_rowkey(int index, ::google::protobuf::uint64 value);
  inline void add_rowkey(::google::protobuf::uint64 value);
  inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
      rowkey() const;
  inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
      mutable_rowkey();

  // @@protoc_insertion_point(class_scope:MSG_DS_CS_RTABLE_SEND.ROW_TABLE)
 private:
  inline void set_has_columnname();
  inline void clear_has_columnname();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* columnname_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > entry_;
  ::google::protobuf::RepeatedField< ::google::protobuf::uint64 > rowkey_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_DS_CS_RTABLE_SEND_ROW_TABLE* default_instance_;
};
// -------------------------------------------------------------------

class MSG_DS_CS_RTABLE_SEND : public ::google::protobuf::Message {
 public:
  MSG_DS_CS_RTABLE_SEND();
  virtual ~MSG_DS_CS_RTABLE_SEND();

  MSG_DS_CS_RTABLE_SEND(const MSG_DS_CS_RTABLE_SEND& from);

  inline MSG_DS_CS_RTABLE_SEND& operator=(const MSG_DS_CS_RTABLE_SEND& from) {
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
  static const MSG_DS_CS_RTABLE_SEND& default_instance();

  void Swap(MSG_DS_CS_RTABLE_SEND* other);

  // implements Message ----------------------------------------------

  MSG_DS_CS_RTABLE_SEND* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DS_CS_RTABLE_SEND& from);
  void MergeFrom(const MSG_DS_CS_RTABLE_SEND& from);
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

  typedef MSG_DS_CS_RTABLE_SEND_ROW_TABLE ROW_TABLE;

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

  // repeated .MSG_DS_CS_RTABLE_SEND.ROW_TABLE rowTable = 4;
  inline int rowtable_size() const;
  inline void clear_rowtable();
  static const int kRowTableFieldNumber = 4;
  inline const ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE& rowtable(int index) const;
  inline ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE* mutable_rowtable(int index);
  inline ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE* add_rowtable();
  inline const ::google::protobuf::RepeatedPtrField< ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE >&
      rowtable() const;
  inline ::google::protobuf::RepeatedPtrField< ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE >*
      mutable_rowtable();

  // @@protoc_insertion_point(class_scope:MSG_DS_CS_RTABLE_SEND)
 private:
  inline void set_has_taskid();
  inline void clear_has_taskid();
  inline void set_has_dbid();
  inline void clear_has_dbid();
  inline void set_has_tablename();
  inline void clear_has_tablename();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::uint32 taskid_;
  ::google::protobuf::uint32 dbid_;
  ::std::string* tablename_;
  ::google::protobuf::RepeatedPtrField< ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE > rowtable_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto();

  void InitAsDefaultInstance();
  static MSG_DS_CS_RTABLE_SEND* default_instance_;
};
// ===================================================================


// ===================================================================

// MSG_DS_CS_RTABLE_SEND_ROW_TABLE

// required string columnName = 1;
inline bool MSG_DS_CS_RTABLE_SEND_ROW_TABLE::has_columnname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::set_has_columnname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::clear_has_columnname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::clear_columnname() {
  if (columnname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_->clear();
  }
  clear_has_columnname();
}
inline const ::std::string& MSG_DS_CS_RTABLE_SEND_ROW_TABLE::columnname() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.columnName)
  return *columnname_;
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::set_columnname(const ::std::string& value) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(value);
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.columnName)
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::set_columnname(const char* value) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(value);
  // @@protoc_insertion_point(field_set_char:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.columnName)
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::set_columnname(const char* value, size_t size) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.columnName)
}
inline ::std::string* MSG_DS_CS_RTABLE_SEND_ROW_TABLE::mutable_columnname() {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.columnName)
  return columnname_;
}
inline ::std::string* MSG_DS_CS_RTABLE_SEND_ROW_TABLE::release_columnname() {
  clear_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = columnname_;
    columnname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::set_allocated_columnname(::std::string* columnname) {
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
  // @@protoc_insertion_point(field_set_allocated:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.columnName)
}

// repeated uint64 entry = 2;
inline int MSG_DS_CS_RTABLE_SEND_ROW_TABLE::entry_size() const {
  return entry_.size();
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::clear_entry() {
  entry_.Clear();
}
inline ::google::protobuf::uint64 MSG_DS_CS_RTABLE_SEND_ROW_TABLE::entry(int index) const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.entry)
  return entry_.Get(index);
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::set_entry(int index, ::google::protobuf::uint64 value) {
  entry_.Set(index, value);
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.entry)
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::add_entry(::google::protobuf::uint64 value) {
  entry_.Add(value);
  // @@protoc_insertion_point(field_add:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.entry)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
MSG_DS_CS_RTABLE_SEND_ROW_TABLE::entry() const {
  // @@protoc_insertion_point(field_list:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.entry)
  return entry_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
MSG_DS_CS_RTABLE_SEND_ROW_TABLE::mutable_entry() {
  // @@protoc_insertion_point(field_mutable_list:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.entry)
  return &entry_;
}

// repeated uint64 rowKey = 3;
inline int MSG_DS_CS_RTABLE_SEND_ROW_TABLE::rowkey_size() const {
  return rowkey_.size();
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::clear_rowkey() {
  rowkey_.Clear();
}
inline ::google::protobuf::uint64 MSG_DS_CS_RTABLE_SEND_ROW_TABLE::rowkey(int index) const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.rowKey)
  return rowkey_.Get(index);
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::set_rowkey(int index, ::google::protobuf::uint64 value) {
  rowkey_.Set(index, value);
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.rowKey)
}
inline void MSG_DS_CS_RTABLE_SEND_ROW_TABLE::add_rowkey(::google::protobuf::uint64 value) {
  rowkey_.Add(value);
  // @@protoc_insertion_point(field_add:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.rowKey)
}
inline const ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >&
MSG_DS_CS_RTABLE_SEND_ROW_TABLE::rowkey() const {
  // @@protoc_insertion_point(field_list:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.rowKey)
  return rowkey_;
}
inline ::google::protobuf::RepeatedField< ::google::protobuf::uint64 >*
MSG_DS_CS_RTABLE_SEND_ROW_TABLE::mutable_rowkey() {
  // @@protoc_insertion_point(field_mutable_list:MSG_DS_CS_RTABLE_SEND.ROW_TABLE.rowKey)
  return &rowkey_;
}

// -------------------------------------------------------------------

// MSG_DS_CS_RTABLE_SEND

// required uint32 taskID = 1;
inline bool MSG_DS_CS_RTABLE_SEND::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DS_CS_RTABLE_SEND::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DS_CS_RTABLE_SEND::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DS_CS_RTABLE_SEND::clear_taskid() {
  taskid_ = 0u;
  clear_has_taskid();
}
inline ::google::protobuf::uint32 MSG_DS_CS_RTABLE_SEND::taskid() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RTABLE_SEND.taskID)
  return taskid_;
}
inline void MSG_DS_CS_RTABLE_SEND::set_taskid(::google::protobuf::uint32 value) {
  set_has_taskid();
  taskid_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RTABLE_SEND.taskID)
}

// required uint32 dbID = 2;
inline bool MSG_DS_CS_RTABLE_SEND::has_dbid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_DS_CS_RTABLE_SEND::set_has_dbid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_DS_CS_RTABLE_SEND::clear_has_dbid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_DS_CS_RTABLE_SEND::clear_dbid() {
  dbid_ = 0u;
  clear_has_dbid();
}
inline ::google::protobuf::uint32 MSG_DS_CS_RTABLE_SEND::dbid() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RTABLE_SEND.dbID)
  return dbid_;
}
inline void MSG_DS_CS_RTABLE_SEND::set_dbid(::google::protobuf::uint32 value) {
  set_has_dbid();
  dbid_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RTABLE_SEND.dbID)
}

// required string tableName = 3;
inline bool MSG_DS_CS_RTABLE_SEND::has_tablename() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MSG_DS_CS_RTABLE_SEND::set_has_tablename() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MSG_DS_CS_RTABLE_SEND::clear_has_tablename() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MSG_DS_CS_RTABLE_SEND::clear_tablename() {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_->clear();
  }
  clear_has_tablename();
}
inline const ::std::string& MSG_DS_CS_RTABLE_SEND::tablename() const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RTABLE_SEND.tableName)
  return *tablename_;
}
inline void MSG_DS_CS_RTABLE_SEND::set_tablename(const ::std::string& value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set:MSG_DS_CS_RTABLE_SEND.tableName)
}
inline void MSG_DS_CS_RTABLE_SEND::set_tablename(const char* value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set_char:MSG_DS_CS_RTABLE_SEND.tableName)
}
inline void MSG_DS_CS_RTABLE_SEND::set_tablename(const char* value, size_t size) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MSG_DS_CS_RTABLE_SEND.tableName)
}
inline ::std::string* MSG_DS_CS_RTABLE_SEND::mutable_tablename() {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MSG_DS_CS_RTABLE_SEND.tableName)
  return tablename_;
}
inline ::std::string* MSG_DS_CS_RTABLE_SEND::release_tablename() {
  clear_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = tablename_;
    tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MSG_DS_CS_RTABLE_SEND::set_allocated_tablename(::std::string* tablename) {
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
  // @@protoc_insertion_point(field_set_allocated:MSG_DS_CS_RTABLE_SEND.tableName)
}

// repeated .MSG_DS_CS_RTABLE_SEND.ROW_TABLE rowTable = 4;
inline int MSG_DS_CS_RTABLE_SEND::rowtable_size() const {
  return rowtable_.size();
}
inline void MSG_DS_CS_RTABLE_SEND::clear_rowtable() {
  rowtable_.Clear();
}
inline const ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE& MSG_DS_CS_RTABLE_SEND::rowtable(int index) const {
  // @@protoc_insertion_point(field_get:MSG_DS_CS_RTABLE_SEND.rowTable)
  return rowtable_.Get(index);
}
inline ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE* MSG_DS_CS_RTABLE_SEND::mutable_rowtable(int index) {
  // @@protoc_insertion_point(field_mutable:MSG_DS_CS_RTABLE_SEND.rowTable)
  return rowtable_.Mutable(index);
}
inline ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE* MSG_DS_CS_RTABLE_SEND::add_rowtable() {
  // @@protoc_insertion_point(field_add:MSG_DS_CS_RTABLE_SEND.rowTable)
  return rowtable_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE >&
MSG_DS_CS_RTABLE_SEND::rowtable() const {
  // @@protoc_insertion_point(field_list:MSG_DS_CS_RTABLE_SEND.rowTable)
  return rowtable_;
}
inline ::google::protobuf::RepeatedPtrField< ::MSG_DS_CS_RTABLE_SEND_ROW_TABLE >*
MSG_DS_CS_RTABLE_SEND::mutable_rowtable() {
  // @@protoc_insertion_point(field_mutable_list:MSG_DS_CS_RTABLE_SEND.rowTable)
  return &rowtable_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MSG_5fDS_5fCS_5fRTABLE_5fSEND_2eproto__INCLUDED

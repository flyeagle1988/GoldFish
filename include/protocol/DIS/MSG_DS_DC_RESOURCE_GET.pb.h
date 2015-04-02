// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DS_DC_RESOURCE_GET.proto

#ifndef PROTOBUF_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto__INCLUDED
#define PROTOBUF_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto__INCLUDED

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
void  protobuf_AddDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
void protobuf_AssignDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();

class MSG_DS_DC_RESOURCE_GET;
class MSG_DS_DC_RESOURCE_GET_COL_SIZE;
class CS_INFO;
class MSG_DC_DS_RESOURCE_GET_ACK;

// ===================================================================

class MSG_DS_DC_RESOURCE_GET_COL_SIZE : public ::google::protobuf::Message {
 public:
  MSG_DS_DC_RESOURCE_GET_COL_SIZE();
  virtual ~MSG_DS_DC_RESOURCE_GET_COL_SIZE();

  MSG_DS_DC_RESOURCE_GET_COL_SIZE(const MSG_DS_DC_RESOURCE_GET_COL_SIZE& from);

  inline MSG_DS_DC_RESOURCE_GET_COL_SIZE& operator=(const MSG_DS_DC_RESOURCE_GET_COL_SIZE& from) {
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
  static const MSG_DS_DC_RESOURCE_GET_COL_SIZE& default_instance();

  void Swap(MSG_DS_DC_RESOURCE_GET_COL_SIZE* other);

  // implements Message ----------------------------------------------

  MSG_DS_DC_RESOURCE_GET_COL_SIZE* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DS_DC_RESOURCE_GET_COL_SIZE& from);
  void MergeFrom(const MSG_DS_DC_RESOURCE_GET_COL_SIZE& from);
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

  // required string columnname = 1;
  inline bool has_columnname() const;
  inline void clear_columnname();
  static const int kColumnnameFieldNumber = 1;
  inline const ::std::string& columnname() const;
  inline void set_columnname(const ::std::string& value);
  inline void set_columnname(const char* value);
  inline void set_columnname(const char* value, size_t size);
  inline ::std::string* mutable_columnname();
  inline ::std::string* release_columnname();
  inline void set_allocated_columnname(::std::string* columnname);

  // required uint32 columnSize = 2;
  inline bool has_columnsize() const;
  inline void clear_columnsize();
  static const int kColumnSizeFieldNumber = 2;
  inline ::google::protobuf::uint32 columnsize() const;
  inline void set_columnsize(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:MSG_DS_DC_RESOURCE_GET.COL_SIZE)
 private:
  inline void set_has_columnname();
  inline void clear_has_columnname();
  inline void set_has_columnsize();
  inline void clear_has_columnsize();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* columnname_;
  ::google::protobuf::uint32 columnsize_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();

  void InitAsDefaultInstance();
  static MSG_DS_DC_RESOURCE_GET_COL_SIZE* default_instance_;
};
// -------------------------------------------------------------------

class MSG_DS_DC_RESOURCE_GET : public ::google::protobuf::Message {
 public:
  MSG_DS_DC_RESOURCE_GET();
  virtual ~MSG_DS_DC_RESOURCE_GET();

  MSG_DS_DC_RESOURCE_GET(const MSG_DS_DC_RESOURCE_GET& from);

  inline MSG_DS_DC_RESOURCE_GET& operator=(const MSG_DS_DC_RESOURCE_GET& from) {
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
  static const MSG_DS_DC_RESOURCE_GET& default_instance();

  void Swap(MSG_DS_DC_RESOURCE_GET* other);

  // implements Message ----------------------------------------------

  MSG_DS_DC_RESOURCE_GET* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DS_DC_RESOURCE_GET& from);
  void MergeFrom(const MSG_DS_DC_RESOURCE_GET& from);
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

  typedef MSG_DS_DC_RESOURCE_GET_COL_SIZE COL_SIZE;

  // accessors -------------------------------------------------------

  // required uint32 taskID = 1;
  inline bool has_taskid() const;
  inline void clear_taskid();
  static const int kTaskIDFieldNumber = 1;
  inline ::google::protobuf::uint32 taskid() const;
  inline void set_taskid(::google::protobuf::uint32 value);

  // required uint32 dbid = 2;
  inline bool has_dbid() const;
  inline void clear_dbid();
  static const int kDbidFieldNumber = 2;
  inline ::google::protobuf::uint32 dbid() const;
  inline void set_dbid(::google::protobuf::uint32 value);

  // required string tablename = 3;
  inline bool has_tablename() const;
  inline void clear_tablename();
  static const int kTablenameFieldNumber = 3;
  inline const ::std::string& tablename() const;
  inline void set_tablename(const ::std::string& value);
  inline void set_tablename(const char* value);
  inline void set_tablename(const char* value, size_t size);
  inline ::std::string* mutable_tablename();
  inline ::std::string* release_tablename();
  inline void set_allocated_tablename(::std::string* tablename);

  // repeated .MSG_DS_DC_RESOURCE_GET.COL_SIZE colsize = 4;
  inline int colsize_size() const;
  inline void clear_colsize();
  static const int kColsizeFieldNumber = 4;
  inline const ::MSG_DS_DC_RESOURCE_GET_COL_SIZE& colsize(int index) const;
  inline ::MSG_DS_DC_RESOURCE_GET_COL_SIZE* mutable_colsize(int index);
  inline ::MSG_DS_DC_RESOURCE_GET_COL_SIZE* add_colsize();
  inline const ::google::protobuf::RepeatedPtrField< ::MSG_DS_DC_RESOURCE_GET_COL_SIZE >&
      colsize() const;
  inline ::google::protobuf::RepeatedPtrField< ::MSG_DS_DC_RESOURCE_GET_COL_SIZE >*
      mutable_colsize();

  // @@protoc_insertion_point(class_scope:MSG_DS_DC_RESOURCE_GET)
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
  ::google::protobuf::RepeatedPtrField< ::MSG_DS_DC_RESOURCE_GET_COL_SIZE > colsize_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();

  void InitAsDefaultInstance();
  static MSG_DS_DC_RESOURCE_GET* default_instance_;
};
// -------------------------------------------------------------------

class CS_INFO : public ::google::protobuf::Message {
 public:
  CS_INFO();
  virtual ~CS_INFO();

  CS_INFO(const CS_INFO& from);

  inline CS_INFO& operator=(const CS_INFO& from) {
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
  static const CS_INFO& default_instance();

  void Swap(CS_INFO* other);

  // implements Message ----------------------------------------------

  CS_INFO* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CS_INFO& from);
  void MergeFrom(const CS_INFO& from);
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

  // optional string csIP = 1;
  inline bool has_csip() const;
  inline void clear_csip();
  static const int kCsIPFieldNumber = 1;
  inline const ::std::string& csip() const;
  inline void set_csip(const ::std::string& value);
  inline void set_csip(const char* value);
  inline void set_csip(const char* value, size_t size);
  inline ::std::string* mutable_csip();
  inline ::std::string* release_csip();
  inline void set_allocated_csip(::std::string* csip);

  // optional uint32 csPort = 2;
  inline bool has_csport() const;
  inline void clear_csport();
  static const int kCsPortFieldNumber = 2;
  inline ::google::protobuf::uint32 csport() const;
  inline void set_csport(::google::protobuf::uint32 value);

  // optional uint32 memory = 3;
  inline bool has_memory() const;
  inline void clear_memory();
  static const int kMemoryFieldNumber = 3;
  inline ::google::protobuf::uint32 memory() const;
  inline void set_memory(::google::protobuf::uint32 value);

  // required string columnname = 4;
  inline bool has_columnname() const;
  inline void clear_columnname();
  static const int kColumnnameFieldNumber = 4;
  inline const ::std::string& columnname() const;
  inline void set_columnname(const ::std::string& value);
  inline void set_columnname(const char* value);
  inline void set_columnname(const char* value, size_t size);
  inline ::std::string* mutable_columnname();
  inline ::std::string* release_columnname();
  inline void set_allocated_columnname(::std::string* columnname);

  // @@protoc_insertion_point(class_scope:CS_INFO)
 private:
  inline void set_has_csip();
  inline void clear_has_csip();
  inline void set_has_csport();
  inline void clear_has_csport();
  inline void set_has_memory();
  inline void clear_has_memory();
  inline void set_has_columnname();
  inline void clear_has_columnname();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::std::string* csip_;
  ::google::protobuf::uint32 csport_;
  ::google::protobuf::uint32 memory_;
  ::std::string* columnname_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();

  void InitAsDefaultInstance();
  static CS_INFO* default_instance_;
};
// -------------------------------------------------------------------

class MSG_DC_DS_RESOURCE_GET_ACK : public ::google::protobuf::Message {
 public:
  MSG_DC_DS_RESOURCE_GET_ACK();
  virtual ~MSG_DC_DS_RESOURCE_GET_ACK();

  MSG_DC_DS_RESOURCE_GET_ACK(const MSG_DC_DS_RESOURCE_GET_ACK& from);

  inline MSG_DC_DS_RESOURCE_GET_ACK& operator=(const MSG_DC_DS_RESOURCE_GET_ACK& from) {
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
  static const MSG_DC_DS_RESOURCE_GET_ACK& default_instance();

  void Swap(MSG_DC_DS_RESOURCE_GET_ACK* other);

  // implements Message ----------------------------------------------

  MSG_DC_DS_RESOURCE_GET_ACK* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const MSG_DC_DS_RESOURCE_GET_ACK& from);
  void MergeFrom(const MSG_DC_DS_RESOURCE_GET_ACK& from);
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

  // repeated .CS_INFO csInfo = 2;
  inline int csinfo_size() const;
  inline void clear_csinfo();
  static const int kCsInfoFieldNumber = 2;
  inline const ::CS_INFO& csinfo(int index) const;
  inline ::CS_INFO* mutable_csinfo(int index);
  inline ::CS_INFO* add_csinfo();
  inline const ::google::protobuf::RepeatedPtrField< ::CS_INFO >&
      csinfo() const;
  inline ::google::protobuf::RepeatedPtrField< ::CS_INFO >*
      mutable_csinfo();

  // @@protoc_insertion_point(class_scope:MSG_DC_DS_RESOURCE_GET_ACK)
 private:
  inline void set_has_taskid();
  inline void clear_has_taskid();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::CS_INFO > csinfo_;
  ::google::protobuf::uint32 taskid_;
  friend void  protobuf_AddDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  friend void protobuf_AssignDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  friend void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();

  void InitAsDefaultInstance();
  static MSG_DC_DS_RESOURCE_GET_ACK* default_instance_;
};
// ===================================================================


// ===================================================================

// MSG_DS_DC_RESOURCE_GET_COL_SIZE

// required string columnname = 1;
inline bool MSG_DS_DC_RESOURCE_GET_COL_SIZE::has_columnname() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::set_has_columnname() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::clear_has_columnname() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::clear_columnname() {
  if (columnname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_->clear();
  }
  clear_has_columnname();
}
inline const ::std::string& MSG_DS_DC_RESOURCE_GET_COL_SIZE::columnname() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_RESOURCE_GET.COL_SIZE.columnname)
  return *columnname_;
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::set_columnname(const ::std::string& value) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(value);
  // @@protoc_insertion_point(field_set:MSG_DS_DC_RESOURCE_GET.COL_SIZE.columnname)
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::set_columnname(const char* value) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(value);
  // @@protoc_insertion_point(field_set_char:MSG_DS_DC_RESOURCE_GET.COL_SIZE.columnname)
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::set_columnname(const char* value, size_t size) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MSG_DS_DC_RESOURCE_GET.COL_SIZE.columnname)
}
inline ::std::string* MSG_DS_DC_RESOURCE_GET_COL_SIZE::mutable_columnname() {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MSG_DS_DC_RESOURCE_GET.COL_SIZE.columnname)
  return columnname_;
}
inline ::std::string* MSG_DS_DC_RESOURCE_GET_COL_SIZE::release_columnname() {
  clear_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = columnname_;
    columnname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::set_allocated_columnname(::std::string* columnname) {
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
  // @@protoc_insertion_point(field_set_allocated:MSG_DS_DC_RESOURCE_GET.COL_SIZE.columnname)
}

// required uint32 columnSize = 2;
inline bool MSG_DS_DC_RESOURCE_GET_COL_SIZE::has_columnsize() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::set_has_columnsize() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::clear_has_columnsize() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::clear_columnsize() {
  columnsize_ = 0u;
  clear_has_columnsize();
}
inline ::google::protobuf::uint32 MSG_DS_DC_RESOURCE_GET_COL_SIZE::columnsize() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_RESOURCE_GET.COL_SIZE.columnSize)
  return columnsize_;
}
inline void MSG_DS_DC_RESOURCE_GET_COL_SIZE::set_columnsize(::google::protobuf::uint32 value) {
  set_has_columnsize();
  columnsize_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_DC_RESOURCE_GET.COL_SIZE.columnSize)
}

// -------------------------------------------------------------------

// MSG_DS_DC_RESOURCE_GET

// required uint32 taskID = 1;
inline bool MSG_DS_DC_RESOURCE_GET::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DS_DC_RESOURCE_GET::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DS_DC_RESOURCE_GET::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DS_DC_RESOURCE_GET::clear_taskid() {
  taskid_ = 0u;
  clear_has_taskid();
}
inline ::google::protobuf::uint32 MSG_DS_DC_RESOURCE_GET::taskid() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_RESOURCE_GET.taskID)
  return taskid_;
}
inline void MSG_DS_DC_RESOURCE_GET::set_taskid(::google::protobuf::uint32 value) {
  set_has_taskid();
  taskid_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_DC_RESOURCE_GET.taskID)
}

// required uint32 dbid = 2;
inline bool MSG_DS_DC_RESOURCE_GET::has_dbid() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void MSG_DS_DC_RESOURCE_GET::set_has_dbid() {
  _has_bits_[0] |= 0x00000002u;
}
inline void MSG_DS_DC_RESOURCE_GET::clear_has_dbid() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void MSG_DS_DC_RESOURCE_GET::clear_dbid() {
  dbid_ = 0u;
  clear_has_dbid();
}
inline ::google::protobuf::uint32 MSG_DS_DC_RESOURCE_GET::dbid() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_RESOURCE_GET.dbid)
  return dbid_;
}
inline void MSG_DS_DC_RESOURCE_GET::set_dbid(::google::protobuf::uint32 value) {
  set_has_dbid();
  dbid_ = value;
  // @@protoc_insertion_point(field_set:MSG_DS_DC_RESOURCE_GET.dbid)
}

// required string tablename = 3;
inline bool MSG_DS_DC_RESOURCE_GET::has_tablename() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void MSG_DS_DC_RESOURCE_GET::set_has_tablename() {
  _has_bits_[0] |= 0x00000004u;
}
inline void MSG_DS_DC_RESOURCE_GET::clear_has_tablename() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void MSG_DS_DC_RESOURCE_GET::clear_tablename() {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_->clear();
  }
  clear_has_tablename();
}
inline const ::std::string& MSG_DS_DC_RESOURCE_GET::tablename() const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_RESOURCE_GET.tablename)
  return *tablename_;
}
inline void MSG_DS_DC_RESOURCE_GET::set_tablename(const ::std::string& value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set:MSG_DS_DC_RESOURCE_GET.tablename)
}
inline void MSG_DS_DC_RESOURCE_GET::set_tablename(const char* value) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(value);
  // @@protoc_insertion_point(field_set_char:MSG_DS_DC_RESOURCE_GET.tablename)
}
inline void MSG_DS_DC_RESOURCE_GET::set_tablename(const char* value, size_t size) {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  tablename_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:MSG_DS_DC_RESOURCE_GET.tablename)
}
inline ::std::string* MSG_DS_DC_RESOURCE_GET::mutable_tablename() {
  set_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    tablename_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:MSG_DS_DC_RESOURCE_GET.tablename)
  return tablename_;
}
inline ::std::string* MSG_DS_DC_RESOURCE_GET::release_tablename() {
  clear_has_tablename();
  if (tablename_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = tablename_;
    tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void MSG_DS_DC_RESOURCE_GET::set_allocated_tablename(::std::string* tablename) {
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
  // @@protoc_insertion_point(field_set_allocated:MSG_DS_DC_RESOURCE_GET.tablename)
}

// repeated .MSG_DS_DC_RESOURCE_GET.COL_SIZE colsize = 4;
inline int MSG_DS_DC_RESOURCE_GET::colsize_size() const {
  return colsize_.size();
}
inline void MSG_DS_DC_RESOURCE_GET::clear_colsize() {
  colsize_.Clear();
}
inline const ::MSG_DS_DC_RESOURCE_GET_COL_SIZE& MSG_DS_DC_RESOURCE_GET::colsize(int index) const {
  // @@protoc_insertion_point(field_get:MSG_DS_DC_RESOURCE_GET.colsize)
  return colsize_.Get(index);
}
inline ::MSG_DS_DC_RESOURCE_GET_COL_SIZE* MSG_DS_DC_RESOURCE_GET::mutable_colsize(int index) {
  // @@protoc_insertion_point(field_mutable:MSG_DS_DC_RESOURCE_GET.colsize)
  return colsize_.Mutable(index);
}
inline ::MSG_DS_DC_RESOURCE_GET_COL_SIZE* MSG_DS_DC_RESOURCE_GET::add_colsize() {
  // @@protoc_insertion_point(field_add:MSG_DS_DC_RESOURCE_GET.colsize)
  return colsize_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::MSG_DS_DC_RESOURCE_GET_COL_SIZE >&
MSG_DS_DC_RESOURCE_GET::colsize() const {
  // @@protoc_insertion_point(field_list:MSG_DS_DC_RESOURCE_GET.colsize)
  return colsize_;
}
inline ::google::protobuf::RepeatedPtrField< ::MSG_DS_DC_RESOURCE_GET_COL_SIZE >*
MSG_DS_DC_RESOURCE_GET::mutable_colsize() {
  // @@protoc_insertion_point(field_mutable_list:MSG_DS_DC_RESOURCE_GET.colsize)
  return &colsize_;
}

// -------------------------------------------------------------------

// CS_INFO

// optional string csIP = 1;
inline bool CS_INFO::has_csip() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CS_INFO::set_has_csip() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CS_INFO::clear_has_csip() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CS_INFO::clear_csip() {
  if (csip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    csip_->clear();
  }
  clear_has_csip();
}
inline const ::std::string& CS_INFO::csip() const {
  // @@protoc_insertion_point(field_get:CS_INFO.csIP)
  return *csip_;
}
inline void CS_INFO::set_csip(const ::std::string& value) {
  set_has_csip();
  if (csip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    csip_ = new ::std::string;
  }
  csip_->assign(value);
  // @@protoc_insertion_point(field_set:CS_INFO.csIP)
}
inline void CS_INFO::set_csip(const char* value) {
  set_has_csip();
  if (csip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    csip_ = new ::std::string;
  }
  csip_->assign(value);
  // @@protoc_insertion_point(field_set_char:CS_INFO.csIP)
}
inline void CS_INFO::set_csip(const char* value, size_t size) {
  set_has_csip();
  if (csip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    csip_ = new ::std::string;
  }
  csip_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:CS_INFO.csIP)
}
inline ::std::string* CS_INFO::mutable_csip() {
  set_has_csip();
  if (csip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    csip_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:CS_INFO.csIP)
  return csip_;
}
inline ::std::string* CS_INFO::release_csip() {
  clear_has_csip();
  if (csip_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = csip_;
    csip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CS_INFO::set_allocated_csip(::std::string* csip) {
  if (csip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete csip_;
  }
  if (csip) {
    set_has_csip();
    csip_ = csip;
  } else {
    clear_has_csip();
    csip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:CS_INFO.csIP)
}

// optional uint32 csPort = 2;
inline bool CS_INFO::has_csport() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CS_INFO::set_has_csport() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CS_INFO::clear_has_csport() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CS_INFO::clear_csport() {
  csport_ = 0u;
  clear_has_csport();
}
inline ::google::protobuf::uint32 CS_INFO::csport() const {
  // @@protoc_insertion_point(field_get:CS_INFO.csPort)
  return csport_;
}
inline void CS_INFO::set_csport(::google::protobuf::uint32 value) {
  set_has_csport();
  csport_ = value;
  // @@protoc_insertion_point(field_set:CS_INFO.csPort)
}

// optional uint32 memory = 3;
inline bool CS_INFO::has_memory() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CS_INFO::set_has_memory() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CS_INFO::clear_has_memory() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CS_INFO::clear_memory() {
  memory_ = 0u;
  clear_has_memory();
}
inline ::google::protobuf::uint32 CS_INFO::memory() const {
  // @@protoc_insertion_point(field_get:CS_INFO.memory)
  return memory_;
}
inline void CS_INFO::set_memory(::google::protobuf::uint32 value) {
  set_has_memory();
  memory_ = value;
  // @@protoc_insertion_point(field_set:CS_INFO.memory)
}

// required string columnname = 4;
inline bool CS_INFO::has_columnname() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CS_INFO::set_has_columnname() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CS_INFO::clear_has_columnname() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CS_INFO::clear_columnname() {
  if (columnname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_->clear();
  }
  clear_has_columnname();
}
inline const ::std::string& CS_INFO::columnname() const {
  // @@protoc_insertion_point(field_get:CS_INFO.columnname)
  return *columnname_;
}
inline void CS_INFO::set_columnname(const ::std::string& value) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(value);
  // @@protoc_insertion_point(field_set:CS_INFO.columnname)
}
inline void CS_INFO::set_columnname(const char* value) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(value);
  // @@protoc_insertion_point(field_set_char:CS_INFO.columnname)
}
inline void CS_INFO::set_columnname(const char* value, size_t size) {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  columnname_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:CS_INFO.columnname)
}
inline ::std::string* CS_INFO::mutable_columnname() {
  set_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    columnname_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:CS_INFO.columnname)
  return columnname_;
}
inline ::std::string* CS_INFO::release_columnname() {
  clear_has_columnname();
  if (columnname_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = columnname_;
    columnname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void CS_INFO::set_allocated_columnname(::std::string* columnname) {
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
  // @@protoc_insertion_point(field_set_allocated:CS_INFO.columnname)
}

// -------------------------------------------------------------------

// MSG_DC_DS_RESOURCE_GET_ACK

// required uint32 taskID = 1;
inline bool MSG_DC_DS_RESOURCE_GET_ACK::has_taskid() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void MSG_DC_DS_RESOURCE_GET_ACK::set_has_taskid() {
  _has_bits_[0] |= 0x00000001u;
}
inline void MSG_DC_DS_RESOURCE_GET_ACK::clear_has_taskid() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void MSG_DC_DS_RESOURCE_GET_ACK::clear_taskid() {
  taskid_ = 0u;
  clear_has_taskid();
}
inline ::google::protobuf::uint32 MSG_DC_DS_RESOURCE_GET_ACK::taskid() const {
  // @@protoc_insertion_point(field_get:MSG_DC_DS_RESOURCE_GET_ACK.taskID)
  return taskid_;
}
inline void MSG_DC_DS_RESOURCE_GET_ACK::set_taskid(::google::protobuf::uint32 value) {
  set_has_taskid();
  taskid_ = value;
  // @@protoc_insertion_point(field_set:MSG_DC_DS_RESOURCE_GET_ACK.taskID)
}

// repeated .CS_INFO csInfo = 2;
inline int MSG_DC_DS_RESOURCE_GET_ACK::csinfo_size() const {
  return csinfo_.size();
}
inline void MSG_DC_DS_RESOURCE_GET_ACK::clear_csinfo() {
  csinfo_.Clear();
}
inline const ::CS_INFO& MSG_DC_DS_RESOURCE_GET_ACK::csinfo(int index) const {
  // @@protoc_insertion_point(field_get:MSG_DC_DS_RESOURCE_GET_ACK.csInfo)
  return csinfo_.Get(index);
}
inline ::CS_INFO* MSG_DC_DS_RESOURCE_GET_ACK::mutable_csinfo(int index) {
  // @@protoc_insertion_point(field_mutable:MSG_DC_DS_RESOURCE_GET_ACK.csInfo)
  return csinfo_.Mutable(index);
}
inline ::CS_INFO* MSG_DC_DS_RESOURCE_GET_ACK::add_csinfo() {
  // @@protoc_insertion_point(field_add:MSG_DC_DS_RESOURCE_GET_ACK.csInfo)
  return csinfo_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::CS_INFO >&
MSG_DC_DS_RESOURCE_GET_ACK::csinfo() const {
  // @@protoc_insertion_point(field_list:MSG_DC_DS_RESOURCE_GET_ACK.csInfo)
  return csinfo_;
}
inline ::google::protobuf::RepeatedPtrField< ::CS_INFO >*
MSG_DC_DS_RESOURCE_GET_ACK::mutable_csinfo() {
  // @@protoc_insertion_point(field_mutable_list:MSG_DC_DS_RESOURCE_GET_ACK.csInfo)
  return &csinfo_;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto__INCLUDED

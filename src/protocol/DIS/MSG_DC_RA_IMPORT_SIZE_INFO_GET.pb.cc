// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DC_RA_IMPORT_SIZE_INFO_GET.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MSG_DC_RA_IMPORT_SIZE_INFO_GET.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace {

const ::google::protobuf::Descriptor* IMP_INFO_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  IMP_INFO_reflection_ = NULL;
const ::google::protobuf::Descriptor* MSG_DC_RA_IMPORT_SIZE_INFO_GET_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_DC_RA_IMPORT_SIZE_INFO_GET_reflection_ = NULL;
const ::google::protobuf::Descriptor* MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto() {
  protobuf_AddDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MSG_DC_RA_IMPORT_SIZE_INFO_GET.proto");
  GOOGLE_CHECK(file != NULL);
  IMP_INFO_descriptor_ = file->message_type(0);
  static const int IMP_INFO_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IMP_INFO, tablename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IMP_INFO, dbid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IMP_INFO, colname_),
  };
  IMP_INFO_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      IMP_INFO_descriptor_,
      IMP_INFO::default_instance_,
      IMP_INFO_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IMP_INFO, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(IMP_INFO, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(IMP_INFO));
  MSG_DC_RA_IMPORT_SIZE_INFO_GET_descriptor_ = file->message_type(1);
  static const int MSG_DC_RA_IMPORT_SIZE_INFO_GET_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_RA_IMPORT_SIZE_INFO_GET, taskid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_RA_IMPORT_SIZE_INFO_GET, impinfo_),
  };
  MSG_DC_RA_IMPORT_SIZE_INFO_GET_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_DC_RA_IMPORT_SIZE_INFO_GET_descriptor_,
      MSG_DC_RA_IMPORT_SIZE_INFO_GET::default_instance_,
      MSG_DC_RA_IMPORT_SIZE_INFO_GET_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_RA_IMPORT_SIZE_INFO_GET, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_RA_IMPORT_SIZE_INFO_GET, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_DC_RA_IMPORT_SIZE_INFO_GET));
  MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_descriptor_ = file->message_type(2);
  static const int MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK, taskid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK, statusccode_),
  };
  MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_descriptor_,
      MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::default_instance_,
      MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    IMP_INFO_descriptor_, &IMP_INFO::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_DC_RA_IMPORT_SIZE_INFO_GET_descriptor_, &MSG_DC_RA_IMPORT_SIZE_INFO_GET::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_descriptor_, &MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto() {
  delete IMP_INFO::default_instance_;
  delete IMP_INFO_reflection_;
  delete MSG_DC_RA_IMPORT_SIZE_INFO_GET::default_instance_;
  delete MSG_DC_RA_IMPORT_SIZE_INFO_GET_reflection_;
  delete MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::default_instance_;
  delete MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_reflection_;
}

void protobuf_AddDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n$MSG_DC_RA_IMPORT_SIZE_INFO_GET.proto\"<"
    "\n\010IMP_INFO\022\021\n\ttableName\030\001 \002(\t\022\014\n\004dbID\030\002 "
    "\002(\r\022\017\n\007colName\030\003 \003(\t\"L\n\036MSG_DC_RA_IMPORT"
    "_SIZE_INFO_GET\022\016\n\006taskID\030\001 \002(\r\022\032\n\007impInf"
    "o\030\002 \003(\0132\t.IMP_INFO\"I\n\"MSG_RA_DC_IMPORT_S"
    "IZE_INFO_GET_ACK\022\016\n\006taskID\030\001 \002(\r\022\023\n\013stat"
    "uscCode\030\002 \001(\005", 253);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MSG_DC_RA_IMPORT_SIZE_INFO_GET.proto", &protobuf_RegisterTypes);
  IMP_INFO::default_instance_ = new IMP_INFO();
  MSG_DC_RA_IMPORT_SIZE_INFO_GET::default_instance_ = new MSG_DC_RA_IMPORT_SIZE_INFO_GET();
  MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::default_instance_ = new MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK();
  IMP_INFO::default_instance_->InitAsDefaultInstance();
  MSG_DC_RA_IMPORT_SIZE_INFO_GET::default_instance_->InitAsDefaultInstance();
  MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto {
  StaticDescriptorInitializer_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto() {
    protobuf_AddDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  }
} static_descriptor_initializer_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int IMP_INFO::kTableNameFieldNumber;
const int IMP_INFO::kDbIDFieldNumber;
const int IMP_INFO::kColNameFieldNumber;
#endif  // !_MSC_VER

IMP_INFO::IMP_INFO()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:IMP_INFO)
}

void IMP_INFO::InitAsDefaultInstance() {
}

IMP_INFO::IMP_INFO(const IMP_INFO& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:IMP_INFO)
}

void IMP_INFO::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  dbid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

IMP_INFO::~IMP_INFO() {
  // @@protoc_insertion_point(destructor:IMP_INFO)
  SharedDtor();
}

void IMP_INFO::SharedDtor() {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete tablename_;
  }
  if (this != default_instance_) {
  }
}

void IMP_INFO::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* IMP_INFO::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return IMP_INFO_descriptor_;
}

const IMP_INFO& IMP_INFO::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  return *default_instance_;
}

IMP_INFO* IMP_INFO::default_instance_ = NULL;

IMP_INFO* IMP_INFO::New() const {
  return new IMP_INFO;
}

void IMP_INFO::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    if (has_tablename()) {
      if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        tablename_->clear();
      }
    }
    dbid_ = 0u;
  }
  colname_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool IMP_INFO::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:IMP_INFO)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string tableName = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tablename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->tablename().data(), this->tablename().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "tablename");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_dbID;
        break;
      }

      // required uint32 dbID = 2;
      case 2: {
        if (tag == 16) {
         parse_dbID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dbid_)));
          set_has_dbid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_colName;
        break;
      }

      // repeated string colName = 3;
      case 3: {
        if (tag == 26) {
         parse_colName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_colname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->colname(this->colname_size() - 1).data(),
            this->colname(this->colname_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "colname");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_colName;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:IMP_INFO)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:IMP_INFO)
  return false;
#undef DO_
}

void IMP_INFO::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:IMP_INFO)
  // required string tableName = 1;
  if (has_tablename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->tablename().data(), this->tablename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tablename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->tablename(), output);
  }

  // required uint32 dbID = 2;
  if (has_dbid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(2, this->dbid(), output);
  }

  // repeated string colName = 3;
  for (int i = 0; i < this->colname_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->colname(i).data(), this->colname(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "colname");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->colname(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:IMP_INFO)
}

::google::protobuf::uint8* IMP_INFO::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:IMP_INFO)
  // required string tableName = 1;
  if (has_tablename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->tablename().data(), this->tablename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tablename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->tablename(), target);
  }

  // required uint32 dbID = 2;
  if (has_dbid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(2, this->dbid(), target);
  }

  // repeated string colName = 3;
  for (int i = 0; i < this->colname_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->colname(i).data(), this->colname(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "colname");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(3, this->colname(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:IMP_INFO)
  return target;
}

int IMP_INFO::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string tableName = 1;
    if (has_tablename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->tablename());
    }

    // required uint32 dbID = 2;
    if (has_dbid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dbid());
    }

  }
  // repeated string colName = 3;
  total_size += 1 * this->colname_size();
  for (int i = 0; i < this->colname_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->colname(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void IMP_INFO::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const IMP_INFO* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const IMP_INFO*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void IMP_INFO::MergeFrom(const IMP_INFO& from) {
  GOOGLE_CHECK_NE(&from, this);
  colname_.MergeFrom(from.colname_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_tablename()) {
      set_tablename(from.tablename());
    }
    if (from.has_dbid()) {
      set_dbid(from.dbid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void IMP_INFO::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void IMP_INFO::CopyFrom(const IMP_INFO& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool IMP_INFO::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void IMP_INFO::Swap(IMP_INFO* other) {
  if (other != this) {
    std::swap(tablename_, other->tablename_);
    std::swap(dbid_, other->dbid_);
    colname_.Swap(&other->colname_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata IMP_INFO::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = IMP_INFO_descriptor_;
  metadata.reflection = IMP_INFO_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MSG_DC_RA_IMPORT_SIZE_INFO_GET::kTaskIDFieldNumber;
const int MSG_DC_RA_IMPORT_SIZE_INFO_GET::kImpInfoFieldNumber;
#endif  // !_MSC_VER

MSG_DC_RA_IMPORT_SIZE_INFO_GET::MSG_DC_RA_IMPORT_SIZE_INFO_GET()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::InitAsDefaultInstance() {
}

MSG_DC_RA_IMPORT_SIZE_INFO_GET::MSG_DC_RA_IMPORT_SIZE_INFO_GET(const MSG_DC_RA_IMPORT_SIZE_INFO_GET& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::SharedCtor() {
  _cached_size_ = 0;
  taskid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_DC_RA_IMPORT_SIZE_INFO_GET::~MSG_DC_RA_IMPORT_SIZE_INFO_GET() {
  // @@protoc_insertion_point(destructor:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
  SharedDtor();
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_DC_RA_IMPORT_SIZE_INFO_GET::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_DC_RA_IMPORT_SIZE_INFO_GET_descriptor_;
}

const MSG_DC_RA_IMPORT_SIZE_INFO_GET& MSG_DC_RA_IMPORT_SIZE_INFO_GET::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  return *default_instance_;
}

MSG_DC_RA_IMPORT_SIZE_INFO_GET* MSG_DC_RA_IMPORT_SIZE_INFO_GET::default_instance_ = NULL;

MSG_DC_RA_IMPORT_SIZE_INFO_GET* MSG_DC_RA_IMPORT_SIZE_INFO_GET::New() const {
  return new MSG_DC_RA_IMPORT_SIZE_INFO_GET;
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::Clear() {
  taskid_ = 0u;
  impinfo_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_DC_RA_IMPORT_SIZE_INFO_GET::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 taskID = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &taskid_)));
          set_has_taskid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_impInfo;
        break;
      }

      // repeated .IMP_INFO impInfo = 2;
      case 2: {
        if (tag == 18) {
         parse_impInfo:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_impinfo()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_impInfo;
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
  return false;
#undef DO_
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
  // required uint32 taskID = 1;
  if (has_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->taskid(), output);
  }

  // repeated .IMP_INFO impInfo = 2;
  for (int i = 0; i < this->impinfo_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      2, this->impinfo(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
}

::google::protobuf::uint8* MSG_DC_RA_IMPORT_SIZE_INFO_GET::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
  // required uint32 taskID = 1;
  if (has_taskid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->taskid(), target);
  }

  // repeated .IMP_INFO impInfo = 2;
  for (int i = 0; i < this->impinfo_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        2, this->impinfo(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_DC_RA_IMPORT_SIZE_INFO_GET)
  return target;
}

int MSG_DC_RA_IMPORT_SIZE_INFO_GET::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 taskID = 1;
    if (has_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->taskid());
    }

  }
  // repeated .IMP_INFO impInfo = 2;
  total_size += 1 * this->impinfo_size();
  for (int i = 0; i < this->impinfo_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->impinfo(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_DC_RA_IMPORT_SIZE_INFO_GET* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_DC_RA_IMPORT_SIZE_INFO_GET*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::MergeFrom(const MSG_DC_RA_IMPORT_SIZE_INFO_GET& from) {
  GOOGLE_CHECK_NE(&from, this);
  impinfo_.MergeFrom(from.impinfo_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_taskid()) {
      set_taskid(from.taskid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::CopyFrom(const MSG_DC_RA_IMPORT_SIZE_INFO_GET& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_DC_RA_IMPORT_SIZE_INFO_GET::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->impinfo())) return false;
  return true;
}

void MSG_DC_RA_IMPORT_SIZE_INFO_GET::Swap(MSG_DC_RA_IMPORT_SIZE_INFO_GET* other) {
  if (other != this) {
    std::swap(taskid_, other->taskid_);
    impinfo_.Swap(&other->impinfo_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_DC_RA_IMPORT_SIZE_INFO_GET::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_DC_RA_IMPORT_SIZE_INFO_GET_descriptor_;
  metadata.reflection = MSG_DC_RA_IMPORT_SIZE_INFO_GET_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::kTaskIDFieldNumber;
const int MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::kStatuscCodeFieldNumber;
#endif  // !_MSC_VER

MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::InitAsDefaultInstance() {
}

MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK(const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::SharedCtor() {
  _cached_size_ = 0;
  taskid_ = 0u;
  statusccode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::~MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK() {
  // @@protoc_insertion_point(destructor:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
  SharedDtor();
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_descriptor_;
}

const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK& MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDC_5fRA_5fIMPORT_5fSIZE_5fINFO_5fGET_2eproto();
  return *default_instance_;
}

MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK* MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::default_instance_ = NULL;

MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK* MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::New() const {
  return new MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK;
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(taskid_, statusccode_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 taskID = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &taskid_)));
          set_has_taskid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_statuscCode;
        break;
      }

      // optional int32 statuscCode = 2;
      case 2: {
        if (tag == 16) {
         parse_statuscCode:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &statusccode_)));
          set_has_statusccode();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
  return false;
#undef DO_
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
  // required uint32 taskID = 1;
  if (has_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->taskid(), output);
  }

  // optional int32 statuscCode = 2;
  if (has_statusccode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->statusccode(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
}

::google::protobuf::uint8* MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
  // required uint32 taskID = 1;
  if (has_taskid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->taskid(), target);
  }

  // optional int32 statuscCode = 2;
  if (has_statusccode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->statusccode(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK)
  return target;
}

int MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 taskID = 1;
    if (has_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->taskid());
    }

    // optional int32 statuscCode = 2;
    if (has_statusccode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->statusccode());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::MergeFrom(const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_taskid()) {
      set_taskid(from.taskid());
    }
    if (from.has_statusccode()) {
      set_statusccode(from.statusccode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::CopyFrom(const MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::Swap(MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK* other) {
  if (other != this) {
    std::swap(taskid_, other->taskid_);
    std::swap(statusccode_, other->statusccode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_descriptor_;
  metadata.reflection = MSG_RA_DC_IMPORT_SIZE_INFO_GET_ACK_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

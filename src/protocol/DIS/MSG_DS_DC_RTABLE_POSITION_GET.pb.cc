// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DS_DC_RTABLE_POSITION_GET.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MSG_DS_DC_RTABLE_POSITION_GET.pb.h"

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

const ::google::protobuf::Descriptor* MSG_DS_DC_RTABLE_POSITION_GET_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_DS_DC_RTABLE_POSITION_GET_reflection_ = NULL;
const ::google::protobuf::Descriptor* MSG_DC_DS_RTABLE_POSITION_GET_ACK_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_DC_DS_RTABLE_POSITION_GET_ACK_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto() {
  protobuf_AddDesc_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MSG_DS_DC_RTABLE_POSITION_GET.proto");
  GOOGLE_CHECK(file != NULL);
  MSG_DS_DC_RTABLE_POSITION_GET_descriptor_ = file->message_type(0);
  static const int MSG_DS_DC_RTABLE_POSITION_GET_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_RTABLE_POSITION_GET, dbid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_RTABLE_POSITION_GET, tablename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_RTABLE_POSITION_GET, taskid_),
  };
  MSG_DS_DC_RTABLE_POSITION_GET_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_DS_DC_RTABLE_POSITION_GET_descriptor_,
      MSG_DS_DC_RTABLE_POSITION_GET::default_instance_,
      MSG_DS_DC_RTABLE_POSITION_GET_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_RTABLE_POSITION_GET, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_RTABLE_POSITION_GET, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_DS_DC_RTABLE_POSITION_GET));
  MSG_DC_DS_RTABLE_POSITION_GET_ACK_descriptor_ = file->message_type(1);
  static const int MSG_DC_DS_RTABLE_POSITION_GET_ACK_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RTABLE_POSITION_GET_ACK, dbid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RTABLE_POSITION_GET_ACK, tablename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RTABLE_POSITION_GET_ACK, csip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RTABLE_POSITION_GET_ACK, statuscode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RTABLE_POSITION_GET_ACK, taskid_),
  };
  MSG_DC_DS_RTABLE_POSITION_GET_ACK_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_DC_DS_RTABLE_POSITION_GET_ACK_descriptor_,
      MSG_DC_DS_RTABLE_POSITION_GET_ACK::default_instance_,
      MSG_DC_DS_RTABLE_POSITION_GET_ACK_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RTABLE_POSITION_GET_ACK, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RTABLE_POSITION_GET_ACK, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_DC_DS_RTABLE_POSITION_GET_ACK));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_DS_DC_RTABLE_POSITION_GET_descriptor_, &MSG_DS_DC_RTABLE_POSITION_GET::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_DC_DS_RTABLE_POSITION_GET_ACK_descriptor_, &MSG_DC_DS_RTABLE_POSITION_GET_ACK::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto() {
  delete MSG_DS_DC_RTABLE_POSITION_GET::default_instance_;
  delete MSG_DS_DC_RTABLE_POSITION_GET_reflection_;
  delete MSG_DC_DS_RTABLE_POSITION_GET_ACK::default_instance_;
  delete MSG_DC_DS_RTABLE_POSITION_GET_ACK_reflection_;
}

void protobuf_AddDesc_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n#MSG_DS_DC_RTABLE_POSITION_GET.proto\"P\n"
    "\035MSG_DS_DC_RTABLE_POSITION_GET\022\014\n\004dbID\030\001"
    " \002(\r\022\021\n\ttableName\030\002 \002(\t\022\016\n\006taskID\030\003 \002(\r\""
    "v\n!MSG_DC_DS_RTABLE_POSITION_GET_ACK\022\014\n\004"
    "dbID\030\001 \002(\r\022\021\n\ttableName\030\002 \002(\t\022\014\n\004csIP\030\003 "
    "\001(\t\022\022\n\nstatusCode\030\004 \002(\005\022\016\n\006taskID\030\005 \002(\r", 239);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MSG_DS_DC_RTABLE_POSITION_GET.proto", &protobuf_RegisterTypes);
  MSG_DS_DC_RTABLE_POSITION_GET::default_instance_ = new MSG_DS_DC_RTABLE_POSITION_GET();
  MSG_DC_DS_RTABLE_POSITION_GET_ACK::default_instance_ = new MSG_DC_DS_RTABLE_POSITION_GET_ACK();
  MSG_DS_DC_RTABLE_POSITION_GET::default_instance_->InitAsDefaultInstance();
  MSG_DC_DS_RTABLE_POSITION_GET_ACK::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto {
  StaticDescriptorInitializer_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto() {
    protobuf_AddDesc_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto();
  }
} static_descriptor_initializer_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MSG_DS_DC_RTABLE_POSITION_GET::kDbIDFieldNumber;
const int MSG_DS_DC_RTABLE_POSITION_GET::kTableNameFieldNumber;
const int MSG_DS_DC_RTABLE_POSITION_GET::kTaskIDFieldNumber;
#endif  // !_MSC_VER

MSG_DS_DC_RTABLE_POSITION_GET::MSG_DS_DC_RTABLE_POSITION_GET()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_DS_DC_RTABLE_POSITION_GET)
}

void MSG_DS_DC_RTABLE_POSITION_GET::InitAsDefaultInstance() {
}

MSG_DS_DC_RTABLE_POSITION_GET::MSG_DS_DC_RTABLE_POSITION_GET(const MSG_DS_DC_RTABLE_POSITION_GET& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_DS_DC_RTABLE_POSITION_GET)
}

void MSG_DS_DC_RTABLE_POSITION_GET::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  dbid_ = 0u;
  tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  taskid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_DS_DC_RTABLE_POSITION_GET::~MSG_DS_DC_RTABLE_POSITION_GET() {
  // @@protoc_insertion_point(destructor:MSG_DS_DC_RTABLE_POSITION_GET)
  SharedDtor();
}

void MSG_DS_DC_RTABLE_POSITION_GET::SharedDtor() {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete tablename_;
  }
  if (this != default_instance_) {
  }
}

void MSG_DS_DC_RTABLE_POSITION_GET::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_DS_DC_RTABLE_POSITION_GET::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_DS_DC_RTABLE_POSITION_GET_descriptor_;
}

const MSG_DS_DC_RTABLE_POSITION_GET& MSG_DS_DC_RTABLE_POSITION_GET::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto();
  return *default_instance_;
}

MSG_DS_DC_RTABLE_POSITION_GET* MSG_DS_DC_RTABLE_POSITION_GET::default_instance_ = NULL;

MSG_DS_DC_RTABLE_POSITION_GET* MSG_DS_DC_RTABLE_POSITION_GET::New() const {
  return new MSG_DS_DC_RTABLE_POSITION_GET;
}

void MSG_DS_DC_RTABLE_POSITION_GET::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MSG_DS_DC_RTABLE_POSITION_GET*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 7) {
    ZR_(dbid_, taskid_);
    if (has_tablename()) {
      if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        tablename_->clear();
      }
    }
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_DS_DC_RTABLE_POSITION_GET::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_DS_DC_RTABLE_POSITION_GET)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 dbID = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dbid_)));
          set_has_dbid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_tableName;
        break;
      }

      // required string tableName = 2;
      case 2: {
        if (tag == 18) {
         parse_tableName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tablename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->tablename().data(), this->tablename().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "tablename");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_taskID;
        break;
      }

      // required uint32 taskID = 3;
      case 3: {
        if (tag == 24) {
         parse_taskID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &taskid_)));
          set_has_taskid();
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
  // @@protoc_insertion_point(parse_success:MSG_DS_DC_RTABLE_POSITION_GET)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_DS_DC_RTABLE_POSITION_GET)
  return false;
#undef DO_
}

void MSG_DS_DC_RTABLE_POSITION_GET::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_DS_DC_RTABLE_POSITION_GET)
  // required uint32 dbID = 1;
  if (has_dbid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->dbid(), output);
  }

  // required string tableName = 2;
  if (has_tablename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->tablename().data(), this->tablename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tablename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->tablename(), output);
  }

  // required uint32 taskID = 3;
  if (has_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(3, this->taskid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_DS_DC_RTABLE_POSITION_GET)
}

::google::protobuf::uint8* MSG_DS_DC_RTABLE_POSITION_GET::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_DS_DC_RTABLE_POSITION_GET)
  // required uint32 dbID = 1;
  if (has_dbid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->dbid(), target);
  }

  // required string tableName = 2;
  if (has_tablename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->tablename().data(), this->tablename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tablename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->tablename(), target);
  }

  // required uint32 taskID = 3;
  if (has_taskid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(3, this->taskid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_DS_DC_RTABLE_POSITION_GET)
  return target;
}

int MSG_DS_DC_RTABLE_POSITION_GET::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 dbID = 1;
    if (has_dbid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dbid());
    }

    // required string tableName = 2;
    if (has_tablename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->tablename());
    }

    // required uint32 taskID = 3;
    if (has_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->taskid());
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

void MSG_DS_DC_RTABLE_POSITION_GET::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_DS_DC_RTABLE_POSITION_GET* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_DS_DC_RTABLE_POSITION_GET*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_DS_DC_RTABLE_POSITION_GET::MergeFrom(const MSG_DS_DC_RTABLE_POSITION_GET& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_dbid()) {
      set_dbid(from.dbid());
    }
    if (from.has_tablename()) {
      set_tablename(from.tablename());
    }
    if (from.has_taskid()) {
      set_taskid(from.taskid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_DS_DC_RTABLE_POSITION_GET::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_DS_DC_RTABLE_POSITION_GET::CopyFrom(const MSG_DS_DC_RTABLE_POSITION_GET& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_DS_DC_RTABLE_POSITION_GET::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MSG_DS_DC_RTABLE_POSITION_GET::Swap(MSG_DS_DC_RTABLE_POSITION_GET* other) {
  if (other != this) {
    std::swap(dbid_, other->dbid_);
    std::swap(tablename_, other->tablename_);
    std::swap(taskid_, other->taskid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_DS_DC_RTABLE_POSITION_GET::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_DS_DC_RTABLE_POSITION_GET_descriptor_;
  metadata.reflection = MSG_DS_DC_RTABLE_POSITION_GET_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MSG_DC_DS_RTABLE_POSITION_GET_ACK::kDbIDFieldNumber;
const int MSG_DC_DS_RTABLE_POSITION_GET_ACK::kTableNameFieldNumber;
const int MSG_DC_DS_RTABLE_POSITION_GET_ACK::kCsIPFieldNumber;
const int MSG_DC_DS_RTABLE_POSITION_GET_ACK::kStatusCodeFieldNumber;
const int MSG_DC_DS_RTABLE_POSITION_GET_ACK::kTaskIDFieldNumber;
#endif  // !_MSC_VER

MSG_DC_DS_RTABLE_POSITION_GET_ACK::MSG_DC_DS_RTABLE_POSITION_GET_ACK()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_DC_DS_RTABLE_POSITION_GET_ACK)
}

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::InitAsDefaultInstance() {
}

MSG_DC_DS_RTABLE_POSITION_GET_ACK::MSG_DC_DS_RTABLE_POSITION_GET_ACK(const MSG_DC_DS_RTABLE_POSITION_GET_ACK& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_DC_DS_RTABLE_POSITION_GET_ACK)
}

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  dbid_ = 0u;
  tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  csip_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  statuscode_ = 0;
  taskid_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_DC_DS_RTABLE_POSITION_GET_ACK::~MSG_DC_DS_RTABLE_POSITION_GET_ACK() {
  // @@protoc_insertion_point(destructor:MSG_DC_DS_RTABLE_POSITION_GET_ACK)
  SharedDtor();
}

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::SharedDtor() {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete tablename_;
  }
  if (csip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete csip_;
  }
  if (this != default_instance_) {
  }
}

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_DC_DS_RTABLE_POSITION_GET_ACK::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_DC_DS_RTABLE_POSITION_GET_ACK_descriptor_;
}

const MSG_DC_DS_RTABLE_POSITION_GET_ACK& MSG_DC_DS_RTABLE_POSITION_GET_ACK::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDS_5fDC_5fRTABLE_5fPOSITION_5fGET_2eproto();
  return *default_instance_;
}

MSG_DC_DS_RTABLE_POSITION_GET_ACK* MSG_DC_DS_RTABLE_POSITION_GET_ACK::default_instance_ = NULL;

MSG_DC_DS_RTABLE_POSITION_GET_ACK* MSG_DC_DS_RTABLE_POSITION_GET_ACK::New() const {
  return new MSG_DC_DS_RTABLE_POSITION_GET_ACK;
}

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MSG_DC_DS_RTABLE_POSITION_GET_ACK*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  if (_has_bits_[0 / 32] & 31) {
    ZR_(dbid_, statuscode_);
    if (has_tablename()) {
      if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        tablename_->clear();
      }
    }
    if (has_csip()) {
      if (csip_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        csip_->clear();
      }
    }
    taskid_ = 0u;
  }

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_DC_DS_RTABLE_POSITION_GET_ACK::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_DC_DS_RTABLE_POSITION_GET_ACK)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 dbID = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &dbid_)));
          set_has_dbid();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_tableName;
        break;
      }

      // required string tableName = 2;
      case 2: {
        if (tag == 18) {
         parse_tableName:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_tablename()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->tablename().data(), this->tablename().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "tablename");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_csIP;
        break;
      }

      // optional string csIP = 3;
      case 3: {
        if (tag == 26) {
         parse_csIP:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_csip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->csip().data(), this->csip().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "csip");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_statusCode;
        break;
      }

      // required int32 statusCode = 4;
      case 4: {
        if (tag == 32) {
         parse_statusCode:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &statuscode_)));
          set_has_statuscode();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_taskID;
        break;
      }

      // required uint32 taskID = 5;
      case 5: {
        if (tag == 40) {
         parse_taskID:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &taskid_)));
          set_has_taskid();
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
  // @@protoc_insertion_point(parse_success:MSG_DC_DS_RTABLE_POSITION_GET_ACK)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_DC_DS_RTABLE_POSITION_GET_ACK)
  return false;
#undef DO_
}

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_DC_DS_RTABLE_POSITION_GET_ACK)
  // required uint32 dbID = 1;
  if (has_dbid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->dbid(), output);
  }

  // required string tableName = 2;
  if (has_tablename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->tablename().data(), this->tablename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tablename");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->tablename(), output);
  }

  // optional string csIP = 3;
  if (has_csip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->csip().data(), this->csip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "csip");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->csip(), output);
  }

  // required int32 statusCode = 4;
  if (has_statuscode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(4, this->statuscode(), output);
  }

  // required uint32 taskID = 5;
  if (has_taskid()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(5, this->taskid(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_DC_DS_RTABLE_POSITION_GET_ACK)
}

::google::protobuf::uint8* MSG_DC_DS_RTABLE_POSITION_GET_ACK::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_DC_DS_RTABLE_POSITION_GET_ACK)
  // required uint32 dbID = 1;
  if (has_dbid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->dbid(), target);
  }

  // required string tableName = 2;
  if (has_tablename()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->tablename().data(), this->tablename().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "tablename");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->tablename(), target);
  }

  // optional string csIP = 3;
  if (has_csip()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->csip().data(), this->csip().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "csip");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->csip(), target);
  }

  // required int32 statusCode = 4;
  if (has_statuscode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(4, this->statuscode(), target);
  }

  // required uint32 taskID = 5;
  if (has_taskid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(5, this->taskid(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_DC_DS_RTABLE_POSITION_GET_ACK)
  return target;
}

int MSG_DC_DS_RTABLE_POSITION_GET_ACK::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 dbID = 1;
    if (has_dbid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->dbid());
    }

    // required string tableName = 2;
    if (has_tablename()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->tablename());
    }

    // optional string csIP = 3;
    if (has_csip()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->csip());
    }

    // required int32 statusCode = 4;
    if (has_statuscode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->statuscode());
    }

    // required uint32 taskID = 5;
    if (has_taskid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->taskid());
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

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_DC_DS_RTABLE_POSITION_GET_ACK* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_DC_DS_RTABLE_POSITION_GET_ACK*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::MergeFrom(const MSG_DC_DS_RTABLE_POSITION_GET_ACK& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_dbid()) {
      set_dbid(from.dbid());
    }
    if (from.has_tablename()) {
      set_tablename(from.tablename());
    }
    if (from.has_csip()) {
      set_csip(from.csip());
    }
    if (from.has_statuscode()) {
      set_statuscode(from.statuscode());
    }
    if (from.has_taskid()) {
      set_taskid(from.taskid());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::CopyFrom(const MSG_DC_DS_RTABLE_POSITION_GET_ACK& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_DC_DS_RTABLE_POSITION_GET_ACK::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000001b) != 0x0000001b) return false;

  return true;
}

void MSG_DC_DS_RTABLE_POSITION_GET_ACK::Swap(MSG_DC_DS_RTABLE_POSITION_GET_ACK* other) {
  if (other != this) {
    std::swap(dbid_, other->dbid_);
    std::swap(tablename_, other->tablename_);
    std::swap(csip_, other->csip_);
    std::swap(statuscode_, other->statuscode_);
    std::swap(taskid_, other->taskid_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_DC_DS_RTABLE_POSITION_GET_ACK::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_DC_DS_RTABLE_POSITION_GET_ACK_descriptor_;
  metadata.reflection = MSG_DC_DS_RTABLE_POSITION_GET_ACK_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DS_DC_MEMORY_INFO_SEND.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MSG_DS_DC_MEMORY_INFO_SEND.pb.h"

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

const ::google::protobuf::Descriptor* MSG_DS_DC_MEMORY_INFO_SEND_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_DS_DC_MEMORY_INFO_SEND_reflection_ = NULL;
const ::google::protobuf::Descriptor* MSG_DC_DS_MEMORY_INFO_SEND_ACK_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_DC_DS_MEMORY_INFO_SEND_ACK_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto() {
  protobuf_AddDesc_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MSG_DS_DC_MEMORY_INFO_SEND.proto");
  GOOGLE_CHECK(file != NULL);
  MSG_DS_DC_MEMORY_INFO_SEND_descriptor_ = file->message_type(0);
  static const int MSG_DS_DC_MEMORY_INFO_SEND_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_MEMORY_INFO_SEND, memory_),
  };
  MSG_DS_DC_MEMORY_INFO_SEND_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_DS_DC_MEMORY_INFO_SEND_descriptor_,
      MSG_DS_DC_MEMORY_INFO_SEND::default_instance_,
      MSG_DS_DC_MEMORY_INFO_SEND_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_MEMORY_INFO_SEND, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_MEMORY_INFO_SEND, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_DS_DC_MEMORY_INFO_SEND));
  MSG_DC_DS_MEMORY_INFO_SEND_ACK_descriptor_ = file->message_type(1);
  static const int MSG_DC_DS_MEMORY_INFO_SEND_ACK_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_MEMORY_INFO_SEND_ACK, statuscode_),
  };
  MSG_DC_DS_MEMORY_INFO_SEND_ACK_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_DC_DS_MEMORY_INFO_SEND_ACK_descriptor_,
      MSG_DC_DS_MEMORY_INFO_SEND_ACK::default_instance_,
      MSG_DC_DS_MEMORY_INFO_SEND_ACK_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_MEMORY_INFO_SEND_ACK, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_MEMORY_INFO_SEND_ACK, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_DC_DS_MEMORY_INFO_SEND_ACK));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_DS_DC_MEMORY_INFO_SEND_descriptor_, &MSG_DS_DC_MEMORY_INFO_SEND::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_DC_DS_MEMORY_INFO_SEND_ACK_descriptor_, &MSG_DC_DS_MEMORY_INFO_SEND_ACK::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto() {
  delete MSG_DS_DC_MEMORY_INFO_SEND::default_instance_;
  delete MSG_DS_DC_MEMORY_INFO_SEND_reflection_;
  delete MSG_DC_DS_MEMORY_INFO_SEND_ACK::default_instance_;
  delete MSG_DC_DS_MEMORY_INFO_SEND_ACK_reflection_;
}

void protobuf_AddDesc_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n MSG_DS_DC_MEMORY_INFO_SEND.proto\",\n\032MS"
    "G_DS_DC_MEMORY_INFO_SEND\022\016\n\006memory\030\001 \002(\r"
    "\"4\n\036MSG_DC_DS_MEMORY_INFO_SEND_ACK\022\022\n\nst"
    "atusCode\030\001 \002(\005", 134);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MSG_DS_DC_MEMORY_INFO_SEND.proto", &protobuf_RegisterTypes);
  MSG_DS_DC_MEMORY_INFO_SEND::default_instance_ = new MSG_DS_DC_MEMORY_INFO_SEND();
  MSG_DC_DS_MEMORY_INFO_SEND_ACK::default_instance_ = new MSG_DC_DS_MEMORY_INFO_SEND_ACK();
  MSG_DS_DC_MEMORY_INFO_SEND::default_instance_->InitAsDefaultInstance();
  MSG_DC_DS_MEMORY_INFO_SEND_ACK::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto {
  StaticDescriptorInitializer_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto() {
    protobuf_AddDesc_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto();
  }
} static_descriptor_initializer_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MSG_DS_DC_MEMORY_INFO_SEND::kMemoryFieldNumber;
#endif  // !_MSC_VER

MSG_DS_DC_MEMORY_INFO_SEND::MSG_DS_DC_MEMORY_INFO_SEND()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_DS_DC_MEMORY_INFO_SEND)
}

void MSG_DS_DC_MEMORY_INFO_SEND::InitAsDefaultInstance() {
}

MSG_DS_DC_MEMORY_INFO_SEND::MSG_DS_DC_MEMORY_INFO_SEND(const MSG_DS_DC_MEMORY_INFO_SEND& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_DS_DC_MEMORY_INFO_SEND)
}

void MSG_DS_DC_MEMORY_INFO_SEND::SharedCtor() {
  _cached_size_ = 0;
  memory_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_DS_DC_MEMORY_INFO_SEND::~MSG_DS_DC_MEMORY_INFO_SEND() {
  // @@protoc_insertion_point(destructor:MSG_DS_DC_MEMORY_INFO_SEND)
  SharedDtor();
}

void MSG_DS_DC_MEMORY_INFO_SEND::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MSG_DS_DC_MEMORY_INFO_SEND::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_DS_DC_MEMORY_INFO_SEND::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_DS_DC_MEMORY_INFO_SEND_descriptor_;
}

const MSG_DS_DC_MEMORY_INFO_SEND& MSG_DS_DC_MEMORY_INFO_SEND::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto();
  return *default_instance_;
}

MSG_DS_DC_MEMORY_INFO_SEND* MSG_DS_DC_MEMORY_INFO_SEND::default_instance_ = NULL;

MSG_DS_DC_MEMORY_INFO_SEND* MSG_DS_DC_MEMORY_INFO_SEND::New() const {
  return new MSG_DS_DC_MEMORY_INFO_SEND;
}

void MSG_DS_DC_MEMORY_INFO_SEND::Clear() {
  memory_ = 0u;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_DS_DC_MEMORY_INFO_SEND::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_DS_DC_MEMORY_INFO_SEND)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint32 memory = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &memory_)));
          set_has_memory();
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
  // @@protoc_insertion_point(parse_success:MSG_DS_DC_MEMORY_INFO_SEND)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_DS_DC_MEMORY_INFO_SEND)
  return false;
#undef DO_
}

void MSG_DS_DC_MEMORY_INFO_SEND::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_DS_DC_MEMORY_INFO_SEND)
  // required uint32 memory = 1;
  if (has_memory()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->memory(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_DS_DC_MEMORY_INFO_SEND)
}

::google::protobuf::uint8* MSG_DS_DC_MEMORY_INFO_SEND::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_DS_DC_MEMORY_INFO_SEND)
  // required uint32 memory = 1;
  if (has_memory()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->memory(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_DS_DC_MEMORY_INFO_SEND)
  return target;
}

int MSG_DS_DC_MEMORY_INFO_SEND::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required uint32 memory = 1;
    if (has_memory()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt32Size(
          this->memory());
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

void MSG_DS_DC_MEMORY_INFO_SEND::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_DS_DC_MEMORY_INFO_SEND* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_DS_DC_MEMORY_INFO_SEND*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_DS_DC_MEMORY_INFO_SEND::MergeFrom(const MSG_DS_DC_MEMORY_INFO_SEND& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_memory()) {
      set_memory(from.memory());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_DS_DC_MEMORY_INFO_SEND::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_DS_DC_MEMORY_INFO_SEND::CopyFrom(const MSG_DS_DC_MEMORY_INFO_SEND& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_DS_DC_MEMORY_INFO_SEND::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MSG_DS_DC_MEMORY_INFO_SEND::Swap(MSG_DS_DC_MEMORY_INFO_SEND* other) {
  if (other != this) {
    std::swap(memory_, other->memory_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_DS_DC_MEMORY_INFO_SEND::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_DS_DC_MEMORY_INFO_SEND_descriptor_;
  metadata.reflection = MSG_DS_DC_MEMORY_INFO_SEND_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MSG_DC_DS_MEMORY_INFO_SEND_ACK::kStatusCodeFieldNumber;
#endif  // !_MSC_VER

MSG_DC_DS_MEMORY_INFO_SEND_ACK::MSG_DC_DS_MEMORY_INFO_SEND_ACK()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_DC_DS_MEMORY_INFO_SEND_ACK)
}

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::InitAsDefaultInstance() {
}

MSG_DC_DS_MEMORY_INFO_SEND_ACK::MSG_DC_DS_MEMORY_INFO_SEND_ACK(const MSG_DC_DS_MEMORY_INFO_SEND_ACK& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_DC_DS_MEMORY_INFO_SEND_ACK)
}

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::SharedCtor() {
  _cached_size_ = 0;
  statuscode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_DC_DS_MEMORY_INFO_SEND_ACK::~MSG_DC_DS_MEMORY_INFO_SEND_ACK() {
  // @@protoc_insertion_point(destructor:MSG_DC_DS_MEMORY_INFO_SEND_ACK)
  SharedDtor();
}

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_DC_DS_MEMORY_INFO_SEND_ACK::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_DC_DS_MEMORY_INFO_SEND_ACK_descriptor_;
}

const MSG_DC_DS_MEMORY_INFO_SEND_ACK& MSG_DC_DS_MEMORY_INFO_SEND_ACK::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDS_5fDC_5fMEMORY_5fINFO_5fSEND_2eproto();
  return *default_instance_;
}

MSG_DC_DS_MEMORY_INFO_SEND_ACK* MSG_DC_DS_MEMORY_INFO_SEND_ACK::default_instance_ = NULL;

MSG_DC_DS_MEMORY_INFO_SEND_ACK* MSG_DC_DS_MEMORY_INFO_SEND_ACK::New() const {
  return new MSG_DC_DS_MEMORY_INFO_SEND_ACK;
}

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::Clear() {
  statuscode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_DC_DS_MEMORY_INFO_SEND_ACK::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_DC_DS_MEMORY_INFO_SEND_ACK)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 statusCode = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &statuscode_)));
          set_has_statuscode();
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
  // @@protoc_insertion_point(parse_success:MSG_DC_DS_MEMORY_INFO_SEND_ACK)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_DC_DS_MEMORY_INFO_SEND_ACK)
  return false;
#undef DO_
}

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_DC_DS_MEMORY_INFO_SEND_ACK)
  // required int32 statusCode = 1;
  if (has_statuscode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->statuscode(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_DC_DS_MEMORY_INFO_SEND_ACK)
}

::google::protobuf::uint8* MSG_DC_DS_MEMORY_INFO_SEND_ACK::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_DC_DS_MEMORY_INFO_SEND_ACK)
  // required int32 statusCode = 1;
  if (has_statuscode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->statuscode(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_DC_DS_MEMORY_INFO_SEND_ACK)
  return target;
}

int MSG_DC_DS_MEMORY_INFO_SEND_ACK::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 statusCode = 1;
    if (has_statuscode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->statuscode());
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

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_DC_DS_MEMORY_INFO_SEND_ACK* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_DC_DS_MEMORY_INFO_SEND_ACK*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::MergeFrom(const MSG_DC_DS_MEMORY_INFO_SEND_ACK& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_statuscode()) {
      set_statuscode(from.statuscode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::CopyFrom(const MSG_DC_DS_MEMORY_INFO_SEND_ACK& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_DC_DS_MEMORY_INFO_SEND_ACK::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MSG_DC_DS_MEMORY_INFO_SEND_ACK::Swap(MSG_DC_DS_MEMORY_INFO_SEND_ACK* other) {
  if (other != this) {
    std::swap(statuscode_, other->statuscode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_DC_DS_MEMORY_INFO_SEND_ACK::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_DC_DS_MEMORY_INFO_SEND_ACK_descriptor_;
  metadata.reflection = MSG_DC_DS_MEMORY_INFO_SEND_ACK_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DS_CS_XVECTORS_SEND.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MSG_DS_CS_XVECTORS_SEND.pb.h"

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

const ::google::protobuf::Descriptor* MSG_DS_CS_XVECTORS_SEND_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_DS_CS_XVECTORS_SEND_reflection_ = NULL;
const ::google::protobuf::Descriptor* MSG_DS_CS_XVECTORS_SEND_XVECTOR_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_DS_CS_XVECTORS_SEND_XVECTOR_reflection_ = NULL;
const ::google::protobuf::Descriptor* MSG_CS_DS_XVECTORS_SEND_ACK_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_CS_DS_XVECTORS_SEND_ACK_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto() {
  protobuf_AddDesc_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MSG_DS_CS_XVECTORS_SEND.proto");
  GOOGLE_CHECK(file != NULL);
  MSG_DS_CS_XVECTORS_SEND_descriptor_ = file->message_type(0);
  static const int MSG_DS_CS_XVECTORS_SEND_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_CS_XVECTORS_SEND, dbid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_CS_XVECTORS_SEND, tablename_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_CS_XVECTORS_SEND, xvectors_),
  };
  MSG_DS_CS_XVECTORS_SEND_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_DS_CS_XVECTORS_SEND_descriptor_,
      MSG_DS_CS_XVECTORS_SEND::default_instance_,
      MSG_DS_CS_XVECTORS_SEND_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_CS_XVECTORS_SEND, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_CS_XVECTORS_SEND, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_DS_CS_XVECTORS_SEND));
  MSG_DS_CS_XVECTORS_SEND_XVECTOR_descriptor_ = MSG_DS_CS_XVECTORS_SEND_descriptor_->nested_type(0);
  static const int MSG_DS_CS_XVECTORS_SEND_XVECTOR_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_CS_XVECTORS_SEND_XVECTOR, columnname_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_CS_XVECTORS_SEND_XVECTOR, xvector_),
  };
  MSG_DS_CS_XVECTORS_SEND_XVECTOR_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_DS_CS_XVECTORS_SEND_XVECTOR_descriptor_,
      MSG_DS_CS_XVECTORS_SEND_XVECTOR::default_instance_,
      MSG_DS_CS_XVECTORS_SEND_XVECTOR_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_CS_XVECTORS_SEND_XVECTOR, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_CS_XVECTORS_SEND_XVECTOR, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_DS_CS_XVECTORS_SEND_XVECTOR));
  MSG_CS_DS_XVECTORS_SEND_ACK_descriptor_ = file->message_type(1);
  static const int MSG_CS_DS_XVECTORS_SEND_ACK_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_CS_DS_XVECTORS_SEND_ACK, statuscode_),
  };
  MSG_CS_DS_XVECTORS_SEND_ACK_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_CS_DS_XVECTORS_SEND_ACK_descriptor_,
      MSG_CS_DS_XVECTORS_SEND_ACK::default_instance_,
      MSG_CS_DS_XVECTORS_SEND_ACK_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_CS_DS_XVECTORS_SEND_ACK, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_CS_DS_XVECTORS_SEND_ACK, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_CS_DS_XVECTORS_SEND_ACK));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_DS_CS_XVECTORS_SEND_descriptor_, &MSG_DS_CS_XVECTORS_SEND::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_DS_CS_XVECTORS_SEND_XVECTOR_descriptor_, &MSG_DS_CS_XVECTORS_SEND_XVECTOR::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_CS_DS_XVECTORS_SEND_ACK_descriptor_, &MSG_CS_DS_XVECTORS_SEND_ACK::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto() {
  delete MSG_DS_CS_XVECTORS_SEND::default_instance_;
  delete MSG_DS_CS_XVECTORS_SEND_reflection_;
  delete MSG_DS_CS_XVECTORS_SEND_XVECTOR::default_instance_;
  delete MSG_DS_CS_XVECTORS_SEND_XVECTOR_reflection_;
  delete MSG_CS_DS_XVECTORS_SEND_ACK::default_instance_;
  delete MSG_CS_DS_XVECTORS_SEND_ACK_reflection_;
}

void protobuf_AddDesc_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\035MSG_DS_CS_XVECTORS_SEND.proto\"\236\001\n\027MSG_"
    "DS_CS_XVECTORS_SEND\022\014\n\004dbID\030\001 \002(\r\022\021\n\ttab"
    "leName\030\002 \002(\t\0222\n\010xVectors\030\003 \003(\0132 .MSG_DS_"
    "CS_XVECTORS_SEND.XVECTOR\032.\n\007XVECTOR\022\022\n\nc"
    "olumnName\030\001 \002(\t\022\017\n\007xVector\030\002 \003(\r\"1\n\033MSG_"
    "CS_DS_XVECTORS_SEND_ACK\022\022\n\nstatusCode\030\001 "
    "\002(\005", 243);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MSG_DS_CS_XVECTORS_SEND.proto", &protobuf_RegisterTypes);
  MSG_DS_CS_XVECTORS_SEND::default_instance_ = new MSG_DS_CS_XVECTORS_SEND();
  MSG_DS_CS_XVECTORS_SEND_XVECTOR::default_instance_ = new MSG_DS_CS_XVECTORS_SEND_XVECTOR();
  MSG_CS_DS_XVECTORS_SEND_ACK::default_instance_ = new MSG_CS_DS_XVECTORS_SEND_ACK();
  MSG_DS_CS_XVECTORS_SEND::default_instance_->InitAsDefaultInstance();
  MSG_DS_CS_XVECTORS_SEND_XVECTOR::default_instance_->InitAsDefaultInstance();
  MSG_CS_DS_XVECTORS_SEND_ACK::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto {
  StaticDescriptorInitializer_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto() {
    protobuf_AddDesc_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto();
  }
} static_descriptor_initializer_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int MSG_DS_CS_XVECTORS_SEND_XVECTOR::kColumnNameFieldNumber;
const int MSG_DS_CS_XVECTORS_SEND_XVECTOR::kXVectorFieldNumber;
#endif  // !_MSC_VER

MSG_DS_CS_XVECTORS_SEND_XVECTOR::MSG_DS_CS_XVECTORS_SEND_XVECTOR()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_DS_CS_XVECTORS_SEND.XVECTOR)
}

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::InitAsDefaultInstance() {
}

MSG_DS_CS_XVECTORS_SEND_XVECTOR::MSG_DS_CS_XVECTORS_SEND_XVECTOR(const MSG_DS_CS_XVECTORS_SEND_XVECTOR& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_DS_CS_XVECTORS_SEND.XVECTOR)
}

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  columnname_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_DS_CS_XVECTORS_SEND_XVECTOR::~MSG_DS_CS_XVECTORS_SEND_XVECTOR() {
  // @@protoc_insertion_point(destructor:MSG_DS_CS_XVECTORS_SEND.XVECTOR)
  SharedDtor();
}

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::SharedDtor() {
  if (columnname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete columnname_;
  }
  if (this != default_instance_) {
  }
}

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_DS_CS_XVECTORS_SEND_XVECTOR::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_DS_CS_XVECTORS_SEND_XVECTOR_descriptor_;
}

const MSG_DS_CS_XVECTORS_SEND_XVECTOR& MSG_DS_CS_XVECTORS_SEND_XVECTOR::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto();
  return *default_instance_;
}

MSG_DS_CS_XVECTORS_SEND_XVECTOR* MSG_DS_CS_XVECTORS_SEND_XVECTOR::default_instance_ = NULL;

MSG_DS_CS_XVECTORS_SEND_XVECTOR* MSG_DS_CS_XVECTORS_SEND_XVECTOR::New() const {
  return new MSG_DS_CS_XVECTORS_SEND_XVECTOR;
}

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::Clear() {
  if (has_columnname()) {
    if (columnname_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      columnname_->clear();
    }
  }
  xvector_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_DS_CS_XVECTORS_SEND_XVECTOR::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_DS_CS_XVECTORS_SEND.XVECTOR)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string columnName = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_columnname()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->columnname().data(), this->columnname().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "columnname");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_xVector;
        break;
      }

      // repeated uint32 xVector = 2;
      case 2: {
        if (tag == 16) {
         parse_xVector:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 1, 16, input, this->mutable_xvector())));
        } else if (tag == 18) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, this->mutable_xvector())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_xVector;
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
  // @@protoc_insertion_point(parse_success:MSG_DS_CS_XVECTORS_SEND.XVECTOR)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_DS_CS_XVECTORS_SEND.XVECTOR)
  return false;
#undef DO_
}

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_DS_CS_XVECTORS_SEND.XVECTOR)
  // required string columnName = 1;
  if (has_columnname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->columnname().data(), this->columnname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "columnname");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->columnname(), output);
  }

  // repeated uint32 xVector = 2;
  for (int i = 0; i < this->xvector_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(
      2, this->xvector(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_DS_CS_XVECTORS_SEND.XVECTOR)
}

::google::protobuf::uint8* MSG_DS_CS_XVECTORS_SEND_XVECTOR::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_DS_CS_XVECTORS_SEND.XVECTOR)
  // required string columnName = 1;
  if (has_columnname()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->columnname().data(), this->columnname().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "columnname");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->columnname(), target);
  }

  // repeated uint32 xVector = 2;
  for (int i = 0; i < this->xvector_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteUInt32ToArray(2, this->xvector(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_DS_CS_XVECTORS_SEND.XVECTOR)
  return target;
}

int MSG_DS_CS_XVECTORS_SEND_XVECTOR::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string columnName = 1;
    if (has_columnname()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->columnname());
    }

  }
  // repeated uint32 xVector = 2;
  {
    int data_size = 0;
    for (int i = 0; i < this->xvector_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        UInt32Size(this->xvector(i));
    }
    total_size += 1 * this->xvector_size() + data_size;
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

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_DS_CS_XVECTORS_SEND_XVECTOR* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_DS_CS_XVECTORS_SEND_XVECTOR*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::MergeFrom(const MSG_DS_CS_XVECTORS_SEND_XVECTOR& from) {
  GOOGLE_CHECK_NE(&from, this);
  xvector_.MergeFrom(from.xvector_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_columnname()) {
      set_columnname(from.columnname());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::CopyFrom(const MSG_DS_CS_XVECTORS_SEND_XVECTOR& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_DS_CS_XVECTORS_SEND_XVECTOR::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MSG_DS_CS_XVECTORS_SEND_XVECTOR::Swap(MSG_DS_CS_XVECTORS_SEND_XVECTOR* other) {
  if (other != this) {
    std::swap(columnname_, other->columnname_);
    xvector_.Swap(&other->xvector_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_DS_CS_XVECTORS_SEND_XVECTOR::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_DS_CS_XVECTORS_SEND_XVECTOR_descriptor_;
  metadata.reflection = MSG_DS_CS_XVECTORS_SEND_XVECTOR_reflection_;
  return metadata;
}


// -------------------------------------------------------------------

#ifndef _MSC_VER
const int MSG_DS_CS_XVECTORS_SEND::kDbIDFieldNumber;
const int MSG_DS_CS_XVECTORS_SEND::kTableNameFieldNumber;
const int MSG_DS_CS_XVECTORS_SEND::kXVectorsFieldNumber;
#endif  // !_MSC_VER

MSG_DS_CS_XVECTORS_SEND::MSG_DS_CS_XVECTORS_SEND()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_DS_CS_XVECTORS_SEND)
}

void MSG_DS_CS_XVECTORS_SEND::InitAsDefaultInstance() {
}

MSG_DS_CS_XVECTORS_SEND::MSG_DS_CS_XVECTORS_SEND(const MSG_DS_CS_XVECTORS_SEND& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_DS_CS_XVECTORS_SEND)
}

void MSG_DS_CS_XVECTORS_SEND::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  dbid_ = 0u;
  tablename_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_DS_CS_XVECTORS_SEND::~MSG_DS_CS_XVECTORS_SEND() {
  // @@protoc_insertion_point(destructor:MSG_DS_CS_XVECTORS_SEND)
  SharedDtor();
}

void MSG_DS_CS_XVECTORS_SEND::SharedDtor() {
  if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete tablename_;
  }
  if (this != default_instance_) {
  }
}

void MSG_DS_CS_XVECTORS_SEND::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_DS_CS_XVECTORS_SEND::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_DS_CS_XVECTORS_SEND_descriptor_;
}

const MSG_DS_CS_XVECTORS_SEND& MSG_DS_CS_XVECTORS_SEND::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto();
  return *default_instance_;
}

MSG_DS_CS_XVECTORS_SEND* MSG_DS_CS_XVECTORS_SEND::default_instance_ = NULL;

MSG_DS_CS_XVECTORS_SEND* MSG_DS_CS_XVECTORS_SEND::New() const {
  return new MSG_DS_CS_XVECTORS_SEND;
}

void MSG_DS_CS_XVECTORS_SEND::Clear() {
  if (_has_bits_[0 / 32] & 3) {
    dbid_ = 0u;
    if (has_tablename()) {
      if (tablename_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
        tablename_->clear();
      }
    }
  }
  xvectors_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_DS_CS_XVECTORS_SEND::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_DS_CS_XVECTORS_SEND)
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
        if (input->ExpectTag(26)) goto parse_xVectors;
        break;
      }

      // repeated .MSG_DS_CS_XVECTORS_SEND.XVECTOR xVectors = 3;
      case 3: {
        if (tag == 26) {
         parse_xVectors:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_xvectors()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_xVectors;
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
  // @@protoc_insertion_point(parse_success:MSG_DS_CS_XVECTORS_SEND)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_DS_CS_XVECTORS_SEND)
  return false;
#undef DO_
}

void MSG_DS_CS_XVECTORS_SEND::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_DS_CS_XVECTORS_SEND)
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

  // repeated .MSG_DS_CS_XVECTORS_SEND.XVECTOR xVectors = 3;
  for (int i = 0; i < this->xvectors_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      3, this->xvectors(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_DS_CS_XVECTORS_SEND)
}

::google::protobuf::uint8* MSG_DS_CS_XVECTORS_SEND::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_DS_CS_XVECTORS_SEND)
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

  // repeated .MSG_DS_CS_XVECTORS_SEND.XVECTOR xVectors = 3;
  for (int i = 0; i < this->xvectors_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        3, this->xvectors(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_DS_CS_XVECTORS_SEND)
  return target;
}

int MSG_DS_CS_XVECTORS_SEND::ByteSize() const {
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

  }
  // repeated .MSG_DS_CS_XVECTORS_SEND.XVECTOR xVectors = 3;
  total_size += 1 * this->xvectors_size();
  for (int i = 0; i < this->xvectors_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->xvectors(i));
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

void MSG_DS_CS_XVECTORS_SEND::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_DS_CS_XVECTORS_SEND* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_DS_CS_XVECTORS_SEND*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_DS_CS_XVECTORS_SEND::MergeFrom(const MSG_DS_CS_XVECTORS_SEND& from) {
  GOOGLE_CHECK_NE(&from, this);
  xvectors_.MergeFrom(from.xvectors_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_dbid()) {
      set_dbid(from.dbid());
    }
    if (from.has_tablename()) {
      set_tablename(from.tablename());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_DS_CS_XVECTORS_SEND::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_DS_CS_XVECTORS_SEND::CopyFrom(const MSG_DS_CS_XVECTORS_SEND& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_DS_CS_XVECTORS_SEND::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  if (!::google::protobuf::internal::AllAreInitialized(this->xvectors())) return false;
  return true;
}

void MSG_DS_CS_XVECTORS_SEND::Swap(MSG_DS_CS_XVECTORS_SEND* other) {
  if (other != this) {
    std::swap(dbid_, other->dbid_);
    std::swap(tablename_, other->tablename_);
    xvectors_.Swap(&other->xvectors_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_DS_CS_XVECTORS_SEND::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_DS_CS_XVECTORS_SEND_descriptor_;
  metadata.reflection = MSG_DS_CS_XVECTORS_SEND_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MSG_CS_DS_XVECTORS_SEND_ACK::kStatusCodeFieldNumber;
#endif  // !_MSC_VER

MSG_CS_DS_XVECTORS_SEND_ACK::MSG_CS_DS_XVECTORS_SEND_ACK()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_CS_DS_XVECTORS_SEND_ACK)
}

void MSG_CS_DS_XVECTORS_SEND_ACK::InitAsDefaultInstance() {
}

MSG_CS_DS_XVECTORS_SEND_ACK::MSG_CS_DS_XVECTORS_SEND_ACK(const MSG_CS_DS_XVECTORS_SEND_ACK& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_CS_DS_XVECTORS_SEND_ACK)
}

void MSG_CS_DS_XVECTORS_SEND_ACK::SharedCtor() {
  _cached_size_ = 0;
  statuscode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_CS_DS_XVECTORS_SEND_ACK::~MSG_CS_DS_XVECTORS_SEND_ACK() {
  // @@protoc_insertion_point(destructor:MSG_CS_DS_XVECTORS_SEND_ACK)
  SharedDtor();
}

void MSG_CS_DS_XVECTORS_SEND_ACK::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MSG_CS_DS_XVECTORS_SEND_ACK::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_CS_DS_XVECTORS_SEND_ACK::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_CS_DS_XVECTORS_SEND_ACK_descriptor_;
}

const MSG_CS_DS_XVECTORS_SEND_ACK& MSG_CS_DS_XVECTORS_SEND_ACK::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDS_5fCS_5fXVECTORS_5fSEND_2eproto();
  return *default_instance_;
}

MSG_CS_DS_XVECTORS_SEND_ACK* MSG_CS_DS_XVECTORS_SEND_ACK::default_instance_ = NULL;

MSG_CS_DS_XVECTORS_SEND_ACK* MSG_CS_DS_XVECTORS_SEND_ACK::New() const {
  return new MSG_CS_DS_XVECTORS_SEND_ACK;
}

void MSG_CS_DS_XVECTORS_SEND_ACK::Clear() {
  statuscode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_CS_DS_XVECTORS_SEND_ACK::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_CS_DS_XVECTORS_SEND_ACK)
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
  // @@protoc_insertion_point(parse_success:MSG_CS_DS_XVECTORS_SEND_ACK)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_CS_DS_XVECTORS_SEND_ACK)
  return false;
#undef DO_
}

void MSG_CS_DS_XVECTORS_SEND_ACK::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_CS_DS_XVECTORS_SEND_ACK)
  // required int32 statusCode = 1;
  if (has_statuscode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->statuscode(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_CS_DS_XVECTORS_SEND_ACK)
}

::google::protobuf::uint8* MSG_CS_DS_XVECTORS_SEND_ACK::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_CS_DS_XVECTORS_SEND_ACK)
  // required int32 statusCode = 1;
  if (has_statuscode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->statuscode(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_CS_DS_XVECTORS_SEND_ACK)
  return target;
}

int MSG_CS_DS_XVECTORS_SEND_ACK::ByteSize() const {
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

void MSG_CS_DS_XVECTORS_SEND_ACK::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_CS_DS_XVECTORS_SEND_ACK* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_CS_DS_XVECTORS_SEND_ACK*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_CS_DS_XVECTORS_SEND_ACK::MergeFrom(const MSG_CS_DS_XVECTORS_SEND_ACK& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_statuscode()) {
      set_statuscode(from.statuscode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_CS_DS_XVECTORS_SEND_ACK::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_CS_DS_XVECTORS_SEND_ACK::CopyFrom(const MSG_CS_DS_XVECTORS_SEND_ACK& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_CS_DS_XVECTORS_SEND_ACK::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MSG_CS_DS_XVECTORS_SEND_ACK::Swap(MSG_CS_DS_XVECTORS_SEND_ACK* other) {
  if (other != this) {
    std::swap(statuscode_, other->statuscode_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_CS_DS_XVECTORS_SEND_ACK::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_CS_DS_XVECTORS_SEND_ACK_descriptor_;
  metadata.reflection = MSG_CS_DS_XVECTORS_SEND_ACK_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
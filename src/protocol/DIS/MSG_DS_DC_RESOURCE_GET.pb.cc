// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MSG_DS_DC_RESOURCE_GET.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "MSG_DS_DC_RESOURCE_GET.pb.h"

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

const ::google::protobuf::Descriptor* MSG_DS_DC_RESOURCE_GET_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_DS_DC_RESOURCE_GET_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* MSG_DS_DC_RESOURCE_GET_TYPE_descriptor_ = NULL;
const ::google::protobuf::Descriptor* MSG_DC_DS_RESOURCE_INFO_ACK_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  MSG_DC_DS_RESOURCE_INFO_ACK_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto() {
  protobuf_AddDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "MSG_DS_DC_RESOURCE_GET.proto");
  GOOGLE_CHECK(file != NULL);
  MSG_DS_DC_RESOURCE_GET_descriptor_ = file->message_type(0);
  static const int MSG_DS_DC_RESOURCE_GET_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_RESOURCE_GET, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_RESOURCE_GET, cpu_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_RESOURCE_GET, memory_),
  };
  MSG_DS_DC_RESOURCE_GET_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_DS_DC_RESOURCE_GET_descriptor_,
      MSG_DS_DC_RESOURCE_GET::default_instance_,
      MSG_DS_DC_RESOURCE_GET_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_RESOURCE_GET, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DS_DC_RESOURCE_GET, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_DS_DC_RESOURCE_GET));
  MSG_DS_DC_RESOURCE_GET_TYPE_descriptor_ = MSG_DS_DC_RESOURCE_GET_descriptor_->enum_type(0);
  MSG_DC_DS_RESOURCE_INFO_ACK_descriptor_ = file->message_type(1);
  static const int MSG_DC_DS_RESOURCE_INFO_ACK_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RESOURCE_INFO_ACK, statucode_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RESOURCE_INFO_ACK, ip_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RESOURCE_INFO_ACK, cpu_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RESOURCE_INFO_ACK, memory_),
  };
  MSG_DC_DS_RESOURCE_INFO_ACK_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      MSG_DC_DS_RESOURCE_INFO_ACK_descriptor_,
      MSG_DC_DS_RESOURCE_INFO_ACK::default_instance_,
      MSG_DC_DS_RESOURCE_INFO_ACK_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RESOURCE_INFO_ACK, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(MSG_DC_DS_RESOURCE_INFO_ACK, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(MSG_DC_DS_RESOURCE_INFO_ACK));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_DS_DC_RESOURCE_GET_descriptor_, &MSG_DS_DC_RESOURCE_GET::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    MSG_DC_DS_RESOURCE_INFO_ACK_descriptor_, &MSG_DC_DS_RESOURCE_INFO_ACK::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto() {
  delete MSG_DS_DC_RESOURCE_GET::default_instance_;
  delete MSG_DS_DC_RESOURCE_GET_reflection_;
  delete MSG_DC_DS_RESOURCE_INFO_ACK::default_instance_;
  delete MSG_DC_DS_RESOURCE_INFO_ACK_reflection_;
}

void protobuf_AddDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\034MSG_DS_DC_RESOURCE_GET.proto\"y\n\026MSG_DS"
    "_DC_RESOURCE_GET\022*\n\004type\030\001 \002(\0162\034.MSG_DS_"
    "DC_RESOURCE_GET.TYPE\022\013\n\003cpu\030\002 \002(\005\022\016\n\006mem"
    "ory\030\003 \002(\005\"\026\n\004TYPE\022\006\n\002CS\020\000\022\006\n\002DS\020\001\"Y\n\033MSG"
    "_DC_DS_RESOURCE_INFO_ACK\022\021\n\tstatuCode\030\001 "
    "\002(\005\022\n\n\002ip\030\002 \003(\t\022\013\n\003cpu\030\003 \003(\005\022\016\n\006memory\030\004"
    " \003(\005", 244);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "MSG_DS_DC_RESOURCE_GET.proto", &protobuf_RegisterTypes);
  MSG_DS_DC_RESOURCE_GET::default_instance_ = new MSG_DS_DC_RESOURCE_GET();
  MSG_DC_DS_RESOURCE_INFO_ACK::default_instance_ = new MSG_DC_DS_RESOURCE_INFO_ACK();
  MSG_DS_DC_RESOURCE_GET::default_instance_->InitAsDefaultInstance();
  MSG_DC_DS_RESOURCE_INFO_ACK::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto {
  StaticDescriptorInitializer_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto() {
    protobuf_AddDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  }
} static_descriptor_initializer_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* MSG_DS_DC_RESOURCE_GET_TYPE_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_DS_DC_RESOURCE_GET_TYPE_descriptor_;
}
bool MSG_DS_DC_RESOURCE_GET_TYPE_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const MSG_DS_DC_RESOURCE_GET_TYPE MSG_DS_DC_RESOURCE_GET::CS;
const MSG_DS_DC_RESOURCE_GET_TYPE MSG_DS_DC_RESOURCE_GET::DS;
const MSG_DS_DC_RESOURCE_GET_TYPE MSG_DS_DC_RESOURCE_GET::TYPE_MIN;
const MSG_DS_DC_RESOURCE_GET_TYPE MSG_DS_DC_RESOURCE_GET::TYPE_MAX;
const int MSG_DS_DC_RESOURCE_GET::TYPE_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int MSG_DS_DC_RESOURCE_GET::kTypeFieldNumber;
const int MSG_DS_DC_RESOURCE_GET::kCpuFieldNumber;
const int MSG_DS_DC_RESOURCE_GET::kMemoryFieldNumber;
#endif  // !_MSC_VER

MSG_DS_DC_RESOURCE_GET::MSG_DS_DC_RESOURCE_GET()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_DS_DC_RESOURCE_GET)
}

void MSG_DS_DC_RESOURCE_GET::InitAsDefaultInstance() {
}

MSG_DS_DC_RESOURCE_GET::MSG_DS_DC_RESOURCE_GET(const MSG_DS_DC_RESOURCE_GET& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_DS_DC_RESOURCE_GET)
}

void MSG_DS_DC_RESOURCE_GET::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  cpu_ = 0;
  memory_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_DS_DC_RESOURCE_GET::~MSG_DS_DC_RESOURCE_GET() {
  // @@protoc_insertion_point(destructor:MSG_DS_DC_RESOURCE_GET)
  SharedDtor();
}

void MSG_DS_DC_RESOURCE_GET::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MSG_DS_DC_RESOURCE_GET::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_DS_DC_RESOURCE_GET::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_DS_DC_RESOURCE_GET_descriptor_;
}

const MSG_DS_DC_RESOURCE_GET& MSG_DS_DC_RESOURCE_GET::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  return *default_instance_;
}

MSG_DS_DC_RESOURCE_GET* MSG_DS_DC_RESOURCE_GET::default_instance_ = NULL;

MSG_DS_DC_RESOURCE_GET* MSG_DS_DC_RESOURCE_GET::New() const {
  return new MSG_DS_DC_RESOURCE_GET;
}

void MSG_DS_DC_RESOURCE_GET::Clear() {
#define OFFSET_OF_FIELD_(f) (reinterpret_cast<char*>(      \
  &reinterpret_cast<MSG_DS_DC_RESOURCE_GET*>(16)->f) - \
   reinterpret_cast<char*>(16))

#define ZR_(first, last) do {                              \
    size_t f = OFFSET_OF_FIELD_(first);                    \
    size_t n = OFFSET_OF_FIELD_(last) - f + sizeof(last);  \
    ::memset(&first, 0, n);                                \
  } while (0)

  ZR_(type_, memory_);

#undef OFFSET_OF_FIELD_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_DS_DC_RESOURCE_GET::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_DS_DC_RESOURCE_GET)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .MSG_DS_DC_RESOURCE_GET.TYPE type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::MSG_DS_DC_RESOURCE_GET_TYPE_IsValid(value)) {
            set_type(static_cast< ::MSG_DS_DC_RESOURCE_GET_TYPE >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_cpu;
        break;
      }

      // required int32 cpu = 2;
      case 2: {
        if (tag == 16) {
         parse_cpu:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &cpu_)));
          set_has_cpu();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_memory;
        break;
      }

      // required int32 memory = 3;
      case 3: {
        if (tag == 24) {
         parse_memory:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
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
  // @@protoc_insertion_point(parse_success:MSG_DS_DC_RESOURCE_GET)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_DS_DC_RESOURCE_GET)
  return false;
#undef DO_
}

void MSG_DS_DC_RESOURCE_GET::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_DS_DC_RESOURCE_GET)
  // required .MSG_DS_DC_RESOURCE_GET.TYPE type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // required int32 cpu = 2;
  if (has_cpu()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->cpu(), output);
  }

  // required int32 memory = 3;
  if (has_memory()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->memory(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_DS_DC_RESOURCE_GET)
}

::google::protobuf::uint8* MSG_DS_DC_RESOURCE_GET::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_DS_DC_RESOURCE_GET)
  // required .MSG_DS_DC_RESOURCE_GET.TYPE type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // required int32 cpu = 2;
  if (has_cpu()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->cpu(), target);
  }

  // required int32 memory = 3;
  if (has_memory()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->memory(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_DS_DC_RESOURCE_GET)
  return target;
}

int MSG_DS_DC_RESOURCE_GET::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .MSG_DS_DC_RESOURCE_GET.TYPE type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
    }

    // required int32 cpu = 2;
    if (has_cpu()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->cpu());
    }

    // required int32 memory = 3;
    if (has_memory()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
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

void MSG_DS_DC_RESOURCE_GET::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_DS_DC_RESOURCE_GET* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_DS_DC_RESOURCE_GET*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_DS_DC_RESOURCE_GET::MergeFrom(const MSG_DS_DC_RESOURCE_GET& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_cpu()) {
      set_cpu(from.cpu());
    }
    if (from.has_memory()) {
      set_memory(from.memory());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_DS_DC_RESOURCE_GET::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_DS_DC_RESOURCE_GET::CopyFrom(const MSG_DS_DC_RESOURCE_GET& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_DS_DC_RESOURCE_GET::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void MSG_DS_DC_RESOURCE_GET::Swap(MSG_DS_DC_RESOURCE_GET* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(cpu_, other->cpu_);
    std::swap(memory_, other->memory_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_DS_DC_RESOURCE_GET::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_DS_DC_RESOURCE_GET_descriptor_;
  metadata.reflection = MSG_DS_DC_RESOURCE_GET_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int MSG_DC_DS_RESOURCE_INFO_ACK::kStatuCodeFieldNumber;
const int MSG_DC_DS_RESOURCE_INFO_ACK::kIpFieldNumber;
const int MSG_DC_DS_RESOURCE_INFO_ACK::kCpuFieldNumber;
const int MSG_DC_DS_RESOURCE_INFO_ACK::kMemoryFieldNumber;
#endif  // !_MSC_VER

MSG_DC_DS_RESOURCE_INFO_ACK::MSG_DC_DS_RESOURCE_INFO_ACK()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:MSG_DC_DS_RESOURCE_INFO_ACK)
}

void MSG_DC_DS_RESOURCE_INFO_ACK::InitAsDefaultInstance() {
}

MSG_DC_DS_RESOURCE_INFO_ACK::MSG_DC_DS_RESOURCE_INFO_ACK(const MSG_DC_DS_RESOURCE_INFO_ACK& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:MSG_DC_DS_RESOURCE_INFO_ACK)
}

void MSG_DC_DS_RESOURCE_INFO_ACK::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  statucode_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

MSG_DC_DS_RESOURCE_INFO_ACK::~MSG_DC_DS_RESOURCE_INFO_ACK() {
  // @@protoc_insertion_point(destructor:MSG_DC_DS_RESOURCE_INFO_ACK)
  SharedDtor();
}

void MSG_DC_DS_RESOURCE_INFO_ACK::SharedDtor() {
  if (this != default_instance_) {
  }
}

void MSG_DC_DS_RESOURCE_INFO_ACK::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* MSG_DC_DS_RESOURCE_INFO_ACK::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return MSG_DC_DS_RESOURCE_INFO_ACK_descriptor_;
}

const MSG_DC_DS_RESOURCE_INFO_ACK& MSG_DC_DS_RESOURCE_INFO_ACK::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_MSG_5fDS_5fDC_5fRESOURCE_5fGET_2eproto();
  return *default_instance_;
}

MSG_DC_DS_RESOURCE_INFO_ACK* MSG_DC_DS_RESOURCE_INFO_ACK::default_instance_ = NULL;

MSG_DC_DS_RESOURCE_INFO_ACK* MSG_DC_DS_RESOURCE_INFO_ACK::New() const {
  return new MSG_DC_DS_RESOURCE_INFO_ACK;
}

void MSG_DC_DS_RESOURCE_INFO_ACK::Clear() {
  statucode_ = 0;
  ip_.Clear();
  cpu_.Clear();
  memory_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool MSG_DC_DS_RESOURCE_INFO_ACK::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:MSG_DC_DS_RESOURCE_INFO_ACK)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required int32 statuCode = 1;
      case 1: {
        if (tag == 8) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &statucode_)));
          set_has_statucode();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_ip;
        break;
      }

      // repeated string ip = 2;
      case 2: {
        if (tag == 18) {
         parse_ip:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_ip()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->ip(this->ip_size() - 1).data(),
            this->ip(this->ip_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "ip");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_ip;
        if (input->ExpectTag(24)) goto parse_cpu;
        break;
      }

      // repeated int32 cpu = 3;
      case 3: {
        if (tag == 24) {
         parse_cpu:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 24, input, this->mutable_cpu())));
        } else if (tag == 26) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_cpu())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_cpu;
        if (input->ExpectTag(32)) goto parse_memory;
        break;
      }

      // repeated int32 memory = 4;
      case 4: {
        if (tag == 32) {
         parse_memory:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 1, 32, input, this->mutable_memory())));
        } else if (tag == 34) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, this->mutable_memory())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_memory;
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
  // @@protoc_insertion_point(parse_success:MSG_DC_DS_RESOURCE_INFO_ACK)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:MSG_DC_DS_RESOURCE_INFO_ACK)
  return false;
#undef DO_
}

void MSG_DC_DS_RESOURCE_INFO_ACK::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:MSG_DC_DS_RESOURCE_INFO_ACK)
  // required int32 statuCode = 1;
  if (has_statucode()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->statucode(), output);
  }

  // repeated string ip = 2;
  for (int i = 0; i < this->ip_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->ip(i).data(), this->ip(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "ip");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->ip(i), output);
  }

  // repeated int32 cpu = 3;
  for (int i = 0; i < this->cpu_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      3, this->cpu(i), output);
  }

  // repeated int32 memory = 4;
  for (int i = 0; i < this->memory_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(
      4, this->memory(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:MSG_DC_DS_RESOURCE_INFO_ACK)
}

::google::protobuf::uint8* MSG_DC_DS_RESOURCE_INFO_ACK::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:MSG_DC_DS_RESOURCE_INFO_ACK)
  // required int32 statuCode = 1;
  if (has_statucode()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->statucode(), target);
  }

  // repeated string ip = 2;
  for (int i = 0; i < this->ip_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->ip(i).data(), this->ip(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "ip");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->ip(i), target);
  }

  // repeated int32 cpu = 3;
  for (int i = 0; i < this->cpu_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(3, this->cpu(i), target);
  }

  // repeated int32 memory = 4;
  for (int i = 0; i < this->memory_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt32ToArray(4, this->memory(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:MSG_DC_DS_RESOURCE_INFO_ACK)
  return target;
}

int MSG_DC_DS_RESOURCE_INFO_ACK::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required int32 statuCode = 1;
    if (has_statucode()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->statucode());
    }

  }
  // repeated string ip = 2;
  total_size += 1 * this->ip_size();
  for (int i = 0; i < this->ip_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->ip(i));
  }

  // repeated int32 cpu = 3;
  {
    int data_size = 0;
    for (int i = 0; i < this->cpu_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->cpu(i));
    }
    total_size += 1 * this->cpu_size() + data_size;
  }

  // repeated int32 memory = 4;
  {
    int data_size = 0;
    for (int i = 0; i < this->memory_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int32Size(this->memory(i));
    }
    total_size += 1 * this->memory_size() + data_size;
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

void MSG_DC_DS_RESOURCE_INFO_ACK::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const MSG_DC_DS_RESOURCE_INFO_ACK* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const MSG_DC_DS_RESOURCE_INFO_ACK*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void MSG_DC_DS_RESOURCE_INFO_ACK::MergeFrom(const MSG_DC_DS_RESOURCE_INFO_ACK& from) {
  GOOGLE_CHECK_NE(&from, this);
  ip_.MergeFrom(from.ip_);
  cpu_.MergeFrom(from.cpu_);
  memory_.MergeFrom(from.memory_);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_statucode()) {
      set_statucode(from.statucode());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void MSG_DC_DS_RESOURCE_INFO_ACK::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void MSG_DC_DS_RESOURCE_INFO_ACK::CopyFrom(const MSG_DC_DS_RESOURCE_INFO_ACK& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MSG_DC_DS_RESOURCE_INFO_ACK::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void MSG_DC_DS_RESOURCE_INFO_ACK::Swap(MSG_DC_DS_RESOURCE_INFO_ACK* other) {
  if (other != this) {
    std::swap(statucode_, other->statucode_);
    ip_.Swap(&other->ip_);
    cpu_.Swap(&other->cpu_);
    memory_.Swap(&other->memory_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata MSG_DC_DS_RESOURCE_INFO_ACK::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = MSG_DC_DS_RESOURCE_INFO_ACK_descriptor_;
  metadata.reflection = MSG_DC_DS_RESOURCE_INFO_ACK_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)
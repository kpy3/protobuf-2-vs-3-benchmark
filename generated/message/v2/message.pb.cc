// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: message/v2/message.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "message/v2/message.pb.h"

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

namespace protobuf_v2_benchmark {

namespace {

const ::google::protobuf::Descriptor* Record_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Record_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_message_2fv2_2fmessage_2eproto() {
  protobuf_AddDesc_message_2fv2_2fmessage_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "message/v2/message.proto");
  GOOGLE_CHECK(file != NULL);
  Record_descriptor_ = file->message_type(0);
  static const int Record_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Record, ids_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Record, strings_),
  };
  Record_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Record_descriptor_,
      Record::default_instance_,
      Record_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Record, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Record, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Record));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_message_2fv2_2fmessage_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Record_descriptor_, &Record::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_message_2fv2_2fmessage_2eproto() {
  delete Record::default_instance_;
  delete Record_reflection_;
}

void protobuf_AddDesc_message_2fv2_2fmessage_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\030message/v2/message.proto\022\025protobuf_v2_"
    "benchmark\"&\n\006Record\022\013\n\003ids\030\001 \003(\003\022\017\n\007stri"
    "ngs\030\002 \003(\t", 89);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "message/v2/message.proto", &protobuf_RegisterTypes);
  Record::default_instance_ = new Record();
  Record::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_message_2fv2_2fmessage_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_message_2fv2_2fmessage_2eproto {
  StaticDescriptorInitializer_message_2fv2_2fmessage_2eproto() {
    protobuf_AddDesc_message_2fv2_2fmessage_2eproto();
  }
} static_descriptor_initializer_message_2fv2_2fmessage_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int Record::kIdsFieldNumber;
const int Record::kStringsFieldNumber;
#endif  // !_MSC_VER

Record::Record()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:protobuf_v2_benchmark.Record)
}

void Record::InitAsDefaultInstance() {
}

Record::Record(const Record& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:protobuf_v2_benchmark.Record)
}

void Record::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Record::~Record() {
  // @@protoc_insertion_point(destructor:protobuf_v2_benchmark.Record)
  SharedDtor();
}

void Record::SharedDtor() {
  if (this != default_instance_) {
  }
}

void Record::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Record::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Record_descriptor_;
}

const Record& Record::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_message_2fv2_2fmessage_2eproto();
  return *default_instance_;
}

Record* Record::default_instance_ = NULL;

Record* Record::New() const {
  return new Record;
}

void Record::Clear() {
  ids_.Clear();
  strings_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Record::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:protobuf_v2_benchmark.Record)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated int64 ids = 1;
      case 1: {
        if (tag == 8) {
         parse_ids:
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 1, 8, input, this->mutable_ids())));
        } else if (tag == 10) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitiveNoInline<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, this->mutable_ids())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(8)) goto parse_ids;
        if (input->ExpectTag(18)) goto parse_strings;
        break;
      }

      // repeated string strings = 2;
      case 2: {
        if (tag == 18) {
         parse_strings:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->add_strings()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->strings(this->strings_size() - 1).data(),
            this->strings(this->strings_size() - 1).length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "strings");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_strings;
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
  // @@protoc_insertion_point(parse_success:protobuf_v2_benchmark.Record)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:protobuf_v2_benchmark.Record)
  return false;
#undef DO_
}

void Record::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:protobuf_v2_benchmark.Record)
  // repeated int64 ids = 1;
  for (int i = 0; i < this->ids_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(
      1, this->ids(i), output);
  }

  // repeated string strings = 2;
  for (int i = 0; i < this->strings_size(); i++) {
  ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
    this->strings(i).data(), this->strings(i).length(),
    ::google::protobuf::internal::WireFormat::SERIALIZE,
    "strings");
    ::google::protobuf::internal::WireFormatLite::WriteString(
      2, this->strings(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:protobuf_v2_benchmark.Record)
}

::google::protobuf::uint8* Record::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:protobuf_v2_benchmark.Record)
  // repeated int64 ids = 1;
  for (int i = 0; i < this->ids_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteInt64ToArray(1, this->ids(i), target);
  }

  // repeated string strings = 2;
  for (int i = 0; i < this->strings_size(); i++) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->strings(i).data(), this->strings(i).length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "strings");
    target = ::google::protobuf::internal::WireFormatLite::
      WriteStringToArray(2, this->strings(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:protobuf_v2_benchmark.Record)
  return target;
}

int Record::ByteSize() const {
  int total_size = 0;

  // repeated int64 ids = 1;
  {
    int data_size = 0;
    for (int i = 0; i < this->ids_size(); i++) {
      data_size += ::google::protobuf::internal::WireFormatLite::
        Int64Size(this->ids(i));
    }
    total_size += 1 * this->ids_size() + data_size;
  }

  // repeated string strings = 2;
  total_size += 1 * this->strings_size();
  for (int i = 0; i < this->strings_size(); i++) {
    total_size += ::google::protobuf::internal::WireFormatLite::StringSize(
      this->strings(i));
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

void Record::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Record* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Record*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Record::MergeFrom(const Record& from) {
  GOOGLE_CHECK_NE(&from, this);
  ids_.MergeFrom(from.ids_);
  strings_.MergeFrom(from.strings_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Record::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Record::CopyFrom(const Record& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Record::IsInitialized() const {

  return true;
}

void Record::Swap(Record* other) {
  if (other != this) {
    ids_.Swap(&other->ids_);
    strings_.Swap(&other->strings_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Record::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Record_descriptor_;
  metadata.reflection = Record_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf_v2_benchmark

// @@protoc_insertion_point(global_scope)
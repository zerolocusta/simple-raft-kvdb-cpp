// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: vote_request.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "vote_request.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace raft_msg {
class VoteRequestDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<VoteRequest> {
} _VoteRequest_default_instance_;

namespace protobuf_vote_5frequest_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VoteRequest, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VoteRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VoteRequest, term_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VoteRequest, last_log_index_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VoteRequest, last_log_term_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(VoteRequest, candidate_name_),
  1,
  2,
  3,
  0,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 8, sizeof(VoteRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_VoteRequest_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "vote_request.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, NULL, NULL);
}

void protobuf_AssignDescriptorsOnce() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &protobuf_AssignDescriptors);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::internal::RegisterAllTypes(file_level_metadata, 1);
}

}  // namespace

void TableStruct::Shutdown() {
  _VoteRequest_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _VoteRequest_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\022vote_request.proto\022\010raft_msg\"b\n\013VoteRe"
      "quest\022\014\n\004term\030\001 \002(\004\022\026\n\016last_log_index\030\002 "
      "\002(\004\022\025\n\rlast_log_term\030\003 \002(\004\022\026\n\016candidate_"
      "name\030\004 \002(\t"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 130);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "vote_request.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&TableStruct::Shutdown);
}

void AddDescriptors() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &AddDescriptorsImpl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer {
  StaticDescriptorInitializer() {
    AddDescriptors();
  }
} static_descriptor_initializer;

}  // namespace protobuf_vote_5frequest_2eproto


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int VoteRequest::kTermFieldNumber;
const int VoteRequest::kLastLogIndexFieldNumber;
const int VoteRequest::kLastLogTermFieldNumber;
const int VoteRequest::kCandidateNameFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

VoteRequest::VoteRequest()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_vote_5frequest_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:raft_msg.VoteRequest)
}
VoteRequest::VoteRequest(const VoteRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  candidate_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_candidate_name()) {
    candidate_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.candidate_name_);
  }
  ::memcpy(&term_, &from.term_,
    reinterpret_cast<char*>(&last_log_term_) -
    reinterpret_cast<char*>(&term_) + sizeof(last_log_term_));
  // @@protoc_insertion_point(copy_constructor:raft_msg.VoteRequest)
}

void VoteRequest::SharedCtor() {
  _cached_size_ = 0;
  candidate_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(&term_, 0, reinterpret_cast<char*>(&last_log_term_) -
    reinterpret_cast<char*>(&term_) + sizeof(last_log_term_));
}

VoteRequest::~VoteRequest() {
  // @@protoc_insertion_point(destructor:raft_msg.VoteRequest)
  SharedDtor();
}

void VoteRequest::SharedDtor() {
  candidate_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void VoteRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* VoteRequest::descriptor() {
  protobuf_vote_5frequest_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vote_5frequest_2eproto::file_level_metadata[0].descriptor;
}

const VoteRequest& VoteRequest::default_instance() {
  protobuf_vote_5frequest_2eproto::InitDefaults();
  return *internal_default_instance();
}

VoteRequest* VoteRequest::New(::google::protobuf::Arena* arena) const {
  VoteRequest* n = new VoteRequest;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void VoteRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:raft_msg.VoteRequest)
  if (has_candidate_name()) {
    GOOGLE_DCHECK(!candidate_name_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
    (*candidate_name_.UnsafeRawStringPointer())->clear();
  }
  if (_has_bits_[0 / 32] & 14u) {
    ::memset(&term_, 0, reinterpret_cast<char*>(&last_log_term_) -
      reinterpret_cast<char*>(&term_) + sizeof(last_log_term_));
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool VoteRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:raft_msg.VoteRequest)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required uint64 term = 1;
      case 1: {
        if (tag == 8u) {
          set_has_term();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &term_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint64 last_log_index = 2;
      case 2: {
        if (tag == 16u) {
          set_has_last_log_index();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &last_log_index_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required uint64 last_log_term = 3;
      case 3: {
        if (tag == 24u) {
          set_has_last_log_term();
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &last_log_term_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // required string candidate_name = 4;
      case 4: {
        if (tag == 34u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_candidate_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->candidate_name().data(), this->candidate_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "raft_msg.VoteRequest.candidate_name");
        } else {
          goto handle_unusual;
        }
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
  // @@protoc_insertion_point(parse_success:raft_msg.VoteRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:raft_msg.VoteRequest)
  return false;
#undef DO_
}

void VoteRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:raft_msg.VoteRequest)
  // required uint64 term = 1;
  if (has_term()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(1, this->term(), output);
  }

  // required uint64 last_log_index = 2;
  if (has_last_log_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->last_log_index(), output);
  }

  // required uint64 last_log_term = 3;
  if (has_last_log_term()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(3, this->last_log_term(), output);
  }

  // required string candidate_name = 4;
  if (has_candidate_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->candidate_name().data(), this->candidate_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "raft_msg.VoteRequest.candidate_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->candidate_name(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:raft_msg.VoteRequest)
}

::google::protobuf::uint8* VoteRequest::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:raft_msg.VoteRequest)
  // required uint64 term = 1;
  if (has_term()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(1, this->term(), target);
  }

  // required uint64 last_log_index = 2;
  if (has_last_log_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->last_log_index(), target);
  }

  // required uint64 last_log_term = 3;
  if (has_last_log_term()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(3, this->last_log_term(), target);
  }

  // required string candidate_name = 4;
  if (has_candidate_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->candidate_name().data(), this->candidate_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "raft_msg.VoteRequest.candidate_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->candidate_name(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:raft_msg.VoteRequest)
  return target;
}

size_t VoteRequest::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:raft_msg.VoteRequest)
  size_t total_size = 0;

  if (has_candidate_name()) {
    // required string candidate_name = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->candidate_name());
  }

  if (has_term()) {
    // required uint64 term = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->term());
  }

  if (has_last_log_index()) {
    // required uint64 last_log_index = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->last_log_index());
  }

  if (has_last_log_term()) {
    // required uint64 last_log_term = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->last_log_term());
  }

  return total_size;
}
size_t VoteRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:raft_msg.VoteRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  if (((_has_bits_[0] & 0x0000000f) ^ 0x0000000f) == 0) {  // All required fields are present.
    // required string candidate_name = 4;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->candidate_name());

    // required uint64 term = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->term());

    // required uint64 last_log_index = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->last_log_index());

    // required uint64 last_log_term = 3;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->last_log_term());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void VoteRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:raft_msg.VoteRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const VoteRequest* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const VoteRequest>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:raft_msg.VoteRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:raft_msg.VoteRequest)
    MergeFrom(*source);
  }
}

void VoteRequest::MergeFrom(const VoteRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:raft_msg.VoteRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._has_bits_[0 / 32] & 15u) {
    if (from.has_candidate_name()) {
      set_has_candidate_name();
      candidate_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.candidate_name_);
    }
    if (from.has_term()) {
      set_term(from.term());
    }
    if (from.has_last_log_index()) {
      set_last_log_index(from.last_log_index());
    }
    if (from.has_last_log_term()) {
      set_last_log_term(from.last_log_term());
    }
  }
}

void VoteRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:raft_msg.VoteRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void VoteRequest::CopyFrom(const VoteRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:raft_msg.VoteRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool VoteRequest::IsInitialized() const {
  if ((_has_bits_[0] & 0x0000000f) != 0x0000000f) return false;
  return true;
}

void VoteRequest::Swap(VoteRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void VoteRequest::InternalSwap(VoteRequest* other) {
  candidate_name_.Swap(&other->candidate_name_);
  std::swap(term_, other->term_);
  std::swap(last_log_index_, other->last_log_index_);
  std::swap(last_log_term_, other->last_log_term_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata VoteRequest::GetMetadata() const {
  protobuf_vote_5frequest_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_vote_5frequest_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// VoteRequest

// required uint64 term = 1;
bool VoteRequest::has_term() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void VoteRequest::set_has_term() {
  _has_bits_[0] |= 0x00000002u;
}
void VoteRequest::clear_has_term() {
  _has_bits_[0] &= ~0x00000002u;
}
void VoteRequest::clear_term() {
  term_ = GOOGLE_ULONGLONG(0);
  clear_has_term();
}
::google::protobuf::uint64 VoteRequest::term() const {
  // @@protoc_insertion_point(field_get:raft_msg.VoteRequest.term)
  return term_;
}
void VoteRequest::set_term(::google::protobuf::uint64 value) {
  set_has_term();
  term_ = value;
  // @@protoc_insertion_point(field_set:raft_msg.VoteRequest.term)
}

// required uint64 last_log_index = 2;
bool VoteRequest::has_last_log_index() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void VoteRequest::set_has_last_log_index() {
  _has_bits_[0] |= 0x00000004u;
}
void VoteRequest::clear_has_last_log_index() {
  _has_bits_[0] &= ~0x00000004u;
}
void VoteRequest::clear_last_log_index() {
  last_log_index_ = GOOGLE_ULONGLONG(0);
  clear_has_last_log_index();
}
::google::protobuf::uint64 VoteRequest::last_log_index() const {
  // @@protoc_insertion_point(field_get:raft_msg.VoteRequest.last_log_index)
  return last_log_index_;
}
void VoteRequest::set_last_log_index(::google::protobuf::uint64 value) {
  set_has_last_log_index();
  last_log_index_ = value;
  // @@protoc_insertion_point(field_set:raft_msg.VoteRequest.last_log_index)
}

// required uint64 last_log_term = 3;
bool VoteRequest::has_last_log_term() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void VoteRequest::set_has_last_log_term() {
  _has_bits_[0] |= 0x00000008u;
}
void VoteRequest::clear_has_last_log_term() {
  _has_bits_[0] &= ~0x00000008u;
}
void VoteRequest::clear_last_log_term() {
  last_log_term_ = GOOGLE_ULONGLONG(0);
  clear_has_last_log_term();
}
::google::protobuf::uint64 VoteRequest::last_log_term() const {
  // @@protoc_insertion_point(field_get:raft_msg.VoteRequest.last_log_term)
  return last_log_term_;
}
void VoteRequest::set_last_log_term(::google::protobuf::uint64 value) {
  set_has_last_log_term();
  last_log_term_ = value;
  // @@protoc_insertion_point(field_set:raft_msg.VoteRequest.last_log_term)
}

// required string candidate_name = 4;
bool VoteRequest::has_candidate_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void VoteRequest::set_has_candidate_name() {
  _has_bits_[0] |= 0x00000001u;
}
void VoteRequest::clear_has_candidate_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void VoteRequest::clear_candidate_name() {
  candidate_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_candidate_name();
}
const ::std::string& VoteRequest::candidate_name() const {
  // @@protoc_insertion_point(field_get:raft_msg.VoteRequest.candidate_name)
  return candidate_name_.GetNoArena();
}
void VoteRequest::set_candidate_name(const ::std::string& value) {
  set_has_candidate_name();
  candidate_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:raft_msg.VoteRequest.candidate_name)
}
#if LANG_CXX11
void VoteRequest::set_candidate_name(::std::string&& value) {
  set_has_candidate_name();
  candidate_name_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:raft_msg.VoteRequest.candidate_name)
}
#endif
void VoteRequest::set_candidate_name(const char* value) {
  set_has_candidate_name();
  candidate_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:raft_msg.VoteRequest.candidate_name)
}
void VoteRequest::set_candidate_name(const char* value, size_t size) {
  set_has_candidate_name();
  candidate_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:raft_msg.VoteRequest.candidate_name)
}
::std::string* VoteRequest::mutable_candidate_name() {
  set_has_candidate_name();
  // @@protoc_insertion_point(field_mutable:raft_msg.VoteRequest.candidate_name)
  return candidate_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* VoteRequest::release_candidate_name() {
  // @@protoc_insertion_point(field_release:raft_msg.VoteRequest.candidate_name)
  clear_has_candidate_name();
  return candidate_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void VoteRequest::set_allocated_candidate_name(::std::string* candidate_name) {
  if (candidate_name != NULL) {
    set_has_candidate_name();
  } else {
    clear_has_candidate_name();
  }
  candidate_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), candidate_name);
  // @@protoc_insertion_point(field_set_allocated:raft_msg.VoteRequest.candidate_name)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace raft_msg

// @@protoc_insertion_point(global_scope)
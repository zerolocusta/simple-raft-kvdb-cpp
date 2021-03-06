// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raft_enum.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "raft_enum.pb.h"

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
class KVEntryDefaultTypeInternal : public ::google::protobuf::internal::ExplicitlyConstructed<KVEntry> {
} _KVEntry_default_instance_;

namespace protobuf_raft_5fenum_2eproto {


namespace {

::google::protobuf::Metadata file_level_metadata[1];
const ::google::protobuf::EnumDescriptor* file_level_enum_descriptors[4];

}  // namespace

const ::google::protobuf::uint32 TableStruct::offsets[] = {
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KVEntry, _has_bits_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KVEntry, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KVEntry, key_),
  GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(KVEntry, value_),
  0,
  1,
};

static const ::google::protobuf::internal::MigrationSchema schemas[] = {
  { 0, 6, sizeof(KVEntry)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&_KVEntry_default_instance_),
};

namespace {

void protobuf_AssignDescriptors() {
  AddDescriptors();
  ::google::protobuf::MessageFactory* factory = NULL;
  AssignDescriptors(
      "raft_enum.proto", schemas, file_default_instances, TableStruct::offsets, factory,
      file_level_metadata, file_level_enum_descriptors, NULL);
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
  _KVEntry_default_instance_.Shutdown();
  delete file_level_metadata[0].reflection;
}

void TableStruct::InitDefaultsImpl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::internal::InitProtobufDefaults();
  _KVEntry_default_instance_.DefaultConstruct();
}

void InitDefaults() {
  static GOOGLE_PROTOBUF_DECLARE_ONCE(once);
  ::google::protobuf::GoogleOnceInit(&once, &TableStruct::InitDefaultsImpl);
}
void AddDescriptorsImpl() {
  InitDefaults();
  static const char descriptor[] = {
      "\n\017raft_enum.proto\022\010raft_msg\"%\n\007KVEntry\022\013"
      "\n\003key\030\001 \002(\t\022\r\n\005value\030\002 \001(\t**\n\010JoinRole\022\016"
      "\n\nJoinServer\020\000\022\016\n\nJoinClient\020\001*I\n\022Comman"
      "dResponseErr\022\020\n\014CMDWRONGPASS\020\000\022\017\n\013CMDRED"
      "IRECT\020\001\022\020\n\014CMDUNKNOWERR\020\002*1\n\tJoinError\022\021"
      "\n\rJOINWRONGPASS\020\000\022\021\n\rJOINUNKNOWERR\020\001*L\n\013"
      "CommandType\022\022\n\016RAFT_EVENT_GET\020\000\022\022\n\016RAFT_"
      "EVENT_PUT\020\001\022\025\n\021RAFT_EVENT_DELETE\020\002"
  };
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
      descriptor, 314);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "raft_enum.proto", &protobuf_RegisterTypes);
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

}  // namespace protobuf_raft_5fenum_2eproto

const ::google::protobuf::EnumDescriptor* JoinRole_descriptor() {
  protobuf_raft_5fenum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_raft_5fenum_2eproto::file_level_enum_descriptors[0];
}
bool JoinRole_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* CommandResponseErr_descriptor() {
  protobuf_raft_5fenum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_raft_5fenum_2eproto::file_level_enum_descriptors[1];
}
bool CommandResponseErr_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* JoinError_descriptor() {
  protobuf_raft_5fenum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_raft_5fenum_2eproto::file_level_enum_descriptors[2];
}
bool JoinError_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* CommandType_descriptor() {
  protobuf_raft_5fenum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_raft_5fenum_2eproto::file_level_enum_descriptors[3];
}
bool CommandType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int KVEntry::kKeyFieldNumber;
const int KVEntry::kValueFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

KVEntry::KVEntry()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (GOOGLE_PREDICT_TRUE(this != internal_default_instance())) {
    protobuf_raft_5fenum_2eproto::InitDefaults();
  }
  SharedCtor();
  // @@protoc_insertion_point(constructor:raft_msg.KVEntry)
}
KVEntry::KVEntry(const KVEntry& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(NULL),
      _has_bits_(from._has_bits_),
      _cached_size_(0) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_key()) {
    key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
  }
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.has_value()) {
    value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
  }
  // @@protoc_insertion_point(copy_constructor:raft_msg.KVEntry)
}

void KVEntry::SharedCtor() {
  _cached_size_ = 0;
  key_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

KVEntry::~KVEntry() {
  // @@protoc_insertion_point(destructor:raft_msg.KVEntry)
  SharedDtor();
}

void KVEntry::SharedDtor() {
  key_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  value_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void KVEntry::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* KVEntry::descriptor() {
  protobuf_raft_5fenum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_raft_5fenum_2eproto::file_level_metadata[0].descriptor;
}

const KVEntry& KVEntry::default_instance() {
  protobuf_raft_5fenum_2eproto::InitDefaults();
  return *internal_default_instance();
}

KVEntry* KVEntry::New(::google::protobuf::Arena* arena) const {
  KVEntry* n = new KVEntry;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void KVEntry::Clear() {
// @@protoc_insertion_point(message_clear_start:raft_msg.KVEntry)
  if (_has_bits_[0 / 32] & 3u) {
    if (has_key()) {
      GOOGLE_DCHECK(!key_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*key_.UnsafeRawStringPointer())->clear();
    }
    if (has_value()) {
      GOOGLE_DCHECK(!value_.IsDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited()));
      (*value_.UnsafeRawStringPointer())->clear();
    }
  }
  _has_bits_.Clear();
  _internal_metadata_.Clear();
}

bool KVEntry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:raft_msg.KVEntry)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string key = 1;
      case 1: {
        if (tag == 10u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_key()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->key().data(), this->key().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "raft_msg.KVEntry.key");
        } else {
          goto handle_unusual;
        }
        break;
      }

      // optional string value = 2;
      case 2: {
        if (tag == 18u) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_value()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->value().data(), this->value().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "raft_msg.KVEntry.value");
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
  // @@protoc_insertion_point(parse_success:raft_msg.KVEntry)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:raft_msg.KVEntry)
  return false;
#undef DO_
}

void KVEntry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:raft_msg.KVEntry)
  // required string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "raft_msg.KVEntry.key");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->key(), output);
  }

  // optional string value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "raft_msg.KVEntry.value");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->value(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:raft_msg.KVEntry)
}

::google::protobuf::uint8* KVEntry::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic;  // Unused
  // @@protoc_insertion_point(serialize_to_array_start:raft_msg.KVEntry)
  // required string key = 1;
  if (has_key()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->key().data(), this->key().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "raft_msg.KVEntry.key");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->key(), target);
  }

  // optional string value = 2;
  if (has_value()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->value().data(), this->value().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "raft_msg.KVEntry.value");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->value(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:raft_msg.KVEntry)
  return target;
}

size_t KVEntry::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:raft_msg.KVEntry)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  // required string key = 1;
  if (has_key()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->key());
  }
  // optional string value = 2;
  if (has_value()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->value());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void KVEntry::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:raft_msg.KVEntry)
  GOOGLE_DCHECK_NE(&from, this);
  const KVEntry* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const KVEntry>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:raft_msg.KVEntry)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:raft_msg.KVEntry)
    MergeFrom(*source);
  }
}

void KVEntry::MergeFrom(const KVEntry& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:raft_msg.KVEntry)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from._has_bits_[0 / 32] & 3u) {
    if (from.has_key()) {
      set_has_key();
      key_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.key_);
    }
    if (from.has_value()) {
      set_has_value();
      value_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.value_);
    }
  }
}

void KVEntry::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:raft_msg.KVEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void KVEntry::CopyFrom(const KVEntry& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:raft_msg.KVEntry)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool KVEntry::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;
  return true;
}

void KVEntry::Swap(KVEntry* other) {
  if (other == this) return;
  InternalSwap(other);
}
void KVEntry::InternalSwap(KVEntry* other) {
  key_.Swap(&other->key_);
  value_.Swap(&other->value_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata KVEntry::GetMetadata() const {
  protobuf_raft_5fenum_2eproto::protobuf_AssignDescriptorsOnce();
  return protobuf_raft_5fenum_2eproto::file_level_metadata[0];
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// KVEntry

// required string key = 1;
bool KVEntry::has_key() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void KVEntry::set_has_key() {
  _has_bits_[0] |= 0x00000001u;
}
void KVEntry::clear_has_key() {
  _has_bits_[0] &= ~0x00000001u;
}
void KVEntry::clear_key() {
  key_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_key();
}
const ::std::string& KVEntry::key() const {
  // @@protoc_insertion_point(field_get:raft_msg.KVEntry.key)
  return key_.GetNoArena();
}
void KVEntry::set_key(const ::std::string& value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:raft_msg.KVEntry.key)
}
#if LANG_CXX11
void KVEntry::set_key(::std::string&& value) {
  set_has_key();
  key_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:raft_msg.KVEntry.key)
}
#endif
void KVEntry::set_key(const char* value) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:raft_msg.KVEntry.key)
}
void KVEntry::set_key(const char* value, size_t size) {
  set_has_key();
  key_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:raft_msg.KVEntry.key)
}
::std::string* KVEntry::mutable_key() {
  set_has_key();
  // @@protoc_insertion_point(field_mutable:raft_msg.KVEntry.key)
  return key_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* KVEntry::release_key() {
  // @@protoc_insertion_point(field_release:raft_msg.KVEntry.key)
  clear_has_key();
  return key_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void KVEntry::set_allocated_key(::std::string* key) {
  if (key != NULL) {
    set_has_key();
  } else {
    clear_has_key();
  }
  key_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), key);
  // @@protoc_insertion_point(field_set_allocated:raft_msg.KVEntry.key)
}

// optional string value = 2;
bool KVEntry::has_value() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void KVEntry::set_has_value() {
  _has_bits_[0] |= 0x00000002u;
}
void KVEntry::clear_has_value() {
  _has_bits_[0] &= ~0x00000002u;
}
void KVEntry::clear_value() {
  value_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_value();
}
const ::std::string& KVEntry::value() const {
  // @@protoc_insertion_point(field_get:raft_msg.KVEntry.value)
  return value_.GetNoArena();
}
void KVEntry::set_value(const ::std::string& value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:raft_msg.KVEntry.value)
}
#if LANG_CXX11
void KVEntry::set_value(::std::string&& value) {
  set_has_value();
  value_.SetNoArena(
    &::google::protobuf::internal::GetEmptyStringAlreadyInited(), std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:raft_msg.KVEntry.value)
}
#endif
void KVEntry::set_value(const char* value) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:raft_msg.KVEntry.value)
}
void KVEntry::set_value(const char* value, size_t size) {
  set_has_value();
  value_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:raft_msg.KVEntry.value)
}
::std::string* KVEntry::mutable_value() {
  set_has_value();
  // @@protoc_insertion_point(field_mutable:raft_msg.KVEntry.value)
  return value_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
::std::string* KVEntry::release_value() {
  // @@protoc_insertion_point(field_release:raft_msg.KVEntry.value)
  clear_has_value();
  return value_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
void KVEntry::set_allocated_value(::std::string* value) {
  if (value != NULL) {
    set_has_value();
  } else {
    clear_has_value();
  }
  value_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set_allocated:raft_msg.KVEntry.value)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace raft_msg

// @@protoc_insertion_point(global_scope)

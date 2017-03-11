// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: raft_msg.proto

#ifndef PROTOBUF_raft_5fmsg_2eproto__INCLUDED
#define PROTOBUF_raft_5fmsg_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3002000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3002000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
#include "append_entries_request.pb.h"
#include "append_entries_response.pb.h"
#include "command_request.pb.h"
#include "command_response.pb.h"
#include "join_request.pb.h"
#include "join_response.pb.h"
#include "vote_request.pb.h"
#include "vote_response.pb.h"
// @@protoc_insertion_point(includes)
namespace raft_msg {
class AppendEntriesRequest;
class AppendEntriesRequestDefaultTypeInternal;
extern AppendEntriesRequestDefaultTypeInternal _AppendEntriesRequest_default_instance_;
class AppendEntriesResponse;
class AppendEntriesResponseDefaultTypeInternal;
extern AppendEntriesResponseDefaultTypeInternal _AppendEntriesResponse_default_instance_;
class CommandRequest;
class CommandRequestDefaultTypeInternal;
extern CommandRequestDefaultTypeInternal _CommandRequest_default_instance_;
class CommandResponse;
class CommandResponseDefaultTypeInternal;
extern CommandResponseDefaultTypeInternal _CommandResponse_default_instance_;
class JoinRequest;
class JoinRequestDefaultTypeInternal;
extern JoinRequestDefaultTypeInternal _JoinRequest_default_instance_;
class JoinResponse;
class JoinResponseDefaultTypeInternal;
extern JoinResponseDefaultTypeInternal _JoinResponse_default_instance_;
class RaftMessage;
class RaftMessageDefaultTypeInternal;
extern RaftMessageDefaultTypeInternal _RaftMessage_default_instance_;
class VoteRequest;
class VoteRequestDefaultTypeInternal;
extern VoteRequestDefaultTypeInternal _VoteRequest_default_instance_;
class VoteResponse;
class VoteResponseDefaultTypeInternal;
extern VoteResponseDefaultTypeInternal _VoteResponse_default_instance_;
}  // namespace raft_msg

namespace raft_msg {

namespace protobuf_raft_5fmsg_2eproto {
// Internal implementation detail -- do not call these.
struct TableStruct {
  static const ::google::protobuf::uint32 offsets[];
  static void InitDefaultsImpl();
  static void Shutdown();
};
void AddDescriptors();
void InitDefaults();
}  // namespace protobuf_raft_5fmsg_2eproto

// ===================================================================

class RaftMessage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:raft_msg.RaftMessage) */ {
 public:
  RaftMessage();
  virtual ~RaftMessage();

  RaftMessage(const RaftMessage& from);

  inline RaftMessage& operator=(const RaftMessage& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _internal_metadata_.unknown_fields();
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return _internal_metadata_.mutable_unknown_fields();
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const RaftMessage& default_instance();

  enum RaftMsgCase {
    kAppendEntriesRequest = 1,
    kAppendEntriesResponse = 2,
    kCommandRequest = 3,
    kCommandResponse = 4,
    kJoinRequest = 5,
    kJoinResponse = 6,
    kVoteRequest = 7,
    kVoteResponse = 8,
    RAFT_MSG_NOT_SET = 0,
  };

  static inline const RaftMessage* internal_default_instance() {
    return reinterpret_cast<const RaftMessage*>(
               &_RaftMessage_default_instance_);
  }

  void Swap(RaftMessage* other);

  // implements Message ----------------------------------------------

  inline RaftMessage* New() const PROTOBUF_FINAL { return New(NULL); }

  RaftMessage* New(::google::protobuf::Arena* arena) const PROTOBUF_FINAL;
  void CopyFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void MergeFrom(const ::google::protobuf::Message& from) PROTOBUF_FINAL;
  void CopyFrom(const RaftMessage& from);
  void MergeFrom(const RaftMessage& from);
  void Clear() PROTOBUF_FINAL;
  bool IsInitialized() const PROTOBUF_FINAL;

  size_t ByteSizeLong() const PROTOBUF_FINAL;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input) PROTOBUF_FINAL;
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* target) const PROTOBUF_FINAL;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output)
      const PROTOBUF_FINAL {
    return InternalSerializeWithCachedSizesToArray(
        ::google::protobuf::io::CodedOutputStream::IsDefaultSerializationDeterministic(), output);
  }
  int GetCachedSize() const PROTOBUF_FINAL { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const PROTOBUF_FINAL;
  void InternalSwap(RaftMessage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return NULL;
  }
  inline void* MaybeArenaPtr() const {
    return NULL;
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const PROTOBUF_FINAL;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .raft_msg.AppendEntriesRequest append_entries_request = 1;
  bool has_append_entries_request() const;
  void clear_append_entries_request();
  static const int kAppendEntriesRequestFieldNumber = 1;
  const ::raft_msg::AppendEntriesRequest& append_entries_request() const;
  ::raft_msg::AppendEntriesRequest* mutable_append_entries_request();
  ::raft_msg::AppendEntriesRequest* release_append_entries_request();
  void set_allocated_append_entries_request(::raft_msg::AppendEntriesRequest* append_entries_request);

  // optional .raft_msg.AppendEntriesResponse append_entries_response = 2;
  bool has_append_entries_response() const;
  void clear_append_entries_response();
  static const int kAppendEntriesResponseFieldNumber = 2;
  const ::raft_msg::AppendEntriesResponse& append_entries_response() const;
  ::raft_msg::AppendEntriesResponse* mutable_append_entries_response();
  ::raft_msg::AppendEntriesResponse* release_append_entries_response();
  void set_allocated_append_entries_response(::raft_msg::AppendEntriesResponse* append_entries_response);

  // optional .raft_msg.CommandRequest command_request = 3;
  bool has_command_request() const;
  void clear_command_request();
  static const int kCommandRequestFieldNumber = 3;
  const ::raft_msg::CommandRequest& command_request() const;
  ::raft_msg::CommandRequest* mutable_command_request();
  ::raft_msg::CommandRequest* release_command_request();
  void set_allocated_command_request(::raft_msg::CommandRequest* command_request);

  // optional .raft_msg.CommandResponse command_response = 4;
  bool has_command_response() const;
  void clear_command_response();
  static const int kCommandResponseFieldNumber = 4;
  const ::raft_msg::CommandResponse& command_response() const;
  ::raft_msg::CommandResponse* mutable_command_response();
  ::raft_msg::CommandResponse* release_command_response();
  void set_allocated_command_response(::raft_msg::CommandResponse* command_response);

  // optional .raft_msg.JoinRequest join_request = 5;
  bool has_join_request() const;
  void clear_join_request();
  static const int kJoinRequestFieldNumber = 5;
  const ::raft_msg::JoinRequest& join_request() const;
  ::raft_msg::JoinRequest* mutable_join_request();
  ::raft_msg::JoinRequest* release_join_request();
  void set_allocated_join_request(::raft_msg::JoinRequest* join_request);

  // optional .raft_msg.JoinResponse join_response = 6;
  bool has_join_response() const;
  void clear_join_response();
  static const int kJoinResponseFieldNumber = 6;
  const ::raft_msg::JoinResponse& join_response() const;
  ::raft_msg::JoinResponse* mutable_join_response();
  ::raft_msg::JoinResponse* release_join_response();
  void set_allocated_join_response(::raft_msg::JoinResponse* join_response);

  // optional .raft_msg.VoteRequest vote_request = 7;
  bool has_vote_request() const;
  void clear_vote_request();
  static const int kVoteRequestFieldNumber = 7;
  const ::raft_msg::VoteRequest& vote_request() const;
  ::raft_msg::VoteRequest* mutable_vote_request();
  ::raft_msg::VoteRequest* release_vote_request();
  void set_allocated_vote_request(::raft_msg::VoteRequest* vote_request);

  // optional .raft_msg.VoteResponse vote_response = 8;
  bool has_vote_response() const;
  void clear_vote_response();
  static const int kVoteResponseFieldNumber = 8;
  const ::raft_msg::VoteResponse& vote_response() const;
  ::raft_msg::VoteResponse* mutable_vote_response();
  ::raft_msg::VoteResponse* release_vote_response();
  void set_allocated_vote_response(::raft_msg::VoteResponse* vote_response);

  RaftMsgCase raft_msg_case() const;
  // @@protoc_insertion_point(class_scope:raft_msg.RaftMessage)
 private:
  void set_has_append_entries_request();
  void set_has_append_entries_response();
  void set_has_command_request();
  void set_has_command_response();
  void set_has_join_request();
  void set_has_join_response();
  void set_has_vote_request();
  void set_has_vote_response();

  inline bool has_raft_msg() const;
  void clear_raft_msg();
  inline void clear_has_raft_msg();

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::internal::HasBits<1> _has_bits_;
  mutable int _cached_size_;
  union RaftMsgUnion {
    RaftMsgUnion() {}
    ::raft_msg::AppendEntriesRequest* append_entries_request_;
    ::raft_msg::AppendEntriesResponse* append_entries_response_;
    ::raft_msg::CommandRequest* command_request_;
    ::raft_msg::CommandResponse* command_response_;
    ::raft_msg::JoinRequest* join_request_;
    ::raft_msg::JoinResponse* join_response_;
    ::raft_msg::VoteRequest* vote_request_;
    ::raft_msg::VoteResponse* vote_response_;
  } raft_msg_;
  ::google::protobuf::uint32 _oneof_case_[1];

  friend struct  protobuf_raft_5fmsg_2eproto::TableStruct;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// RaftMessage

// optional .raft_msg.AppendEntriesRequest append_entries_request = 1;
inline bool RaftMessage::has_append_entries_request() const {
  return raft_msg_case() == kAppendEntriesRequest;
}
inline void RaftMessage::set_has_append_entries_request() {
  _oneof_case_[0] = kAppendEntriesRequest;
}
inline void RaftMessage::clear_append_entries_request() {
  if (has_append_entries_request()) {
    delete raft_msg_.append_entries_request_;
    clear_has_raft_msg();
  }
}
inline  const ::raft_msg::AppendEntriesRequest& RaftMessage::append_entries_request() const {
  // @@protoc_insertion_point(field_get:raft_msg.RaftMessage.append_entries_request)
  return has_append_entries_request()
      ? *raft_msg_.append_entries_request_
      : ::raft_msg::AppendEntriesRequest::default_instance();
}
inline ::raft_msg::AppendEntriesRequest* RaftMessage::mutable_append_entries_request() {
  if (!has_append_entries_request()) {
    clear_raft_msg();
    set_has_append_entries_request();
    raft_msg_.append_entries_request_ = new ::raft_msg::AppendEntriesRequest;
  }
  // @@protoc_insertion_point(field_mutable:raft_msg.RaftMessage.append_entries_request)
  return raft_msg_.append_entries_request_;
}
inline ::raft_msg::AppendEntriesRequest* RaftMessage::release_append_entries_request() {
  // @@protoc_insertion_point(field_release:raft_msg.RaftMessage.append_entries_request)
  if (has_append_entries_request()) {
    clear_has_raft_msg();
    ::raft_msg::AppendEntriesRequest* temp = raft_msg_.append_entries_request_;
    raft_msg_.append_entries_request_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void RaftMessage::set_allocated_append_entries_request(::raft_msg::AppendEntriesRequest* append_entries_request) {
  clear_raft_msg();
  if (append_entries_request) {
    set_has_append_entries_request();
    raft_msg_.append_entries_request_ = append_entries_request;
  }
  // @@protoc_insertion_point(field_set_allocated:raft_msg.RaftMessage.append_entries_request)
}

// optional .raft_msg.AppendEntriesResponse append_entries_response = 2;
inline bool RaftMessage::has_append_entries_response() const {
  return raft_msg_case() == kAppendEntriesResponse;
}
inline void RaftMessage::set_has_append_entries_response() {
  _oneof_case_[0] = kAppendEntriesResponse;
}
inline void RaftMessage::clear_append_entries_response() {
  if (has_append_entries_response()) {
    delete raft_msg_.append_entries_response_;
    clear_has_raft_msg();
  }
}
inline  const ::raft_msg::AppendEntriesResponse& RaftMessage::append_entries_response() const {
  // @@protoc_insertion_point(field_get:raft_msg.RaftMessage.append_entries_response)
  return has_append_entries_response()
      ? *raft_msg_.append_entries_response_
      : ::raft_msg::AppendEntriesResponse::default_instance();
}
inline ::raft_msg::AppendEntriesResponse* RaftMessage::mutable_append_entries_response() {
  if (!has_append_entries_response()) {
    clear_raft_msg();
    set_has_append_entries_response();
    raft_msg_.append_entries_response_ = new ::raft_msg::AppendEntriesResponse;
  }
  // @@protoc_insertion_point(field_mutable:raft_msg.RaftMessage.append_entries_response)
  return raft_msg_.append_entries_response_;
}
inline ::raft_msg::AppendEntriesResponse* RaftMessage::release_append_entries_response() {
  // @@protoc_insertion_point(field_release:raft_msg.RaftMessage.append_entries_response)
  if (has_append_entries_response()) {
    clear_has_raft_msg();
    ::raft_msg::AppendEntriesResponse* temp = raft_msg_.append_entries_response_;
    raft_msg_.append_entries_response_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void RaftMessage::set_allocated_append_entries_response(::raft_msg::AppendEntriesResponse* append_entries_response) {
  clear_raft_msg();
  if (append_entries_response) {
    set_has_append_entries_response();
    raft_msg_.append_entries_response_ = append_entries_response;
  }
  // @@protoc_insertion_point(field_set_allocated:raft_msg.RaftMessage.append_entries_response)
}

// optional .raft_msg.CommandRequest command_request = 3;
inline bool RaftMessage::has_command_request() const {
  return raft_msg_case() == kCommandRequest;
}
inline void RaftMessage::set_has_command_request() {
  _oneof_case_[0] = kCommandRequest;
}
inline void RaftMessage::clear_command_request() {
  if (has_command_request()) {
    delete raft_msg_.command_request_;
    clear_has_raft_msg();
  }
}
inline  const ::raft_msg::CommandRequest& RaftMessage::command_request() const {
  // @@protoc_insertion_point(field_get:raft_msg.RaftMessage.command_request)
  return has_command_request()
      ? *raft_msg_.command_request_
      : ::raft_msg::CommandRequest::default_instance();
}
inline ::raft_msg::CommandRequest* RaftMessage::mutable_command_request() {
  if (!has_command_request()) {
    clear_raft_msg();
    set_has_command_request();
    raft_msg_.command_request_ = new ::raft_msg::CommandRequest;
  }
  // @@protoc_insertion_point(field_mutable:raft_msg.RaftMessage.command_request)
  return raft_msg_.command_request_;
}
inline ::raft_msg::CommandRequest* RaftMessage::release_command_request() {
  // @@protoc_insertion_point(field_release:raft_msg.RaftMessage.command_request)
  if (has_command_request()) {
    clear_has_raft_msg();
    ::raft_msg::CommandRequest* temp = raft_msg_.command_request_;
    raft_msg_.command_request_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void RaftMessage::set_allocated_command_request(::raft_msg::CommandRequest* command_request) {
  clear_raft_msg();
  if (command_request) {
    set_has_command_request();
    raft_msg_.command_request_ = command_request;
  }
  // @@protoc_insertion_point(field_set_allocated:raft_msg.RaftMessage.command_request)
}

// optional .raft_msg.CommandResponse command_response = 4;
inline bool RaftMessage::has_command_response() const {
  return raft_msg_case() == kCommandResponse;
}
inline void RaftMessage::set_has_command_response() {
  _oneof_case_[0] = kCommandResponse;
}
inline void RaftMessage::clear_command_response() {
  if (has_command_response()) {
    delete raft_msg_.command_response_;
    clear_has_raft_msg();
  }
}
inline  const ::raft_msg::CommandResponse& RaftMessage::command_response() const {
  // @@protoc_insertion_point(field_get:raft_msg.RaftMessage.command_response)
  return has_command_response()
      ? *raft_msg_.command_response_
      : ::raft_msg::CommandResponse::default_instance();
}
inline ::raft_msg::CommandResponse* RaftMessage::mutable_command_response() {
  if (!has_command_response()) {
    clear_raft_msg();
    set_has_command_response();
    raft_msg_.command_response_ = new ::raft_msg::CommandResponse;
  }
  // @@protoc_insertion_point(field_mutable:raft_msg.RaftMessage.command_response)
  return raft_msg_.command_response_;
}
inline ::raft_msg::CommandResponse* RaftMessage::release_command_response() {
  // @@protoc_insertion_point(field_release:raft_msg.RaftMessage.command_response)
  if (has_command_response()) {
    clear_has_raft_msg();
    ::raft_msg::CommandResponse* temp = raft_msg_.command_response_;
    raft_msg_.command_response_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void RaftMessage::set_allocated_command_response(::raft_msg::CommandResponse* command_response) {
  clear_raft_msg();
  if (command_response) {
    set_has_command_response();
    raft_msg_.command_response_ = command_response;
  }
  // @@protoc_insertion_point(field_set_allocated:raft_msg.RaftMessage.command_response)
}

// optional .raft_msg.JoinRequest join_request = 5;
inline bool RaftMessage::has_join_request() const {
  return raft_msg_case() == kJoinRequest;
}
inline void RaftMessage::set_has_join_request() {
  _oneof_case_[0] = kJoinRequest;
}
inline void RaftMessage::clear_join_request() {
  if (has_join_request()) {
    delete raft_msg_.join_request_;
    clear_has_raft_msg();
  }
}
inline  const ::raft_msg::JoinRequest& RaftMessage::join_request() const {
  // @@protoc_insertion_point(field_get:raft_msg.RaftMessage.join_request)
  return has_join_request()
      ? *raft_msg_.join_request_
      : ::raft_msg::JoinRequest::default_instance();
}
inline ::raft_msg::JoinRequest* RaftMessage::mutable_join_request() {
  if (!has_join_request()) {
    clear_raft_msg();
    set_has_join_request();
    raft_msg_.join_request_ = new ::raft_msg::JoinRequest;
  }
  // @@protoc_insertion_point(field_mutable:raft_msg.RaftMessage.join_request)
  return raft_msg_.join_request_;
}
inline ::raft_msg::JoinRequest* RaftMessage::release_join_request() {
  // @@protoc_insertion_point(field_release:raft_msg.RaftMessage.join_request)
  if (has_join_request()) {
    clear_has_raft_msg();
    ::raft_msg::JoinRequest* temp = raft_msg_.join_request_;
    raft_msg_.join_request_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void RaftMessage::set_allocated_join_request(::raft_msg::JoinRequest* join_request) {
  clear_raft_msg();
  if (join_request) {
    set_has_join_request();
    raft_msg_.join_request_ = join_request;
  }
  // @@protoc_insertion_point(field_set_allocated:raft_msg.RaftMessage.join_request)
}

// optional .raft_msg.JoinResponse join_response = 6;
inline bool RaftMessage::has_join_response() const {
  return raft_msg_case() == kJoinResponse;
}
inline void RaftMessage::set_has_join_response() {
  _oneof_case_[0] = kJoinResponse;
}
inline void RaftMessage::clear_join_response() {
  if (has_join_response()) {
    delete raft_msg_.join_response_;
    clear_has_raft_msg();
  }
}
inline  const ::raft_msg::JoinResponse& RaftMessage::join_response() const {
  // @@protoc_insertion_point(field_get:raft_msg.RaftMessage.join_response)
  return has_join_response()
      ? *raft_msg_.join_response_
      : ::raft_msg::JoinResponse::default_instance();
}
inline ::raft_msg::JoinResponse* RaftMessage::mutable_join_response() {
  if (!has_join_response()) {
    clear_raft_msg();
    set_has_join_response();
    raft_msg_.join_response_ = new ::raft_msg::JoinResponse;
  }
  // @@protoc_insertion_point(field_mutable:raft_msg.RaftMessage.join_response)
  return raft_msg_.join_response_;
}
inline ::raft_msg::JoinResponse* RaftMessage::release_join_response() {
  // @@protoc_insertion_point(field_release:raft_msg.RaftMessage.join_response)
  if (has_join_response()) {
    clear_has_raft_msg();
    ::raft_msg::JoinResponse* temp = raft_msg_.join_response_;
    raft_msg_.join_response_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void RaftMessage::set_allocated_join_response(::raft_msg::JoinResponse* join_response) {
  clear_raft_msg();
  if (join_response) {
    set_has_join_response();
    raft_msg_.join_response_ = join_response;
  }
  // @@protoc_insertion_point(field_set_allocated:raft_msg.RaftMessage.join_response)
}

// optional .raft_msg.VoteRequest vote_request = 7;
inline bool RaftMessage::has_vote_request() const {
  return raft_msg_case() == kVoteRequest;
}
inline void RaftMessage::set_has_vote_request() {
  _oneof_case_[0] = kVoteRequest;
}
inline void RaftMessage::clear_vote_request() {
  if (has_vote_request()) {
    delete raft_msg_.vote_request_;
    clear_has_raft_msg();
  }
}
inline  const ::raft_msg::VoteRequest& RaftMessage::vote_request() const {
  // @@protoc_insertion_point(field_get:raft_msg.RaftMessage.vote_request)
  return has_vote_request()
      ? *raft_msg_.vote_request_
      : ::raft_msg::VoteRequest::default_instance();
}
inline ::raft_msg::VoteRequest* RaftMessage::mutable_vote_request() {
  if (!has_vote_request()) {
    clear_raft_msg();
    set_has_vote_request();
    raft_msg_.vote_request_ = new ::raft_msg::VoteRequest;
  }
  // @@protoc_insertion_point(field_mutable:raft_msg.RaftMessage.vote_request)
  return raft_msg_.vote_request_;
}
inline ::raft_msg::VoteRequest* RaftMessage::release_vote_request() {
  // @@protoc_insertion_point(field_release:raft_msg.RaftMessage.vote_request)
  if (has_vote_request()) {
    clear_has_raft_msg();
    ::raft_msg::VoteRequest* temp = raft_msg_.vote_request_;
    raft_msg_.vote_request_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void RaftMessage::set_allocated_vote_request(::raft_msg::VoteRequest* vote_request) {
  clear_raft_msg();
  if (vote_request) {
    set_has_vote_request();
    raft_msg_.vote_request_ = vote_request;
  }
  // @@protoc_insertion_point(field_set_allocated:raft_msg.RaftMessage.vote_request)
}

// optional .raft_msg.VoteResponse vote_response = 8;
inline bool RaftMessage::has_vote_response() const {
  return raft_msg_case() == kVoteResponse;
}
inline void RaftMessage::set_has_vote_response() {
  _oneof_case_[0] = kVoteResponse;
}
inline void RaftMessage::clear_vote_response() {
  if (has_vote_response()) {
    delete raft_msg_.vote_response_;
    clear_has_raft_msg();
  }
}
inline  const ::raft_msg::VoteResponse& RaftMessage::vote_response() const {
  // @@protoc_insertion_point(field_get:raft_msg.RaftMessage.vote_response)
  return has_vote_response()
      ? *raft_msg_.vote_response_
      : ::raft_msg::VoteResponse::default_instance();
}
inline ::raft_msg::VoteResponse* RaftMessage::mutable_vote_response() {
  if (!has_vote_response()) {
    clear_raft_msg();
    set_has_vote_response();
    raft_msg_.vote_response_ = new ::raft_msg::VoteResponse;
  }
  // @@protoc_insertion_point(field_mutable:raft_msg.RaftMessage.vote_response)
  return raft_msg_.vote_response_;
}
inline ::raft_msg::VoteResponse* RaftMessage::release_vote_response() {
  // @@protoc_insertion_point(field_release:raft_msg.RaftMessage.vote_response)
  if (has_vote_response()) {
    clear_has_raft_msg();
    ::raft_msg::VoteResponse* temp = raft_msg_.vote_response_;
    raft_msg_.vote_response_ = NULL;
    return temp;
  } else {
    return NULL;
  }
}
inline void RaftMessage::set_allocated_vote_response(::raft_msg::VoteResponse* vote_response) {
  clear_raft_msg();
  if (vote_response) {
    set_has_vote_response();
    raft_msg_.vote_response_ = vote_response;
  }
  // @@protoc_insertion_point(field_set_allocated:raft_msg.RaftMessage.vote_response)
}

inline bool RaftMessage::has_raft_msg() const {
  return raft_msg_case() != RAFT_MSG_NOT_SET;
}
inline void RaftMessage::clear_has_raft_msg() {
  _oneof_case_[0] = RAFT_MSG_NOT_SET;
}
inline RaftMessage::RaftMsgCase RaftMessage::raft_msg_case() const {
  return RaftMessage::RaftMsgCase(_oneof_case_[0]);
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)


}  // namespace raft_msg

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_raft_5fmsg_2eproto__INCLUDED

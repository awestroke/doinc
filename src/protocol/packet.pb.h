// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: packet.proto

#ifndef PROTOBUF_packet_2eproto__INCLUDED
#define PROTOBUF_packet_2eproto__INCLUDED

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace protocol {

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_packet_2eproto();
void protobuf_AssignDesc_packet_2eproto();
void protobuf_ShutdownFile_packet_2eproto();

class Packet;
class NodeList;

enum Packet_FunctionCode {
  Packet_FunctionCode_ERROR = 0,
  Packet_FunctionCode_OK = 1,
  Packet_FunctionCode_NS_REGISTER = 2,
  Packet_FunctionCode_NS_REQUEST_NODE = 3,
  Packet_FunctionCode_NODE = 4,
  Packet_FunctionCode_NODE_LIST = 5,
  Packet_FunctionCode_GET_NODES = 6,
  Packet_FunctionCode_PING = 7,
  Packet_FunctionCode_PONG = 8
};
bool Packet_FunctionCode_IsValid(int value);
const Packet_FunctionCode Packet_FunctionCode_FunctionCode_MIN = Packet_FunctionCode_ERROR;
const Packet_FunctionCode Packet_FunctionCode_FunctionCode_MAX = Packet_FunctionCode_PONG;
const int Packet_FunctionCode_FunctionCode_ARRAYSIZE = Packet_FunctionCode_FunctionCode_MAX + 1;

const ::google::protobuf::EnumDescriptor* Packet_FunctionCode_descriptor();
inline const ::std::string& Packet_FunctionCode_Name(Packet_FunctionCode value) {
  return ::google::protobuf::internal::NameOfEnum(
    Packet_FunctionCode_descriptor(), value);
}
inline bool Packet_FunctionCode_Parse(
    const ::std::string& name, Packet_FunctionCode* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Packet_FunctionCode>(
    Packet_FunctionCode_descriptor(), name, value);
}
// ===================================================================

class Packet : public ::google::protobuf::Message {
 public:
  Packet();
  virtual ~Packet();

  Packet(const Packet& from);

  inline Packet& operator=(const Packet& from) {
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
  static const Packet& default_instance();

  void Swap(Packet* other);

  // implements Message ----------------------------------------------

  Packet* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Packet& from);
  void MergeFrom(const Packet& from);
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

  typedef Packet_FunctionCode FunctionCode;
  static const FunctionCode ERROR = Packet_FunctionCode_ERROR;
  static const FunctionCode OK = Packet_FunctionCode_OK;
  static const FunctionCode NS_REGISTER = Packet_FunctionCode_NS_REGISTER;
  static const FunctionCode NS_REQUEST_NODE = Packet_FunctionCode_NS_REQUEST_NODE;
  static const FunctionCode NODE = Packet_FunctionCode_NODE;
  static const FunctionCode NODE_LIST = Packet_FunctionCode_NODE_LIST;
  static const FunctionCode GET_NODES = Packet_FunctionCode_GET_NODES;
  static const FunctionCode PING = Packet_FunctionCode_PING;
  static const FunctionCode PONG = Packet_FunctionCode_PONG;
  static inline bool FunctionCode_IsValid(int value) {
    return Packet_FunctionCode_IsValid(value);
  }
  static const FunctionCode FunctionCode_MIN =
    Packet_FunctionCode_FunctionCode_MIN;
  static const FunctionCode FunctionCode_MAX =
    Packet_FunctionCode_FunctionCode_MAX;
  static const int FunctionCode_ARRAYSIZE =
    Packet_FunctionCode_FunctionCode_ARRAYSIZE;
  static inline const ::google::protobuf::EnumDescriptor*
  FunctionCode_descriptor() {
    return Packet_FunctionCode_descriptor();
  }
  static inline const ::std::string& FunctionCode_Name(FunctionCode value) {
    return Packet_FunctionCode_Name(value);
  }
  static inline bool FunctionCode_Parse(const ::std::string& name,
      FunctionCode* value) {
    return Packet_FunctionCode_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  // required .protocol.Packet.FunctionCode code = 1;
  inline bool has_code() const;
  inline void clear_code();
  static const int kCodeFieldNumber = 1;
  inline ::protocol::Packet_FunctionCode code() const;
  inline void set_code(::protocol::Packet_FunctionCode value);

  // required int64 crc = 2;
  inline bool has_crc() const;
  inline void clear_crc();
  static const int kCrcFieldNumber = 2;
  inline ::google::protobuf::int64 crc() const;
  inline void set_crc(::google::protobuf::int64 value);

  // optional bytes data = 3;
  inline bool has_data() const;
  inline void clear_data();
  static const int kDataFieldNumber = 3;
  inline const ::std::string& data() const;
  inline void set_data(const ::std::string& value);
  inline void set_data(const char* value);
  inline void set_data(const void* value, size_t size);
  inline ::std::string* mutable_data();
  inline ::std::string* release_data();
  inline void set_allocated_data(::std::string* data);

  // @@protoc_insertion_point(class_scope:protocol.Packet)
 private:
  inline void set_has_code();
  inline void clear_has_code();
  inline void set_has_crc();
  inline void clear_has_crc();
  inline void set_has_data();
  inline void clear_has_data();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::int64 crc_;
  ::std::string* data_;
  int code_;
  friend void  protobuf_AddDesc_packet_2eproto();
  friend void protobuf_AssignDesc_packet_2eproto();
  friend void protobuf_ShutdownFile_packet_2eproto();

  void InitAsDefaultInstance();
  static Packet* default_instance_;
};
// -------------------------------------------------------------------

class NodeList : public ::google::protobuf::Message {
 public:
  NodeList();
  virtual ~NodeList();

  NodeList(const NodeList& from);

  inline NodeList& operator=(const NodeList& from) {
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
  static const NodeList& default_instance();

  void Swap(NodeList* other);

  // implements Message ----------------------------------------------

  NodeList* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const NodeList& from);
  void MergeFrom(const NodeList& from);
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

  // repeated string data = 1;
  inline int data_size() const;
  inline void clear_data();
  static const int kDataFieldNumber = 1;
  inline const ::std::string& data(int index) const;
  inline ::std::string* mutable_data(int index);
  inline void set_data(int index, const ::std::string& value);
  inline void set_data(int index, const char* value);
  inline void set_data(int index, const char* value, size_t size);
  inline ::std::string* add_data();
  inline void add_data(const ::std::string& value);
  inline void add_data(const char* value);
  inline void add_data(const char* value, size_t size);
  inline const ::google::protobuf::RepeatedPtrField< ::std::string>& data() const;
  inline ::google::protobuf::RepeatedPtrField< ::std::string>* mutable_data();

  // @@protoc_insertion_point(class_scope:protocol.NodeList)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::uint32 _has_bits_[1];
  mutable int _cached_size_;
  ::google::protobuf::RepeatedPtrField< ::std::string> data_;
  friend void  protobuf_AddDesc_packet_2eproto();
  friend void protobuf_AssignDesc_packet_2eproto();
  friend void protobuf_ShutdownFile_packet_2eproto();

  void InitAsDefaultInstance();
  static NodeList* default_instance_;
};
// ===================================================================


// ===================================================================

// Packet

// required .protocol.Packet.FunctionCode code = 1;
inline bool Packet::has_code() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void Packet::set_has_code() {
  _has_bits_[0] |= 0x00000001u;
}
inline void Packet::clear_has_code() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void Packet::clear_code() {
  code_ = 0;
  clear_has_code();
}
inline ::protocol::Packet_FunctionCode Packet::code() const {
  // @@protoc_insertion_point(field_get:protocol.Packet.code)
  return static_cast< ::protocol::Packet_FunctionCode >(code_);
}
inline void Packet::set_code(::protocol::Packet_FunctionCode value) {
  assert(::protocol::Packet_FunctionCode_IsValid(value));
  set_has_code();
  code_ = value;
  // @@protoc_insertion_point(field_set:protocol.Packet.code)
}

// required int64 crc = 2;
inline bool Packet::has_crc() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void Packet::set_has_crc() {
  _has_bits_[0] |= 0x00000002u;
}
inline void Packet::clear_has_crc() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void Packet::clear_crc() {
  crc_ = GOOGLE_LONGLONG(0);
  clear_has_crc();
}
inline ::google::protobuf::int64 Packet::crc() const {
  // @@protoc_insertion_point(field_get:protocol.Packet.crc)
  return crc_;
}
inline void Packet::set_crc(::google::protobuf::int64 value) {
  set_has_crc();
  crc_ = value;
  // @@protoc_insertion_point(field_set:protocol.Packet.crc)
}

// optional bytes data = 3;
inline bool Packet::has_data() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void Packet::set_has_data() {
  _has_bits_[0] |= 0x00000004u;
}
inline void Packet::clear_has_data() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void Packet::clear_data() {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_->clear();
  }
  clear_has_data();
}
inline const ::std::string& Packet::data() const {
  // @@protoc_insertion_point(field_get:protocol.Packet.data)
  return *data_;
}
inline void Packet::set_data(const ::std::string& value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set:protocol.Packet.data)
}
inline void Packet::set_data(const char* value) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.Packet.data)
}
inline void Packet::set_data(const void* value, size_t size) {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  data_->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.Packet.data)
}
inline ::std::string* Packet::mutable_data() {
  set_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    data_ = new ::std::string;
  }
  // @@protoc_insertion_point(field_mutable:protocol.Packet.data)
  return data_;
}
inline ::std::string* Packet::release_data() {
  clear_has_data();
  if (data_ == &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    return NULL;
  } else {
    ::std::string* temp = data_;
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    return temp;
  }
}
inline void Packet::set_allocated_data(::std::string* data) {
  if (data_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete data_;
  }
  if (data) {
    set_has_data();
    data_ = data;
  } else {
    clear_has_data();
    data_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  }
  // @@protoc_insertion_point(field_set_allocated:protocol.Packet.data)
}

// -------------------------------------------------------------------

// NodeList

// repeated string data = 1;
inline int NodeList::data_size() const {
  return data_.size();
}
inline void NodeList::clear_data() {
  data_.Clear();
}
inline const ::std::string& NodeList::data(int index) const {
  // @@protoc_insertion_point(field_get:protocol.NodeList.data)
  return data_.Get(index);
}
inline ::std::string* NodeList::mutable_data(int index) {
  // @@protoc_insertion_point(field_mutable:protocol.NodeList.data)
  return data_.Mutable(index);
}
inline void NodeList::set_data(int index, const ::std::string& value) {
  // @@protoc_insertion_point(field_set:protocol.NodeList.data)
  data_.Mutable(index)->assign(value);
}
inline void NodeList::set_data(int index, const char* value) {
  data_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:protocol.NodeList.data)
}
inline void NodeList::set_data(int index, const char* value, size_t size) {
  data_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:protocol.NodeList.data)
}
inline ::std::string* NodeList::add_data() {
  return data_.Add();
}
inline void NodeList::add_data(const ::std::string& value) {
  data_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:protocol.NodeList.data)
}
inline void NodeList::add_data(const char* value) {
  data_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:protocol.NodeList.data)
}
inline void NodeList::add_data(const char* value, size_t size) {
  data_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:protocol.NodeList.data)
}
inline const ::google::protobuf::RepeatedPtrField< ::std::string>&
NodeList::data() const {
  // @@protoc_insertion_point(field_list:protocol.NodeList.data)
  return data_;
}
inline ::google::protobuf::RepeatedPtrField< ::std::string>*
NodeList::mutable_data() {
  // @@protoc_insertion_point(field_mutable_list:protocol.NodeList.data)
  return &data_;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace protocol

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::protocol::Packet_FunctionCode> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::protocol::Packet_FunctionCode>() {
  return ::protocol::Packet_FunctionCode_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_packet_2eproto__INCLUDED

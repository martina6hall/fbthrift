/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.h"

#include "thrift/compiler/test/fixtures/includes/gen-cpp2/module_types.tcc"


#include <algorithm>

namespace cpp2 {

void MyStruct::__clear() {
  ::apache::thrift::Cpp2Ops<  ::cpp2::Included>::clear(&MyIncludedField);
  __isset.__clear();
}

bool MyStruct::operator==(const MyStruct& rhs) const {
  if (!((MyIncludedField == rhs.MyIncludedField))) {
    return false;
  }
  return true;
}

const  ::cpp2::Included& MyStruct::get_MyIncludedField() const& {
  return MyIncludedField;
}

 ::cpp2::Included MyStruct::get_MyIncludedField() && {
  return std::move(MyIncludedField);
}

void swap(MyStruct& a, MyStruct& b) {
  using ::std::swap;
  swap(a.MyIncludedField, b.MyIncludedField);
  swap(a.__isset, b.__isset);
}

template uint32_t MyStruct::read<>(apache::thrift::BinaryProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::BinaryProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::BinaryProtocolWriter const*) const;
template uint32_t MyStruct::read<>(apache::thrift::CompactProtocolReader*);
template uint32_t MyStruct::write<>(apache::thrift::CompactProtocolWriter*) const;
template uint32_t MyStruct::serializedSize<>(apache::thrift::CompactProtocolWriter const*) const;
template uint32_t MyStruct::serializedSizeZC<>(apache::thrift::CompactProtocolWriter const*) const;

} // cpp2
namespace apache { namespace thrift {

}} // apache::thrift
namespace cpp2 {

} // cpp2
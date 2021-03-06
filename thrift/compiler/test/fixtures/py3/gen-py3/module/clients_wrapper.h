/**
 * Autogenerated by Thrift
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */

#pragma once
#include <src/gen-cpp2/SimpleService.h>

#include <folly/Try.h>
#include <folly/Unit.h>
#include <folly/io/async/EventBase.h>

#include <Python.h>

#include <cstdint>
#include <functional>
#include <map>
#include <memory>
#include <set>
#include <vector>

namespace py3 {
namespace simple {

class SimpleServiceClientWrapper {
  protected:
    std::shared_ptr<py3::simple::SimpleServiceAsyncClient> async_client;
    std::shared_ptr<folly::EventBase> event_base;
  public:
    explicit SimpleServiceClientWrapper(
      std::shared_ptr<py3::simple::SimpleServiceAsyncClient> async_client,
      std::shared_ptr<folly::EventBase> event_base);
    virtual ~SimpleServiceClientWrapper();
    void get_five(
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void add_five(
      int32_t arg_num,
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void do_nothing(
      std::function<void(PyObject*, folly::Try<folly::Unit>)> callback,
      PyObject* py_future);
    void concat(
      std::string arg_first,
      std::string arg_second,
      std::function<void(PyObject*, folly::Try<std::string>)> callback,
      PyObject* py_future);
    void get_value(
      py3::simple::SimpleStruct arg_simple_struct,
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void negate(
      bool arg_input,
      std::function<void(PyObject*, folly::Try<bool>)> callback,
      PyObject* py_future);
    void tiny(
      int8_t arg_input,
      std::function<void(PyObject*, folly::Try<int8_t>)> callback,
      PyObject* py_future);
    void small(
      int16_t arg_input,
      std::function<void(PyObject*, folly::Try<int16_t>)> callback,
      PyObject* py_future);
    void big(
      int64_t arg_input,
      std::function<void(PyObject*, folly::Try<int64_t>)> callback,
      PyObject* py_future);
    void two(
      double arg_input,
      std::function<void(PyObject*, folly::Try<double>)> callback,
      PyObject* py_future);
    void expected_exception(
      std::function<void(PyObject*, folly::Try<folly::Unit>)> callback,
      PyObject* py_future);
    void unexpected_exception(
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void sum_i16_list(
      std::vector<int16_t> arg_numbers,
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void sum_i32_list(
      std::vector<int32_t> arg_numbers,
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void sum_i64_list(
      std::vector<int64_t> arg_numbers,
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void concat_many(
      std::vector<std::string> arg_words,
      std::function<void(PyObject*, folly::Try<std::string>)> callback,
      PyObject* py_future);
    void count_structs(
      std::vector<py3::simple::SimpleStruct> arg_items,
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void sum_set(
      std::set<int32_t> arg_numbers,
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void contains_word(
      std::set<std::string> arg_words,
      std::string arg_word,
      std::function<void(PyObject*, folly::Try<bool>)> callback,
      PyObject* py_future);
    void get_map_value(
      std::map<std::string,std::string> arg_words,
      std::string arg_key,
      std::function<void(PyObject*, folly::Try<std::string>)> callback,
      PyObject* py_future);
    void map_length(
      std::map<std::string,py3::simple::SimpleStruct> arg_items,
      std::function<void(PyObject*, folly::Try<int16_t>)> callback,
      PyObject* py_future);
    void sum_map_values(
      std::map<std::string,int16_t> arg_items,
      std::function<void(PyObject*, folly::Try<int16_t>)> callback,
      PyObject* py_future);
    void complex_sum_i32(
      py3::simple::ComplexStruct arg_counter,
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void repeat_name(
      py3::simple::ComplexStruct arg_counter,
      std::function<void(PyObject*, folly::Try<std::string>)> callback,
      PyObject* py_future);
    void get_struct(
      std::function<void(PyObject*, folly::Try<py3::simple::SimpleStruct>)> callback,
      PyObject* py_future);
    void fib(
      int16_t arg_n,
      std::function<void(PyObject*, folly::Try<std::vector<int32_t>>)> callback,
      PyObject* py_future);
    void unique_words(
      std::vector<std::string> arg_words,
      std::function<void(PyObject*, folly::Try<std::set<std::string>>)> callback,
      PyObject* py_future);
    void words_count(
      std::vector<std::string> arg_words,
      std::function<void(PyObject*, folly::Try<std::map<std::string,int16_t>>)> callback,
      PyObject* py_future);
    void set_enum(
      py3::simple::AnEnum arg_in_enum,
      std::function<void(PyObject*, folly::Try<py3::simple::AnEnum>)> callback,
      PyObject* py_future);
    void list_of_lists(
      int16_t arg_num_lists,
      int16_t arg_num_items,
      std::function<void(PyObject*, folly::Try<std::vector<std::vector<int32_t>>>)> callback,
      PyObject* py_future);
    void word_character_frequency(
      std::string arg_sentence,
      std::function<void(PyObject*, folly::Try<std::map<std::string,std::map<std::string,int32_t>>>)> callback,
      PyObject* py_future);
    void list_of_sets(
      std::string arg_some_words,
      std::function<void(PyObject*, folly::Try<std::vector<std::set<std::string>>>)> callback,
      PyObject* py_future);
    void nested_map_argument(
      std::map<std::string,std::vector<py3::simple::SimpleStruct>> arg_struct_map,
      std::function<void(PyObject*, folly::Try<int32_t>)> callback,
      PyObject* py_future);
    void make_sentence(
      std::vector<std::vector<std::string>> arg_word_chars,
      std::function<void(PyObject*, folly::Try<std::string>)> callback,
      PyObject* py_future);
    void get_union(
      std::vector<std::set<int32_t>> arg_sets,
      std::function<void(PyObject*, folly::Try<std::set<int32_t>>)> callback,
      PyObject* py_future);
    void get_keys(
      std::vector<std::map<std::string,std::string>> arg_string_map,
      std::function<void(PyObject*, folly::Try<std::set<std::string>>)> callback,
      PyObject* py_future);
    void lookup_double(
      int32_t arg_key,
      std::function<void(PyObject*, folly::Try<double>)> callback,
      PyObject* py_future);
    void retrieve_binary(
      std::string arg_something,
      std::function<void(PyObject*, folly::Try<std::string>)> callback,
      PyObject* py_future);
    void contain_binary(
      std::vector<std::string> arg_binaries,
      std::function<void(PyObject*, folly::Try<std::set<std::string>>)> callback,
      PyObject* py_future);
    void contain_enum(
      std::vector<py3::simple::AnEnum> arg_the_enum,
      std::function<void(PyObject*, folly::Try<std::vector<py3::simple::AnEnum>>)> callback,
      PyObject* py_future);
};


} // namespace py3
} // namespace simple

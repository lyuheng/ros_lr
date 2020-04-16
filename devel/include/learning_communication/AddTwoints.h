// Generated by gencpp from file learning_communication/AddTwoints.msg
// DO NOT EDIT!


#ifndef LEARNING_COMMUNICATION_MESSAGE_ADDTWOINTS_H
#define LEARNING_COMMUNICATION_MESSAGE_ADDTWOINTS_H

#include <ros/service_traits.h>


#include <learning_communication/AddTwointsRequest.h>
#include <learning_communication/AddTwointsResponse.h>


namespace learning_communication
{

struct AddTwoints
{

typedef AddTwointsRequest Request;
typedef AddTwointsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct AddTwoints
} // namespace learning_communication


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::learning_communication::AddTwoints > {
  static const char* value()
  {
    return "6a2e34150c00229791cc89ff309fff21";
  }

  static const char* value(const ::learning_communication::AddTwoints&) { return value(); }
};

template<>
struct DataType< ::learning_communication::AddTwoints > {
  static const char* value()
  {
    return "learning_communication/AddTwoints";
  }

  static const char* value(const ::learning_communication::AddTwoints&) { return value(); }
};


// service_traits::MD5Sum< ::learning_communication::AddTwointsRequest> should match
// service_traits::MD5Sum< ::learning_communication::AddTwoints >
template<>
struct MD5Sum< ::learning_communication::AddTwointsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::learning_communication::AddTwoints >::value();
  }
  static const char* value(const ::learning_communication::AddTwointsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::learning_communication::AddTwointsRequest> should match
// service_traits::DataType< ::learning_communication::AddTwoints >
template<>
struct DataType< ::learning_communication::AddTwointsRequest>
{
  static const char* value()
  {
    return DataType< ::learning_communication::AddTwoints >::value();
  }
  static const char* value(const ::learning_communication::AddTwointsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::learning_communication::AddTwointsResponse> should match
// service_traits::MD5Sum< ::learning_communication::AddTwoints >
template<>
struct MD5Sum< ::learning_communication::AddTwointsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::learning_communication::AddTwoints >::value();
  }
  static const char* value(const ::learning_communication::AddTwointsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::learning_communication::AddTwointsResponse> should match
// service_traits::DataType< ::learning_communication::AddTwoints >
template<>
struct DataType< ::learning_communication::AddTwointsResponse>
{
  static const char* value()
  {
    return DataType< ::learning_communication::AddTwoints >::value();
  }
  static const char* value(const ::learning_communication::AddTwointsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // LEARNING_COMMUNICATION_MESSAGE_ADDTWOINTS_H
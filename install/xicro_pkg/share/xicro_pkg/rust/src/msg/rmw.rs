#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};


#[link(name = "xicro_pkg__rosidl_typesupport_c")]
extern "C" {
    fn rosidl_typesupport_c__get_message_type_support_handle__xicro_pkg__msg__Pulse() -> *const std::ffi::c_void;
}

#[link(name = "xicro_pkg__rosidl_generator_c")]
extern "C" {
    fn xicro_pkg__msg__Pulse__init(msg: *mut Pulse) -> bool;
    fn xicro_pkg__msg__Pulse__Sequence__init(seq: *mut rosidl_runtime_rs::Sequence<Pulse>, size: usize) -> bool;
    fn xicro_pkg__msg__Pulse__Sequence__fini(seq: *mut rosidl_runtime_rs::Sequence<Pulse>);
    fn xicro_pkg__msg__Pulse__Sequence__copy(in_seq: &rosidl_runtime_rs::Sequence<Pulse>, out_seq: *mut rosidl_runtime_rs::Sequence<Pulse>) -> bool;
}

// Corresponds to xicro_pkg__msg__Pulse
#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]


// This struct is not documented.
#[allow(missing_docs)]

#[repr(C)]
#[derive(Clone, Debug, PartialEq, PartialOrd)]
pub struct Pulse {

    // This member is not documented.
    #[allow(missing_docs)]
    pub kiri: u32,


    // This member is not documented.
    #[allow(missing_docs)]
    pub kanan: u32,

}



impl Default for Pulse {
  fn default() -> Self {
    unsafe {
      let mut msg = std::mem::zeroed();
      if !xicro_pkg__msg__Pulse__init(&mut msg as *mut _) {
        panic!("Call to xicro_pkg__msg__Pulse__init() failed");
      }
      msg
    }
  }
}

impl rosidl_runtime_rs::SequenceAlloc for Pulse {
  fn sequence_init(seq: &mut rosidl_runtime_rs::Sequence<Self>, size: usize) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xicro_pkg__msg__Pulse__Sequence__init(seq as *mut _, size) }
  }
  fn sequence_fini(seq: &mut rosidl_runtime_rs::Sequence<Self>) {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xicro_pkg__msg__Pulse__Sequence__fini(seq as *mut _) }
  }
  fn sequence_copy(in_seq: &rosidl_runtime_rs::Sequence<Self>, out_seq: &mut rosidl_runtime_rs::Sequence<Self>) -> bool {
    // SAFETY: This is safe since the pointer is guaranteed to be valid/initialized.
    unsafe { xicro_pkg__msg__Pulse__Sequence__copy(in_seq, out_seq as *mut _) }
  }
}

impl rosidl_runtime_rs::Message for Pulse {
  type RmwMsg = Self;
  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> { msg_cow }
  fn from_rmw_message(msg: Self::RmwMsg) -> Self { msg }
}

impl rosidl_runtime_rs::RmwMessage for Pulse where Self: Sized {
  const TYPE_NAME: &'static str = "xicro_pkg/msg/Pulse";
  fn get_type_support() -> *const std::ffi::c_void {
    // SAFETY: No preconditions for this function.
    unsafe { rosidl_typesupport_c__get_message_type_support_handle__xicro_pkg__msg__Pulse() }
  }
}



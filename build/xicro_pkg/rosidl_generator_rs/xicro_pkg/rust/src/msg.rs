#[cfg(feature = "serde")]
use serde::{Deserialize, Serialize};



// Corresponds to xicro_pkg__msg__Pulse

// This struct is not documented.
#[allow(missing_docs)]

#[cfg_attr(feature = "serde", derive(Deserialize, Serialize))]
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
    <Self as rosidl_runtime_rs::Message>::from_rmw_message(super::msg::rmw::Pulse::default())
  }
}

impl rosidl_runtime_rs::Message for Pulse {
  type RmwMsg = super::msg::rmw::Pulse;

  fn into_rmw_message(msg_cow: std::borrow::Cow<'_, Self>) -> std::borrow::Cow<'_, Self::RmwMsg> {
    match msg_cow {
      std::borrow::Cow::Owned(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
        kiri: msg.kiri,
        kanan: msg.kanan,
      }),
      std::borrow::Cow::Borrowed(msg) => std::borrow::Cow::Owned(Self::RmwMsg {
      kiri: msg.kiri,
      kanan: msg.kanan,
      })
    }
  }

  fn from_rmw_message(msg: Self::RmwMsg) -> Self {
    Self {
      kiri: msg.kiri,
      kanan: msg.kanan,
    }
  }
}



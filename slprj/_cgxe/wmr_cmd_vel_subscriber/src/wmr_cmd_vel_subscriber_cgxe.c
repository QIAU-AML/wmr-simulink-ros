/* Include files */

#include "wmr_cmd_vel_subscriber_cgxe.h"
#include "m_xK0kG8Tbr1tXdc2uvJFezD.h"

unsigned int cgxe_wmr_cmd_vel_subscriber_method_dispatcher(SimStruct* S, int_T
  method, void* data)
{
  if (ssGetChecksum0(S) == 63353758 &&
      ssGetChecksum1(S) == 663315391 &&
      ssGetChecksum2(S) == 2013791614 &&
      ssGetChecksum3(S) == 3082802392) {
    method_dispatcher_xK0kG8Tbr1tXdc2uvJFezD(S, method, data);
    return 1;
  }

  return 0;
}

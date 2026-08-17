#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackTeleport */

int __thiscall STBoatC::BackTeleport(STBoatC *this,int *param_1)

{
  int local_EAX_40;
  int local_EAX_63;
  int iVar2;
  int local_EAX_111;
  int iVar3;

  this->field_00B7 = 0;
  switch(*(undefined4 *)&this->field_0x663) {
  /* ST_CALLSITE[0047BF98]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
  case 0:
  case 1:
  case 7:
    local_EAX_40 = sub_00460360(this);
    return local_EAX_40;
  case 2:
    thunk_FUN_00493bc0(this);
    /* ST_CALLSITE[0047BFAF]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    local_EAX_63 = sub_00460360(this);
    return local_EAX_63;
  /* ST_CALLSITE[0047BFBD]: CALL 0x00405880; direct=00405880 STBoatC::Teleport */
  case 3:
  case 4:
  case 5:
  case 6:
    iVar2 = Teleport(this,2);
    return iVar2;
  }
  local_EAX_111 =
       ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3771,0,0,"%s",
                          "STBoatC::BackTeleport incorrect entry");
  if (local_EAX_111 == 0) {
    return -1;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}


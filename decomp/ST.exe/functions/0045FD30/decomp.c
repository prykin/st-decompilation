#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::StopMove
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall StopMove(STBoatC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0045FD5F RET | 0045FDC7 RET | 0045FE7C RET | 0045FE91 RET | 0045FEA6 RET */

undefined4 __thiscall STBoatC::StopMove(STBoatC *this)

{
  short sVar1;
  short sVar2;
  short sVar3;
  STGroupBoatC *this_00;
  int iVar5;
  undefined4 uVar6;
  STBoatC *pSVar7;

  this_00 = thunk_FUN_0042b760(*(char *)&this->field_0024,this->field_0030);
  if (this_00 == nullptr) {
    return 0xffffffff;
  }
  if (this->field_00E8 == 1) {
    if (this->field_004D == '\x01') {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1498,0,0,"%s",
                                 "STBoatC::StopMove() ZONE_B");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
    }
    this->field_00E8 = 0;
    /* ST_CALLSITE[0045FDA6]: CALL 0x00405952; direct=00405952 sub_004167A0 */
    sub_004167A0(this);
    this->field_00FD = 1;
    thunk_FUN_0040cdb0(this_00,(uint)(ushort)this->field_0032);
    return 1;
  }
  if ((this->field_0040 == '\0') && (this->field_004D == '\0')) {
    sVar1 = this->field_0047;
    sVar2 = this->field_004B;
    sVar3 = this->field_0049;
    if (((sVar1 < 0) ||
        (((g_worldGrid.sizeX <= sVar1 || (sVar3 < 0)) || (g_worldGrid.sizeY <= sVar3)))) ||
       ((sVar2 < 0 || (g_worldGrid.sizeZ <= sVar2)))) {
      pSVar7 = nullptr;
    }
    else {
      pSVar7 = (STBoatC *)
               STGridAt3D(g_worldGrid, sVar1, sVar3, sVar2).objects[(byte)this->field_008E];
    }
    if (pSVar7 == this) {
      /* ST_CALLSITE[0045FE54]: CALL 0x00405952; direct=00405952 sub_004167A0 */
      sub_004167A0(this);
      this->field_00FD = 1;
      thunk_FUN_0040cdb0(this_00,(uint)(ushort)this->field_0032);
      return 1;
    }
  }
  iVar5 = thunk_FUN_00416400((STJellyGunC *)this);
  if (iVar5 == -1) {
    return 0xffffffff;
  }
  if (iVar5 == 2) {
    thunk_FUN_004168b0((int)this);
  }
  return 0;
}


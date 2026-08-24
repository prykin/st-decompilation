#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\Tc_gobj.cpp
   STGameObjC::MoveStep
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall MoveStep(STGameObjC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=004189ED RET | 004189FE RET | 00418ABB RET | 00418B0E RET | 00418B7E RET |
   00418BE6 RET | 00418C26 RET | 00418C3F RET */

undefined4 __thiscall STGameObjC::MoveStep(STGameObjC *this)

{
  ushort *puVar1;
  ushort uVar2;
  ushort *puVar3;
  int local_EAX_30;
  int iVar6;
  uint uVar7;
  int iVar5;
  uint uVar8;
  uint local_10;
  uint local_c;
  uint local_8;
  if (this->field_00E8 == 1) {
    thunk_FUN_00417830((AnonShape_00417830_9254190A *)this);
    return 0;
  }
  local_EAX_30 = thunk_FUN_00416400((STJellyGunC *)this);
  if (local_EAX_30 == 1) {
    return 0;
  }
  if (local_EAX_30 == 2) {
    thunk_FUN_00416840(this,(undefined2 *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
    /* ST_CALLSITE[00418A2B]: CALL dword ptr [EAX + 0x18] */
    iVar6 = this->vfunc_18((short)local_10,(short)local_c,(short)local_8);
    if (iVar6 != 1) {
      this->field_00FA = this->field_00FA + 1;
      if (this->field_00FA <= this->field_00F8) {
        return 0;
      }
      this->field_00D7 = (int)(short)local_10;
      this->field_00DB = (int)(short)local_c;
      this->field_00DF = (int)(short)local_8;
      this->field_00FA = 0;
      /* ST_CALLSITE[00418B00]: CALL 0x00405952; direct=00405952 sub_004167A0 */
      sub_004167A0(this);
      return 2;
    }
    /* ST_CALLSITE[00418A39]: CALL 0x0040464c; direct=0040464C sub_0041C5A0 */
    sub_0041C5A0(this);
    this->field_00FA = 0;
    iVar6 = thunk_FUN_00495ff0(this->field_005B,this->field_005D,this->field_005F,this->field_008E,
                               (AnonShape_00495FF0_59081BDD *)this);
    if ((iVar6 == 0) &&
       /* ST_CALLSITE[00418A93]: CALL 0x00401325; direct=00401325 DumpClassC::WritePtr */
       (iVar6 = DumpClassC::WritePtr
                          ((short)local_10,(short)local_c,(short)local_8,this->field_008E,
                           (RecoveredRecord_DumpClassC_00495EC0 *)this), iVar6 == 0)) {
      /* ST_CALLSITE[00418AA9]: CALL 0x004023a1; direct=004023A1 TLOEmbryoTy::sub_0041C3F0 */
      TLOEmbryoTy::sub_0041C3F0((TLOEmbryoTy *)this,(undefined *)this->field_0101);
      thunk_FUN_004168b0((int)this);
      return 0;
    }
  }
  else if (local_EAX_30 == 3) {
    thunk_FUN_00416840(this,(undefined2 *)&local_10,(undefined2 *)&local_c,(undefined2 *)&local_8);
    uVar7 = thunk_FUN_00418d20(this->field_0047,this->field_0049,this->field_004B,(short)local_10,
                               (short)local_c,(short)local_8);
    if (uVar7 != 0xffffffff) {
      if (uVar7 == 1) {
        iVar6 = this->field_009B;
        puVar3 = this->field_0097;
        puVar1 = puVar3 + iVar6 * 4;
        local_10 = STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(puVar3[iVar6 * 4 + -4]));
        local_c = STReplaceLowWord((uint32_t)(puVar3), (uint16_t)(puVar1[-3]));
        local_8 = STReplaceLowWord((uint32_t)(puVar1), (uint16_t)(puVar1[-2]));
        this->field_00E4 = 0;
        this->field_00E3 = 0;
        /* ST_CALLSITE[00418BBC]: CALL 0x00405952; direct=00405952 sub_004167A0 */
        sub_004167A0(this);
        iVar6 = SubmarineTitans::Recovered::HiddenThis::AnonReceiver_004167A0::thunk_FUN_00418030
                          ((AnonReceiver_004167A0 *)this,(short)local_10,(short)local_c,
                           (short)local_8);
        if (iVar6 == -1) {
          return 0xffffffff;
        }
        if (iVar6 == 0) {
          return 0;
        }
        if (iVar6 == 2) {
          return 2;
        }
      }
      uVar2 = this->field_0097[this->field_00D3 * 4 + 3];
      if (((uVar2 & 0xfff) != 0xffe) && (uVar2 != this->field_006C)) {
        thunk_FUN_00417740(this,this->field_006C,uVar2);
      }
      thunk_FUN_004168b0((int)this);
      return 0;
    }
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\Tc_gobj.cpp",0x33f,0,0,"%s",
                               "STGameObjC::MoveStep far cells");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else if (local_EAX_30 == 0) {
    /* ST_CALLSITE[00418C31]: CALL 0x00405952; direct=00405952 sub_004167A0 */
    sub_004167A0(this);
    return 1;
  }
  return 0xffffffff;
}


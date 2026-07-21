#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackUnLoadRC

   [STSwitchEnumApplier] Switch target field_054C uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_054CState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0046EFD0 -> 004620F0 @ 0046F02A | 0046EFD0 -> 004620F0 @ 0046F03D */

int __thiscall STBoatC::BackUnLoadRC(STBoatC *this,STBoatC *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  STBoatC *pSVar6;
  int iVar7;
  STBoatC *local_8;

  this->field_00B7 = 0;
  pSVar6 = this;
  local_8 = this;
  switch(this->field_054C) {
  case CASE_0:
  case CASE_1:
  case CASE_3:
    if (this->field_0544 != 0) {
      iVar5 = thunk_FUN_004620f0(this);
      return iVar5;
    }
  case CASE_7:
    iVar5 = sub_00460360(this);
    break;
  case CASE_2:
    iVar5 = thunk_FUN_004620f0(this);
    break;
  case CASE_4:
    iVar5 = this->field_0550;
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      sub_0048D930(this);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (*(code *)this->vtable->field_00D8)();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      iVar5 = (ushort)(this->field_0540 * 200) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22((short)((uint)this >> 0x10),this->field_053E * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),this->field_053C * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*(code *)this->vtable->field_0010)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar3,iVar7,iVar5);
      this->field_0542 = uVar2;
      this->field_0550 = 4;
    }
    if (this->field_0550 != 4) {
      if (this->field_0550 == 5) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_053C * 0xc9 + 100,this->field_053E * 0xc9 + 100,
                     this->field_0540 * 200 + 100,this->field_0061);
        this->field_0550 = 6;
      }
      if (this->field_0550 != 6) {
        return 2;
      }
      iVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 == -1) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x283d,0,0,"%s",
                                   "STBoatC::BackUnLoadRC, UNLOADRC_PDEPOT 2");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar5 = 0x283e;
        goto cf_error_exit_0046F13E;
      }
      if (iVar5 != 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (*(code *)this->vtable->field_00D8)();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      sub_0048D930(this);
      goto LAB_0046f1fd;
    }
    uVar4 = sub_004176C0(this,this->field_0542);
    uVar4 = sub_00417910(this,(short)uVar4);
    if (uVar4 != 0xffffffff) {
      if (uVar4 == 0) {
        this->field_0550 = 5;
      }
      goto cf_common_exit_0046F0F9;
    }
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2829,0,0,"%s",
                               "STBoatC::BackUnLoadRC, UNLOADRC_PDEPOT");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar5 = 0x282a;
    goto cf_error_exit_0046F13E;
  case CASE_5:
    sub_0048D930(this);
    pSVar6 = (STBoatC *)(this->field_0548 + 1);
    this->field_0548 = (int)pSVar6;
    if ((int)pSVar6 < 0x47) goto cf_common_exit_0046F0F9;
    this->field_0548 = 0;
    this->field_054C = CASE_6;
  case CASE_6:
    if (this->field_0550 == 0) {
      iVar5 = (ushort)(this->field_0540 * 200) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22((short)((uint)pSVar6 >> 0x10),this->field_053E * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),this->field_053C * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*(code *)this->vtable->field_0010)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar3,iVar7,iVar5);
      this->field_0542 = uVar2;
      this->field_0550 = 1;
    }
    if (this->field_0550 == 1) {
      uVar4 = sub_004176C0(this,this->field_0542);
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          this->field_0550 = 2;
        }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
cf_common_exit_0046F0F9:
        iVar5 = (*(code *)this->vtable->field_00D8)();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2864,0,0,"%s",
                                 "STBoatC::BackUnLoadRC, UNLOADRC_ODEPOT");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x2865;
    }
    else {
      if (this->field_0550 == 2) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_053C * 0xc9 + 100,this->field_053E * 0xc9 + 100,
                     this->field_0540 * 200 + 100,this->field_0061);
        this->field_0550 = 3;
      }
      if (this->field_0550 != 3) {
switchD_0046eff1_default:
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x288a,0,0,"%s",
                                   "STBoatC::BackUnLoadRC");
        if (iVar5 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 != -1) {
        if (iVar5 != 0) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          iVar5 = (*(code *)this->vtable->field_00D8)();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
/* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
LAB_0046f1fd:
        iVar5 = (*(code *)this->vtable->field_00D8)();
        return -(uint)(iVar5 != 0);
      }
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x287c,0,0,"%s",
                                 "STBoatC::BackUnLoadRC, UNLOADRC_ODEPOT 2");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x287d;
    }
cf_error_exit_0046F13E:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar5);
    return 0xffff;
  default:
    goto switchD_0046eff1_default;
  }
  if (iVar5 == 0) {
    sub_0048D930(this);
  }
  return iVar5;
}


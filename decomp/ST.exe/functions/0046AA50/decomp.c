#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackLoadRC

   [STSwitchEnumApplier] Switch target field_04D5 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_04D5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0046AA50 -> 004620F0 @ 0046AAAA | 0046AA50 -> 004620F0 @ 0046AABD | 0046AA50 ->
   004620F0 @ 0046AF0D */

int __thiscall STBoatC::BackLoadRC(STBoatC *this,STBoatC *param_1)

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
  switch(*(undefined4 *)&this->field_0x4d5) {
  case 0:
    goto switchD_0046aa71_caseD_0;
  case 1:
  case 2:
  case 4:
  case 7:
  case 8:
  case 10:
    if (*(int *)&this->field_0x4cd != 0) {
      iVar5 = thunk_FUN_004620f0(this);
      return iVar5;
    }
    iVar5 = sub_00460360(this);
    break;
  case 3:
  case 9:
    iVar5 = thunk_FUN_004620f0(this);
    break;
  case 5:
    sub_0048D930(this);
    iVar5 = *(int *)&this->field_0x4d1 + 1;
    *(int *)&this->field_0x4d1 = iVar5;
    if (iVar5 < 0x47) {
LAB_0046acad:
      iVar5 = (*this->vtable->vfunc_D8)();
      return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
    }
    *(undefined4 *)&this->field_0x4d1 = 0;
    goto LAB_0046aaed;
  case 6:
  case 0xe:
    iVar5 = sub_00460360(this);
    return iVar5;
  case 0xb:
    iVar5 = this->field_04D9;
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      sub_0048D930(this);
      iVar5 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      iVar5 = (ushort)(this->field_04C9 * 200) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22((short)((uint)this >> 0x10),this->field_04C7 * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),this->field_04C5 * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar3,iVar7,iVar5);
      this->field_04CB = uVar2;
      this->field_04D9 = 4;
    }
    if (this->field_04D9 == 4) {
      uVar4 = sub_004176C0(this,this->field_04CB);
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          this->field_04D9 = 5;
        }
        goto cf_common_exit_0046ABCB;
      }
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x22fd,0,0,"%s",
                                 "STBoatC::BackLoadRC, LOADRC_PDEPOT");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x22fe;
    }
    else {
      if (this->field_04D9 == 5) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_04C5 * 0xc9 + 100,this->field_04C7 * 0xc9 + 100,
                     this->field_04C9 * 200 + 100,this->field_0061);
        this->field_04D9 = 6;
      }
      if (this->field_04D9 != 6) {
        return 2;
      }
      iVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 != -1) {
        if (iVar5 == 0) {
          sub_0048D930(this);
          iVar5 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar5 != 0);
        }
        goto LAB_0046acad;
      }
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2311,0,0,"%s",
                                 "STBoatC::BackLoadRC, LOADRC_PDEPOT 2");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x2312;
    }
    goto LAB_0046ac10;
  case 0xc:
    sub_0048D930(this);
    pSVar6 = (STBoatC *)(*(int *)&this->field_0x4d1 + 1);
    *(STBoatC **)&this->field_0x4d1 = pSVar6;
    if ((int)pSVar6 < 0x47) goto cf_common_exit_0046ABCB;
    *(undefined4 *)&this->field_0x4d1 = 0;
    *(undefined4 *)&this->field_0x4d5 = 0xd;
  case 0xd:
    if (this->field_04D9 == 0) {
      iVar5 = (ushort)(this->field_04C9 * 200) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22((short)((uint)pSVar6 >> 0x10),this->field_04C7 * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),this->field_04C5 * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar3,iVar7,iVar5);
      this->field_04CB = uVar2;
      this->field_04D9 = 1;
    }
    if (this->field_04D9 == 1) {
      uVar4 = sub_004176C0(this,this->field_04CB);
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          this->field_04D9 = 2;
        }
cf_common_exit_0046ABCB:
        iVar5 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2338,0,0,"%s",
                                 "STBoatC::BackLoadRC, LOADRC_ODEPOT");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x2339;
    }
    else {
      if (this->field_04D9 == 2) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_04C5 * 0xc9 + 100,this->field_04C7 * 0xc9 + 100,
                     this->field_04C9 * 200 + 100,this->field_0061);
        this->field_04D9 = 3;
      }
      if (this->field_04D9 != 3) {
switchD_0046aa71_caseD_0:
        iVar5 = thunk_FUN_004620f0(this);
        iVar3 = (*this->vtable->vfunc_D8)();
        if (iVar3 != 0) {
          return -1;
        }
        return iVar5;
      }
      iVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 != -1) {
        if (iVar5 != 0) {
          iVar5 = (*this->vtable->vfunc_D8)();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
LAB_0046aaed:
        iVar5 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar5 != 0);
      }
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2350,0,0,"%s",
                                 "STBoatC::BackLoadRC, LOADRC_ODEPOT 2");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x2351;
    }
LAB_0046ac10:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar5);
    return 0xffff;
  default:
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2367,0,0,"%s",
                               "STBoatC::BackLoadRC");
    if (iVar5 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (iVar5 == 0) {
    sub_0048D930(this);
  }
  return iVar5;
}


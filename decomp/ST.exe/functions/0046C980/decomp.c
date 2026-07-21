#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackBuild

   [STSwitchEnumApplier] Switch target field_0508 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0508State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7 */

int __thiscall STBoatC::BackBuild(STBoatC *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  int iVar7;
  STBoatC *local_8;

  uVar2 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  switch(this->field_0508) {
  case CASE_0:
  case CASE_1:
  case CASE_7:
    iVar5 = sub_00460360(this);
    return (int)(short)iVar5;
  case CASE_2:
  case CASE_3:
  case CASE_4:
    iVar5 = this->field_050C;
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      return 0;
    }
    if (iVar5 == 3) {
      iVar5 = (ushort)(this->field_0500 * 200) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22(uVar2,this->field_04FE * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),this->field_04FC * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*(code *)this->vtable->field_0010)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar6,iVar7,iVar5);
      this->field_0506 = uVar2;
      this->field_050C = 4;
    }
    if (this->field_050C == 4) {
      uVar3 = sub_004176C0(this,this->field_0506);
      uVar3 = sub_00417910(this,(short)uVar3);
      if ((short)uVar3 == -1) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x253e,0,0,"%s",
                                   "STBoatC::BackBuild, BUILD_PMOVE");
        if (iVar5 == 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x253f);
          return 0xffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if ((short)uVar3 == 0) {
        this->field_050C = 5;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (*(code *)this->vtable->field_00D8)();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
    }
    if (this->field_050C == 5) {
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_04FC * 0xc9 + 100,this->field_04FE * 0xc9 + 100,
                   this->field_0500 * 200 + 100,this->field_0061);
      this->field_050C = 6;
    }
    if (this->field_050C == 6) {
      uVar4 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if ((short)uVar4 == -1) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2554,0,0,"%s",
                                   "STBoatC::BackBuild, BUILD_PMOVE 2");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar5 = 0x2555;
cf_error_exit_0046CBE2:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar5)
        ;
        return 0xffff;
      }
      if ((short)uVar4 == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (*(code *)this->vtable->field_00D8)();
        return -(uint)(iVar5 != 0);
      }
    }
    break;
  case CASE_5:
    if (this->field_0502 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (*(code *)this->vtable->field_00D8)();
      return -(uint)(iVar5 != 0);
    }
    this->field_0508 = CASE_6;
    break;
  case CASE_6:
    if (this->field_050C == 0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar5 = CONCAT22(uVar2,this->field_0500 * 200) + 100;
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22((short)((uint)in_EDX >> 0x10),this->field_04FE * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),this->field_04FC * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[raw_indirect_call,packed_or_unaligned_piece]: expected typed vtable/callback call with explicit __thiscall receiver; expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*(code *)this->vtable->field_0010)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar6,iVar7,iVar5);
      this->field_0506 = uVar2;
      this->field_050C = 1;
    }
    if (this->field_050C == 1) {
      uVar3 = sub_004176C0(this,this->field_0506);
      uVar3 = sub_00417910(this,(short)uVar3);
      if ((short)uVar3 == -1) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x256d,0,0,"%s",
                                   "STBoatC::BackBuild, BUILD_OMOVE");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar5 = 0x256e;
        goto cf_error_exit_0046CBE2;
      }
      if ((short)uVar3 == 0) {
        this->field_050C = 2;
        break;
      }
    }
    if (this->field_050C == 2) {
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_04FC * 0xc9 + 100,this->field_04FE * 0xc9 + 100,
                   this->field_0500 * 200 + 100,this->field_0061);
      this->field_050C = 3;
    }
    if (this->field_050C == 3) {
      uVar4 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if ((short)uVar4 == -1) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2583,0,0,"%s",
                                   "STBoatC::BackBuild, BUILD_OMOVE 2");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar5 = 0x2584;
        goto cf_error_exit_0046CBE2;
      }
      if ((short)uVar4 == 0) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (*(code *)this->vtable->field_00D8)();
        return -(uint)(iVar5 != 0);
      }
    }
    break;
  default:
    iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2590,0,0,"%s",
                               "STBoatC::BackBuild");
    if (iVar5 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar5 = (*(code *)this->vtable->field_00D8)();
  return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
}


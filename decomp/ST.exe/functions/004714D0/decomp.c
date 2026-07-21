#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackToDok

   [STSwitchEnumApplier] Switch target field_0580 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0580State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8 */

int __thiscall STBoatC::BackToDok(STBoatC *this,int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  STBoatC *pSVar6;
  int iVar7;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  STBoatC *local_8;

  this->field_00B7 = 0;
  pSVar6 = this;
  local_8 = this;
  switch(this->field_0580) {
  case CASE_0:
  case CASE_1:
  case CASE_3:
    iVar5 = sub_00460360(this);
    break;
  case CASE_2:
    iVar5 = thunk_FUN_004620f0(this);
    break;
  case CASE_4:
    iVar5 = *(int *)&this->field_0x584;
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      sub_0048DBA0(this);
      iVar5 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar5 != 0);
    }
    if (iVar5 == 3) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar5 = CONCAT22((short)((uint)this >> 0x10),this->field_0570 * 200) + 100;
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22((short)((uint)in_EDX >> 0x10),this->field_056E * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),this->field_056C * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar3,iVar7,iVar5);
      this->field_0572 = uVar2;
      *(undefined4 *)&this->field_0x584 = 4;
    }
    if (*(int *)&this->field_0x584 != 4) {
      if (*(int *)&this->field_0x584 == 5) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_056C * 0xc9 + 100,this->field_056E * 0xc9 + 100,
                     this->field_0570 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 6;
      }
      if (*(int *)&this->field_0x584 != 6) {
        return 2;
      }
      iVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 == -1) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2aff,0,0,"%s",
                                   "STBoatC::BackToDok, TODOK_PDOCK 2");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar5 = 0x2b00;
        goto LAB_0047171f;
      }
      if (iVar5 != 0) goto cf_common_exit_004715EF;
      sub_0048DBA0(this);
      goto LAB_004716df;
    }
    uVar4 = sub_004176C0(this,this->field_0572);
    uVar4 = sub_00417910(this,(short)uVar4);
    if (uVar4 == 0xffffffff) {
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2aeb,0,0,"%s",
                                 "STBoatC::BackToDok, TODOK_PDOCK");
      if (iVar5 == 0) {
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",0x2aec
                  );
        return 0xffff;
      }
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    if (uVar4 == 0) {
      *(undefined4 *)&this->field_0x584 = 5;
    }
    goto cf_common_exit_004715EF;
  case CASE_5:
    sub_0048DBA0(this);
    pSVar6 = (STBoatC *)(this->field_057C + 1);
    this->field_057C = (int)pSVar6;
    if ((int)pSVar6 < 0x1f) goto LAB_00471835;
    this->field_057C = 0;
    this->field_0580 = CASE_6;
  case CASE_6:
    if (*(int *)&this->field_0x584 == 0) {
      iVar5 = (ushort)(this->field_0570 * 200) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22((short)((uint)pSVar6 >> 0x10),this->field_056E * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),this->field_056C * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar3,iVar7,iVar5);
      this->field_0572 = uVar2;
      *(undefined4 *)&this->field_0x584 = 1;
    }
    if (*(int *)&this->field_0x584 == 1) {
      uVar4 = sub_004176C0(this,this->field_0572);
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          *(undefined4 *)&this->field_0x584 = 2;
        }
LAB_00471835:
        iVar5 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2b25,0,0,"%s",
                                 "STBoatC::BackToDok, TODOK_ODOCK");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x2b26;
    }
    else {
      if (*(int *)&this->field_0x584 == 2) {
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_056C * 0xc9 + 100,this->field_056E * 0xc9 + 100,
                     this->field_0570 * 200 + 100,this->field_0061);
        *(undefined4 *)&this->field_0x584 = 3;
      }
      if (*(int *)&this->field_0x584 != 3) {
switchD_004714f1_default:
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2b4b,0,0,"%s",
                                   "STBoatC::BackToDok");
        if (iVar5 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 != -1) {
        if (iVar5 == 0) {
LAB_004716df:
          iVar5 = (*this->vtable->vfunc_D8)();
          return -(uint)(iVar5 != 0);
        }
cf_common_exit_004715EF:
        iVar5 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2b3d,0,0,"%s",
                                 "STBoatC::BackToDok, TODOK_ODOCK 2");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x2b3e;
    }
LAB_0047171f:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar5);
    return 0xffff;
  case CASE_7:
  case CASE_8:
    iVar5 = sub_00460360(this);
    return iVar5;
  default:
    goto switchD_004714f1_default;
  }
  if (iVar5 == 0) {
    sub_0048DBA0(this);
  }
  return iVar5;
}


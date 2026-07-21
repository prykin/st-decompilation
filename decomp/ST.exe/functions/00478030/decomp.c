#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackCapture

   [STSwitchEnumApplier] Switch target field_0611 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0611State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00478030 -> 00415ED0 @ 004781BF | 00478030 -> 00415ED0 @ 00478438 */

int __thiscall STBoatC::BackCapture(STBoatC *this,int *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  STGameObjC *pSVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  STBoatC *local_8;

  uVar2 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  switch(this->field_0611) {
  case CASE_0:
  case CASE_5:
    iVar6 = sub_00460360(this);
    return iVar6;
  case CASE_1:
    return 0;
  case CASE_2:
    iVar6 = this->field_0615;
    if (iVar6 == 0) {
      return 0;
    }
    if (iVar6 == 1) {
      return 0;
    }
    if (iVar6 == 2) {
      return 0;
    }
    if (iVar6 == 3) {
      iVar6 = (ushort)(this->field_0607 * 200) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22(uVar2,this->field_0605 * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0603 * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar4 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar4,iVar7,iVar6);
      this->field_060F = uVar2;
      this->field_0615 = 4;
    }
    if (this->field_0615 == 4) {
      uVar5 = sub_004176C0(this,this->field_060F);
      uVar5 = sub_00417910(this,(short)uVar5);
      if (uVar5 == 0xffffffff) {
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3336,0,0,"%s",
                                   "STBoatC::BackCapture, CAPTURE_PMOVE");
        if (iVar6 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar5 == 0) {
        this->field_0615 = 5;
LAB_00478373:
        iVar6 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
    }
    if (this->field_0615 == 5) {
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0603 * 0xc9 + 100,this->field_0605 * 0xc9 + 100,
                   this->field_0607 * 200 + 100,this->field_0061);
      this->field_0615 = 6;
    }
    if (this->field_0615 == 6) {
      iVar6 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar6 == -1) {
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x334b,0,0,"%s",
                                   "STBoatC::BackCapture, CAPTURE_PMOVE 2");
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x334c;
LAB_0047848a:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar6)
        ;
        return 0xffff;
      }
      if (iVar6 == 0) {
        iVar6 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
  case CASE_3:
    pSVar3 = STAllPlayersC::GetObjPtr
                       (g_sTAllPlayers_007FA174,this->field_05FC,
                        CONCAT22((short)(this->field_0611 >> 0x10),this->field_05FD),CASE_1);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if (((pSVar3 != (STGameObjC *)0x0) && (pSVar3->field_0018 == this->field_05FF)) &&
       (iVar6 = (**(code **)&pSVar3->vtable[1].field_0x38)(this->field_0024), iVar6 != 0)) {
      thunk_FUN_004cd450((AnonShape_004CC900_31EE9CAA *)pSVar3);
    }
    if (((int)this->field_0041 != (this->field_0609 + 1) * 0xc9) ||
       ((int)this->field_0043 != (this->field_060B + 1) * 0xc9)) {
      iVar6 = (*this->vtable->vfunc_D8)();
      return -(uint)(iVar6 != 0);
    }
    this->field_0611 = CASE_4;
    this->field_0615 = 0;
    break;
  case CASE_4:
    if (this->field_0615 == 0) {
      iVar6 = (ushort)(this->field_0607 * 200) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar7 = CONCAT22(uVar2,this->field_0605 * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar4 = CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0603 * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar2,this->field_0041),
                         CONCAT22((short)((uint)iVar4 >> 0x10),this->field_0043),
                         CONCAT22(uVar2,this->field_0045),iVar4,iVar7,iVar6);
      this->field_060F = uVar2;
      this->field_0615 = 1;
    }
    if (this->field_0615 == 1) {
      uVar5 = sub_004176C0(this,this->field_060F);
      uVar5 = sub_00417910(this,(short)uVar5);
      if (uVar5 == 0xffffffff) {
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3373,0,0,"%s",
                                   "STBoatC::BackCapture, CAPTURE_OMOVE");
        if (iVar6 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar5 == 0) {
        this->field_0615 = 2;
        goto LAB_00478373;
      }
    }
    if (this->field_0615 == 2) {
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0603 * 0xc9 + 100,this->field_0605 * 0xc9 + 100,
                   this->field_0607 * 200 + 100,this->field_0061);
      this->field_0615 = 3;
    }
    if (this->field_0615 == 3) {
      iVar6 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar6 == -1) {
        iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3388,0,0,"%s",
                                   "STBoatC::BackCapture, CAPTURE_OMOVE 2");
        if (iVar6 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x3389;
        goto LAB_0047848a;
      }
      if (iVar6 == 0) {
        iVar6 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  default:
    iVar6 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3396,0,0,"%s",
                               "STBoatC::BackCapture - incorrect entry");
    if (iVar6 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  iVar6 = (*this->vtable->vfunc_D8)();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}


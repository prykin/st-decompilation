#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackCapture

   [STSwitchEnumApplier] Switch target field_0611 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0611State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00478030 -> 00415ED0 @ 004781BF | 00478030 -> 00415ED0 @ 00478438

   [STSwitchEnumApplier] Switch target field_0615 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0615State. Cases: CASE_0=0;CASE_2=2;CASE_5=5 */

int __thiscall STBoatC::BackCapture(STBoatC *this,int *param_1)

{
  STBoatC_field_0615State SVar1;
  ushort uVar3;
  int local_EAX_36;
  int local_EAX_253;
  int local_EAX_463;
  STGameObjC *this_00;
  uint uVar4;
  int iVar5;
  int local_EAX_1096;
  int local_EAX_1172;
  int iVar6;
  STBoatC *local_8;

  uVar3 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  switch(this->field_0611) {
  case CASE_0:
  case CASE_5:
    /* ST_CALLSITE[00478054]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    local_EAX_36 = sub_00460360(this);
    return local_EAX_36;
  case CASE_1:
    return 0;
  case CASE_2:
    SVar1 = this->field_0615;
    if (SVar1 == CASE_0) {
      return 0;
    }
    if (SVar1 == 1) {
      return 0;
    }
    if (SVar1 == CASE_2) {
      return 0;
    }
    if (SVar1 == 3) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22(uVar3,this->field_0605 * 0xc9) + 100;
      /* ST_CALLSITE[004780CE]: CALL dword ptr [EDX + 0x10] */
      uVar3 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_0045)),
                         this->field_0603 * 0xc9 + 100,(short)iVar6,
                         (ushort)(this->field_0607 * 200) + 100);
      this->field_060F = uVar3;
      this->field_0615 = 4;
    }
    if (this->field_0615 == 4) {
      /* ST_CALLSITE[004780F0]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STBoatC; source view only; no Ghidra override */
      uVar4 = sub_004176C0(this,this->field_060F);
      /* ST_CALLSITE[004780F8]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 == 0xffffffff) {

        local_EAX_253 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3336,0,0,"%s",
                                "STBoatC::BackCapture, CAPTURE_PMOVE");
        if (local_EAX_253 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar4 == 0) {
        this->field_0615 = CASE_5;
LAB_00478373:
        /* ST_CALLSITE[00478377]: CALL dword ptr [EAX + 0xd8] */
        iVar6 = this->vfunc_D8();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
    }
    if (this->field_0615 == CASE_5) {
      /* ST_CALLSITE[0047819E]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0603 * 0xc9 + 100,this->field_0605 * 0xc9 + 100,
                   this->field_0607 * 200 + 100,this->field_0061);
      this->field_0615 = 6;
    }
    if (this->field_0615 == 6) {
      /* ST_CALLSITE[004781BF]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      iVar6 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar6 == -1) {

        local_EAX_463 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x334b,0,0,"%s",
                                "STBoatC::BackCapture, CAPTURE_PMOVE 2");
        if (local_EAX_463 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x334c;
LAB_0047848a:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar6);
        return 0xffff;
      }
      if (iVar6 == 0) {
        /* ST_CALLSITE[004781D5]: CALL dword ptr [EDX + 0xd8] */
        iVar6 = this->vfunc_D8();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  case CASE_3:
    /* ST_CALLSITE[00478237]: CALL 0x004028ba; direct=004028BA STAllPlayersC::GetObjPtr */
    this_00 = STAllPlayersC::GetObjPtr
                        (g_allPlayers_007FA174,this->field_05FC,this->field_05FD,CASE_1);
    if (((this_00 != nullptr) && (this_00->field_0018 == *(int *)&this->field_0x5ff)) &&
       /* ST_CALLSITE[00478257]: CALL dword ptr [EAX + 0x108]; [STIndirectCallsiteApplier] exact slot 0x108; mode=machine-word; signature=__thiscall;/undefined4;pointer:/STGameObjC;/undefined4 */
       (iVar6 = this_00->vfunc_108(this->field_0024), iVar6 != 0)) {

      thunk_FUN_004cd450((RecoveredRecordView_004CC900_A43E8B7C *)this_00);
    }
    if (((int)this->field_0041 != (this->field_0609 + 1) * 0xc9) ||
       ((int)this->field_0043 != (this->field_060B + 1) * 0xc9)) {
      /* ST_CALLSITE[004782CD]: CALL dword ptr [EAX + 0xd8] */
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    this->field_0611 = CASE_4;
    this->field_0615 = CASE_0;
    break;
  case CASE_4:
    if (this->field_0615 == CASE_0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22(uVar3,this->field_0605 * 0xc9) + 100;
      /* ST_CALLSITE[00478331]: CALL dword ptr [EDX + 0x10] */
      uVar3 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_0045)),
                         this->field_0603 * 0xc9 + 100,(short)iVar6,
                         (ushort)(this->field_0607 * 200) + 100);
      this->field_060F = uVar3;
      this->field_0615 = 1;
    }
    if (this->field_0615 == 1) {
      /* ST_CALLSITE[00478353]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STBoatC; source view only; no Ghidra override */
      uVar4 = sub_004176C0(this,this->field_060F);
      /* ST_CALLSITE[0047835B]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 == 0xffffffff) {

        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3373,0,0,"%s",
                                   "STBoatC::BackCapture, CAPTURE_OMOVE");
        if (iVar5 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (uVar4 == 0) {
        this->field_0615 = CASE_2;
        goto LAB_00478373;
      }
    }
    if (this->field_0615 == CASE_2) {
      /* ST_CALLSITE[00478417]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_0603 * 0xc9 + 100,this->field_0605 * 0xc9 + 100,
                   this->field_0607 * 200 + 100,this->field_0061);
      this->field_0615 = 3;
    }
    if (this->field_0615 == 3) {
      /* ST_CALLSITE[00478438]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      iVar6 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar6 == -1) {

        local_EAX_1096 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3388,0,0,"%s",
                                "STBoatC::BackCapture, CAPTURE_OMOVE 2");
        if (local_EAX_1096 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x3389;
        goto LAB_0047848a;
      }
      if (iVar6 == 0) {
        /* ST_CALLSITE[0047844E]: CALL dword ptr [EDX + 0xd8] */
        iVar6 = this->vfunc_D8();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  default:

    local_EAX_1172 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x3396,0,0,"%s",
                            "STBoatC::BackCapture - incorrect entry");
    if (local_EAX_1172 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[004782B2]: CALL dword ptr [EDX + 0xd8] */
  iVar6 = this->vfunc_D8();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}


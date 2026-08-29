#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackUnLoadRC

   [STSwitchEnumApplier] Switch target field_054C uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_054CState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0046EFD0 -> 004620F0 @ 0046F02A | 0046EFD0 -> 004620F0 @ 0046F03D

   [STSwitchEnumApplier] Switch target field_0550 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0550State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5

   [STSwitchEnumApplier] Switch target field_0550 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0550State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __thiscall STBoatC::BackUnLoadRC(STBoatC *this,STBoatC *param_1)

{
  STBoatC_field_0550State SVar1;
  ushort uVar3;
  int local_EAX_56;
  int local_EAX_90;
  int local_EAX_348;
  int local_EAX_603;
  uint uVar4;
  int local_EAX_902;
  int iVar4;
  int local_EAX_1149;
  int iVar5;
  STBoatC *pSVar6;
  STBoatC *local_8;

  this->field_00B7 = 0;
  pSVar6 = this;
  local_8 = this;
  switch(this->field_054C) {
  case CASE_0:
  case CASE_1:
  case CASE_3:
    if (this->field_0544 != 0) {
      /* ST_CALLSITE[0046F02A]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
      local_EAX_90 = sub_004620F0(this);
      return local_EAX_90;
    }
  case CASE_7:
    /* ST_CALLSITE[0046F008]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    local_EAX_56 = sub_00460360(this);
    break;
  case CASE_2:
    /* ST_CALLSITE[0046F03D]: CALL 0x0040493a; direct=0040493A STBoatC::sub_004620F0 */
    local_EAX_56 = sub_004620F0(this);
    break;
  case CASE_4:
    SVar1 = this->field_0550;
    if (((SVar1 == CASE_0) || (SVar1 == CASE_1)) || (SVar1 == CASE_2)) {
      /* ST_CALLSITE[0046F251]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
      sub_0048D930(this);
      /* ST_CALLSITE[0046F25A]: CALL dword ptr [EDX + 0xd8] */
      iVar5 = this->vfunc_D8();
      return -(uint)(iVar5 != 0);
    }
    if (SVar1 == CASE_3) {
      iVar5 = STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_053E * 0xc9)) + 100;
      /* ST_CALLSITE[0046F0AC]: CALL dword ptr [EDX + 0x10] */
      uVar3 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar5), (uint16_t)(this->field_0045)),
                         this->field_053C * 0xc9 + 100,(short)iVar5,
                         (ushort)(this->field_0540 * 200) + 100);
      this->field_0542 = uVar3;
      this->field_0550 = CASE_4;
    }
    if (this->field_0550 != CASE_4) {
      if (this->field_0550 == CASE_5) {
        /* ST_CALLSITE[0046F1B0]: CALL 0x00402455; direct=00402455 sub_00415B30 */
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_053C * 0xc9 + 100,this->field_053E * 0xc9 + 100,
                     this->field_0540 * 200 + 100,this->field_0061);
        this->field_0550 = CASE_6;
      }
      if (this->field_0550 != CASE_6) {
        return 2;
      }
      /* ST_CALLSITE[0046F1CD]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      iVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 == -1) {

        local_EAX_603 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x283d,0,0,"%s",
                                "STBoatC::BackUnLoadRC, UNLOADRC_PDEPOT 2");
        if (local_EAX_603 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar5 = 0x283e;
        goto cf_error_exit_0046F13E;
      }
      if (iVar5 != 0) {
        /* ST_CALLSITE[0046F1DF]: CALL dword ptr [EDX + 0xd8] */
        iVar5 = this->vfunc_D8();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
      /* ST_CALLSITE[0046F1F8]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
      sub_0048D930(this);
      goto LAB_0046f1fd;
    }
    /* ST_CALLSITE[0046F0D9]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STBoatC; source view only; no Ghidra override */
    uVar4 = sub_004176C0(this,this->field_0542);
    /* ST_CALLSITE[0046F0E1]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
    uVar4 = sub_00417910(this,(short)uVar4);
    if (uVar4 != 0xffffffff) {
      if (uVar4 == 0) {
        this->field_0550 = CASE_5;
      }
      goto cf_common_exit_0046F0F9;
    }

    local_EAX_348 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2829,0,0,"%s",
                            "STBoatC::BackUnLoadRC, UNLOADRC_PDEPOT");
    if (local_EAX_348 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar5 = 0x282a;
    goto cf_error_exit_0046F13E;
  case CASE_5:
    /* ST_CALLSITE[0046F26E]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
    sub_0048D930(this);
    pSVar6 = (STBoatC *)(this->field_0548 + 1);
    this->field_0548 = (int)pSVar6;
    if ((int)pSVar6 < 0x47) goto cf_common_exit_0046F0F9;
    this->field_0548 = 0;
    this->field_054C = CASE_6;
  case CASE_6:
    if (this->field_0550 == CASE_0) {
      iVar5 = STReplaceLowWord((uint32_t)(pSVar6), (uint16_t)(this->field_053E * 0xc9)) + 100;
      /* ST_CALLSITE[0046F2EC]: CALL dword ptr [EDX + 0x10] */
      uVar3 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar5), (uint16_t)(this->field_0045)),
                         this->field_053C * 0xc9 + 100,(short)iVar5,
                         (ushort)(this->field_0540 * 200) + 100);
      this->field_0542 = uVar3;
      this->field_0550 = CASE_1;
    }
    if (this->field_0550 == CASE_1) {
      /* ST_CALLSITE[0046F315]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STBoatC; source view only; no Ghidra override */
      uVar4 = sub_004176C0(this,this->field_0542);
      /* ST_CALLSITE[0046F31D]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          this->field_0550 = CASE_2;
        }
cf_common_exit_0046F0F9:
        /* ST_CALLSITE[0046F0FD]: CALL dword ptr [EAX + 0xd8] */
        iVar5 = this->vfunc_D8();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }

      local_EAX_902 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2864,0,0,"%s",
                              "STBoatC::BackUnLoadRC, UNLOADRC_ODEPOT");
      if (local_EAX_902 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar5 = 0x2865;
    }
    else {
      if (this->field_0550 == CASE_2) {
        /* ST_CALLSITE[0046F3BC]: CALL 0x00402455; direct=00402455 sub_00415B30 */
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_053C * 0xc9 + 100,this->field_053E * 0xc9 + 100,
                     this->field_0540 * 200 + 100,this->field_0061);
        this->field_0550 = CASE_3;
      }
      if (this->field_0550 != CASE_3) {
switchD_0046eff1_default:

        local_EAX_1149 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x288a,0,0,"%s",
                                "STBoatC::BackUnLoadRC");
        if (local_EAX_1149 == 0) {
          return -1;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      /* ST_CALLSITE[0046F3D9]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      iVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar5 != -1) {
        if (iVar5 != 0) {
          /* ST_CALLSITE[0046F3EF]: CALL dword ptr [EDX + 0xd8] */
          iVar5 = this->vfunc_D8();
          return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
        }
LAB_0046f1fd:
        /* ST_CALLSITE[0046F201]: CALL dword ptr [EAX + 0xd8] */
        iVar5 = this->vfunc_D8();
        return -(uint)(iVar5 != 0);
      }

      iVar4 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x287c,0,0,"%s",
                                 "STBoatC::BackUnLoadRC, UNLOADRC_ODEPOT 2");
      if (iVar4 != 0) {
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
  if (local_EAX_56 == 0) {
    /* ST_CALLSITE[0046F015]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
    sub_0048D930(this);
  }
  return local_EAX_56;
}


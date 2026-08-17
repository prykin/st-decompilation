#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackLoadRC

   [STSwitchEnumApplier] Switch target field_04D5 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_04D5State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7;CASE_8=8;CASE_9=9;CASE_A=10;CASE_B=11;CASE_C=12;CASE_D=13;CASE_E=14

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0046AA50 -> 004620F0 @ 0046AAAA | 0046AA50 -> 004620F0 @ 0046AABD | 0046AA50 ->
   004620F0 @ 0046AF0D

   [STSwitchEnumApplier] Switch target field_04D9 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_04D9State. Cases:
   CASE_1=1;CASE_2=2;CASE_4=4;CASE_5=5

   [STSwitchEnumApplier] Switch target field_04D9 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_04D9State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_04D9 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_04D9State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6 */

int __thiscall STBoatC::BackLoadRC(STBoatC *this,STBoatC *param_1)

{
  STBoatC_field_04D9State SVar1;
  undefined2 uVar3;
  int local_EAX_56;
  int local_EAX_90;
  int local_EAX_185;
  int local_EAX_430;
  int local_EAX_685;
  uint uVar4;
  int local_EAX_984;
  int iVar5;
  int local_EAX_1213;
  int local_EAX_1268;
  int iVar6;
  STBoatC *pSVar7;
  STBoatC *local_8;

  this->field_00B7 = 0;
  pSVar7 = this;
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
      local_EAX_90 = thunk_FUN_004620f0(this);
      return local_EAX_90;
    }
    /* ST_CALLSITE[0046AA88]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    local_EAX_56 = sub_00460360(this);
    break;
  case 3:
  case 9:
    local_EAX_56 = thunk_FUN_004620f0(this);
    break;
  case 5:
    /* ST_CALLSITE[0046AAC6]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
    sub_0048D930(this);
    iVar6 = *(int *)&this->field_0x4d1 + 1;
    *(int *)&this->field_0x4d1 = iVar6;
    if (iVar6 < 0x47) {
LAB_0046acad:
      /* ST_CALLSITE[0046ACB1]: CALL dword ptr [EDX + 0xd8] */
      iVar6 = this->vfunc_D8();
      return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
    }
    *(undefined4 *)&this->field_0x4d1 = 0;
    goto LAB_0046aaed;
  case 6:
  case 0xe:
    /* ST_CALLSITE[0046AB09]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    local_EAX_185 = sub_00460360(this);
    return local_EAX_185;
  case 0xb:
    SVar1 = this->field_04D9;
    if (((SVar1 == CASE_0) || (SVar1 == CASE_1)) || (SVar1 == CASE_2)) {
      /* ST_CALLSITE[0046AD23]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
      sub_0048D930(this);
      /* ST_CALLSITE[0046AD2C]: CALL dword ptr [EDX + 0xd8] */
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    if (SVar1 == CASE_3) {
      iVar6 = STReplaceLowWord((uint32_t)(this), (uint16_t)(this->field_04C7 * 0xc9)) + 100;
      /* ST_CALLSITE[0046AB7E]: CALL dword ptr [EDX + 0x10] */
      uVar3 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_0045)),
                         this->field_04C5 * 0xc9 + 100,(short)iVar6,
                         (ushort)(this->field_04C9 * 200) + 100);
      this->field_04CB = uVar3;
      this->field_04D9 = CASE_4;
    }
    if (this->field_04D9 == CASE_4) {
      /* ST_CALLSITE[0046ABAB]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      uVar4 = sub_004176C0(this,this->field_04CB);
      /* ST_CALLSITE[0046ABB3]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          this->field_04D9 = CASE_5;
        }
        goto cf_common_exit_0046ABCB;
      }
      local_EAX_430 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x22fd,0,0,"%s",
                              "STBoatC::BackLoadRC, LOADRC_PDEPOT");
      if (local_EAX_430 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x22fe;
    }
    else {
      if (this->field_04D9 == CASE_5) {
        /* ST_CALLSITE[0046AC82]: CALL 0x00402455; direct=00402455 sub_00415B30 */
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_04C5 * 0xc9 + 100,this->field_04C7 * 0xc9 + 100,
                     this->field_04C9 * 200 + 100,this->field_0061);
        this->field_04D9 = CASE_6;
      }
      if (this->field_04D9 != CASE_6) {
        return 2;
      }
      /* ST_CALLSITE[0046AC9F]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      iVar6 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar6 != -1) {
        if (iVar6 == 0) {
          /* ST_CALLSITE[0046ACCA]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
          sub_0048D930(this);
          /* ST_CALLSITE[0046ACD3]: CALL dword ptr [EAX + 0xd8] */
          iVar6 = this->vfunc_D8();
          return -(uint)(iVar6 != 0);
        }
        goto LAB_0046acad;
      }
      local_EAX_685 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2311,0,0,"%s",
                              "STBoatC::BackLoadRC, LOADRC_PDEPOT 2");
      if (local_EAX_685 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x2312;
    }
    goto LAB_0046ac10;
  case 0xc:
    /* ST_CALLSITE[0046AD40]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
    sub_0048D930(this);
    pSVar7 = (STBoatC *)(*(int *)&this->field_0x4d1 + 1);
    *(STBoatC **)&this->field_0x4d1 = pSVar7;
    if ((int)pSVar7 < 0x47) goto cf_common_exit_0046ABCB;
    *(undefined4 *)&this->field_0x4d1 = 0;
    *(undefined4 *)&this->field_0x4d5 = 0xd;
  case 0xd:
    if (this->field_04D9 == CASE_0) {
      iVar6 = STReplaceLowWord((uint32_t)(pSVar7), (uint16_t)(this->field_04C7 * 0xc9)) + 100;
      /* ST_CALLSITE[0046ADBE]: CALL dword ptr [EDX + 0x10] */
      uVar3 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_0045)),
                         this->field_04C5 * 0xc9 + 100,(short)iVar6,
                         (ushort)(this->field_04C9 * 200) + 100);
      this->field_04CB = uVar3;
      this->field_04D9 = CASE_1;
    }
    if (this->field_04D9 == CASE_1) {
      /* ST_CALLSITE[0046ADE7]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      uVar4 = sub_004176C0(this,this->field_04CB);
      /* ST_CALLSITE[0046ADEF]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          this->field_04D9 = CASE_2;
        }
cf_common_exit_0046ABCB:
        /* ST_CALLSITE[0046ABCF]: CALL dword ptr [EAX + 0xd8] */
        iVar6 = this->vfunc_D8();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
      local_EAX_984 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2338,0,0,"%s",
                              "STBoatC::BackLoadRC, LOADRC_ODEPOT");
      if (local_EAX_984 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x2339;
    }
    else {
      if (this->field_04D9 == CASE_2) {
        /* ST_CALLSITE[0046AE8E]: CALL 0x00402455; direct=00402455 sub_00415B30 */
        sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                     this->field_04C5 * 0xc9 + 100,this->field_04C7 * 0xc9 + 100,
                     this->field_04C9 * 200 + 100,this->field_0061);
        this->field_04D9 = CASE_3;
      }
      if (this->field_04D9 != CASE_3) {
switchD_0046aa71_caseD_0:
        local_EAX_1213 = thunk_FUN_004620f0(this);
        /* ST_CALLSITE[0046AF18]: CALL dword ptr [EAX + 0xd8] */
        iVar6 = this->vfunc_D8();
        if (iVar6 != 0) {
          return -1;
        }
        return local_EAX_1213;
      }
      /* ST_CALLSITE[0046AEAB]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      iVar6 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if (iVar6 != -1) {
        if (iVar6 != 0) {
          /* ST_CALLSITE[0046AEC1]: CALL dword ptr [EDX + 0xd8] */
          iVar6 = this->vfunc_D8();
          return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
        }
LAB_0046aaed:
        /* ST_CALLSITE[0046AAF1]: CALL dword ptr [EAX + 0xd8] */
        iVar6 = this->vfunc_D8();
        return -(uint)(iVar6 != 0);
      }
      iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2350,0,0,"%s",
                                 "STBoatC::BackLoadRC, LOADRC_ODEPOT 2");
      if (iVar5 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar6 = 0x2351;
    }
LAB_0046ac10:
    RaiseInternalException
              (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar6);
    return 0xffff;
  default:
    local_EAX_1268 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2367,0,0,"%s",
                            "STBoatC::BackLoadRC");
    if (local_EAX_1268 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (local_EAX_56 == 0) {
    /* ST_CALLSITE[0046AA95]: CALL 0x00403c0b; direct=00403C0B STBoatC::sub_0048D930 */
    sub_0048D930(this);
  }
  return local_EAX_56;
}


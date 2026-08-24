#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackBuild

   [STSwitchEnumApplier] Switch target field_0508 uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_0508State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_7=7
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   BackBuild(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=0046C9BB RET 0x4 | 0046C9E0 RET 0x4 | 0046C9F6 RET 0x4 | 0046CAC7 RET 0x4 |
   0046CB14 RET 0x4 | 0046CBB5 RET 0x4 | 0046CC01 RET 0x4 | 0046CC0B RET 0x4 | 0046CD77 RET 0x4 |
   0046CDD6 RET 0x4

   [STSwitchEnumApplier] Switch target field_050C uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_050CState. Cases: CASE_1=1;CASE_2=2;CASE_5=5

   [STSwitchEnumApplier] Switch target field_050C uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_050CState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_5=5

   [STSwitchEnumApplier] Switch target field_050C uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_050CState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_5=5 */

int __thiscall STBoatC::BackBuild(STBoatC *this,int *param_1)

{
  STBoatC_field_050CState SVar1;
  ushort uVar3;
  int local_EAX_105;
  int local_EAX_354;
  int local_EAX_592;
  uint uVar4;
  int iVar5;
  uint uVar5;
  int local_EAX_1042;
  int local_EAX_1089;
  int iVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  undefined4 in_EDX;
  STBoatC *local_8;

  uVar3 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  switch(this->field_0508) {
  case CASE_0:
  case CASE_1:
  case CASE_7:
    /* ST_CALLSITE[0046C9E9]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
    local_EAX_105 = sub_00460360(this);
    return (int)(short)local_EAX_105;
  case CASE_2:
  case CASE_3:
  case CASE_4:
    SVar1 = this->field_050C;
    if (((SVar1 == CASE_0) || (SVar1 == CASE_1)) || (SVar1 == CASE_2)) {
      return 0;
    }
    if (SVar1 == CASE_3) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      iVar6 = CONCAT22(uVar3,this->field_04FE * 0xc9) + 100;
      /* ST_CALLSITE[0046CA66]: CALL dword ptr [EDX + 0x10] */
      uVar3 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_0045)),
                         this->field_04FC * 0xc9 + 100,(short)iVar6,
                         (ushort)(this->field_0500 * 200) + 100);
      this->field_0506 = uVar3;
      this->field_050C = 4;
    }
    if (this->field_050C == 4) {
      /* ST_CALLSITE[0046CA8C]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      uVar4 = sub_004176C0(this,this->field_0506);
      /* ST_CALLSITE[0046CA94]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar4 = sub_00417910(this,(short)uVar4);
      if ((short)uVar4 == -1) {
        local_EAX_354 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x253e,0,0,"%s",
                                "STBoatC::BackBuild, BUILD_PMOVE");
        if (local_EAX_354 == 0) {
          RaiseInternalException
                    (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",
                     0x253f);
          return 0xffff;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if ((short)uVar4 == 0) {
        this->field_050C = CASE_5;
        /* ST_CALLSITE[0046CAB3]: CALL dword ptr [EAX + 0xd8] */
        iVar6 = this->vfunc_D8();
        return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
      }
    }
    if (this->field_050C == CASE_5) {
      /* ST_CALLSITE[0046CB6C]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_04FC * 0xc9 + 100,this->field_04FE * 0xc9 + 100,
                   this->field_0500 * 200 + 100,this->field_0061);
      this->field_050C = 6;
    }
    if (this->field_050C == 6) {
      /* ST_CALLSITE[0046CB8D]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      uVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if ((short)uVar5 == -1) {
        local_EAX_592 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2554,0,0,"%s",
                                "STBoatC::BackBuild, BUILD_PMOVE 2");
        if (local_EAX_592 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x2555;
cf_error_exit_0046CBE2:
        RaiseInternalException
                  (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar6);
        return 0xffff;
      }
      if ((short)uVar5 == 0) {
        /* ST_CALLSITE[0046CBA6]: CALL dword ptr [EDX + 0xd8] */
        iVar6 = this->vfunc_D8();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  case CASE_5:
    if (this->field_0502 == 0) {
      /* ST_CALLSITE[0046C9AC]: CALL dword ptr [EAX + 0xd8] */
      iVar6 = this->vfunc_D8();
      return -(uint)(iVar6 != 0);
    }
    this->field_0508 = CASE_6;
    break;
  case CASE_6:
    if (this->field_050C == CASE_0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar6 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_04FE * 0xc9)) + 100;
      /* ST_CALLSITE[0046CC60]: CALL dword ptr [EAX + 0x10] */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      uVar3 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar6), (uint16_t)(this->field_0045)),
                         this->field_04FC * 0xc9 + 100,(short)iVar6,
                         CONCAT22(uVar3,this->field_0500 * 200) + 100);
      this->field_0506 = uVar3;
      this->field_050C = CASE_1;
    }
    if (this->field_050C == CASE_1) {
      /* ST_CALLSITE[0046CC82]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0 */
      uVar4 = sub_004176C0(this,this->field_0506);
      /* ST_CALLSITE[0046CC8A]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar4 = sub_00417910(this,(short)uVar4);
      if ((short)uVar4 == -1) {
        iVar5 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x256d,0,0,"%s",
                                   "STBoatC::BackBuild, BUILD_OMOVE");
        if (iVar5 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x256e;
        goto cf_error_exit_0046CBE2;
      }
      if ((short)uVar4 == 0) {
        this->field_050C = CASE_2;
        break;
      }
    }
    if (this->field_050C == CASE_2) {
      /* ST_CALLSITE[0046CD2E]: CALL 0x00402455; direct=00402455 sub_00415B30 */
      sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                   this->field_04FC * 0xc9 + 100,this->field_04FE * 0xc9 + 100,
                   this->field_0500 * 200 + 100,this->field_0061);
      this->field_050C = CASE_3;
    }
    if (this->field_050C == CASE_3) {
      /* ST_CALLSITE[0046CD4F]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
      uVar5 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
      if ((short)uVar5 == -1) {
        local_EAX_1042 =
             ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2583,0,0,"%s",
                                "STBoatC::BackBuild, BUILD_OMOVE 2");
        if (local_EAX_1042 != 0) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar6 = 0x2584;
        goto cf_error_exit_0046CBE2;
      }
      if ((short)uVar5 == 0) {
        /* ST_CALLSITE[0046CD68]: CALL dword ptr [EDX + 0xd8] */
        iVar6 = this->vfunc_D8();
        return -(uint)(iVar6 != 0);
      }
    }
    break;
  default:
    local_EAX_1089 =
         ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x2590,0,0,"%s",
                            "STBoatC::BackBuild");
    if (local_EAX_1089 == 0) {
      return -1;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  /* ST_CALLSITE[0046C9CC]: CALL dword ptr [EDX + 0xd8] */
  iVar6 = this->vfunc_D8();
  return (-(uint)(iVar6 != 0) & 0xfffffffd) + 2;
}


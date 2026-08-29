#include "../../pseudocode_runtime.h"


/* WARNING: Removing unreachable block (ram,0x00465790) */
/* WARNING: Removing unreachable block (ram,0x004657b4) */
/* WARNING: Removing unreachable block (ram,0x004657b5) */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackAttack
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=int __thiscall
   BackAttack(STBoatC * this, int * param_1) Evidence: every machine RET purges exactly 4 explicit
   stack bytes; current signature describes 12; removed trailing parameter slots have no listing
   references; ret_sites=004653E5 RET 0x4 | 0046543A RET 0x4 | 004654E4 RET 0x4 | 0046559A RET 0x4 |
   004655F1 RET 0x4 | 004656CB RET 0x4 | 00465736 RET 0x4 | 00465781 RET 0x4 | 0046578D RET 0x4 |
   004657BC RET 0x4

   [STSwitchEnumApplier] Switch target field_082E uses
   /SubmarineTitans/Recovered/Enums/STBoatC_field_082EState. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_FFFFFFFF=4294967295 */

int __thiscall STBoatC::BackAttack(STBoatC *this,int *param_1)

{
  short sVar2;
  int local_EAX_27;
  int iVar4;
  uint uVar5;
  int local_EAX_335;
  int local_EAX_424;
  int local_EAX_481;
  int iVar3;
  int local_EAX_929;
  ushort uVar7;
  STBoatC *pSVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_EDX;
  ushort uVar8;
  STBoatC *local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar8 = (undefined2)((uint)in_EDX >> 0x10);
  uVar7 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  if (this->field_06F7 == CASE_9) {
    if (this->field_082E != CASE_3) {
LAB_00465581:
      this->field_00B7 = 0;
      /* ST_CALLSITE[00465591]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
      local_EAX_481 = sub_00460360(this);
      return local_EAX_481;
    }
    pSVar6 = this;
    if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((this->field_0041 == this->field_0034) &&
         ((this->field_0043 == this->field_0036 &&
          (pSVar6 = (STBoatC *)CONCAT22(uVar7,this->field_0045),
          this->field_0045 == this->field_0038)))) {
        /* ST_CALLSITE[0046542C]: CALL dword ptr [EDX + 0xd8] */
        iVar4 = this->vfunc_D8();
        return -(uint)(iVar4 != 0);
      }
      this->field_0832 = 0;
    }
    if (this->field_0832 == 0) {
      /* ST_CALLSITE[00465477]: CALL dword ptr [EAX + 0x10] */
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,CONCAT22(uVar8,this->field_0045),
                         this->field_0034,this->field_0036,
                         STReplaceLowWord((uint32_t)(pSVar6), (uint16_t)(this->field_0038)));
      /* ST_CALLSITE[0046547D]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STBoatC; source view only; no Ghidra override */
      uVar5 = sub_004176C0(this,sVar2);
      /* ST_CALLSITE[00465485]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar5 = sub_00417910(this,(short)uVar5);
      if (uVar5 != 0xffffffff) {
        if (uVar5 == 0) {
          /* ST_CALLSITE[004654B7]: CALL 0x00402455; direct=00402455 sub_00415B30 */
          sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,this->field_0034,
                       this->field_0036,this->field_0038,this->field_0061);
          this->field_007A = 0;
          this->field_0832 = 1;
        }
        /* ST_CALLSITE[004654D1]: CALL dword ptr [EDX + 0xd8] */
        iVar4 = this->vfunc_D8();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }

      local_EAX_335 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1b8c,0,0,"%s",
                              "STBoatC::BackAttack RotateCheat WORM");
      if (local_EAX_335 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x1b8d;
      goto cf_error_exit_00465763;
    }
    if (this->field_0832 != 1) {
      return 2;
    }
    /* ST_CALLSITE[00465529]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
    iVar4 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
    if (iVar4 == -1) {

      local_EAX_424 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1b9e,0,0,"%s",
                              "STBoatC::BackAttack LLMoveStep WORM");
      if (local_EAX_424 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x1b9f;
      goto cf_error_exit_00465763;
    }
  }
  else {
    if (this->field_06F7 != CASE_15) {
      /* ST_CALLSITE[004653CB]: CALL 0x00403df0; direct=00403DF0 STBoatC::sub_00460360 */
      local_EAX_27 = sub_00460360(this);
      if (local_EAX_27 != 0) {
        return local_EAX_27;
      }
      this->field_0816 = 5;
      return 0;
    }
    if (this->field_082E != CASE_3) goto LAB_00465581;
    pSVar6 = this;
    if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      in_EDX = CONCAT22(uVar8,this->field_0047 * 0xc9) + 100;
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      if ((this->field_0041 == (short)in_EDX) &&
         ((this->field_0043 == (short)(this->field_0049 * 0xc9 + 100) &&
          (pSVar6 = (STBoatC *)(CONCAT22(uVar7,this->field_004B * 200) + 100),
          this->field_0045 == (short)pSVar6)))) goto LAB_004655df;
      this->field_0832 = 0;
    }
    if (this->field_0832 == 0) {
      /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
      iVar4 = STReplaceLowWord((uint32_t)(in_EDX), (uint16_t)(this->field_0049 * 0xc9)) + 100;
      /* ST_CALLSITE[00465646]: CALL dword ptr [EAX + 0x10] */
      sVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         STReplaceLowWord((uint32_t)(iVar4), (uint16_t)(this->field_0045)),
                         this->field_0047 * 0xc9 + 100,(short)iVar4,
                         STReplaceLowWord((uint32_t)(pSVar6), (uint16_t)(this->field_004B * 200)) + 100);
      /* ST_CALLSITE[0046564C]: CALL 0x004030b2; direct=004030B2 STBoatC::sub_004176C0; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/STBoatC; source view only; no Ghidra override */
      uVar5 = sub_004176C0(this,sVar2);
      /* ST_CALLSITE[00465654]: CALL 0x004022fc; direct=004022FC STBoatC::sub_00417910 */
      uVar5 = sub_00417910(this,(short)uVar5);
      if (uVar5 != 0xffffffff) {
        if (uVar5 == 0) {
          /* ST_CALLSITE[0046569E]: CALL 0x00402455; direct=00402455 sub_00415B30 */
          sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                       this->field_0047 * 0xc9 + 100,this->field_0049 * 0xc9 + 100,
                       this->field_004B * 200 + 100,this->field_0061);
          this->field_007A = 0;
          this->field_0832 = 1;
        }
        /* ST_CALLSITE[004656B8]: CALL dword ptr [EDX + 0xd8] */
        iVar4 = this->vfunc_D8();
        return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
      }

      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1bc5,0,0,"%s",
                                 "STBoatC::BackAttack RotateCheat DOLPHINE");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x1bc6;
cf_error_exit_00465763:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar4);
      return 0xffff;
    }
    if (this->field_0832 != 1) {
      return 2;
    }
    /* ST_CALLSITE[0046570D]: CALL 0x00402847; direct=00402847 STJellyGunC::sub_00415ED0 */
    iVar4 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
    if (iVar4 == -1) {

      local_EAX_929 =
           ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1bd7,0,0,"%s",
                              "STBoatC::BackAttack LLMoveStep DOLPHINE");
      if (local_EAX_929 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar4 = 0x1bd8;
      goto cf_error_exit_00465763;
    }
  }
  if (iVar4 != 0) {
    /* ST_CALLSITE[00465723]: CALL dword ptr [EAX + 0xd8] */
    iVar4 = this->vfunc_D8();
    return (-(uint)(iVar4 != 0) & 0xfffffffd) + 2;
  }
LAB_004655df:
  /* ST_CALLSITE[004655E3]: CALL dword ptr [EDX + 0xd8] */
  iVar4 = this->vfunc_D8();
  return -(uint)(iVar4 != 0);
}


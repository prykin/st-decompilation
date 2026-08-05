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
   004657BC RET 0x4 */

int __thiscall STBoatC::BackAttack(STBoatC *this,int *param_1)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined2 uVar6;
  STBoatC *pSVar5;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int in_EDX;
  undefined2 uVar7;
  STBoatC *local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  uVar7 = (undefined2)((uint)in_EDX >> 0x10);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar3 = *(int *)((int)this->field_06CB + 0x2c);
  uVar6 = (undefined2)((uint)this >> 0x10);
  local_8 = this;
  if (iVar3 == 9) {
    if (this->field_082E != 3) {
LAB_00465581:
      this->field_00B7 = 0;
      iVar3 = sub_00460360(this);
      return iVar3;
    }
    pSVar5 = this;
    if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      if ((this->field_0041 == this->field_0034) &&
         ((this->field_0043 == this->field_0036 &&
          (pSVar5 = (STBoatC *)CONCAT22(uVar6,this->field_0045),
          this->field_0045 == this->field_0038)))) {
        iVar3 = this->vfunc_D8();
        return -(uint)(iVar3 != 0);
      }
      this->field_0832 = 0;
    }
    if (this->field_0832 == 0) {
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,CONCAT22(uVar7,this->field_0045),
                         this->field_0034,this->field_0036,
                         CONCAT22((short)((uint)pSVar5 >> 0x10),this->field_0038));
      uVar4 = sub_004176C0(this,sVar2);
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,this->field_0034,
                       this->field_0036,this->field_0038,this->field_0061);
          this->field_007A = 0;
          this->field_0832 = 1;
        }
        iVar3 = this->vfunc_D8();
        return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
      }
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1b8c,0,0,"%s",
                                 "STBoatC::BackAttack RotateCheat WORM");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar3 = 0x1b8d;
      goto cf_error_exit_00465763;
    }
    if (this->field_0832 != 1) {
      return 2;
    }
    iVar3 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1b9e,0,0,"%s",
                                 "STBoatC::BackAttack LLMoveStep WORM");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar3 = 0x1b9f;
      goto cf_error_exit_00465763;
    }
  }
  else {
    if (iVar3 != 0x15) {
      iVar3 = sub_00460360(this);
      if (iVar3 != 0) {
        return iVar3;
      }
      this->field_0816 = 5;
      return 0;
    }
    if (this->field_082E != 3) goto LAB_00465581;
    pSVar5 = this;
    if ((param_1 == nullptr) || (param_1 == (int *)0x1)) {
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      in_EDX = CONCAT22(uVar7,this->field_0047 * 0xc9) + 100;
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      if ((this->field_0041 == (short)in_EDX) &&
         ((this->field_0043 == (short)(this->field_0049 * 0xc9 + 100) &&
          (pSVar5 = (STBoatC *)(CONCAT22(uVar6,this->field_004B * 200) + 100),
          this->field_0045 == (short)pSVar5)))) goto LAB_004655df;
      this->field_0832 = 0;
    }
    if (this->field_0832 == 0) {
      /* ST_PSEUDO[unresolved_register_input,packed_or_unaligned_piece]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention; expected named packed member, bit extract/compose, or unaligned load */
      iVar3 = CONCAT22((short)((uint)in_EDX >> 0x10),this->field_0049 * 0xc9) + 100;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      sVar2 = (*this->vtable->vfunc_10)
                        (this->field_0041,this->field_0043,
                         CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0045),
                         this->field_0047 * 0xc9 + 100,(short)iVar3,
                         CONCAT22((short)((uint)pSVar5 >> 0x10),this->field_004B * 200) + 100);
      uVar4 = sub_004176C0(this,sVar2);
      uVar4 = sub_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          sub_00415B30(this,this->field_0041,this->field_0043,this->field_0045,
                       this->field_0047 * 0xc9 + 100,this->field_0049 * 0xc9 + 100,
                       this->field_004B * 200 + 100,this->field_0061);
          this->field_007A = 0;
          this->field_0832 = 1;
        }
        iVar3 = this->vfunc_D8();
        return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
      }
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1bc5,0,0,"%s",
                                 "STBoatC::BackAttack RotateCheat DOLPHINE");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar3 = 0x1bc6;
cf_error_exit_00465763:
      RaiseInternalException
                (0xffff,g_overwriteContext_007ED77C,"E:\\__titans\\wlad\\To_boat.cpp",iVar3);
      return 0xffff;
    }
    if (this->field_0832 != 1) {
      return 2;
    }
    iVar3 = STJellyGunC::sub_00415ED0((STJellyGunC *)this,&local_8,(int *)&param_1);
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage("E:\\__titans\\wlad\\To_boat.cpp",0x1bd7,0,0,"%s",
                                 "STBoatC::BackAttack LLMoveStep DOLPHINE");
      if (iVar3 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      iVar3 = 0x1bd8;
      goto cf_error_exit_00465763;
    }
  }
  if (iVar3 != 0) {
    iVar3 = this->vfunc_D8();
    return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
  }
LAB_004655df:
  iVar3 = this->vfunc_D8();
  return -(uint)(iVar3 != 0);
}


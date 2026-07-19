
/* WARNING: Removing unreachable block (ram,0x00465790) */
/* WARNING: Removing unreachable block (ram,0x004657b4) */
/* WARNING: Removing unreachable block (ram,0x004657b5) */
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\To_boat.cpp
   STBoatC::BackAttack */

int __thiscall STBoatC::BackAttack(STBoatC *this,int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  STBoatC *pSVar5;
  int iVar6;
  int in_EDX;
  int iVar7;
  undefined2 uVar8;
  STBoatC *local_8;
  
  uVar8 = (undefined2)((uint)in_EDX >> 0x10);
  local_8 = this;
  if (this->field_06F7 == CASE_9) {
    if (this->field_082E != 3) {
LAB_00465581:
      this->field_00B7 = 0;
      iVar3 = thunk_FUN_00460360((int *)this);
      return iVar3;
    }
    if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
      if ((this->field_0041 == *(short *)&this->field_0x34) &&
         ((this->field_0043 == *(short *)&this->field_0x36 &&
          (this->field_0045 == *(short *)&this->field_0x38)))) {
        iVar3 = (*this->vtable->vfunc_D8)();
        return -(uint)(iVar3 != 0);
      }
      *(undefined4 *)&this->field_0x832 = 0;
    }
    if (*(int *)&this->field_0x832 == 0) {
      sVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar8,this->field_0041),this->field_0043,
                         CONCAT22(uVar8,this->field_0045),*(undefined2 *)&this->field_0x34,
                         CONCAT22(uVar8,*(undefined2 *)&this->field_0x36),
                         *(undefined2 *)&this->field_0x38);
      uVar4 = thunk_FUN_004176c0(this,sVar2);
      uVar4 = thunk_FUN_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                             *(short *)&this->field_0x34,*(short *)&this->field_0x36,
                             *(short *)&this->field_0x38,this->field_0x61);
          *(undefined4 *)&this->field_0x7a = 0;
          *(undefined4 *)&this->field_0x832 = 1;
        }
        iVar3 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
      }
      iVar3 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1b8c,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackAttack_RotateCheat_W_007aa210);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      iVar3 = 0x1b8d;
      goto cf_error_exit_00465763;
    }
    if (*(int *)&this->field_0x832 != 1) {
      return 2;
    }
    iVar3 = thunk_FUN_00415ed0(this,&local_8,&param_1);
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1b9e,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackAttack_LLMoveStep_W_007aa1e4);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      iVar3 = 0x1b9f;
      goto cf_error_exit_00465763;
    }
  }
  else {
    if (this->field_06F7 != CASE_15) {
      iVar3 = thunk_FUN_00460360((int *)this);
      if (iVar3 != 0) {
        return iVar3;
      }
      this->field_0816 = 5;
      return 0;
    }
    if (this->field_082E != 3) goto LAB_00465581;
    pSVar5 = this;
    if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
      in_EDX = CONCAT22(uVar8,this->field_0047 * 0xc9) + 100;
      if ((this->field_0041 == (short)in_EDX) &&
         ((this->field_0043 == (short)(this->field_0049 * 0xc9 + 100) &&
          (pSVar5 = (STBoatC *)(CONCAT22((short)((uint)this >> 0x10),this->field_004B * 200) + 100),
          this->field_0045 == (short)pSVar5)))) goto LAB_004655df;
      *(undefined4 *)&this->field_0x832 = 0;
    }
    if (*(int *)&this->field_0x832 == 0) {
      iVar3 = CONCAT22((short)((uint)pSVar5 >> 0x10),this->field_004B * 200) + 100;
      iVar7 = CONCAT22((short)((uint)in_EDX >> 0x10),this->field_0049 * 0xc9) + 100;
      iVar6 = CONCAT22((short)((uint)iVar3 >> 0x10),this->field_0047 * 0xc9) + 100;
      uVar8 = (undefined2)((uint)iVar7 >> 0x10);
      sVar2 = (*this->vtable->vfunc_10)
                        (CONCAT22(uVar8,this->field_0041),
                         CONCAT22((short)((uint)iVar6 >> 0x10),this->field_0043),
                         CONCAT22(uVar8,this->field_0045),iVar6,iVar7,iVar3);
      uVar4 = thunk_FUN_004176c0(this,sVar2);
      uVar4 = thunk_FUN_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          thunk_FUN_00415b30(this,this->field_0041,this->field_0043,this->field_0045,
                             this->field_0047 * 0xc9 + 100,this->field_0049 * 0xc9 + 100,
                             this->field_004B * 200 + 100,this->field_0x61);
          *(undefined4 *)&this->field_0x7a = 0;
          *(undefined4 *)&this->field_0x832 = 1;
        }
        iVar3 = (*this->vtable->vfunc_D8)();
        return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
      }
      iVar3 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1bc5,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackAttack_RotateCheat_D_007aa1b0);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      iVar3 = 0x1bc6;
cf_error_exit_00465763:
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar3);
      return 0xffff;
    }
    if (*(int *)&this->field_0x832 != 1) {
      return 2;
    }
    iVar3 = thunk_FUN_00415ed0(this,&local_8,&param_1);
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1bd7,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackAttack_LLMoveStep_D_007aa180);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      iVar3 = 0x1bd8;
      goto cf_error_exit_00465763;
    }
  }
  if (iVar3 != 0) {
    iVar3 = (*this->vtable->vfunc_D8)();
    return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
  }
LAB_004655df:
  iVar3 = (*this->vtable->vfunc_D8)();
  return -(uint)(iVar3 != 0);
}


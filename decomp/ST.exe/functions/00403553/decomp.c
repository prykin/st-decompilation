
/* WARNING: Removing unreachable block (ram,0x00465790) */
/* WARNING: Removing unreachable block (ram,0x004657b4) */
/* WARNING: Removing unreachable block (ram,0x004657b5) */

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
  STBoatC *pSStack_8;
  
  uVar8 = (undefined2)((uint)in_EDX >> 0x10);
  pSStack_8 = this;
  if (*(int *)(this + 0x6f7) == 9) {
    if (*(int *)(this + 0x82e) != 3) {
LAB_00465581:
      *(undefined4 *)(this + 0xb7) = 0;
      iVar3 = thunk_FUN_00460360((int *)this);
      return iVar3;
    }
    if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
      if ((*(short *)(this + 0x41) == *(short *)(this + 0x34)) &&
         ((*(short *)(this + 0x43) == *(short *)(this + 0x36) &&
          (*(short *)(this + 0x45) == *(short *)(this + 0x38))))) {
        iVar3 = (**(code **)(*(int *)this + 0xd8))();
        return -(uint)(iVar3 != 0);
      }
      *(undefined4 *)(this + 0x832) = 0;
    }
    if (*(int *)(this + 0x832) == 0) {
      sVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar8,*(undefined2 *)(this + 0x41)),*(undefined2 *)(this + 0x43),
                         CONCAT22(uVar8,*(undefined2 *)(this + 0x45)),*(undefined2 *)(this + 0x34),
                         CONCAT22(uVar8,*(undefined2 *)(this + 0x36)),*(undefined2 *)(this + 0x38));
      uVar4 = thunk_FUN_004176c0(this,sVar2);
      uVar4 = thunk_FUN_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                             *(short *)(this + 0x45),*(short *)(this + 0x34),*(short *)(this + 0x36)
                             ,*(short *)(this + 0x38),(byte)this[0x61]);
          *(undefined4 *)(this + 0x7a) = 0;
          *(undefined4 *)(this + 0x832) = 1;
        }
        iVar3 = (**(code **)(*(int *)this + 0xd8))();
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
      goto LAB_00465763;
    }
    if (*(int *)(this + 0x832) != 1) {
      return 2;
    }
    iVar3 = thunk_FUN_00415ed0(this,&pSStack_8,&param_1);
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1b9e,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackAttack_LLMoveStep_W_007aa1e4);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      iVar3 = 0x1b9f;
      goto LAB_00465763;
    }
  }
  else {
    if (*(int *)(this + 0x6f7) != 0x15) {
      iVar3 = thunk_FUN_00460360((int *)this);
      if (iVar3 != 0) {
        return iVar3;
      }
      *(undefined2 *)(this + 0x816) = 5;
      return 0;
    }
    if (*(int *)(this + 0x82e) != 3) goto LAB_00465581;
    pSVar5 = this;
    if ((param_1 == (int *)0x0) || (param_1 == (int *)0x1)) {
      in_EDX = CONCAT22(uVar8,*(short *)(this + 0x47) * 0xc9) + 100;
      if ((*(short *)(this + 0x41) == (short)in_EDX) &&
         ((*(short *)(this + 0x43) == (short)(*(short *)(this + 0x49) * 0xc9 + 100) &&
          (pSVar5 = (STBoatC *)
                    (CONCAT22((short)((uint)this >> 0x10),*(short *)(this + 0x4b) * 200) + 100),
          *(short *)(this + 0x45) == (short)pSVar5)))) goto LAB_004655df;
      *(undefined4 *)(this + 0x832) = 0;
    }
    if (*(int *)(this + 0x832) == 0) {
      iVar3 = CONCAT22((short)((uint)pSVar5 >> 0x10),*(short *)(this + 0x4b) * 200) + 100;
      iVar7 = CONCAT22((short)((uint)in_EDX >> 0x10),*(short *)(this + 0x49) * 0xc9) + 100;
      iVar6 = CONCAT22((short)((uint)iVar3 >> 0x10),*(short *)(this + 0x47) * 0xc9) + 100;
      uVar8 = (undefined2)((uint)iVar7 >> 0x10);
      sVar2 = (**(code **)(*(int *)this + 0x10))
                        (CONCAT22(uVar8,*(undefined2 *)(this + 0x41)),
                         CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)(this + 0x43)),
                         CONCAT22(uVar8,*(undefined2 *)(this + 0x45)),iVar6,iVar7,iVar3);
      uVar4 = thunk_FUN_004176c0(this,sVar2);
      uVar4 = thunk_FUN_00417910(this,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          thunk_FUN_00415b30(this,*(short *)(this + 0x41),*(short *)(this + 0x43),
                             *(short *)(this + 0x45),*(short *)(this + 0x47) * 0xc9 + 100,
                             *(short *)(this + 0x49) * 0xc9 + 100,
                             *(short *)(this + 0x4b) * 200 + 100,(byte)this[0x61]);
          *(undefined4 *)(this + 0x7a) = 0;
          *(undefined4 *)(this + 0x832) = 1;
        }
        iVar3 = (**(code **)(*(int *)this + 0xd8))();
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
LAB_00465763:
      RaiseInternalException(0xffff,DAT_007ed77c,s_E____titans_wlad_To_boat_cpp_007a9d3c,iVar3);
      return 0xffff;
    }
    if (*(int *)(this + 0x832) != 1) {
      return 2;
    }
    iVar3 = thunk_FUN_00415ed0(this,&pSStack_8,&param_1);
    if (iVar3 == -1) {
      iVar3 = ReportDebugMessage(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1bd7,0,0,&DAT_007a4ccc,
                                 s_STBoatC__BackAttack_LLMoveStep_D_007aa180);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      iVar3 = 0x1bd8;
      goto LAB_00465763;
    }
  }
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*(int *)this + 0xd8))();
    return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
  }
LAB_004655df:
  iVar3 = (**(code **)(*(int *)this + 0xd8))();
  return -(uint)(iVar3 != 0);
}


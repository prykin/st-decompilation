
/* WARNING: Removing unreachable block (ram,0x00465790) */
/* WARNING: Removing unreachable block (ram,0x004657b4) */
/* WARNING: Removing unreachable block (ram,0x004657b5) */

int __fastcall thunk_FUN_004653b0(int *param_1,int param_2,int param_3)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  int *piStack_8;
  
  uVar8 = (undefined2)((uint)param_2 >> 0x10);
  piStack_8 = param_1;
  if (*(int *)((int)param_1 + 0x6f7) == 9) {
    if (*(int *)((int)param_1 + 0x82e) != 3) {
LAB_00465581:
      *(undefined4 *)((int)param_1 + 0xb7) = 0;
      iVar3 = thunk_FUN_00460360(param_1);
      return iVar3;
    }
    if ((param_3 == 0) || (param_3 == 1)) {
      if ((*(short *)((int)param_1 + 0x41) == (short)param_1[0xd]) &&
         ((*(short *)((int)param_1 + 0x43) == *(short *)((int)param_1 + 0x36) &&
          (*(short *)((int)param_1 + 0x45) == (short)param_1[0xe])))) {
        iVar3 = (**(code **)(*param_1 + 0xd8))();
        return -(uint)(iVar3 != 0);
      }
      *(undefined4 *)((int)param_1 + 0x832) = 0;
    }
    if (*(int *)((int)param_1 + 0x832) == 0) {
      sVar2 = (**(code **)(*param_1 + 0x10))
                        (CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x41)),
                         *(undefined2 *)((int)param_1 + 0x43),
                         CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x45)),(short)param_1[0xd],
                         CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x36)),(short)param_1[0xe]);
      uVar4 = thunk_FUN_004176c0(param_1,sVar2);
      uVar4 = thunk_FUN_00417910(param_1,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),*(short *)((int)param_1 + 0x43)
                             ,*(short *)((int)param_1 + 0x45),(short)param_1[0xd],
                             *(short *)((int)param_1 + 0x36),(short)param_1[0xe],
                             *(byte *)((int)param_1 + 0x61));
          *(undefined4 *)((int)param_1 + 0x7a) = 0;
          *(undefined4 *)((int)param_1 + 0x832) = 1;
        }
        iVar3 = (**(code **)(*param_1 + 0xd8))();
        return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
      }
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1b8c,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar9 = 0x1b8d;
      goto LAB_00465763;
    }
    if (*(int *)((int)param_1 + 0x832) != 1) {
      return 2;
    }
    iVar3 = thunk_FUN_00415ed0(param_1,&piStack_8,&param_3);
    if (iVar3 == -1) {
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1b9e,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar9 = 0x1b9f;
      goto LAB_00465763;
    }
  }
  else {
    if (*(int *)((int)param_1 + 0x6f7) != 0x15) {
      iVar3 = thunk_FUN_00460360(param_1);
      if (iVar3 != 0) {
        return iVar3;
      }
      *(undefined2 *)((int)param_1 + 0x816) = 5;
      return 0;
    }
    if (*(int *)((int)param_1 + 0x82e) != 3) goto LAB_00465581;
    piVar5 = param_1;
    if ((param_3 == 0) || (param_3 == 1)) {
      param_2 = CONCAT22(uVar8,*(short *)((int)param_1 + 0x47) * 0xc9) + 100;
      if ((*(short *)((int)param_1 + 0x41) == (short)param_2) &&
         ((*(short *)((int)param_1 + 0x43) == (short)(*(short *)((int)param_1 + 0x49) * 0xc9 + 100)
          && (piVar5 = (int *)(CONCAT22((short)((uint)param_1 >> 0x10),
                                        *(short *)((int)param_1 + 0x4b) * 200) + 100),
             *(short *)((int)param_1 + 0x45) == (short)piVar5)))) goto LAB_004655df;
      *(undefined4 *)((int)param_1 + 0x832) = 0;
    }
    if (*(int *)((int)param_1 + 0x832) == 0) {
      iVar3 = CONCAT22((short)((uint)piVar5 >> 0x10),*(short *)((int)param_1 + 0x4b) * 200) + 100;
      iVar7 = CONCAT22((short)((uint)param_2 >> 0x10),*(short *)((int)param_1 + 0x49) * 0xc9) + 100;
      iVar6 = CONCAT22((short)((uint)iVar3 >> 0x10),*(short *)((int)param_1 + 0x47) * 0xc9) + 100;
      uVar8 = (undefined2)((uint)iVar7 >> 0x10);
      sVar2 = (**(code **)(*param_1 + 0x10))
                        (CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x41)),
                         CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)((int)param_1 + 0x43))
                         ,CONCAT22(uVar8,*(undefined2 *)((int)param_1 + 0x45)),iVar6,iVar7,iVar3);
      uVar4 = thunk_FUN_004176c0(param_1,sVar2);
      uVar4 = thunk_FUN_00417910(param_1,(short)uVar4);
      if (uVar4 != 0xffffffff) {
        if (uVar4 == 0) {
          thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),*(short *)((int)param_1 + 0x43)
                             ,*(short *)((int)param_1 + 0x45),
                             *(short *)((int)param_1 + 0x47) * 0xc9 + 100,
                             *(short *)((int)param_1 + 0x49) * 0xc9 + 100,
                             *(short *)((int)param_1 + 0x4b) * 200 + 100,
                             *(byte *)((int)param_1 + 0x61));
          *(undefined4 *)((int)param_1 + 0x7a) = 0;
          *(undefined4 *)((int)param_1 + 0x832) = 1;
        }
        iVar3 = (**(code **)(*param_1 + 0xd8))();
        return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
      }
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1bc5,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar9 = 0x1bc6;
LAB_00465763:
      FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar9);
      return 0xffff;
    }
    if (*(int *)((int)param_1 + 0x832) != 1) {
      return 2;
    }
    iVar3 = thunk_FUN_00415ed0(param_1,&piStack_8,&param_3);
    if (iVar3 == -1) {
      iVar3 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x1bd7,0,0,&DAT_007a4ccc);
      if (iVar3 != 0) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
      uVar9 = 0x1bd8;
      goto LAB_00465763;
    }
  }
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*param_1 + 0xd8))();
    return (-(uint)(iVar3 != 0) & 0xfffffffd) + 2;
  }
LAB_004655df:
  iVar3 = (**(code **)(*param_1 + 0xd8))();
  return -(uint)(iVar3 != 0);
}


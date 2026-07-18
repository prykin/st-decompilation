
int __fastcall thunk_FUN_0046c980(int *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piStack_8;
  
  uVar2 = (undefined2)((uint)param_1 >> 0x10);
  piStack_8 = param_1;
  switch(param_1[0x142]) {
  case 0:
  case 1:
  case 7:
    iVar5 = thunk_FUN_00460360(param_1);
    return (int)(short)iVar5;
  case 2:
  case 3:
  case 4:
    iVar5 = param_1[0x143];
    if (((iVar5 == 0) || (iVar5 == 1)) || (iVar5 == 2)) {
      return 0;
    }
    if (iVar5 == 3) {
      iVar5 = (ushort)((short)param_1[0x140] * 200) + 100;
      iVar7 = CONCAT22(uVar2,*(short *)((int)param_1 + 0x4fe) * 0xc9) + 100;
      iVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),(short)param_1[0x13f] * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*param_1 + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)((int)param_1 + 0x41)),
                         CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)((int)param_1 + 0x43))
                         ,CONCAT22(uVar2,*(undefined2 *)((int)param_1 + 0x45)),iVar6,iVar7,iVar5);
      *(undefined2 *)((int)param_1 + 0x506) = uVar2;
      param_1[0x143] = 4;
    }
    if (param_1[0x143] == 4) {
      uVar3 = thunk_FUN_004176c0(param_1,*(short *)((int)param_1 + 0x506));
      uVar3 = thunk_FUN_00417910(param_1,(short)uVar3);
      if ((short)uVar3 == -1) {
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x253e,0,0,&DAT_007a4ccc);
        if (iVar5 == 0) {
          FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,0x253f);
          return 0xffff;
        }
        pcVar1 = (code *)swi(3);
        iVar5 = (*pcVar1)();
        return iVar5;
      }
      if ((short)uVar3 == 0) {
        param_1[0x143] = 5;
        iVar5 = (**(code **)(*param_1 + 0xd8))();
        return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
      }
    }
    if (param_1[0x143] == 5) {
      thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),*(short *)((int)param_1 + 0x43),
                         *(short *)((int)param_1 + 0x45),(short)param_1[0x13f] * 0xc9 + 100,
                         *(short *)((int)param_1 + 0x4fe) * 0xc9 + 100,
                         (short)param_1[0x140] * 200 + 100,*(byte *)((int)param_1 + 0x61));
      param_1[0x143] = 6;
    }
    if (param_1[0x143] == 6) {
      uVar4 = thunk_FUN_00415ed0(param_1,&piStack_8,&param_3);
      if ((short)uVar4 == -1) {
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2554,0,0,&DAT_007a4ccc);
        if (iVar5 != 0) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        uVar4 = 0x2555;
LAB_0046cbe2:
        FUN_006a5e40(0xffff,DAT_007ed77c,0x7a9d3c,uVar4);
        return 0xffff;
      }
      if ((short)uVar4 == 0) {
        iVar5 = (**(code **)(*param_1 + 0xd8))();
        return -(uint)(iVar5 != 0);
      }
    }
    break;
  case 5:
    if (*(int *)((int)param_1 + 0x502) == 0) {
      iVar5 = (**(code **)(*param_1 + 0xd8))();
      return -(uint)(iVar5 != 0);
    }
    param_1[0x142] = 6;
    break;
  case 6:
    if (param_1[0x143] == 0) {
      iVar5 = CONCAT22(uVar2,(short)param_1[0x140] * 200) + 100;
      iVar7 = CONCAT22((short)((uint)param_2 >> 0x10),*(short *)((int)param_1 + 0x4fe) * 0xc9) + 100
      ;
      iVar6 = CONCAT22((short)((uint)iVar5 >> 0x10),(short)param_1[0x13f] * 0xc9) + 100;
      uVar2 = (undefined2)((uint)iVar7 >> 0x10);
      uVar2 = (**(code **)(*param_1 + 0x10))
                        (CONCAT22(uVar2,*(undefined2 *)((int)param_1 + 0x41)),
                         CONCAT22((short)((uint)iVar6 >> 0x10),*(undefined2 *)((int)param_1 + 0x43))
                         ,CONCAT22(uVar2,*(undefined2 *)((int)param_1 + 0x45)),iVar6,iVar7,iVar5);
      *(undefined2 *)((int)param_1 + 0x506) = uVar2;
      param_1[0x143] = 1;
    }
    if (param_1[0x143] == 1) {
      uVar3 = thunk_FUN_004176c0(param_1,*(short *)((int)param_1 + 0x506));
      uVar3 = thunk_FUN_00417910(param_1,(short)uVar3);
      if ((short)uVar3 == -1) {
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x256d,0,0,&DAT_007a4ccc);
        if (iVar5 != 0) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        uVar4 = 0x256e;
        goto LAB_0046cbe2;
      }
      if ((short)uVar3 == 0) {
        param_1[0x143] = 2;
        break;
      }
    }
    if (param_1[0x143] == 2) {
      thunk_FUN_00415b30(param_1,*(short *)((int)param_1 + 0x41),*(short *)((int)param_1 + 0x43),
                         *(short *)((int)param_1 + 0x45),(short)param_1[0x13f] * 0xc9 + 100,
                         *(short *)((int)param_1 + 0x4fe) * 0xc9 + 100,
                         (short)param_1[0x140] * 200 + 100,*(byte *)((int)param_1 + 0x61));
      param_1[0x143] = 3;
    }
    if (param_1[0x143] == 3) {
      uVar4 = thunk_FUN_00415ed0(param_1,&piStack_8,&param_3);
      if ((short)uVar4 == -1) {
        iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2583,0,0,&DAT_007a4ccc);
        if (iVar5 != 0) {
          pcVar1 = (code *)swi(3);
          iVar5 = (*pcVar1)();
          return iVar5;
        }
        uVar4 = 0x2584;
        goto LAB_0046cbe2;
      }
      if ((short)uVar4 == 0) {
        iVar5 = (**(code **)(*param_1 + 0xd8))();
        return -(uint)(iVar5 != 0);
      }
    }
    break;
  default:
    iVar5 = FUN_006ad4d0(s_E____titans_wlad_To_boat_cpp_007a9d3c,0x2590,0,0,&DAT_007a4ccc);
    if (iVar5 == 0) {
      return -1;
    }
    pcVar1 = (code *)swi(3);
    iVar5 = (*pcVar1)();
    return iVar5;
  }
  iVar5 = (**(code **)(*param_1 + 0xd8))();
  return (-(uint)(iVar5 != 0) & 0xfffffffd) + 2;
}


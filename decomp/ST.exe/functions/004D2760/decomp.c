
undefined4 __fastcall FUN_004d2760(int *param_1)

{
  undefined4 extraout_ECX;
  int *extraout_EDX;
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *local_c;
  int *local_8;
  
  local_8 = (int *)0x0;
  if (param_1[0xa8] != 0) {
    thunk_FUN_0041c5a0(param_1);
    thunk_FUN_00417d30((int)param_1);
    if (param_1[0xb] == 0) {
      local_8 = (int *)0x1;
    }
    else if (param_1[0xb] == 1) {
      local_8 = (int *)0x2;
    }
    iVar2 = *(int *)((int)param_1 + 0x261);
    piVar1 = extraout_EDX;
    if (iVar2 < iVar2 + (int)local_8) {
      do {
        iVar4 = *(int *)((int)param_1 + 0x25d);
        if (iVar4 < iVar4 + (int)local_8) {
          do {
            thunk_FUN_00496140((short)iVar4,(short)iVar2,*(short *)((int)param_1 + 0x265));
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)((int)param_1 + 0x25d) + (int)local_8);
        }
        iVar2 = iVar2 + 1;
        piVar1 = local_8;
      } while (iVar2 < *(int *)((int)param_1 + 0x261) + (int)local_8);
    }
    iVar2 = thunk_FUN_004b7520(CONCAT31((int3)((uint)piVar1 >> 8),(char)param_1[9]),
                               *(Global_sub_004B7520_param_2Enum *)((int)param_1 + 0x259));
    if (iVar2 != 0) {
      iVar2 = (**(code **)(*param_1 + 0x2c))();
      thunk_FUN_004b7710(CONCAT31((int3)((uint)extraout_ECX >> 8),(char)param_1[9]),iVar2);
    }
    thunk_FUN_0041d590((int)param_1);
  }
  if (99 < param_1[0xaa]) {
    param_1[0xd3] = 0xfe;
  }
  thunk_FUN_00419d30(param_1,param_1[0xd3]);
  if (DAT_007fa170 != (byte *)0x0) {
    iVar2 = *(int *)(DAT_007fa170 + 0xc);
    uVar3 = 0;
    if (0 < iVar2) {
      do {
        FUN_006acc70((int)DAT_007fa170,uVar3,&local_c);
        if (local_c == param_1) {
          FUN_006b0c70((int)DAT_007fa170,uVar3);
          break;
        }
        uVar3 = uVar3 + 1;
      } while ((int)uVar3 < *(int *)(DAT_007fa170 + 0xc));
      iVar2 = *(int *)(DAT_007fa170 + 0xc);
    }
    if (iVar2 == 0) {
      FUN_006ae110(DAT_007fa170);
      DAT_007fa170 = (byte *)0x0;
    }
  }
  iVar2 = *(int *)((int)param_1 + 0x259);
  if (iVar2 == 100) {
    iVar2 = *(int *)(&DAT_007f57f6 + param_1[9] * 0xa62);
    if (iVar2 != 0) {
      uVar3 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        do {
          FUN_006acc70(iVar2,uVar3,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70(*(int *)(&DAT_007f57f6 + param_1[9] * 0xa62),uVar3);
            break;
          }
          uVar3 = uVar3 + 1;
          iVar2 = *(int *)(&DAT_007f57f6 + param_1[9] * 0xa62);
        } while ((int)uVar3 < *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(*(byte **)(&DAT_007f57f6 + param_1[9] * 0xa62) + 0xc) == 0) {
        FUN_006ae110(*(byte **)(&DAT_007f57f6 + param_1[9] * 0xa62));
        *(undefined4 *)(&DAT_007f57f6 + param_1[9] * 0xa62) = 0;
      }
    }
  }
  else if (iVar2 == 0x4d) {
    iVar2 = *(int *)(&DAT_007f5802 + param_1[9] * 0xa62);
    if (iVar2 != 0) {
      uVar3 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        do {
          FUN_006acc70(iVar2,uVar3,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70(*(int *)(&DAT_007f5802 + param_1[9] * 0xa62),uVar3);
            break;
          }
          uVar3 = uVar3 + 1;
          iVar2 = *(int *)(&DAT_007f5802 + param_1[9] * 0xa62);
        } while ((int)uVar3 < *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(*(byte **)(&DAT_007f5802 + param_1[9] * 0xa62) + 0xc) == 0) {
        FUN_006ae110(*(byte **)(&DAT_007f5802 + param_1[9] * 0xa62));
        *(undefined4 *)(&DAT_007f5802 + param_1[9] * 0xa62) = 0;
      }
    }
  }
  else if (iVar2 == 0x43) {
    iVar2 = *(int *)(&DAT_007f580e + param_1[9] * 0xa62);
    if (iVar2 != 0) {
      uVar3 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        do {
          FUN_006acc70(iVar2,uVar3,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70(*(int *)(&DAT_007f580e + param_1[9] * 0xa62),uVar3);
            break;
          }
          uVar3 = uVar3 + 1;
          iVar2 = *(int *)(&DAT_007f580e + param_1[9] * 0xa62);
        } while ((int)uVar3 < *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(*(byte **)(&DAT_007f580e + param_1[9] * 0xa62) + 0xc) == 0) {
        FUN_006ae110(*(byte **)(&DAT_007f580e + param_1[9] * 0xa62));
        *(undefined4 *)(&DAT_007f580e + param_1[9] * 0xa62) = 0;
      }
    }
  }
  else if (iVar2 == 0x73) {
    iVar2 = *(int *)(&DAT_007f5812 + param_1[9] * 0xa62);
    if (iVar2 != 0) {
      uVar3 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        do {
          FUN_006acc70(iVar2,uVar3,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70(*(int *)(&DAT_007f5812 + param_1[9] * 0xa62),uVar3);
            break;
          }
          uVar3 = uVar3 + 1;
          iVar2 = *(int *)(&DAT_007f5812 + param_1[9] * 0xa62);
        } while ((int)uVar3 < *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(*(byte **)(&DAT_007f5812 + param_1[9] * 0xa62) + 0xc) == 0) {
        FUN_006ae110(*(byte **)(&DAT_007f5812 + param_1[9] * 0xa62));
        *(undefined4 *)(&DAT_007f5812 + param_1[9] * 0xa62) = 0;
      }
    }
  }
  else if (iVar2 == 0x3a) {
    if (DAT_007fa16c != (byte *)0x0) {
      iVar2 = *(int *)(DAT_007fa16c + 0xc);
      uVar3 = 0;
      if (0 < iVar2) {
        do {
          FUN_006acc70((int)DAT_007fa16c,uVar3,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70((int)DAT_007fa16c,uVar3);
            break;
          }
          uVar3 = uVar3 + 1;
        } while ((int)uVar3 < *(int *)(DAT_007fa16c + 0xc));
        iVar2 = *(int *)(DAT_007fa16c + 0xc);
      }
      if (iVar2 == 0) {
        FUN_006ae110(DAT_007fa16c);
        DAT_007fa16c = (byte *)0x0;
      }
    }
  }
  else if (iVar2 == 0x65) {
    iVar2 = *(int *)(&DAT_007f5806 + param_1[9] * 0xa62);
    if (iVar2 != 0) {
      uVar3 = 0;
      if (0 < *(int *)(iVar2 + 0xc)) {
        do {
          FUN_006acc70(iVar2,uVar3,&local_8);
          if (local_8 == param_1) {
            FUN_006b0c70(*(int *)(&DAT_007f5806 + param_1[9] * 0xa62),uVar3);
            break;
          }
          uVar3 = uVar3 + 1;
          iVar2 = *(int *)(&DAT_007f5806 + param_1[9] * 0xa62);
        } while ((int)uVar3 < *(int *)(iVar2 + 0xc));
      }
      if (*(int *)(*(byte **)(&DAT_007f5806 + param_1[9] * 0xa62) + 0xc) == 0) {
        FUN_006ae110(*(byte **)(&DAT_007f5806 + param_1[9] * 0xa62));
        *(undefined4 *)(&DAT_007f5806 + param_1[9] * 0xa62) = 0;
      }
    }
  }
  else if ((iVar2 == 0x3b) && (iVar2 = *(int *)(&DAT_007f580a + param_1[9] * 0xa62), iVar2 != 0)) {
    uVar3 = 0;
    if (0 < *(int *)(iVar2 + 0xc)) {
      do {
        FUN_006acc70(iVar2,uVar3,&local_8);
        if (local_8 == param_1) {
          FUN_006b0c70(*(int *)(&DAT_007f580a + param_1[9] * 0xa62),uVar3);
          break;
        }
        uVar3 = uVar3 + 1;
        iVar2 = *(int *)(&DAT_007f580a + param_1[9] * 0xa62);
      } while ((int)uVar3 < *(int *)(iVar2 + 0xc));
    }
    if (*(int *)(*(byte **)(&DAT_007f580a + param_1[9] * 0xa62) + 0xc) == 0) {
      FUN_006ae110(*(byte **)(&DAT_007f580a + param_1[9] * 0xa62));
      *(undefined4 *)(&DAT_007f580a + param_1[9] * 0xa62) = 0;
    }
  }
  piVar1 = param_1 + 0xd4;
  iVar2 = 3;
  do {
    if (*piVar1 != 0) {
      thunk_FUN_004ad310(*piVar1);
      Library::MSVCRT::FUN_0072e2b0((HoloTy *)*piVar1);
    }
    piVar1 = piVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  if (param_1[0xd7] != 0) {
    thunk_FUN_004ad310(param_1[0xd7]);
    Library::MSVCRT::FUN_0072e2b0((HoloTy *)param_1[0xd7]);
  }
  thunk_FUN_004ad310((int)param_1 + 0x1d5);
  return 0;
}



void __fastcall thunk_FUN_0058bd90(int *param_1)

{
  void *this;
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iStack_8;
  
  iStack_8 = 0;
  if (*(int *)((int)param_1 + 0x231) == 1) {
    return;
  }
  sVar5 = *(short *)((int)param_1 + 0x41);
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x47) = sVar5;
  *(short *)((int)param_1 + 0x5b) = sVar5;
  sVar5 = *(short *)((int)param_1 + 0x43);
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x49) = sVar5;
  *(short *)((int)param_1 + 0x5d) = sVar5;
  sVar5 = *(short *)((int)param_1 + 0x45);
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 200 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)param_1 + 0x4b) = sVar5;
  *(short *)((int)param_1 + 0x5f) = sVar5;
  iVar2 = thunk_FUN_0041c710((int)param_1);
  iVar4 = (int)param_1 + 0x1d5;
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650(iVar4);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar3,iVar2);
    bVar1 = thunk_FUN_0041caf0((int)param_1);
    if (CONCAT31(extraout_var,bVar1) == 1) {
      iVar2 = 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 1;
    uVar3 = thunk_FUN_004ad650(iVar4);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar3,iVar2);
    iVar2 = 1;
  }
  iVar4 = thunk_FUN_004ad650(iVar4);
  FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar4,iVar2);
  switch(*(undefined4 *)((int)param_1 + 0x231)) {
  case 0:
  case 3:
    goto switchD_0058bec9_caseD_0;
  default:
    goto switchD_0058bec9_caseD_1;
  case 2:
    goto switchD_0058bec9_caseD_2;
  case 4:
    this = (void *)((int)param_1 + 0x1d5);
    iStack_8 = thunk_FUN_004ac910(this,'\x0e');
    iStack_8 = iStack_8 + 1;
    if (iStack_8 < 0x23) {
      thunk_FUN_004abe40(this,'\x0e',iStack_8);
    }
    else {
      thunk_FUN_004abe40(this,'\x0e',0x18);
      *(undefined4 *)((int)param_1 + 0x231) = 2;
    }
    if (iStack_8 == 0x20) {
      thunk_FUN_0058bb90((int)param_1);
    }
switchD_0058bec9_caseD_2:
    if (*(int *)((int)param_1 + 0x231) == 2) {
      iStack_8 = 0x18;
    }
    if ((*(byte *)(DAT_00802a38 + 0xe4) & 3) == 0) {
      if (*(int *)((int)param_1 + 0x235) == 0) {
        if (*(int *)((int)param_1 + 0x23d) < *(int *)((int)param_1 + 0x241)) {
          iVar4 = *(int *)((int)param_1 + 0x239) + 1;
          *(int *)((int)param_1 + 0x239) = iVar4;
          if (*(short *)(DAT_00806724 + 0x23) <= iVar4) {
            *(undefined4 *)((int)param_1 + 0x231) = 1;
            *(int *)((int)param_1 + 0x251) =
                 *(int *)((int)param_1 + 0x249) * 2 - *(int *)((int)param_1 + 0x251);
            *(int *)((int)param_1 + 0x255) =
                 *(int *)((int)param_1 + 0x24d) * 2 - *(int *)((int)param_1 + 0x255);
            goto switchD_0058bec9_caseD_1;
          }
          thunk_FUN_004ace60((void *)((int)param_1 + 0x1d5),'\x0e');
          thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),
                             *(uint *)(DAT_00806724 + 0x30 + *(int *)((int)param_1 + 0x239) * 4),
                             (int)*(short *)(DAT_00806724 + 0x2c));
        }
      }
      else {
        iVar4 = *(int *)((int)param_1 + 0x239) + -1;
        *(int *)((int)param_1 + 0x239) = iVar4;
        if (iVar4 < 1) {
          *(undefined4 *)((int)param_1 + 0x239) = 0;
          *(undefined4 *)((int)param_1 + 0x235) = 0;
          thunk_FUN_004aceb0((void *)((int)param_1 + 0x1d5),'\x0e');
          *(int *)((int)param_1 + 0x241) = -*(int *)((int)param_1 + 0x23d);
        }
        else {
          thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),
                             *(uint *)(DAT_00806724 + 0x30 + iVar4 * 4),
                             (int)*(short *)(DAT_00806724 + 0x2c));
          *(int *)((int)param_1 + 0x241) = -*(int *)((int)param_1 + 0x23d);
        }
      }
    }
    iVar2 = *(int *)((int)param_1 + 0x261) + *(int *)((int)param_1 + 0x259) * 5;
    iVar8 = *(int *)((int)param_1 + 0x265) + *(int *)((int)param_1 + 0x25d) * 5;
    *(int *)((int)param_1 + 0x265) = iVar8;
    iVar4 = *(int *)((int)param_1 + 0x23d) + -5;
    sVar6 = *(short *)((int)param_1 + 0x269) - (short)((uint)iVar2 >> 8);
    *(int *)((int)param_1 + 0x23d) = iVar4;
    *(int *)((int)param_1 + 0x261) = iVar2;
    iVar4 = iVar4 * iVar4 * 0xd;
    sVar7 = *(short *)((int)param_1 + 0x26d) - (short)((uint)iVar8 >> 8);
    *(short *)((int)param_1 + 0x41) = sVar6;
    *(short *)((int)param_1 + 0x43) = sVar7;
    sVar5 = (short)((int)(iVar4 + (iVar4 >> 0x1f & 0x3fffU)) >> 0xe) +
            *(short *)((int)param_1 + 0x271);
    *(short *)((int)param_1 + 0x45) = sVar5;
    if ((((sVar5 < 0x4b0) && (*(uint *)(DAT_00802a38 + 0xe4) % 0x11 == 0)) &&
        ((int)sVar6 < DAT_007fb240 * 0xc9)) &&
       (((0 < sVar6 && ((int)sVar7 < DAT_007fb242 * 0xc9)) && (0 < sVar7)))) {
      *(undefined4 *)((int)param_1 + 0x231) = 4;
    }
    goto LAB_0058c38c;
  case 6:
    break;
  }
  iVar4 = thunk_FUN_004acd30((void *)((int)param_1 + 0x1d5),'\b');
  iVar2 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\b');
  if (iVar4 + -1 <= iVar2) {
    thunk_FUN_0058bb50(param_1);
  }
switchD_0058bec9_caseD_0:
  sVar5 = *(short *)((int)param_1 + 0x41);
  *(short *)((int)param_1 + 0x45) = *(short *)((int)param_1 + 0x45) + 0x12;
  sVar7 = *(short *)((int)param_1 + 0x45);
  if (sVar5 < 0) {
    sVar5 = ((sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar5 = (sVar5 / 0xc9 + (sVar5 >> 0xf)) - (short)((longlong)(int)sVar5 * 0x28c1979 >> 0x3f);
  }
  sVar6 = *(short *)((int)param_1 + 0x43);
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  if (sVar7 < 0) {
    iVar4 = (short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                   (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar4 = (int)(short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                        (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f));
  }
  if (((sVar5 < 0) || (DAT_007fb240 <= sVar5)) ||
     ((sVar6 < 0 ||
      ((((DAT_007fb242 <= sVar6 || (sVar7 = (short)iVar4, sVar7 < 0)) || (DAT_007fb244 <= sVar7)) ||
       ((iVar2 = *(int *)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar7 + (int)DAT_007fb240 * (int)sVar6 +
                         (int)sVar5) * 8), iVar2 == 0 || (*(int *)(iVar2 + 0x20) == 400)))))))) {
    if ((5 < iVar4) && ((*(byte *)(DAT_00802a38 + 0xe4) & 3) == 0)) {
      iVar4 = *(int *)((int)param_1 + 0x239) + 1;
      *(int *)((int)param_1 + 0x239) = iVar4;
      if (*(short *)(DAT_00806724 + 0x23) <= iVar4) {
        iVar4 = *(int *)((int)param_1 + 0x231);
        *(undefined4 *)((int)param_1 + 0x239) = 0;
        *(undefined4 *)((int)param_1 + 0x231) = 1;
        if (iVar4 == 3) {
          thunk_FUN_0058c560(param_1,*(int *)((int)param_1 + 0x249),*(int *)((int)param_1 + 0x24d));
        }
        goto switchD_0058bec9_caseD_1;
      }
      thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),*(uint *)(DAT_00806724 + 0x30 + iVar4 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) == 0) {
      iStack_8 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e');
      iStack_8 = iStack_8 + 1;
      if (0x18 < iStack_8) {
        iStack_8 = 0x18;
      }
LAB_0058c38c:
      thunk_FUN_004abe40((void *)((int)param_1 + 0x1d5),'\x0e',iStack_8);
    }
  }
  else {
    *(undefined4 *)((int)param_1 + 0x231) = 5;
    thunk_FUN_004ac410(0xe);
    thunk_FUN_004ad5e0((int)param_1 + 0x1d5);
    thunk_FUN_004ab880(8,DAT_00806774,(byte *)s_explsna_007cbaac,0x1d);
    thunk_FUN_004ac1a0(8,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(short *)((int)param_1 + 0x45) = *(short *)((int)param_1 + 0x45) + 0x12;
    *(undefined4 *)((int)param_1 + 0x231) = 6;
  }
switchD_0058bec9_caseD_1:
  thunk_FUN_004ac040('\x0e');
  (**(code **)(*param_1 + 0xd8))();
  return;
}



void __fastcall FUN_0058bd90(int *param_1)

{
  STT3DSprC *pSVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined3 extraout_var;
  int iVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int local_8;
  
  local_8 = 0;
  if (*(int *)((int)param_1 + 0x231) == 1) {
    return;
  }
  sVar6 = *(short *)((int)param_1 + 0x41);
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x47) = sVar6;
  *(short *)((int)param_1 + 0x5b) = sVar6;
  sVar6 = *(short *)((int)param_1 + 0x43);
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x49) = sVar6;
  *(short *)((int)param_1 + 0x5d) = sVar6;
  sVar6 = *(short *)((int)param_1 + 0x45);
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 200 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)param_1 + 0x4b) = sVar6;
  *(short *)((int)param_1 + 0x5f) = sVar6;
  iVar3 = thunk_FUN_0041c710((int)param_1);
  iVar5 = (int)param_1 + 0x1d5;
  if (iVar3 == 0) {
    iVar3 = 0;
    uVar4 = thunk_FUN_004ad650(iVar5);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar4,iVar3);
    bVar2 = thunk_FUN_0041caf0((int)param_1);
    if (CONCAT31(extraout_var,bVar2) == 1) {
      iVar3 = 1;
    }
    else {
      iVar3 = 0;
    }
  }
  else {
    iVar3 = 1;
    uVar4 = thunk_FUN_004ad650(iVar5);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar4,iVar3);
    iVar3 = 1;
  }
  iVar5 = thunk_FUN_004ad650(iVar5);
  FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar5,iVar3);
  switch(*(undefined4 *)((int)param_1 + 0x231)) {
  case 0:
  case 3:
    goto switchD_0058bec9_caseD_0;
  default:
    goto switchD_0058bec9_caseD_1;
  case 2:
    goto switchD_0058bec9_caseD_2;
  case 4:
    pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
    local_8 = thunk_FUN_004ac910(pSVar1,'\x0e');
    local_8 = local_8 + 1;
    if (local_8 < 0x23) {
      STT3DSprC::SetCurFase(pSVar1,'\x0e',local_8);
    }
    else {
      STT3DSprC::SetCurFase(pSVar1,'\x0e',0x18);
      *(undefined4 *)((int)param_1 + 0x231) = 2;
    }
    if (local_8 == 0x20) {
      thunk_FUN_0058bb90((int)param_1);
    }
switchD_0058bec9_caseD_2:
    if (*(int *)((int)param_1 + 0x231) == 2) {
      local_8 = 0x18;
    }
    if ((*(byte *)(DAT_00802a38 + 0xe4) & 3) == 0) {
      if (*(int *)((int)param_1 + 0x235) == 0) {
        if (*(int *)((int)param_1 + 0x23d) < *(int *)((int)param_1 + 0x241)) {
          iVar5 = *(int *)((int)param_1 + 0x239) + 1;
          *(int *)((int)param_1 + 0x239) = iVar5;
          if (*(short *)(DAT_00806724 + 0x23) <= iVar5) {
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
        iVar5 = *(int *)((int)param_1 + 0x239) + -1;
        *(int *)((int)param_1 + 0x239) = iVar5;
        if (iVar5 < 1) {
          *(undefined4 *)((int)param_1 + 0x239) = 0;
          *(undefined4 *)((int)param_1 + 0x235) = 0;
          thunk_FUN_004aceb0((void *)((int)param_1 + 0x1d5),'\x0e');
          *(int *)((int)param_1 + 0x241) = -*(int *)((int)param_1 + 0x23d);
        }
        else {
          thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),
                             *(uint *)(DAT_00806724 + 0x30 + iVar5 * 4),
                             (int)*(short *)(DAT_00806724 + 0x2c));
          *(int *)((int)param_1 + 0x241) = -*(int *)((int)param_1 + 0x23d);
        }
      }
    }
    iVar3 = *(int *)((int)param_1 + 0x261) + *(int *)((int)param_1 + 0x259) * 5;
    iVar9 = *(int *)((int)param_1 + 0x265) + *(int *)((int)param_1 + 0x25d) * 5;
    *(int *)((int)param_1 + 0x265) = iVar9;
    iVar5 = *(int *)((int)param_1 + 0x23d) + -5;
    sVar7 = *(short *)((int)param_1 + 0x269) - (short)((uint)iVar3 >> 8);
    *(int *)((int)param_1 + 0x23d) = iVar5;
    *(int *)((int)param_1 + 0x261) = iVar3;
    iVar5 = iVar5 * iVar5 * 0xd;
    sVar8 = *(short *)((int)param_1 + 0x26d) - (short)((uint)iVar9 >> 8);
    *(short *)((int)param_1 + 0x41) = sVar7;
    *(short *)((int)param_1 + 0x43) = sVar8;
    sVar6 = (short)((int)(iVar5 + (iVar5 >> 0x1f & 0x3fffU)) >> 0xe) +
            *(short *)((int)param_1 + 0x271);
    *(short *)((int)param_1 + 0x45) = sVar6;
    if ((((sVar6 < 0x4b0) && (*(uint *)(DAT_00802a38 + 0xe4) % 0x11 == 0)) &&
        ((int)sVar7 < DAT_007fb240 * 0xc9)) &&
       (((0 < sVar7 && ((int)sVar8 < DAT_007fb242 * 0xc9)) && (0 < sVar8)))) {
      *(undefined4 *)((int)param_1 + 0x231) = 4;
    }
    goto LAB_0058c38c;
  case 6:
    break;
  }
  iVar5 = thunk_FUN_004acd30((void *)((int)param_1 + 0x1d5),'\b');
  iVar3 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\b');
  if (iVar5 + -1 <= iVar3) {
    thunk_FUN_0058bb50(param_1);
  }
switchD_0058bec9_caseD_0:
  sVar6 = *(short *)((int)param_1 + 0x41);
  *(short *)((int)param_1 + 0x45) = *(short *)((int)param_1 + 0x45) + 0x12;
  sVar8 = *(short *)((int)param_1 + 0x45);
  if (sVar6 < 0) {
    sVar6 = ((sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar6 = (sVar6 / 0xc9 + (sVar6 >> 0xf)) - (short)((longlong)(int)sVar6 * 0x28c1979 >> 0x3f);
  }
  sVar7 = *(short *)((int)param_1 + 0x43);
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  if (sVar8 < 0) {
    iVar5 = (short)((sVar8 / 200 + (sVar8 >> 0xf)) -
                   (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iVar5 = (int)(short)((sVar8 / 200 + (sVar8 >> 0xf)) -
                        (short)((longlong)(int)sVar8 * 0x51eb851f >> 0x3f));
  }
  if (((sVar6 < 0) || (DAT_007fb240 <= sVar6)) ||
     ((sVar7 < 0 ||
      ((((DAT_007fb242 <= sVar7 || (sVar8 = (short)iVar5, sVar8 < 0)) || (DAT_007fb244 <= sVar8)) ||
       ((iVar3 = *(int *)(DAT_007fb248 +
                         ((int)DAT_007fb246 * (int)sVar8 + (int)DAT_007fb240 * (int)sVar7 +
                         (int)sVar6) * 8), iVar3 == 0 || (*(int *)(iVar3 + 0x20) == 400)))))))) {
    if ((5 < iVar5) && ((*(byte *)(DAT_00802a38 + 0xe4) & 3) == 0)) {
      iVar5 = *(int *)((int)param_1 + 0x239) + 1;
      *(int *)((int)param_1 + 0x239) = iVar5;
      if (*(short *)(DAT_00806724 + 0x23) <= iVar5) {
        iVar5 = *(int *)((int)param_1 + 0x231);
        *(undefined4 *)((int)param_1 + 0x239) = 0;
        *(undefined4 *)((int)param_1 + 0x231) = 1;
        if (iVar5 == 3) {
          thunk_FUN_0058c560(param_1,*(int *)((int)param_1 + 0x249),*(int *)((int)param_1 + 0x24d));
        }
        goto switchD_0058bec9_caseD_1;
      }
      thunk_FUN_004ace30((void *)((int)param_1 + 0x1d5),*(uint *)(DAT_00806724 + 0x30 + iVar5 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) == 0) {
      local_8 = thunk_FUN_004ac910((void *)((int)param_1 + 0x1d5),'\x0e');
      local_8 = local_8 + 1;
      if (0x18 < local_8) {
        local_8 = 0x18;
      }
LAB_0058c38c:
      STT3DSprC::SetCurFase((STT3DSprC *)((int)param_1 + 0x1d5),'\x0e',local_8);
    }
  }
  else {
    pSVar1 = (STT3DSprC *)((int)param_1 + 0x1d5);
    *(undefined4 *)((int)param_1 + 0x231) = 5;
    STT3DSprC::StopShow(pSVar1,0xe);
    thunk_FUN_004ad5e0((int)pSVar1);
    STT3DSprC::LoadSequence(pSVar1,8,DAT_00806774,(byte *)s_explsna_007cbaac,0x1d);
    STT3DSprC::StartShow(pSVar1,8,*(undefined4 *)(DAT_00802a38 + 0xe4));
    *(short *)((int)param_1 + 0x45) = *(short *)((int)param_1 + 0x45) + 0x12;
    *(undefined4 *)((int)param_1 + 0x231) = 6;
  }
switchD_0058bec9_caseD_1:
  STT3DSprC::ShowCurFase((STT3DSprC *)((int)param_1 + 0x1d5),'\x0e');
  (**(code **)(*param_1 + 0xd8))();
  return;
}



void __fastcall thunk_FUN_00585020(int *param_1)

{
  int iVar1;
  STT3DSprC *this;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined3 extraout_var;
  int iVar6;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  short sVar7;
  int iVar8;
  int iStack_14;
  short sStack_10;
  short sStack_8;
  
  sVar7 = *(short *)((int)param_1 + 0x41);
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x47) = sVar7;
  *(short *)((int)param_1 + 0x5b) = sVar7;
  sVar7 = *(short *)((int)param_1 + 0x43);
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f);
  }
  *(short *)((int)param_1 + 0x49) = sVar7;
  *(short *)((int)param_1 + 0x5d) = sVar7;
  sVar7 = *(short *)((int)param_1 + 0x45);
  if (sVar7 < 0) {
    sVar7 = ((sVar7 / 200 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) +
            -1;
  }
  else {
    sVar7 = (sVar7 / 200 + (sVar7 >> 0xf)) - (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f);
  }
  *(short *)((int)param_1 + 0x4b) = sVar7;
  *(short *)((int)param_1 + 0x5f) = sVar7;
  iVar4 = thunk_FUN_0041c710((int)param_1);
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar4 == 0) {
    iVar4 = 0;
    uVar5 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar5,iVar4);
    bVar3 = thunk_FUN_0041caf0((int)param_1);
    if (CONCAT31(extraout_var,bVar3) == 1) {
      iVar4 = 1;
    }
    else {
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 1;
    uVar5 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar5,iVar4);
    iVar4 = 1;
  }
  iVar6 = thunk_FUN_004ad650((int)this);
  FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar6,iVar4);
  sVar7 = *(short *)((int)param_1 + 0x41);
  iVar4 = (int)sVar7;
  if (sVar7 < 0) {
    sStack_10 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) +
                -1;
  }
  else {
    sStack_10 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar4 * 0x28c1979 >> 0x3f);
  }
  sVar7 = *(short *)((int)param_1 + 0x43);
  iVar6 = (int)sVar7;
  if (sVar7 < 0) {
    sStack_8 = ((sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f)) + -1
    ;
  }
  else {
    sStack_8 = (sVar7 / 0xc9 + (sVar7 >> 0xf)) - (short)((longlong)iVar6 * 0x28c1979 >> 0x3f);
  }
  sVar7 = *(short *)((int)param_1 + 0x45);
  if (sVar7 < 0) {
    iStack_14 = (short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                       (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f)) + -1;
  }
  else {
    iStack_14 = (int)(short)((sVar7 / 200 + (sVar7 >> 0xf)) -
                            (short)((longlong)(int)sVar7 * 0x51eb851f >> 0x3f));
  }
  iVar8 = *(int *)((int)param_1 + 0x231);
  sVar7 = (short)iStack_14;
  if (iVar8 == 0) {
    iVar6 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 0x23d);
    iVar4 = (*(int *)((int)param_1 + 0x24d) * iVar6 * iVar6) / 22000;
    if ((iStack_14 < 5) &&
       (bVar3 = thunk_FUN_004961b0(sStack_10,sStack_8,sVar7), CONCAT31(extraout_var_01,bVar3) == 0))
    {
      if ((((-1 < sStack_10) &&
           (((sStack_10 < DAT_007fb240 && (-1 < sStack_8)) && (sStack_8 < DAT_007fb242)))) &&
          (((-1 < sVar7 && (sVar7 < DAT_007fb244)) &&
           (puVar2 = *(undefined4 **)
                      (DAT_007fb248 +
                      ((int)DAT_007fb246 * (int)sVar7 + (int)DAT_007fb240 * (int)sStack_8 +
                      (int)sStack_10) * 8), puVar2 != (undefined4 *)0x0)))) && (puVar2[8] != 0xaa))
      {
        thunk_FUN_00584c50(param_1,puVar2);
        thunk_FUN_005860d0(param_1,(int)*(short *)((int)param_1 + 0x41),
                           (int)*(short *)((int)param_1 + 0x43),0x464);
      }
      *(undefined4 *)((int)param_1 + 0x231) = 2;
      thunk_FUN_00584b10(param_1);
      return;
    }
    iVar8 = DAT_007cb8e4 >> 1;
    if (iVar8 < iVar6) {
      iVar1 = *(short *)(DAT_00806724 + 0x23) + -1;
      iVar8 = ((iVar6 - iVar8) * iVar1) / iVar8;
      if (iVar8 < 0) {
        iVar8 = 0;
      }
      if (*(short *)(DAT_00806724 + 0x23) <= iVar8) {
        thunk_FUN_004ace30(this,0,0);
        iVar8 = iVar1;
      }
      *(int *)((int)param_1 + 0x241) = iVar8;
      thunk_FUN_004ace30(this,*(uint *)(DAT_00806724 + 0x30 + iVar8 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    sVar7 = (short)iVar4;
    if (iVar4 + 0x28 < 0) {
      thunk_FUN_00416240(param_1,(short)param_1[0x9e],(short)param_1[0x9f],
                         sVar7 + *(short *)((int)param_1 + 0x45) + 0x28);
      *(undefined4 *)((int)param_1 + 0x251) = 0x168;
      *(int *)((int)param_1 + 0x235) = (int)*(short *)((int)param_1 + 0x45);
      param_1[0x9d] = param_1[0x9d] + 1;
      *(undefined4 *)((int)param_1 + 0x23d) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      iVar4 = (int)((ulonglong)((longlong)*(int *)((int)param_1 + 0x24d) * -0x2aaaaaab) >> 0x20);
      *(int *)((int)param_1 + 0x24d) = iVar4 - (iVar4 >> 0x1f);
      if (DAT_00802a88 != (VisibleClassTy *)0x0) {
        sVar7 = *(short *)((int)param_1 + 0x43);
        if (sVar7 < 0) {
          iVar4 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                         (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar4 = (int)(short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                              (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f));
        }
        sVar7 = *(short *)((int)param_1 + 0x41);
        if (sVar7 < 0) {
          iVar6 = (short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                         (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f)) + -1;
        }
        else {
          iVar6 = (int)(short)((sVar7 / 0xc9 + (sVar7 >> 0xf)) -
                              (short)((longlong)(int)sVar7 * 0x28c1979 >> 0x3f));
        }
        VisibleClassTy::VisHoleCreate
                  (DAT_00802a88,iVar6,iVar4,(undefined *)0x0,param_1[9],(undefined *)0x5,500);
      }
      *(undefined4 *)((int)param_1 + 0x231) = 1;
      (**(code **)(*param_1 + 0xd8))();
      return;
    }
    uVar5 = (uint)(ushort)(*(short *)((int)param_1 + 0x249) + sVar7 +
                          *(short *)((int)param_1 + 0x45));
  }
  else {
    if (iVar8 != 1) {
      if (iVar8 != 2) {
        return;
      }
      uVar5 = thunk_FUN_004ac910(this,'\b');
      if ((*(char *)((int)param_1 + 0x255) != '\0') && (uVar5 == *(byte *)((int)param_1 + 0x256))) {
        STT3DSprC::StartShow(this,9,*(undefined4 *)(DAT_00802a38 + 0xe4));
        thunk_FUN_004ad0e0(this,9);
      }
      iVar4 = thunk_FUN_004acd30(this,'\b');
      if (uVar5 == iVar4 - 1U) {
        STT3DSprC::StopShow(this,8);
      }
      iVar4 = thunk_FUN_004acd30(this,'\n');
      if (uVar5 == iVar4 - 1U) {
        STT3DSprC::StopShow(this,10);
      }
      if (*(char *)((int)param_1 + 0x255) != '\0') {
        iVar4 = thunk_FUN_004acd30(this,'\t');
        iVar6 = thunk_FUN_004ac910(this,'\t');
        if (iVar6 == iVar4 + -1) {
          STT3DSprC::StopShow(this,9);
          *(undefined1 *)((int)param_1 + 0x255) = 0;
        }
      }
      iVar4 = thunk_FUN_004acd30(this,'\b');
      if ((uVar5 == iVar4 - 1U) && (*(char *)((int)param_1 + 0x255) == '\0')) {
        thunk_FUN_00584ad0(param_1);
        return;
      }
      (**(code **)(*param_1 + 0xd8))();
      return;
    }
    iVar8 = *(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 0x23d);
    if (iVar8 == 1) {
      thunk_FUN_00585890(param_1,iVar4,iVar6,*(uint *)((int)param_1 + 0x286));
    }
    iVar4 = *(short *)(DAT_00806724 + 0x23) + -1;
    iVar4 = iVar4 - (iVar4 * iVar8) / (DAT_007cb8e4 >> 1);
    if (iVar4 < 1) {
      *(undefined4 *)((int)param_1 + 0x241) = 0;
      thunk_FUN_004ace30(this,0,0);
      thunk_FUN_004aceb0(this,'\x0e');
    }
    else {
      *(int *)((int)param_1 + 0x241) = iVar4;
      thunk_FUN_004ace30(this,*(uint *)(DAT_00806724 + 0x30 + iVar4 * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    uVar5 = (int)*(short *)((int)param_1 + 0x45) - 5;
    if ((*(short *)((int)param_1 + 0x45) < 0x44c) &&
       (0x1b < (int)(*(int *)((int)param_1 + 0x235) - uVar5))) {
      thunk_FUN_00584d10(param_1);
      *(uint *)((int)param_1 + 0x235) = uVar5;
    }
    if ((iStack_14 < 5) &&
       (bVar3 = thunk_FUN_004961b0(sStack_10,sStack_8,sVar7), CONCAT31(extraout_var_00,bVar3) == 0))
    {
      if (((-1 < sStack_10) &&
          ((((sStack_10 < DAT_007fb240 && (-1 < sStack_8)) && (sStack_8 < DAT_007fb242)) &&
           ((-1 < sVar7 && (sVar7 < DAT_007fb244)))))) &&
         ((puVar2 = *(undefined4 **)
                     (DAT_007fb248 +
                     ((int)DAT_007fb246 * (int)sVar7 + (int)DAT_007fb240 * (int)sStack_8 +
                     (int)sStack_10) * 8), puVar2 != (undefined4 *)0x0 && (puVar2[8] != 0xaa)))) {
        thunk_FUN_00584c50(param_1,puVar2);
      }
      *(undefined4 *)((int)param_1 + 0x231) = 2;
      thunk_FUN_00584b10(param_1);
    }
  }
  thunk_FUN_00416240(param_1,*(undefined2 *)((int)param_1 + 0x41),
                     *(undefined2 *)((int)param_1 + 0x43),(short)uVar5);
  (**(code **)(*param_1 + 0xd8))();
  return;
}


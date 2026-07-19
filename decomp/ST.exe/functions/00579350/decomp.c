
void __fastcall FUN_00579350(int *param_1)

{
  STT3DSprC *this;
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  
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
  iVar2 = thunk_FUN_0041c710((int)param_1);
  this = (STT3DSprC *)((int)param_1 + 0x1d5);
  if (iVar2 == 0) {
    iVar2 = 0;
    uVar3 = thunk_FUN_004ad650((int)this);
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
    uVar3 = thunk_FUN_004ad650((int)this);
    FUN_006eabf0(*(void **)((int)param_1 + 0x211),uVar3,iVar2);
    iVar2 = 1;
  }
  iVar4 = thunk_FUN_004ad650((int)this);
  FUN_006e6870(*(void **)((int)param_1 + 0x211),iVar4,iVar2);
  if ((*(int *)((int)param_1 + 0x279) == 0xf6) || (*(int *)((int)param_1 + 0x279) == 0xf7)) {
    uVar3 = thunk_FUN_00496250((int)*(short *)((int)param_1 + 0x41),
                               (int)*(short *)((int)param_1 + 0x43),
                               (int)*(short *)((int)param_1 + 0x45));
    if ((int)uVar3 < 0) {
      if (0x81 < *(short *)((int)param_1 + 0x45)) {
        *(short *)((int)param_1 + 0x45) = *(short *)((int)param_1 + 0x45) + -1;
      }
    }
    else {
      *(short *)((int)param_1 + 0x45) = *(short *)((int)param_1 + 0x45) + 1;
    }
  }
  else {
    uVar3 = thunk_FUN_00496250((int)*(short *)((int)param_1 + 0x41),
                               (int)*(short *)((int)param_1 + 0x43),
                               (int)*(short *)((int)param_1 + 0x45));
    if ((int)uVar3 < 0) {
      if (0x27 < *(short *)((int)param_1 + 0x45)) {
        *(short *)((int)param_1 + 0x45) = *(short *)((int)param_1 + 0x45) + -2;
      }
    }
    else {
      *(short *)((int)param_1 + 0x45) = *(short *)((int)param_1 + 0x45) + 2;
    }
  }
  if (*(int *)((int)param_1 + 0x239) == 1) {
    iVar2 = (int)*(short *)((int)param_1 + 0x41) - (int)*(short *)((int)param_1 + 0x4e);
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < 8) {
      iVar2 = (int)*(short *)((int)param_1 + 0x43) - (int)(short)param_1[0x14];
      if (iVar2 < 0) {
        iVar2 = -iVar2;
      }
      if (iVar2 < 8) goto LAB_00579591;
    }
    iVar4 = *(int *)((int)param_1 + 0x241) + *(int *)((int)param_1 + 0x245);
    *(int *)((int)param_1 + 0x241) = iVar4;
    iVar2 = *(int *)((int)param_1 + 0x249) + *(int *)((int)param_1 + 0x24d);
    *(int *)((int)param_1 + 0x249) = iVar2;
    *(short *)((int)param_1 + 0x41) =
         (short)(iVar4 + (iVar4 >> 0x1f & 0xffU) >> 8) + *(short *)((int)param_1 + 0x251);
    *(short *)((int)param_1 + 0x43) =
         (short)(iVar2 + (iVar2 >> 0x1f & 0xffU) >> 8) + *(short *)((int)param_1 + 0x255);
  }
  else {
    if (*(uint *)((int)param_1 + 0x23d) < 0x10) goto LAB_005795a9;
LAB_00579591:
    uVar5 = thunk_FUN_005797b0(param_1,(undefined2 *)((int)param_1 + 0x4e),
                               (undefined2 *)(param_1 + 0x14),(undefined2 *)(param_1 + 0x1b));
    *(undefined4 *)((int)param_1 + 0x239) = uVar5;
    *(undefined4 *)((int)param_1 + 0x23d) = 0;
  }
LAB_005795a9:
  if (2 < (uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 0x235))) {
    *(int *)((int)param_1 + 0x235) = *(int *)(DAT_00802a38 + 0xe4);
    if (((short)param_1[0x1b] == 7) || ((short)param_1[0x1b] < 3)) {
      *(int *)((int)param_1 + 0x231) = (*(int *)((int)param_1 + 0x231) + 1) % 6;
    }
    else {
      iVar2 = *(int *)((int)param_1 + 0x231) + -1;
      *(int *)((int)param_1 + 0x231) = iVar2;
      if (iVar2 < 0) {
        *(undefined4 *)((int)param_1 + 0x231) = 5;
      }
    }
  }
  uVar3 = (uint)(short)param_1[0x1b];
  if (((*(int *)((int)param_1 + 0x279) == 0xf7) || (*(int *)((int)param_1 + 0x279) == 0xf6)) &&
     (uVar3 = uVar3 + 4 & 0x80000007, (int)uVar3 < 0)) {
    uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
  }
  iVar2 = (((0x18 - (int)(uVar3 * 0x2d) / 0xf) % 0x18 + (4 - DAT_008073fc) * 6) % 0x18) / 3;
  STT3DSprC::SetCurFase(this,'\r',iVar2);
  STT3DSprC::ShowCurFase(this,'\r');
  STT3DSprC::SetCurFase(this,'\x0e',*(int *)((int)param_1 + 0x231) + iVar2 * 6);
  STT3DSprC::ShowCurFase(this,'\x0e');
  *(int *)((int)param_1 + 0x23d) = *(int *)((int)param_1 + 0x23d) + 1;
  (**(code **)(*param_1 + 0xd8))();
  return;
}


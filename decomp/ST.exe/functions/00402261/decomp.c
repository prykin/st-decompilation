
void __fastcall thunk_FUN_0058a9e0(int *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined3 extraout_var;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  int iVar7;
  int iStack_c;
  
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
  iVar4 = *(int *)((int)param_1 + 0x2a5);
  if ((iVar4 == 0xf8) || (iVar4 == 0xf9)) {
    iStack_c = 8;
    iVar2 = 8;
  }
  else {
    iVar2 = 6;
    iStack_c = 6;
  }
  if (2 < (uint)(*(int *)(DAT_00802a38 + 0xe4) - *(int *)((int)param_1 + 0x245))) {
    *(int *)((int)param_1 + 0x245) = *(int *)(DAT_00802a38 + 0xe4);
    *(undefined4 *)((int)param_1 + 0x235) = 0;
    iVar7 = (*(int *)((int)param_1 + 0x231) + 1) % iVar2;
    *(int *)((int)param_1 + 0x231) = iVar7;
    if (iVar7 != 0) {
      *(int *)((int)param_1 + 0x235) = ((iVar2 - iVar7) * 0x6a0) / iVar2;
    }
  }
  if (*(int *)((int)param_1 + 0x249) == 1) {
    if (*(int *)((int)param_1 + 0x281) == 0) {
      iVar4 = (int)*(short *)((int)param_1 + 0x41) - (int)*(short *)((int)param_1 + 0x4e);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < 0x15) {
        iVar4 = (int)*(short *)((int)param_1 + 0x43) - (int)(short)param_1[0x14];
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
        if (iVar4 < 0x15) {
          uVar5 = thunk_FUN_0058b190(param_1,(short *)((int)param_1 + 0x4e),
                                     (short *)(param_1 + 0x14),(short *)((int)param_1 + 0x52),
                                     (short *)(param_1 + 0x1b));
          *(undefined4 *)((int)param_1 + 0x249) = uVar5;
          *(undefined4 *)((int)param_1 + 0x24d) = 0;
        }
      }
      iVar4 = *(int *)((int)param_1 + 0x2a5);
      *(int *)((int)param_1 + 0x25d) =
           *(int *)((int)param_1 + 0x25d) + *(int *)((int)param_1 + 0x251);
      *(int *)((int)param_1 + 0x261) =
           *(int *)((int)param_1 + 0x261) + *(int *)((int)param_1 + 0x255);
      if ((iVar4 == 0xf8) || (iVar4 == 0xf9)) {
        *(int *)((int)param_1 + 0x25d) =
             (*(int *)((int)param_1 + 0x269) * *(int *)((int)param_1 + 0x235)) /
             *(int *)((int)param_1 + 0x239) + *(int *)((int)param_1 + 0x25d);
        *(int *)((int)param_1 + 0x261) =
             (*(int *)((int)param_1 + 0x26d) * *(int *)((int)param_1 + 0x235)) /
             *(int *)((int)param_1 + 0x239) + *(int *)((int)param_1 + 0x261);
        iVar2 = iStack_c;
      }
      *(short *)((int)param_1 + 0x41) =
           (short)(*(int *)((int)param_1 + 0x25d) + (*(int *)((int)param_1 + 0x25d) >> 0x1f & 0xffU)
                  >> 8) + *(short *)((int)param_1 + 0x275);
      *(short *)((int)param_1 + 0x43) =
           (short)(*(int *)((int)param_1 + 0x261) + (*(int *)((int)param_1 + 0x261) >> 0x1f & 0xffU)
                  >> 8) + *(short *)((int)param_1 + 0x279);
    }
    iVar7 = *(int *)((int)param_1 + 0x265) + *(int *)((int)param_1 + 0x259);
    *(int *)((int)param_1 + 0x265) = iVar7;
    if ((iVar4 == 0xf8) || (iVar4 == 0xf9)) {
      *(int *)((int)param_1 + 0x265) =
           (*(int *)((int)param_1 + 0x271) * *(int *)((int)param_1 + 0x235)) /
           *(int *)((int)param_1 + 0x239) + iVar7;
    }
    sVar6 = (short)(*(int *)((int)param_1 + 0x265) +
                    (*(int *)((int)param_1 + 0x265) >> 0x1f & 0xffU) >> 8) +
            *(short *)((int)param_1 + 0x27d);
    *(short *)((int)param_1 + 0x45) = sVar6;
    if (*(int *)((int)param_1 + 0x281) != 0) {
      iVar4 = (int)sVar6 - (int)*(short *)((int)param_1 + 0x52);
      if (iVar4 < 0) {
        iVar4 = -iVar4;
      }
      if (iVar4 < 10) {
        *(undefined4 *)((int)param_1 + 0x259) = 0;
        *(undefined4 *)((int)param_1 + 0x281) = 0;
      }
    }
  }
  else if (0xc < *(uint *)((int)param_1 + 0x24d)) {
    uVar5 = thunk_FUN_0058b190(param_1,(short *)((int)param_1 + 0x4e),(short *)(param_1 + 0x14),
                               (short *)((int)param_1 + 0x52),(short *)(param_1 + 0x1b));
    *(undefined4 *)((int)param_1 + 0x249) = uVar5;
    *(undefined4 *)((int)param_1 + 0x24d) = 0;
  }
  sVar6 = (short)param_1[0x1b] * 0x2d;
  *(short *)(param_1 + 0x1b) = sVar6;
  if (*(int *)((int)param_1 + 0x281) == 0) {
    iVar2 = (0x18 - (int)sVar6 / 0xf) % 0x18;
    iVar4 = (((iVar2 + (4 - DAT_008073fc) * 6) % 0x18) / 3) * iStack_c +
            *(int *)((int)param_1 + 0x231);
    iVar2 = (iVar2 / 3) * iStack_c + *(int *)((int)param_1 + 0x231);
  }
  else {
    iVar4 = *(int *)((int)param_1 + 0x231) + iVar2 * 8;
    iVar2 = iVar4;
  }
  *(short *)(param_1 + 0x1b) = sVar6 / 0x2d - (short)((int)sVar6 / -0x4c000000);
  thunk_FUN_004abe40((void *)((int)param_1 + 0x1d5),'\x0e',iVar4);
  thunk_FUN_004abf00('\x0e',iVar2);
  thunk_FUN_004ac040('\x0e');
  *(int *)((int)param_1 + 0x24d) = *(int *)((int)param_1 + 0x24d) + 1;
  (**(code **)(*param_1 + 0xd8))();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ecea0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)((int)param_1 + 0x5ff) == 0) {
    puVar1 = (undefined4 *)FUN_0072e530(0x40);
    if (puVar1 == (undefined4 *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = thunk_FUN_004ab810(puVar1);
    }
    *(undefined4 *)((int)param_1 + 0x5ff) = uVar2;
    iVar3 = thunk_FUN_004ad1f0(DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7c1670,0x3f);
    }
  }
  switch(*(undefined4 *)((int)param_1 + 0x245)) {
  case 0:
    *(undefined4 *)((int)param_1 + 0x261) = 0;
    iVar3 = param_1[0x134];
    if (iVar3 == 4) {
      param_1[0x134] = 5;
      break;
    }
    if (iVar3 != 5) {
      if (iVar3 == 1) {
        *(undefined4 *)((int)param_1 + 0x261) = 1;
      }
      break;
    }
  case 1:
  case 6:
    param_1[0x134] = 0;
    break;
  case 5:
    switch(param_1[0x134]) {
    case 1:
      param_1[0x134] = 3;
      break;
    case 3:
      param_1[0x134] = 4;
      break;
    case 4:
      param_1[0x134] = 5;
      break;
    case 5:
      param_1[0x134] = 0;
    }
    *(undefined4 *)((int)param_1 + 0x261) = 0;
    *(uint *)((int)param_1 + 0x265) = *(uint *)((int)param_1 + 0x265) & 0xfffffffd;
    *(undefined4 *)((int)param_1 + 0x26d) = 0;
  }
  if (param_1[0x134] == 4) {
    iVar3 = thunk_FUN_004ab880(0xe,DAT_00806774,(byte *)s_vacmine_007d1f38,0x1d);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7c1670,0x58);
    }
    thunk_FUN_004ad5e0(*(int *)((int)param_1 + 0x5ff));
    uVar6 = 10;
    iVar3 = thunk_FUN_004ad650((int)param_1 + 0x1d5);
    uVar4 = thunk_FUN_004ad650(*(int *)((int)param_1 + 0x5ff));
    FUN_006ea340(*(void **)((int)param_1 + 0x211),uVar4,iVar3,uVar6);
    thunk_FUN_004abce0(*(void **)((int)param_1 + 0x5ff),0xe,0,0,'\0');
    thunk_FUN_004abe40(*(void **)((int)param_1 + 0x5ff),'\x0e',0);
    thunk_FUN_004ac1a0(0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    param_1[0x135] = 0;
    iVar3 = *(int *)(DAT_00802a38 + 0xe4);
    param_1[0x137] = 1;
    iVar5 = param_1[0x134] * 0x18;
    param_1[0x136] = iVar3;
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x5ff),
                       (float)(*(int *)(&DAT_0079aac0 + iVar5) +
                              (int)*(short *)((int)param_1 + 0x41)) * _DAT_007904f8 * _DAT_007904f0,
                       (float)(*(int *)(&DAT_0079aac4 + iVar5) +
                              (int)*(short *)((int)param_1 + 0x43)) * _DAT_007904f8 * _DAT_007904f0,
                       (float)(*(int *)(&DAT_0079aac8 + iVar5) +
                              (int)*(short *)((int)param_1 + 0x45)) * _DAT_007904f8 * _DAT_007904f0
                       + _DAT_007904fc);
    thunk_FUN_004ad460(*(void **)((int)param_1 + 0x5ff),1);
    (**(code **)(*param_1 + 0x90))(3,0x42a);
    return 0;
  }
  thunk_FUN_004ad430(*(int *)((int)param_1 + 0x5ff));
  return 0;
}


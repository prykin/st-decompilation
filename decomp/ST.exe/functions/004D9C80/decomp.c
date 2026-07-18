
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004d9c80(int *param_1)

{
  undefined4 *puVar1;
  STT3DSprC *this;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  byte local_108 [256];
  int local_8;
  
  if (*(int *)((int)param_1 + 0x5ff) == 0) {
    puVar1 = (undefined4 *)FUN_0072e530(0x40);
    if (puVar1 == (undefined4 *)0x0) {
      this = (STT3DSprC *)0x0;
    }
    else {
      this = (STT3DSprC *)thunk_FUN_004ab810(puVar1);
    }
    *(STT3DSprC **)((int)param_1 + 0x5ff) = this;
    iVar2 = STT3DSprC::Init(this,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar2 != 0) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7bf618,0x3e);
    }
  }
  switch(*(undefined4 *)((int)param_1 + 0x245)) {
  case 0:
    *(undefined4 *)((int)param_1 + 0x261) = 0;
    iVar2 = param_1[0x134];
    if (iVar2 == 4) {
      param_1[0x134] = 5;
      break;
    }
    if (iVar2 != 5) {
      if (iVar2 == 1) {
        *(undefined4 *)((int)param_1 + 0x261) = 1;
      }
      break;
    }
  case 1:
  case 6:
    param_1[0x134] = 0;
    break;
  case 5:
    iVar2 = param_1[0x134];
    if (iVar2 == 1) {
      param_1[0x134] = 3;
    }
    else if (iVar2 == 3) {
      param_1[0x134] = 4;
    }
    else if (iVar2 == 5) {
      param_1[0x134] = 0;
    }
    *(undefined4 *)((int)param_1 + 0x261) = 0;
    *(uint *)((int)param_1 + 0x265) = *(uint *)((int)param_1 + 0x265) & 0xfffffffd;
    *(undefined4 *)((int)param_1 + 0x26d) = 0;
  }
  if (param_1[0x134] == 4) {
    wsprintfA((LPSTR)local_108,&DAT_007a4ccc,s_lasbom_007bf610);
    iVar2 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)((int)param_1 + 0x5ff),0xe,DAT_00806774,local_108,0x1d);
    if (iVar2 != 0) {
      FUN_006a5e40(iVar2,DAT_007ed77c,0x7bf618,0x57);
    }
    thunk_FUN_004ad5e0(*(int *)((int)param_1 + 0x5ff));
    uVar5 = 10;
    iVar2 = thunk_FUN_004ad650((int)param_1 + 0x1d5);
    uVar3 = thunk_FUN_004ad650(*(int *)((int)param_1 + 0x5ff));
    FUN_006ea340(*(void **)((int)param_1 + 0x211),uVar3,iVar2,uVar5);
    STT3DSprC::StartShow
              (*(STT3DSprC **)((int)param_1 + 0x5ff),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    param_1[0x135] = 0;
    iVar2 = *(int *)(DAT_00802a38 + 0xe4);
    param_1[0x137] = 1;
    iVar4 = param_1[0x134] * 0x18;
    param_1[0x136] = iVar2;
    local_8 = *(int *)(&DAT_00798eb8 + iVar4) + (int)*(short *)((int)param_1 + 0x41);
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x5ff),
                       (float)local_8 * _DAT_007904f8 * _DAT_007904f0,
                       (float)(*(int *)(&DAT_00798ebc + iVar4) +
                              (int)*(short *)((int)param_1 + 0x43)) * _DAT_007904f8 * _DAT_007904f0,
                       (float)(*(int *)(&DAT_00798ec0 + iVar4) +
                              (int)*(short *)((int)param_1 + 0x45)) * _DAT_007904f8 * _DAT_007904f0
                       + _DAT_007904fc);
    thunk_FUN_004ad460(*(void **)((int)param_1 + 0x5ff),1);
    (**(code **)(*param_1 + 0x90))(3,0x347);
    return 0;
  }
  thunk_FUN_004ad430(*(int *)((int)param_1 + 0x5ff));
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall thunk_FUN_004dce00(int *param_1)

{
  float fVar1;
  undefined4 *puVar2;
  STT3DSprC *this;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte abStack_108 [256];
  int iStack_8;
  
  if (*(int *)((int)param_1 + 0x5ff) == 0) {
    puVar2 = (undefined4 *)Library::MSVCRT::FUN_0072e530(0x40);
    if (puVar2 == (undefined4 *)0x0) {
      this = (STT3DSprC *)0x0;
    }
    else {
      this = (STT3DSprC *)thunk_FUN_004ab810(puVar2);
    }
    *(STT3DSprC **)((int)param_1 + 0x5ff) = this;
    iVar3 = STT3DSprC::Init(this,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
    if (iVar3 != 0) {
      RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_jump_cpp_007bf64c,0x58);
    }
  }
  if (*(int *)((int)param_1 + 0x245) == 5) {
    param_1[0x134] = 1;
  }
  else {
    param_1[0x134] = 0;
  }
  if (param_1[0x134] == 1) {
    wsprintfA((LPSTR)abStack_108,&DAT_007a4ccc,s_jmpmine_007bf640);
    iVar3 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)((int)param_1 + 0x5ff),0xe,DAT_00806774,abStack_108,0x1d);
    if (iVar3 != 0) {
      RaiseInternalException(iVar3,DAT_007ed77c,s_E____titans_Artem_TLO_jump_cpp_007bf64c,0x61);
    }
    thunk_FUN_004ad5e0(*(int *)((int)param_1 + 0x5ff));
    uVar5 = 10;
    iVar3 = thunk_FUN_004ad650((int)param_1 + 0x1d5);
    uVar4 = thunk_FUN_004ad650(*(int *)((int)param_1 + 0x5ff));
    FUN_006ea340(*(void **)((int)param_1 + 0x211),uVar4,iVar3,uVar5);
    STT3DSprC::StartShow
              (*(STT3DSprC **)((int)param_1 + 0x5ff),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
    param_1[0x135] = 0;
    fVar1 = (float)(int)*(short *)((int)param_1 + 0x45) * _DAT_007904f8;
    iVar3 = *(int *)(DAT_00802a38 + 0xe4);
    param_1[0x137] = 1;
    fVar1 = fVar1 * _DAT_007904f0;
    param_1[0x136] = iVar3;
    iStack_8 = (int)*(short *)((int)param_1 + 0x41);
    thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x5ff),
                       (float)iStack_8 * _DAT_007904f8 * _DAT_007904f0,
                       (float)(int)*(short *)((int)param_1 + 0x43) * _DAT_007904f8 * _DAT_007904f0,
                       fVar1 + _DAT_007904fc);
    thunk_FUN_004ad460(*(void **)((int)param_1 + 0x5ff),1);
    (**(code **)(*param_1 + 0x90))(3,0x3f4);
    return 0;
  }
  thunk_FUN_004ad430(*(int *)((int)param_1 + 0x5ff));
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_004ec0f0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  iVar1 = STT3DSprC::LoadSequence
                    (*(STT3DSprC **)(param_1 + 0x5ff),0xe,DAT_00806774,
                     *(byte **)(&DAT_007cde6c + *(int *)(param_1 + 0x50c) * 4),0x1d);
  if (iVar1 != 0) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7c1648,0x126);
  }
  uVar4 = 10;
  iVar1 = thunk_FUN_004ad650(param_1 + 0x1d5);
  uVar2 = thunk_FUN_004ad650(*(int *)(param_1 + 0x5ff));
  FUN_006ea340(*(void **)(param_1 + 0x211),uVar2,iVar1,uVar4);
  thunk_FUN_004ad3c0(*(void **)(param_1 + 0x5ff),
                     (float)*(int *)(param_1 + 0x4fc) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)(param_1 + 0x500) * _DAT_007904f8 * _DAT_007904f0,
                     (float)*(int *)(param_1 + 0x504) * _DAT_007904f8 * _DAT_007904f0 +
                     _DAT_007904fc);
  uVar3 = thunk_FUN_004ab050();
  iVar1 = 0;
  switch(uVar3) {
  case 0:
    iVar1 = DAT_0079aa90;
    break;
  case 1:
    iVar1 = DAT_0079aa94;
    break;
  case 2:
    iVar1 = DAT_0079aa98;
    break;
  case 3:
    iVar1 = DAT_0079aa9c;
  }
  thunk_FUN_004ad460(*(void **)(param_1 + 0x5ff),1);
  thunk_FUN_004abce0(*(void **)(param_1 + 0x5ff),0xe,iVar1,iVar1,'\0');
  thunk_FUN_004abe40(*(void **)(param_1 + 0x5ff),'\x0e',iVar1);
  STT3DSprC::StartShow(*(STT3DSprC **)(param_1 + 0x5ff),0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
  return 0;
}


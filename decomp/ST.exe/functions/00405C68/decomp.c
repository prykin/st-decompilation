
void __fastcall thunk_FUN_005fb100(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = 0;
  iVar1 = (int)*(short *)(param_1 + 0x45);
  iVar3 = (int)*(short *)(param_1 + 0x43);
  iVar4 = (int)*(short *)(param_1 + 0x41);
  iVar5 = 0;
  uVar2 = thunk_FUN_004ad650(param_1 + 0x1d5);
  thunk_FUN_006377b0(uVar2,iVar5,iVar4,iVar3,iVar1,uVar6);
  iVar1 = *(int *)(DAT_00802a38 + 0xe4);
  *(undefined4 *)(param_1 + 0x2dd) = 7;
  *(int *)(param_1 + 0x2e1) = iVar1 + 0x15;
  return;
}



void __thiscall thunk_FUN_005b5be0(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*param_2 + -1) * param_2[5];
  FUN_006b4170(param_1,0,iVar2,0,param_2[5] + -2,*(int *)(param_1 + 8),0xff);
  if (param_2[1] == 1) {
    FUN_006b4170(param_1,0,iVar2,0,param_2[5] + -2,0x14,0);
    FUN_006b4170(param_1,0,iVar2 + 1,0x14,param_2[5] + -5,2,0);
    FUN_006b4170(param_1,0,iVar2 + 3,0x16,param_2[5] + -9,2,0);
    FUN_006b5b10(param_1,0,iVar2,-(uint)(*param_2 != 1) & 2,iVar2,0x14,
                 (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
    FUN_006b5b10(param_1,0,iVar2,0x14,iVar2 + 3,0x17,
                 (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
    FUN_006b5b10(param_1,0,iVar2 + 3,0x17,param_2[5] + -6 + iVar2,0x17,
                 (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
    FUN_006b5b10(param_1,0,param_2[5] + iVar2 + -6,0x17,param_2[5] + iVar2 + -3,0x14,
                 (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
    iVar2 = param_2[5] + -3 + iVar2;
    FUN_006b5b10(param_1,0,iVar2,0x14,iVar2,2,
                 (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
    return;
  }
  FUN_006b4170(param_1,0,iVar2,0,param_2[5] + -2,0x13,0);
  FUN_006b4170(param_1,0,iVar2 + 2,0x13,param_2[5] + -6,3,0);
  FUN_006b5b10(param_1,0,iVar2,-(uint)(*param_2 != 1) & 2,iVar2,0x13,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  FUN_006b5b10(param_1,0,iVar2,0x13,iVar2 + 3,0x16,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  FUN_006b5b10(param_1,0,iVar2 + 3,0x16,param_2[5] + -6 + iVar2,0x16,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  FUN_006b5b10(param_1,0,param_2[5] + iVar2 + -6,0x16,param_2[5] + iVar2 + -3,0x13,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  iVar1 = param_2[5] + -3 + iVar2;
  FUN_006b5b10(param_1,0,iVar1,0x13,iVar1,2,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  FUN_006b5b10(param_1,0,iVar2,1,param_2[5] + -3 + iVar2,1,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  return;
}


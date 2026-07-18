
void __thiscall thunk_FUN_005b5f00(void *this,int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (*param_2 + -1) * param_2[5];
  FUN_006b4170(param_1,0,iVar2,0,param_2[5] + -2,*(int *)(param_1 + 8),0xff);
  if (param_2[1] == 1) {
    FUN_006b4170(param_1,0,iVar2,3,param_2[5] + -2,param_2[6] + -3,0);
    FUN_006b4170(param_1,0,iVar2 + 2,1,param_2[5] + -6,2,0);
    FUN_006b5b10(param_1,0,iVar2,param_2[6] - ((*param_2 != 1) + 1),iVar2,3,
                 (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
    FUN_006b5b10(param_1,0,iVar2,3,iVar2 + 3,0,
                 (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
    FUN_006b5b10(param_1,0,iVar2 + 3,0,param_2[5] + -6 + iVar2,0,
                 (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
    FUN_006b5b10(param_1,0,param_2[5] + iVar2 + -6,0,param_2[5] + iVar2 + -3,3,
                 (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
    iVar2 = param_2[5] + -3 + iVar2;
    FUN_006b5b10(param_1,0,iVar2,3,iVar2,param_2[6] + -2,
                 (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
    return;
  }
  FUN_006b4170(param_1,0,iVar2 + 1,4,param_2[5] + -4,param_2[6] + -5,0);
  FUN_006b4170(param_1,0,iVar2 + 2,2,param_2[5] + -6,2,0);
  FUN_006b5b10(param_1,0,iVar2,param_2[6] + -1,iVar2,4,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  FUN_006b5b10(param_1,0,iVar2,4,iVar2 + 3,1,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  FUN_006b5b10(param_1,0,iVar2 + 3,1,param_2[5] + -6 + iVar2,1,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  FUN_006b5b10(param_1,0,param_2[5] + iVar2 + -6,1,param_2[5] + iVar2 + -3,4,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  iVar1 = param_2[5] + -3 + iVar2;
  FUN_006b5b10(param_1,0,iVar1,4,iVar1,param_2[6] + -1,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  FUN_006b5b10(param_1,0,iVar2,param_2[6] + -1,param_2[5] + -3 + iVar2,param_2[6] + -1,
               (byte)*(undefined4 *)(*(int *)((int)this + 0x1a5b) + 0x140),0xd);
  return;
}


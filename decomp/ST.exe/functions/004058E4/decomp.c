
undefined4 __thiscall thunk_FUN_004ea460(void *this,int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((*(int *)((int)this + 0x245) == 4) && (*(int *)((int)this + 0x46c) == 0)) &&
     ((param_2 != 0 || (iVar3 = FUN_006e62d0(DAT_00802a38,param_1,&param_2), iVar3 == 0)))) {
    *(undefined4 *)((int)this + 0x46c) = 1;
    *(int *)((int)this + 0x470) = param_1;
    *(undefined4 *)((int)this + 0x48c) = 0;
    *(undefined4 *)((int)this + 0x494) = 0;
    uVar1 = *(undefined4 *)(param_2 + 0x5b0);
    *(undefined4 *)((int)this + 0x474) = uVar1;
    uVar2 = *(undefined4 *)(param_2 + 0x5b4);
    *(undefined4 *)((int)this + 0x478) = uVar2;
    iVar3 = *(int *)(param_2 + 0x5b8);
    *(int *)((int)this + 0x47c) = iVar3;
    thunk_FUN_004c6c70(this,uVar1,uVar2,iVar3 + 1);
  }
  return 0;
}


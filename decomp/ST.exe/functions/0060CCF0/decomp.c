
bool __thiscall
FUN_0060ccf0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  bVar4 = false;
  if (((*(int *)((int)this + 0x244) != 0) && (param_1 < *(int *)((int)this + 0x23c))) &&
     (-1 < param_1)) {
    iVar3 = param_1 * 0x44;
    *(int *)(iVar3 + 0xc + *(int *)((int)this + 0x244)) = param_5;
    *(int *)(iVar3 + 0x10 + *(int *)((int)this + 0x244)) = param_6;
    *(int *)(iVar3 + 0x14 + *(int *)((int)this + 0x244)) = param_7;
    *(int *)(iVar3 + 0x18 + *(int *)((int)this + 0x244)) = param_2;
    *(int *)(iVar3 + 0x1c + *(int *)((int)this + 0x244)) = param_3;
    *(int *)(iVar3 + 0x20 + *(int *)((int)this + 0x244)) = param_4;
    *(int *)(iVar3 + 0x24 + *(int *)((int)this + 0x244)) = param_5 - param_2;
    *(int *)(iVar3 + 0x28 + *(int *)((int)this + 0x244)) = param_6 - param_3;
    *(int *)(iVar3 + 0x2c + *(int *)((int)this + 0x244)) = param_7 - param_4;
    *(undefined4 *)(iVar3 + 0x30 + *(int *)((int)this + 0x244)) = 0;
    *(undefined4 *)(iVar3 + 0x34 + *(int *)((int)this + 0x244)) = 10;
    *(undefined4 *)(iVar3 + 0x38 + *(int *)((int)this + 0x244)) = 0x14;
    puVar1 = (undefined2 *)FUN_006aadd0(param_2,param_3,param_4,param_5,param_6,param_7);
    puVar1 = thunk_FUN_0060cbe0(puVar1,(int *)(iVar3 + 4 + *(int *)((int)this + 0x244)));
    *(undefined2 **)(iVar3 + 8 + *(int *)((int)this + 0x244)) = puVar1;
    piVar2 = thunk_FUN_0062bbc0(param_2,param_3,param_4,param_5,param_6,param_7,0,0,7,0x1e0);
    *(int **)(iVar3 + 0x40 + *(int *)((int)this + 0x244)) = piVar2;
    bVar4 = *(int *)(iVar3 + 8 + *(int *)((int)this + 0x244)) != 0;
    *(undefined4 *)(iVar3 + *(int *)((int)this + 0x244) + 0x3c) = PTR_00802a38->field_00E4;
    *(undefined4 *)(iVar3 + *(int *)((int)this + 0x244)) = 1;
  }
  return bVar4;
}


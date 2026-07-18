
undefined4 __thiscall
FUN_00631190(void *this,uint param_1,short param_2,short param_3,short param_4,int param_5,
            undefined4 param_6,int param_7)

{
  ushort *puVar1;
  int iVar2;
  
  iVar2 = *(int *)((int)this + 0x38);
  if (param_1 < *(uint *)(iVar2 + 0xc)) {
    iVar2 = *(int *)(iVar2 + 8) * param_1 + *(int *)(iVar2 + 0x1c);
  }
  else {
    iVar2 = 0;
  }
  thunk_FUN_00630bb0(this,param_2,param_3,param_4,param_6,param_5,param_7);
  puVar1 = thunk_FUN_00630c50(param_6,param_5,0,1,param_7);
  *(ushort **)(iVar2 + 0x10) = puVar1;
  if (puVar1 != (ushort *)0x0) {
    return 1;
  }
  return 0;
}


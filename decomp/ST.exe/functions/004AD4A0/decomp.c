
int __thiscall FUN_004ad4a0(void *this,int *param_1,byte *param_2)

{
  ushort *puVar1;
  
  puVar1 = mfRLoad(param_1,CASE_16,param_2,0xffffffff,0,1,0,(undefined4 *)0x0);
  *(ushort **)((int)this + 0x38) = puVar1;
  return (puVar1 != (ushort *)0x0) - 1;
}


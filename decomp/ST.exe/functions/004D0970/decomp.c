
undefined4 __thiscall
FUN_004d0970(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)((int)this + 0x249) <= *(int *)((int)this + 0x245) + 1) {
    iVar1 = *(int *)((int)this + 0x249) + 10;
    *(int *)((int)this + 0x249) = iVar1;
    iVar1 = FUN_006acf50(*(undefined4 **)((int)this + 0x24d),iVar1 * 0xc);
    *(int *)((int)this + 0x24d) = iVar1;
  }
  *(undefined4 *)(*(int *)((int)this + 0x24d) + *(int *)((int)this + 0x245) * 0xc) = param_1;
  *(undefined4 *)(*(int *)((int)this + 0x24d) + 4 + *(int *)((int)this + 0x245) * 0xc) = param_2;
  *(undefined4 *)(*(int *)((int)this + 0x24d) + 8 + *(int *)((int)this + 0x245) * 0xc) = param_3;
  iVar1 = thunk_FUN_00495ec0((short)param_1,(short)param_2,(short)param_3,0,(int)this);
  if (iVar1 != 0) {
    FUN_006a5e40(iVar1,DAT_007ed77c,0x7bf39c,0x2f9);
  }
  *(int *)((int)this + 0x245) = *(int *)((int)this + 0x245) + 1;
  return 0;
}


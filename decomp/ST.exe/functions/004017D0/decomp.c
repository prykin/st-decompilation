
void __thiscall thunk_FUN_005d00b0(void *this,int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uStack_64;
  undefined1 uStack_60;
  undefined1 uStack_1a;
  undefined4 uStack_19;
  undefined1 uStack_15;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  puVar1 = *(uint **)(param_1 + 0x50);
  puVar3 = &uStack_64;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  uStack_64._3_1_ = *(undefined1 *)(param_1 + 3);
  uStack_64._2_1_ = *(undefined1 *)(param_1 + 2);
  uStack_60 = 1;
  FUN_006afe40(&iStack_14,puVar1);
  uStack_10 = *(undefined4 *)(param_1 + 0x54);
  uStack_1a = *(undefined1 *)(param_1 + 0x4a);
  uStack_c = *(undefined4 *)(param_1 + 0x58);
  uStack_8 = *(undefined4 *)(param_1 + 0x5c);
  uStack_19 = 0;
  uStack_15 = 0;
  FUN_006b11d0(*(uint **)((int)this + 0x1f84),param_2,&uStack_64);
  return;
}



undefined4 __thiscall thunk_FUN_004e2ad0(void *this,int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 auStack_24 [4];
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined2 uStack_c;
  short sStack_a;
  
  if (param_1 != 2) {
    return 0;
  }
  *(undefined4 *)((int)this + 0x4d0) = 1;
  TLOBaseTy::RotateSpr(this,1);
  thunk_FUN_004e5eb0(*(int *)((int)this + 0x24),param_2);
  if (*(uint *)((int)this + 0x24) != (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d))
  goto LAB_004e2b69;
  uVar1 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
  uVar1 = uVar1 & 0xff;
  if (uVar1 == 1) {
    iVar3 = *(int *)this;
    uVar5 = 0x20c;
  }
  else {
    if (uVar1 == 2) {
      (**(code **)(*(int *)this + 0x90))(4,0x2d4);
      goto LAB_004e2b69;
    }
    if (uVar1 != 3) goto LAB_004e2b69;
    iVar3 = *(int *)this;
    uVar5 = 0x38f;
  }
  (**(code **)(iVar3 + 0x90))(4,uVar5);
LAB_004e2b69:
  if (DAT_008117bc == (undefined4 *)0x0) {
    return 0;
  }
  iVar3 = *(int *)((int)this + 0x24);
  puVar4 = auStack_24;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uStack_e = *(undefined2 *)((int)this + 0x32);
  uStack_10 = *(undefined2 *)((int)this + 0x24);
  uStack_14 = 0x5de6;
  uStack_c = (undefined2)param_2;
  uVar5 = thunk_FUN_004e60d0(iVar3,param_2);
  sStack_a = (short)uVar5 + 1;
  (**(code **)*DAT_008117bc)(auStack_24);
  return 0;
}


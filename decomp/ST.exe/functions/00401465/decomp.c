
int __thiscall
thunk_FUN_005f14b0(void *this,short param_1,short param_2,short param_3,byte param_4,short param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  short *psVar4;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  byte bStack_1a;
  short sStack_19;
  undefined4 uStack_17;
  undefined4 *puStack_13;
  int iStack_f;
  
  if (*(int *)((int)this + 0x38) == 0) {
    puVar1 = FUN_006ae290((uint *)0x0,10,0x19,10);
    *(uint **)((int)this + 0x38) = puVar1;
    if (puVar1 == (uint *)0x0) {
      return -1;
    }
  }
  psVar4 = &sStack_20;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    psVar4[0] = 0;
    psVar4[1] = 0;
    psVar4 = psVar4 + 2;
  }
  *(undefined1 *)psVar4 = 0;
  sStack_1c = param_3;
  sStack_1e = param_2;
  sStack_20 = param_1;
  sStack_19 = param_5;
  bStack_1a = param_4;
  iStack_f = DAT_00811788;
  uStack_17 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  puStack_13 = thunk_FUN_005f1e40((uint)param_4,(int)param_5,(int)(short)(param_1 * 0xc9 + 100),
                                  (int)(short)(param_2 * 0xc9 + 100),
                                  (int)(short)(param_3 * 200 + 100));
  if (puStack_13 == (undefined4 *)0x0) {
    iVar3 = -1;
  }
  else {
    uVar2 = FUN_006ae1c0(*(uint **)((int)this + 0x38),(undefined4 *)&sStack_20);
    iVar3 = uVar2 + 1;
    if (-1 < iVar3) {
      DAT_00811788 = DAT_00811788 + 1;
      return iVar3;
    }
  }
  return iVar3;
}


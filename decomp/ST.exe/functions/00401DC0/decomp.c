
uint __thiscall
thunk_FUN_00617b10(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
                  undefined4 param_4,undefined4 param_5,undefined4 param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined2 extraout_var;
  undefined4 *puVar4;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined4 uStack_22;
  undefined2 uStack_1e;
  undefined2 uStack_1c;
  undefined2 uStack_1a;
  undefined4 uStack_18;
  undefined4 uStack_14;
  int iStack_8;
  
  if (*(int *)((int)this + 0x5e) == 0) {
    puVar1 = FUN_006ae290((uint *)0x0,7,0x24,10);
    *(uint **)((int)this + 0x5e) = puVar1;
    if (puVar1 == (uint *)0x0) {
      return 0xffffffff;
    }
  }
  iStack_8 = *(int *)((int)this + 0x5a) + 1;
  *(int *)((int)this + 0x5a) = iStack_8;
  puVar4 = &uStack_28;
  for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uStack_14 = *(undefined4 *)((int)this + 0x50);
  uStack_24 = (undefined2)param_3;
  uStack_18 = *(undefined4 *)((int)this + 0x4c);
  uStack_28._0_2_ = (undefined2)param_1;
  uStack_28._2_2_ = (undefined2)param_2;
  uStack_22 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  uStack_1e = (undefined2)uStack_28;
  uStack_1c = uStack_28._2_2_;
  uStack_1a = uStack_24;
  uVar2 = FUN_006ae1c0(*(uint **)((int)this + 0x5e),&uStack_28);
  thunk_FUN_0061d0c0(param_1,param_2,param_3,param_4,param_5,param_6,
                     *(undefined4 *)((int)this + 0x20),*(undefined4 *)((int)this + 0x54),
                     CONCAT22(extraout_var,*(undefined2 *)((int)this + 0x58)),
                     *(undefined4 *)((int)this + 0x18),*(undefined4 *)((int)this + 0x5a),this);
  return uVar2;
}


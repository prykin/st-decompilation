
int __thiscall
thunk_FUN_005f15f0(void *this,undefined2 param_1,undefined2 param_2,undefined2 param_3,
                  undefined1 param_4,undefined2 param_5,char param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined1 uStack_1e;
  undefined2 uStack_1d;
  undefined4 uStack_1b;
  undefined4 uStack_16;
  undefined4 uStack_12;
  undefined1 uStack_e;
  char cStack_d;
  undefined4 uStack_c;
  
  if (*(int *)((int)this + 0x3c) == 0) {
    puVar1 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,10,0x20,10);
    *(uint **)((int)this + 0x3c) = puVar1;
  }
  puVar1 = *(uint **)((int)this + 0x3c);
  if (puVar1 == (uint *)0x0) {
    return -1;
  }
  puVar4 = &uStack_24;
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  uStack_24._0_2_ = param_1;
  uStack_24._2_2_ = param_2;
  uStack_20 = param_3;
  uStack_1e = param_4;
  uStack_1d = param_5;
  uStack_1b = *(undefined4 *)(DAT_00802a38 + 0xe4);
  uStack_12 = 0;
  uStack_16 = 0;
  cStack_d = param_6;
  uStack_c = 0xffffffff;
  if (-1 < param_6) {
    uStack_e = 0;
    uVar2 = Library::DKW::TBL::FUN_006ae1c0(puVar1,&uStack_24);
    return uVar2 + 1;
  }
  uStack_e = *(undefined1 *)(DAT_00806724 + 0x23);
  uVar2 = Library::DKW::TBL::FUN_006ae1c0(puVar1,&uStack_24);
  return uVar2 + 1;
}


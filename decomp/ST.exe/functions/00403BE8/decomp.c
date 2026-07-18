
undefined4 __thiscall
thunk_FUN_00660540(void *this,undefined4 param_1,undefined2 param_2,undefined2 param_3,
                  undefined2 param_4,undefined2 param_5,char param_6,char *param_7)

{
  char *pcVar1;
  int *piVar2;
  int iVar4;
  int extraout_EDX;
  undefined4 *puVar5;
  undefined4 uStack_24;
  undefined2 uStack_20;
  undefined4 uStack_1e;
  int iStack_1a;
  char acStack_16 [15];
  undefined2 uStack_7;
  undefined2 uVar3;
  
  puVar5 = &uStack_24;
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined2 *)puVar5 = 0;
  *(undefined1 *)((int)puVar5 + 2) = 0;
  uStack_24._2_2_ = param_3;
  iVar4 = (int)param_6;
  uStack_1e = param_1;
  uStack_20 = param_4;
  uStack_24._0_2_ = param_2;
  *(undefined4 *)((int)this + 0xa7) = 0;
  uStack_7 = param_5;
  uVar3 = 0;
  iStack_1a = iVar4;
  if (param_7 != (char *)0x0) {
    pcVar1 = _strncpy(acStack_16,param_7,0xe);
    uVar3 = (undefined2)((uint)pcVar1 >> 0x10);
    iVar4 = extraout_EDX;
  }
  if ((*(short *)((int)this + 0x7d) != -2) && (DAT_007fa174 != 0)) {
    piVar2 = (int *)thunk_FUN_0042b760(CONCAT31((int3)((uint)iVar4 >> 8),
                                                *(undefined1 *)((int)this + 0x24)),
                                       CONCAT22(uVar3,*(short *)((int)this + 0x7d)));
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(9,&uStack_24);
      return 0;
    }
  }
  return 0xffffffff;
}


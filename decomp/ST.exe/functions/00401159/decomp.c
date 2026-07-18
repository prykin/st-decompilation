
void __thiscall
thunk_FUN_00645f10(void *this,void *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4
                  )

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 auStack_60 [5];
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  short sStack_40;
  short sStack_3e;
  short sStack_3c;
  undefined2 uStack_3a;
  undefined4 uStack_38;
  undefined1 uStack_34;
  undefined4 uStack_33;
  undefined2 uStack_2f;
  undefined1 uStack_c;
  undefined2 uStack_8;
  undefined2 uStack_6;
  
  pvVar2 = param_1;
  if (param_1 != (void *)0x0) {
    puVar4 = auStack_60;
    for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    auStack_60[3] = 1;
    auStack_60[2] = 1;
    auStack_60[1] = *(undefined4 *)((int)param_1 + 0x24);
    auStack_60[0] = 0x28;
    thunk_FUN_00416270(param_1,(undefined2 *)((int)&param_1 + 2),&uStack_6,&uStack_8);
    uStack_4c = param_1._2_2_;
    uStack_2f = *(undefined2 *)((int)pvVar2 + 0x32);
    uStack_46 = param_2;
    uStack_48 = uStack_8;
    uStack_34 = *(undefined1 *)((int)this + 0x25d);
    uStack_4a = uStack_6;
    uStack_33 = *(undefined4 *)((int)pvVar2 + 0x18);
    uStack_42 = param_4;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    uStack_44 = param_3;
    *(uint *)((int)this + 0x1c) = uVar1;
    uStack_c = 1;
    uStack_3a = 0;
    sStack_40 = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)((int)this + 0x24b) + -0x1e;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    sStack_3e = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)((int)this + 0x24d) + -0x1e;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    sStack_3c = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)((int)this + 0x24f) + -0x1e;
    uStack_38 = *(undefined4 *)((int)this + 0x259);
    (**(code **)(*DAT_00802a38 + 8))(0x106,0,0,auStack_60,0);
  }
  return;
}


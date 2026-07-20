
void __thiscall
FUN_00645f10(void *this,void *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_60 [5];
  undefined2 local_4c;
  undefined2 local_4a;
  undefined2 local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  short local_40;
  short local_3e;
  short local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  undefined1 local_34;
  undefined4 local_33;
  undefined2 local_2f;
  undefined1 local_c;
  undefined2 local_8;
  undefined2 local_6;
  
  pvVar2 = param_1;
  if (param_1 != (void *)0x0) {
    puVar4 = local_60;
    for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    local_60[3] = 1;
    local_60[2] = 1;
    local_60[1] = *(undefined4 *)((int)param_1 + 0x24);
    local_60[0] = 0x28;
    thunk_FUN_00416270(param_1,(undefined2 *)((int)&param_1 + 2),(int *)&local_6,(int *)&local_8);
    local_4c = param_1._2_2_;
    local_2f = *(undefined2 *)((int)pvVar2 + 0x32);
    local_46 = param_2;
    local_48 = local_8;
    local_34 = *(undefined1 *)((int)this + 0x25d);
    local_4a = local_6;
    local_33 = *(undefined4 *)((int)pvVar2 + 0x18);
    local_42 = param_4;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    local_44 = param_3;
    *(uint *)((int)this + 0x1c) = uVar1;
    local_c = 1;
    local_3a = 0;
    local_40 = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)((int)this + 0x24b) + -0x1e;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    local_3e = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)((int)this + 0x24d) + -0x1e;
    uVar1 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
    *(uint *)((int)this + 0x1c) = uVar1;
    local_3c = (short)((ulonglong)(uVar1 >> 0x10) % 0x3d) + *(short *)((int)this + 0x24f) + -0x1e;
    local_38 = *(undefined4 *)((int)this + 0x259);
    (*PTR_00802a38->vtable->vfunc_08)(0x106,0,0,local_60,0);
  }
  return;
}


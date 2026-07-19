
int __thiscall thunk_FUN_004e1930(void *this,int *param_1,int param_2)

{
  STResourceC *this_00;
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar4;
  undefined1 auStack_24 [16];
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined2 uStack_e;
  undefined4 uStack_c;
  
  if (*(int *)((int)this + 0x4d4) == 0) {
    param_2 = 0;
    *param_1 = 0;
  }
  else {
    *param_1 = *(int *)((int)this + 0x4dc);
    iVar1 = *(int *)((int)this + 0x4e0);
    if (iVar1 < param_2) {
      param_2 = iVar1;
    }
    *(int *)((int)this + 0x4e0) = iVar1 - param_2;
    this_00 = thunk_FUN_004d85e0(*(int *)((int)this + 0x5b0),*(int *)((int)this + 0x5b4),
                                 *(int *)((int)this + 0x5b8));
    uVar4 = extraout_ECX;
    if (this_00 != (STResourceC *)0x0) {
      STResourceC::SetResource(this_00,*(int *)((int)this + 0x4e0),1);
      uVar4 = extraout_ECX_00;
    }
    if ((*(int *)((int)this + 0x4e0) == 0) && (param_2 != 0)) {
      *(undefined4 *)((int)this + 0x4d4) = 0;
      iVar1 = thunk_FUN_0042b760(CONCAT31((int3)((uint)uVar4 >> 8),*(undefined1 *)((int)this + 0x24)
                                         ),(uint)*(ushort *)((int)this + 0x30));
      if ((iVar1 != 0) && (*(undefined4 **)(iVar1 + 0x1c) != (undefined4 *)0x0)) {
        uStack_c = *(undefined4 *)((int)this + 0x18);
        uStack_e = *(undefined2 *)((int)this + 0x32);
        uStack_14 = 0x5d99;
        uStack_10 = 1;
        (**(code **)**(undefined4 **)(iVar1 + 0x1c))(auStack_24);
      }
      if (*(uint *)((int)this + 0x24) == (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) {
        iVar1 = *(int *)((int)this + 0x5ac);
        if ((iVar1 == 0x39) || (iVar1 == 0x5e)) {
          uVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
          uVar2 = uVar2 & 0xff;
          if (uVar2 == 1) {
            (**(code **)(*(int *)this + 0x90))(4,0x21e);
            return param_2;
          }
          if (uVar2 == 2) {
            (**(code **)(*(int *)this + 0x90))(4,0x2e4);
            return param_2;
          }
          if (uVar2 == 3) {
            (**(code **)(*(int *)this + 0x90))(4,0x3a5);
            return param_2;
          }
        }
        else if (iVar1 == 0x4f) {
          uVar2 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
          if ((uVar2 & 0xff) == 1) {
            (**(code **)(*(int *)this + 0x90))(4,0x27c);
            return param_2;
          }
          if ((uVar2 & 0xff) == 2) {
            (**(code **)(*(int *)this + 0x90))(4,0x34b);
            return param_2;
          }
        }
      }
    }
    else {
      switch(*(undefined4 *)((int)this + 0x5ac)) {
      case 0x39:
        iVar1 = *(int *)this;
        iVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
        (**(code **)(iVar1 + 0x90))(3,(-(uint)((char)iVar3 != '\x02') & 0xffffff3a) + 0x2ea);
        return param_2;
      case 0x3b:
        iVar1 = *(int *)this;
        iVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
        (**(code **)(iVar1 + 0x90))(3,(-(uint)((char)iVar3 != '\x02') & 0xffffff3a) + 0x2f7);
        return param_2;
      case 0x4f:
        iVar1 = *(int *)this;
        iVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
        (**(code **)(iVar1 + 0x90))(3,(-(uint)((char)iVar3 != '\x02') & 0xffffff32) + 0x350);
        return param_2;
      case 0x52:
        iVar1 = *(int *)this;
        iVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
        (**(code **)(iVar1 + 0x90))(3,(-(uint)((char)iVar3 != '\x02') & 0xffffff3b) + 0x35d);
        return param_2;
      case 0x5e:
        (**(code **)(*(int *)this + 0x90))(3,0x3ab);
        return param_2;
      case 0x60:
        (**(code **)(*(int *)this + 0x90))(3,0x3ba);
        return param_2;
      }
    }
  }
  return param_2;
}


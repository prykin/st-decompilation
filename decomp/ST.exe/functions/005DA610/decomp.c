
undefined4 * __thiscall FUN_005da610(void *this,undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_006e51c0(this,param_1,0x200);
  FUN_00715820((undefined4 *)((int)this + 0x2f8));
  FUN_00715820((undefined4 *)((int)this + 0x38d));
  FUN_00715820((undefined4 *)((int)this + 0x41e));
  FUN_00715820((undefined4 *)((int)this + 0x4af));
  FUN_00715820((undefined4 *)((int)this + 0x55c));
  FUN_00715820((undefined4 *)((int)this + 0x5ed));
  *(StartSystemTyVTable **)this = &StartSystemTyVTable;
  DAT_0081176c = this;
  *(undefined4 *)((int)this + 0x28) = DAT_00807332;
  *(undefined1 *)((int)this + 0x2ea) = 1;
  *(undefined1 *)((int)this + 0x2eb) = 1;
  *(undefined4 *)((int)this + 0x2e6) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x2f4) = 0;
  *(undefined4 *)((int)this + 0x2ec) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2f0) = 0;
  *(undefined4 *)((int)this + 0x389) = 0;
  *(undefined4 *)((int)this + 0x540) = 0xffffffff;
  *(undefined4 *)((int)this + 0x544) = 0;
  *(undefined4 *)((int)this + 0x548) = 0;
  *(undefined4 *)((int)this + 0x550) = 0;
  *(undefined4 *)((int)this + 0x54c) = 0;
  *(undefined4 *)((int)this + 0x558) = 0xffffffff;
  *(undefined4 *)((int)this + 0x554) = 0xffffffff;
  *(undefined4 *)((int)this + 0x682) = 0;
  *(undefined4 *)((int)this + 0x67e) = 0;
  *(undefined4 *)((int)this + 0x686) = 0;
  puVar2 = (undefined4 *)((int)this + 0x244);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  puVar2 = (undefined4 *)((int)this + 0x25c);
  for (iVar1 = 0x22; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(undefined2 *)puVar2 = 0;
  *(undefined4 *)((int)this + 0x68a) = 0;
  *(undefined4 *)((int)this + 0x68e) = 0;
  *(undefined4 *)((int)this + 0x692) = 0xffffffff;
  *(undefined4 *)((int)this + 0x696) = 0;
  *(undefined4 *)((int)this + 0x69a) = 0;
  *(undefined4 *)((int)this + 0x6b2) = 0;
  *(undefined4 *)((int)this + 0x6ae) = 0;
  *(undefined4 *)((int)this + 0x69e) = 0;
  return this;
}


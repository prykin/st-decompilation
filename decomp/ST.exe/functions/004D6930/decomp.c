
void __thiscall FUN_004d6930(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 uVar3;
  bool bVar4;
  short sVar5;
  int iVar6;
  undefined3 extraout_var;
  short sVar7;
  
  *param_1 = *(undefined4 *)((int)this + 0x259);
  *(undefined1 *)((int)param_1 + 6) = 2;
  *(byte *)((int)param_1 + 5) =
       ((*(uint *)((int)this + 0x24) != (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112d)) - 1U &
       0xfe) + 3;
  iVar6 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  *(char *)(param_1 + 1) = (char)iVar6;
  puVar1 = (undefined4 *)((int)param_1 + 9);
  *(byte *)((int)param_1 + 7) = ~(byte)(*(uint *)((int)this + 0x1d1) >> 2) & 1;
  *puVar1 = 0;
  *(undefined2 *)((int)param_1 + 0xd) = 0;
  puVar2 = (undefined4 *)((int)param_1 + 0xf);
  *puVar2 = 0;
  *(undefined2 *)((int)param_1 + 0x13) = 0;
  if (*(int *)((int)this + 0x2a4) == 0) {
    *(undefined1 *)puVar1 = 0x50;
    if (((*(int *)((int)this + 0x2ec) == 2) && (0 < *(int *)((int)this + 0x2a8))) &&
       (*(int *)((int)this + 0x2a8) < 0x65)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    *(undefined1 *)puVar2 = uVar3;
  }
  else {
    *(undefined1 *)puVar1 = 0x51;
    *(undefined1 *)puVar2 = 1;
  }
  *(undefined4 *)((int)param_1 + 0x1d) = *(undefined4 *)((int)this + 0x259);
  iVar6 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  if ((char)iVar6 == '\x03') {
    sVar5 = (short)*(undefined4 *)
                    (&DAT_007e3160 +
                    (*(int *)((int)this + 0x368) * 3 + *(int *)((int)this + 0x36c)) * 4);
    sVar7 = (short)*(undefined4 *)((int)this + 0x2d8);
  }
  else {
    sVar7 = (short)*(undefined4 *)((int)this + 0x2d4);
    sVar5 = (short)*(undefined4 *)
                    (&DAT_007e24fc +
                    (*(int *)((int)this + 0x368) * 3 + *(int *)((int)this + 0x36c)) * 4);
  }
  *(short *)((int)param_1 + 0x27) = sVar5 - sVar7;
  *(short *)((int)param_1 + 0x2b) =
       *(short *)(&DAT_007e1c50 +
                 (*(int *)((int)this + 0x368) * 3 + *(int *)((int)this + 0x36c)) * 4) -
       *(short *)((int)this + 0x2d0);
  *(undefined1 *)((int)param_1 + 0x2f) = *(undefined1 *)((int)this + 0x2a8);
  iVar6 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
  *(char *)((int)param_1 + 0x25) = (char)iVar6;
  if (*(int *)((int)this + 0x2a4) != 0) {
    param_1[0x16] = 0xbde;
    return;
  }
  if (*(int *)((int)this + 0x2b8) == 0) {
    param_1[0x16] = 0xbb9;
    return;
  }
  bVar4 = thunk_FUN_0044e1b0(*(int *)((int)this + 0x24));
  if (CONCAT31(extraout_var,bVar4) == 0) {
    param_1[0x16] = 0xbdf;
    return;
  }
  if (*(int *)((int)this + 0x2b4) != 0) {
    param_1[0x16] = 3000;
    return;
  }
  if (*(int *)((int)this + 700) == 0) {
    param_1[0x16] = 0xbba;
    return;
  }
  if (*(int *)((int)this + 0x2c0) == 0) {
    param_1[0x16] = 0xbbb;
    return;
  }
  if (*(int *)((int)this + 0x2c4) == 0) {
    param_1[0x16] = 0xbbc;
    return;
  }
  if (*(int *)((int)this + 0x2c8) == 0) {
    param_1[0x16] = 0xbd3;
  }
  return;
}


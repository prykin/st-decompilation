
void __fastcall FUN_00494df0(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x6f7);
  if (((iVar1 == 5) || (iVar1 == 0x11)) || (iVar1 == 0x21)) {
    if (((*(int *)(param_1 + 0x792) == 1) && (*(int *)(param_1 + 0x78a) == 0)) &&
       ((*(byte *)(param_1 + 0x1d1) & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x78a) = 1;
      if (DAT_00802a88 != (VisibleClassTy *)0x0) {
        VisibleClassTy::SetZoneMin1
                  (DAT_00802a88,(int)*(short *)(param_1 + 0x5b),(int)*(short *)(param_1 + 0x5d),
                   (char)*(undefined2 *)(param_1 + 0x5f),*(uint *)(param_1 + 0x24),
                   *(int *)(param_1 + 0x101),*(undefined4 *)(param_1 + 0x18),0xffffffff);
      }
    }
    if (((*(int *)(param_1 + 0x796) == 1) && (*(int *)(param_1 + 0x78e) == 0)) &&
       ((*(byte *)(param_1 + 0x1d1) & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x78e) = 1;
      if (DAT_00802a88 != (VisibleClassTy *)0x0) {
        VisibleClassTy::SetZoneMin2
                  (DAT_00802a88,(int)*(short *)(param_1 + 0x5b),(int)*(short *)(param_1 + 0x5d),
                   (char)*(undefined2 *)(param_1 + 0x5f),*(uint *)(param_1 + 0x24),
                   *(int *)(param_1 + 0x101),*(undefined4 *)(param_1 + 0x18),0xffffffff);
      }
    }
  }
  return;
}


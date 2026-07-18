
void __fastcall FUN_00492f30(int param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CONCAT22((short)((uint)param_1 >> 0x10),*(undefined2 *)(param_1 + 0x605));
  iVar3 = CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(param_1 + 0x603));
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)(param_1 + 0x607) + 1);
  iVar2 = thunk_FUN_0048dfd0(iVar3,iVar2,uVar1,iVar3,iVar2,(int *)uVar1,2,(short *)(param_1 + 0x609)
                             ,(short *)(param_1 + 0x60b),(short *)(param_1 + 0x60d));
  if (iVar2 == 0) {
    *(short *)(param_1 + 0x609) = *(short *)(param_1 + 0x603);
    *(undefined2 *)(param_1 + 0x60b) = *(undefined2 *)(param_1 + 0x605);
    *(short *)(param_1 + 0x60d) = *(short *)(param_1 + 0x607);
  }
  return;
}


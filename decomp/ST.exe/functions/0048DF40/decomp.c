
void __fastcall FUN_0048df40(int param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = CONCAT22((short)((uint)param_1 >> 0x10),*(undefined2 *)(param_1 + 0x4df));
  iVar3 = CONCAT22((short)((uint)param_2 >> 0x10),*(undefined2 *)(param_1 + 0x4dd));
  uVar1 = CONCAT22((short)((uint)in_EAX >> 0x10),*(short *)(param_1 + 0x4e1) + 1);
  iVar2 = thunk_FUN_0048dfd0(iVar3,iVar2,uVar1,iVar3,iVar2,(int *)uVar1,2,(short *)(param_1 + 0x4fc)
                             ,(short *)(param_1 + 0x4fe),(short *)(param_1 + 0x500));
  if (iVar2 == 0) {
    *(short *)(param_1 + 0x4fc) = *(short *)(param_1 + 0x4dd);
    *(undefined2 *)(param_1 + 0x4fe) = *(undefined2 *)(param_1 + 0x4df);
    *(short *)(param_1 + 0x500) = *(short *)(param_1 + 0x4e1) + 1;
  }
  return;
}


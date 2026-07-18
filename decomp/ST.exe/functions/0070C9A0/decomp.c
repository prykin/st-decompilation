
undefined1 __cdecl FUN_0070c9a0(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_006b4fa0(param_1);
  return *(undefined1 *)
          (((uint)*(ushort *)(param_1 + 0xe) * *(int *)(param_1 + 4) + 0x1f >> 3 & 0x1ffffffc) *
           ((*(int *)(param_1 + 8) - param_3) + -1) + param_2 + iVar1);
}


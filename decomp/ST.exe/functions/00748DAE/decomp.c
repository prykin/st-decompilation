
int FUN_00748dae(int param_1,undefined4 *param_2)

{
  LPVOID pvVar1;
  int iVar2;
  
  if ((*(byte *)(param_1 + 4) & 8) == 0) {
    *param_2 = 0;
    iVar2 = 1;
  }
  else {
    pvVar1 = FUN_0074bc6a(*(undefined4 **)(param_1 + 0x3c));
    *param_2 = pvVar1;
    iVar2 = (-(uint)(pvVar1 != (LPVOID)0x0) & 0x7ff8fff2) + 0x8007000e;
  }
  return iVar2;
}


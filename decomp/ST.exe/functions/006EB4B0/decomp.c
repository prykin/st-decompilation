
int FUN_006eb4b0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1;
  iVar2 = FUN_006bb8b0(param_1);
  if (iVar2 == 0) {
    param_1 = 0;
    while( true ) {
      iVar2 = FUN_006bbe40(*(int **)(iVar1 + 0x44),(undefined4 *)(param_2 + 0x4ea),
                           (undefined4 *)(param_2 + 0x4ee),0x20);
      if (iVar2 == 0) break;
      if (iVar2 != -0x7789fe3e) {
        if (iVar2 != 0) {
          FUN_006bb980(iVar1);
          return iVar2;
        }
        break;
      }
      FUN_006cec40(iVar1);
      param_1 = param_1 + 1;
      if (1 < param_1) {
        FUN_006bb980(iVar1);
        return -0x7789fe3e;
      }
    }
    iVar2 = 0;
  }
  return iVar2;
}



void __cdecl FUN_0068cda0(int *param_1,undefined4 param_2)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)*param_1;
  if (pbVar1 != (byte *)0x0) {
    switch(param_2) {
    case 1:
      thunk_FUN_006686c0(param_1);
      return;
    case 2:
      thunk_FUN_00691540(param_1);
      return;
    case 3:
      thunk_FUN_0067d160(param_1);
      return;
    case 4:
      thunk_FUN_006484f0(param_1);
      return;
    case 5:
      thunk_FUN_0065d0f0(param_1);
      return;
    case 9:
      FUN_006b5570(pbVar1);
      *param_1 = 0;
      return;
    case 10:
    case 0x40:
      FUN_006ae110(pbVar1);
      *param_1 = 0;
    }
  }
  return;
}


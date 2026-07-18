
void __cdecl FUN_0065d1f0(int *param_1)

{
  byte *pbVar1;
  
  if (*param_1 != 0) {
    pbVar1 = *(byte **)(*param_1 + 0xf);
    if (pbVar1 != (byte *)0x0) {
      FUN_006ae110(pbVar1);
      *(undefined4 *)(*param_1 + 0xf) = 0;
    }
    FUN_006ab060(param_1);
  }
  return;
}


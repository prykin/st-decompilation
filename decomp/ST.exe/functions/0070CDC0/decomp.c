
undefined4 __cdecl FUN_0070cdc0(byte *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined4 uVar3;
  
  pbVar2 = param_1;
  if (*param_1 != 0) {
    bVar1 = param_1[1];
    param_1[1] = 0;
    uVar3 = Library::MSVCRT::FUN_00734570(param_1,&param_1,0x10);
    pbVar2[1] = bVar1;
    if (param_1 != pbVar2) {
      return uVar3;
    }
  }
  return 0xffffffff;
}


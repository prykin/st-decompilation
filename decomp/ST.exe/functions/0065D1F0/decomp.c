
void __cdecl FUN_0065d1f0(int *param_1)

{
  byte *groupContent;
  
  if (*param_1 != 0) {
    groupContent = *(byte **)(*param_1 + 0xf);
    if (groupContent != (byte *)0x0) {
      FUN_006ae110(groupContent);
      *(undefined4 *)(*param_1 + 0xf) = 0;
    }
    FUN_006ab060((LPVOID *)param_1);
  }
  return;
}


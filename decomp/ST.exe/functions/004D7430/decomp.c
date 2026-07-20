
undefined4 FUN_004d7430(char param_1)

{
  byte *groupContent;
  int iVar1;
  
  iVar1 = 6;
  groupContent = &g_playerRuntime[param_1].field_0x7ee;
  do {
    FUN_006ae110(groupContent);
    groupContent = groupContent + 0x44;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}


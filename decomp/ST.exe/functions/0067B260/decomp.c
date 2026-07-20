
void __fastcall FUN_0067b260(int param_1)

{
  uint uVar1;
  AnonShape_006B0C70_7C4FE646 *groupContent;
  char *pcVar2;
  
  if (*(char *)(param_1 + 0x662) == '\x01') {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x6a1) + 0xc);
    while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
      groupContent = *(AnonShape_006B0C70_7C4FE646 **)(param_1 + 0x6a1);
      if ((((uVar1 < (uint)groupContent->field_000C) &&
           (pcVar2 = (char *)(groupContent->field_0008 * uVar1 + groupContent->field_001C),
           pcVar2 != (char *)0x0)) && ((short)*pcVar2 == *(short *)(param_1 + 0x660))) &&
         (pcVar2[7] == '\0')) {
        FUN_006b0c70(groupContent,uVar1);
      }
    }
    *(undefined1 *)(param_1 + 0x662) = 0;
  }
  return;
}


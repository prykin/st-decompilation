
void __fastcall FUN_00558140(AnonShape_00558140_7CF35A3F *param_1)

{
  int iVar1;
  LPVOID *ppvVar2;
  
  if (param_1->field_0038 != 0) {
    FUN_006ab060((LPVOID *)&param_1->field_0038);
  }
  if (param_1->field_004C != 0) {
    FUN_006ab060((LPVOID *)&param_1->field_004C);
  }
  if (param_1->field_0050 != 0) {
    FUN_006ab060((LPVOID *)&param_1->field_0050);
  }
  ppvVar2 = (LPVOID *)&param_1->field_0x54;
  iVar1 = 8;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (LPVOID *)&param_1->field_0x74;
  iVar1 = 8;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (LPVOID *)&param_1->field_0x94;
  iVar1 = 8;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (LPVOID *)&param_1->field_0xb4;
  iVar1 = 8;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (LPVOID *)&param_1->field_0xd4;
  iVar1 = 8;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ppvVar2 = (LPVOID *)&param_1->field_0x3c;
  iVar1 = 4;
  do {
    if (*ppvVar2 != (LPVOID)0x0) {
      FUN_006ab060(ppvVar2);
    }
    ppvVar2 = ppvVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if ((byte *)param_1->field_00F4 != (byte *)0x0) {
    FUN_006ae110((byte *)param_1->field_00F4);
    param_1->field_00F4 = 0;
  }
  if ((byte *)param_1->field_0110 != (byte *)0x0) {
    FUN_006ae110((byte *)param_1->field_0110);
    param_1->field_0110 = 0;
  }
  return;
}



void __fastcall thunk_FUN_0053a540(void *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  puVar1 = (undefined4 *)((int)param_1 + 0x18);
  puVar5 = puVar1;
  for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x28) = 0x28;
  if (DAT_00808aaf < 9) {
    iVar4 = 0;
  }
  else {
    iVar4 = DAT_00808aaf - 8;
  }
  *(int *)((int)param_1 + 0x2c) = iVar4;
  FUN_006e6080(param_1,2,*(undefined4 *)((int)param_1 + 0x1c5),puVar1);
  *(undefined4 *)((int)param_1 + 0x28) = 0x20;
  *(uint *)((int)param_1 + 0x2c) = (uint)(8 < DAT_00808aaf);
  FUN_006e6080(param_1,2,*(undefined4 *)((int)param_1 + 0x1c5),puVar1);
  *(undefined4 *)((int)param_1 + 0x28) = 0x22;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  FUN_006e6080(param_1,2,*(undefined4 *)((int)param_1 + 0x1c5),puVar1);
  bVar2 = 0;
  *(undefined4 *)((int)param_1 + 0x28) = 0x20;
  piVar6 = (int *)((int)param_1 + 0x1a1);
  do {
    if (*piVar6 != 0) {
      if ((bVar2 < DAT_00808aaf) && (DAT_00808a8f == '\0')) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined4 *)((int)param_1 + 0x2c) = uVar3;
      FUN_006e6080(param_1,2,piVar6[-8],puVar1);
      if ((bVar2 < DAT_00808aaf) && (DAT_00808783 == '\x03')) {
        uVar3 = 1;
      }
      else {
        uVar3 = 0;
      }
      *(undefined4 *)((int)param_1 + 0x2c) = uVar3;
      FUN_006e6080(param_1,2,*piVar6,puVar1);
    }
    bVar2 = bVar2 + 1;
    piVar6 = piVar6 + 1;
  } while (bVar2 < 8);
  thunk_FUN_0053ac00();
  return;
}


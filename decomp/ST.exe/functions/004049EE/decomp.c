
void __fastcall thunk_FUN_00635fd0(int *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*(int *)((int)param_1 + 0x11) == 3) && (*(int *)((int)param_1 + 0x39) != 0)) {
    FUN_006ab060((undefined4 *)((int)param_1 + 0x39));
  }
  if (*param_1 != 0) {
    iVar1 = *(int *)(*param_1 + 0xc);
    uVar4 = 0;
    if (0 < iVar1) {
      do {
        iVar3 = *param_1;
        if (((uVar4 < *(uint *)(iVar3 + 0xc)) &&
            (iVar3 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c), iVar3 != 0)) &&
           (uVar2 = *(uint *)(iVar3 + 4), -1 < (int)uVar2)) {
          FUN_006e8ba0(DAT_00807598,uVar2);
        }
        uVar4 = uVar4 + 1;
      } while ((int)uVar4 < iVar1);
    }
    FUN_006ae110((byte *)*param_1);
    *param_1 = 0;
  }
  return;
}


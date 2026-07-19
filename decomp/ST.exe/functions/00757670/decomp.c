
void FUN_00757670(int param_1,int param_2)

{
  uint *puVar1;
  DWORD DVar2;
  int *piVar3;
  int iVar4;
  
  DVar2 = Library::DKW::FMM::FUN_006d4c50
                    (*(int *)(param_1 + 8),param_2,(int)*(short *)(*(int *)(param_1 + 8) + 0x16));
  if (DVar2 == 0) {
    piVar3 = (int *)(*(int *)(*(int *)(param_1 + 8) + 0x34) + param_2);
    iVar4 = *piVar3;
    if (iVar4 == 0) {
      iVar4 = -1;
    }
    *piVar3 = *(int *)(*(int *)(param_1 + 8) + 0x1c);
    *(int *)(*(int *)(param_1 + 8) + 0x1c) = iVar4;
    piVar3[1] = -2;
    puVar1 = (uint *)(*(int *)(param_1 + 8) + 8);
    *puVar1 = *puVar1 | 0x10;
  }
  return;
}


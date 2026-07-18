
int * FUN_006d3ac0(HANDLE param_1)

{
  uint uVar1;
  BOOL BVar2;
  DWORD DVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  undefined4 uVar9;
  int local_34 [3];
  uint local_26;
  int local_20;
  uint local_c;
  DWORD local_8;
  
  BVar2 = ReadFile(param_1,local_34,0x28,&local_8,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    uVar9 = 0x18;
    pcVar8 = s_E__DKW_WGR_C_dibread_c_007ee214;
    iVar5 = DAT_007ed77c;
    DVar3 = GetLastError();
    FUN_006a5e40(DVar3,iVar5,(int)pcVar8,uVar9);
    return (int *)0x0;
  }
  if ((local_8 != 0x28) || (local_34[0] != 0x28)) {
LAB_006d3c0b:
    FUN_006a5e40(-5,DAT_007ed77c,0x7ee214,0x1e);
    return (int *)0x0;
  }
  local_c = FUN_006b5010((int)local_34);
  local_c = local_c >> 2;
  if (0x100 < local_c) goto LAB_006d3c0b;
  piVar4 = FUN_006d10f0(local_34[1],local_34[2],local_26 & 0xffff,local_c,1);
  uVar1 = local_c;
  if (piVar4 == (int *)0x0) {
    FUN_006a5e40(-2,DAT_007ed77c,0x7ee214,0x24);
    return (int *)0x0;
  }
  if (local_20 == 0) {
    local_20 = piVar4[5];
  }
  else if (piVar4[5] != local_20) {
    DVar3 = 0xfffffffb;
    goto LAB_006d3bc9;
  }
  piVar6 = local_34;
  piVar7 = piVar4;
  for (iVar5 = 10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar7 = piVar7 + 1;
  }
  BVar2 = ReadFile(param_1,piVar4 + 10,local_20 + local_c * 4,&local_8,(LPOVERLAPPED)0x0);
  if (BVar2 == 0) {
    DVar3 = GetLastError();
    if (DVar3 == 0) {
      return piVar4;
    }
  }
  else {
    if (local_8 == local_20 + uVar1 * 4) {
      return piVar4;
    }
    DVar3 = 0xfffffffb;
  }
LAB_006d3bc9:
  FUN_006a5e90(piVar4);
  FUN_006a5e40(DVar3,DAT_007ed77c,0x7ee214,0x44);
  return (int *)0x0;
}


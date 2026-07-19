
undefined4 * __cdecl FUN_0070c9e0(int param_1,char param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  byte local_18 [8];
  int local_10;
  uint local_c;
  int local_8;
  
  local_c = *(uint *)(param_1 + 4);
  local_10 = *(int *)(param_1 + 8);
  uVar6 = local_c & 0x80000007;
  bVar8 = uVar6 == 0;
  local_18[0] = 0x80;
  local_18[1] = 0x40;
  local_18[2] = 0x20;
  local_18[3] = 0x10;
  local_18[4] = 8;
  local_18[5] = 4;
  local_18[6] = 2;
  local_18[7] = 1;
  *param_3 = 0;
  if ((int)uVar6 < 0) {
    bVar8 = (uVar6 - 1 | 0xfffffff8) == 0xffffffff;
  }
  if (bVar8) {
    iVar2 = local_c + ((int)local_c >> 0x1f & 7U);
  }
  else {
    iVar2 = local_c + 8 + ((int)(local_c + 8) >> 0x1f & 7U);
  }
  uVar6 = (iVar2 >> 3) * local_10;
  puVar3 = Library::DKW::LIB::FUN_006aac10(uVar6);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *param_3 = uVar6;
  iVar7 = 0;
  if (0 < local_10) {
    local_8 = 0;
    do {
      uVar6 = 0;
      if (0 < (int)local_c) {
        do {
          cVar1 = FUN_0070c9a0(param_1,uVar6,iVar7);
          if (cVar1 != param_2) {
            iVar4 = ((int)(uVar6 + ((int)uVar6 >> 0x1f & 7U)) >> 3) + local_8;
            uVar5 = uVar6 & 0x80000007;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
            }
            *(byte *)(iVar4 + (int)puVar3) = *(byte *)(iVar4 + (int)puVar3) | local_18[uVar5];
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)local_c);
      }
      local_8 = local_8 + (iVar2 >> 3);
      iVar7 = iVar7 + 1;
    } while (iVar7 < local_10);
  }
  return puVar3;
}


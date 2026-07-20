
int __cdecl FUN_0067bc10(AnonShape_0067BC10_0DEA2337 *param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  uint uVar5;
  bool bVar6;
  int local_8;
  
  uVar5 = 0;
  sVar4 = 10000;
  uVar2 = param_1->field_000C;
  local_8 = 0;
  bVar6 = uVar2 != 0;
  if (0 < (int)uVar2) {
    do {
      if ((((bVar6) && (iVar3 = param_1->field_0008 * uVar5 + param_1->field_001C, iVar3 != 0)) &&
          (sVar1 = *(short *)(iVar3 + 0x1a), sVar1 < sVar4)) &&
         (sVar4 = sVar1, local_8 = iVar3, sVar1 == 0)) {
        return iVar3;
      }
      uVar5 = uVar5 + 1;
      bVar6 = uVar5 < uVar2;
    } while ((int)uVar5 < (int)uVar2);
  }
  return local_8;
}


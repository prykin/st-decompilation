
void __cdecl FUN_00676c40(AnonShape_00413AF0_B6B4EE9A *param_1,undefined *param_2)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;

  uVar3 = param_1->field_000C;
  if (1 < uVar3) {
    do {
      bVar2 = false;
      uVar6 = 0;
      if ((int)(uVar3 - 1) < 1) {
        return;
      }
      do {
        if (uVar6 < uVar3) {
          iVar5 = param_1->field_0008 * uVar6 + param_1->field_001C;
        }
        else {
          iVar5 = 0;
        }
        uVar1 = uVar6 + 1;
        if (uVar1 < uVar3) {
          iVar4 = param_1->field_0008 * uVar1 + param_1->field_001C;
        }
        else {
          iVar4 = 0;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar5 = (*(code *)param_2)(iVar4,iVar5);
        if (0 < iVar5) {
          FUN_006b0cd0(param_1,uVar6,uVar1);
          bVar2 = true;
        }
        uVar3 = param_1->field_000C;
        uVar6 = uVar1;
      } while ((int)uVar1 < (int)(uVar3 - 1));
    } while (bVar2);
  }
  return;
}


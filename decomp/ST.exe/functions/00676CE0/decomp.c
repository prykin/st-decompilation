
void __cdecl FUN_00676ce0(AnonShape_00676CE0_44EEE27F *param_1,undefined *param_2)

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
        iVar5 = (*(code *)param_2)(iVar4,iVar5);
        if (iVar5 < 0) {
          FUN_006b0cd0((AnonShape_006B0CD0_C8D121FA *)param_1,uVar6,uVar1);
          bVar2 = true;
        }
        uVar3 = param_1->field_000C;
        uVar6 = uVar1;
      } while ((int)uVar1 < (int)(uVar3 - 1));
    } while (bVar2);
  }
  return;
}


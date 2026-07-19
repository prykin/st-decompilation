
void __cdecl FUN_0042a780(int *param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  puVar2 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,100,4,100);
  iVar5 = 0;
  iVar3 = *param_1;
  if (0 < *(int *)(iVar3 + 0x455)) {
    do {
      iVar3 = *(int *)(iVar3 + 0x459 + iVar5 * 4);
      if (iVar3 != 0) {
        FUN_006a5e90(*(undefined4 **)(iVar3 + 0x3c));
        puVar2[1] = 0;
        do {
          uVar1 = puVar2[1];
          if (puVar2[3] <= uVar1) goto LAB_0042a7e7;
          piVar4 = (int *)(puVar2[2] * uVar1 + puVar2[7]);
          puVar2[1] = uVar1 + 1;
          if (piVar4 == (int *)0x0) goto LAB_0042a7e7;
        } while (*(int *)(iVar3 + 0x40) != *piVar4);
        if (piVar4 == (int *)0x0) {
LAB_0042a7e7:
          Library::DKW::TBL::FUN_006ae1c0(puVar2,(undefined4 *)(iVar3 + 0x40));
          FUN_006ab060((undefined4 *)(iVar3 + 0x40));
        }
      }
      iVar5 = iVar5 + 1;
      iVar3 = *param_1;
    } while (iVar5 < *(int *)(iVar3 + 0x455));
  }
  FUN_006ae110((byte *)puVar2);
  thunk_FUN_00575460((int *)*param_1);
  mfTMapErase(param_1);
  return;
}


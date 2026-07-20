
void __cdecl FUN_0042a780(int *param_1)

{
  uint uVar1;
  uint *groupContent;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  groupContent = Library::DKW::TBL::FUN_006ae290((uint *)0x0,100,4,100);
  iVar4 = 0;
  iVar2 = *param_1;
  if (0 < *(int *)(iVar2 + 0x455)) {
    do {
      iVar2 = *(int *)(iVar2 + 0x459 + iVar4 * 4);
      if (iVar2 != 0) {
        FUN_006a5e90(*(short **)(iVar2 + 0x3c));
        groupContent[1] = 0;
        do {
          uVar1 = groupContent[1];
          if (groupContent[3] <= uVar1) goto LAB_0042a7e7;
          piVar3 = (int *)(groupContent[2] * uVar1 + groupContent[7]);
          groupContent[1] = uVar1 + 1;
          if (piVar3 == (int *)0x0) goto LAB_0042a7e7;
        } while (*(int *)(iVar2 + 0x40) != *piVar3);
        if (piVar3 == (int *)0x0) {
LAB_0042a7e7:
          Library::DKW::TBL::FUN_006ae1c0(groupContent,(LPVOID *)(iVar2 + 0x40));
          FUN_006ab060((LPVOID *)(iVar2 + 0x40));
        }
      }
      iVar4 = iVar4 + 1;
      iVar2 = *param_1;
    } while (iVar4 < *(int *)(iVar2 + 0x455));
  }
  FUN_006ae110((byte *)groupContent);
  thunk_FUN_00575460((int *)*param_1);
  Library::Ourlib::MFSTMAP::mfTMapErase(param_1);
  return;
}


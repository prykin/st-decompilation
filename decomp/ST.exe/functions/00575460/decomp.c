
void __cdecl FUN_00575460(int *param_1)

{
  LPVOID *ppvVar1;
  int iVar2;
  uint uVar3;
  HoloTy *pHVar4;
  int *piVar5;
  uint *groupContent;
  int iVar6;
  undefined4 *puVar7;
  int local_8;
  
  piVar5 = param_1;
  pHVar4 = DAT_0080760c;
  if (DAT_0080760c != (HoloTy *)0x0) {
    FUN_006dbcf0((int *)DAT_0080760c);
    Library::MSVCRT::FUN_0072e2b0(pHVar4);
    DAT_0080760c = (HoloTy *)0x0;
  }
  if (param_1 != (int *)0x0) {
    groupContent = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,4,0x14);
    *(undefined4 *)(*(int *)((int)param_1 + 0x451) + 4) = 0;
    while( true ) {
      iVar2 = *(int *)((int)param_1 + 0x451);
      uVar3 = *(uint *)(iVar2 + 4);
      if (*(uint *)(iVar2 + 0xc) <= uVar3) break;
      iVar6 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
      *(uint *)(iVar2 + 4) = uVar3 + 1;
      if (iVar6 == 0) break;
      puVar7 = (undefined4 *)(iVar6 + 8);
      Library::DKW::TBL::FUN_006ae1c0(groupContent,puVar7);
      FUN_006a5e90((short *)*puVar7);
    }
    FUN_006ae110(*(byte **)((int)param_1 + 0x451));
    *(undefined4 *)((int)param_1 + 0x451) = 0;
    local_8 = 0;
    if (0 < *(int *)((int)param_1 + 0x455)) {
      param_1 = (int *)((int)param_1 + 0x459);
      do {
        iVar2 = *param_1;
        if ((iVar2 != 0) && (ppvVar1 = (LPVOID *)(iVar2 + 0xc), *(int *)(iVar2 + 0xc) != 0)) {
          groupContent[1] = 0;
          do {
            uVar3 = groupContent[1];
            if (groupContent[3] <= uVar3) goto LAB_0057554f;
            puVar7 = (undefined4 *)(groupContent[2] * uVar3 + groupContent[7]);
            groupContent[1] = uVar3 + 1;
            if (puVar7 == (undefined4 *)0x0) goto LAB_0057554f;
          } while (*ppvVar1 != (LPVOID)*puVar7);
          if (puVar7 == (undefined4 *)0x0) {
LAB_0057554f:
            Library::DKW::TBL::FUN_006ae1c0(groupContent,ppvVar1);
            FUN_006ab060(ppvVar1);
          }
          *ppvVar1 = (LPVOID)0x0;
        }
        local_8 = local_8 + 1;
        param_1 = param_1 + 1;
      } while (local_8 < *(int *)((int)piVar5 + 0x455));
    }
    FUN_006ae110((byte *)groupContent);
  }
  *(undefined4 *)(*(int *)((int)piVar5 + 0x44d) + 4) = 0;
  while( true ) {
    iVar2 = *(int *)((int)piVar5 + 0x44d);
    uVar3 = *(uint *)(iVar2 + 4);
    if (*(uint *)(iVar2 + 0xc) <= uVar3) break;
    iVar6 = *(int *)(iVar2 + 8) * uVar3 + *(int *)(iVar2 + 0x1c);
    *(uint *)(iVar2 + 4) = uVar3 + 1;
    if (iVar6 == 0) break;
    FUN_006a5e90(*(short **)(iVar6 + 4));
  }
  FUN_006ae110(*(byte **)((int)piVar5 + 0x44d));
  *(undefined4 *)((int)piVar5 + 0x44d) = 0;
  return;
}


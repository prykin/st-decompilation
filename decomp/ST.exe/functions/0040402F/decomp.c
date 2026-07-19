
void __cdecl thunk_FUN_00575460(int *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int iStack_8;
  
  piVar5 = param_1;
  piVar2 = DAT_0080760c;
  if (DAT_0080760c != (int *)0x0) {
    FUN_006dbcf0(DAT_0080760c);
    Library::MSVCRT::FUN_0072e2b0(piVar2);
    DAT_0080760c = (int *)0x0;
  }
  if (param_1 != (int *)0x0) {
    puVar6 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0x14,4,0x14);
    *(undefined4 *)(*(int *)((int)param_1 + 0x451) + 4) = 0;
    while( true ) {
      iVar3 = *(int *)((int)param_1 + 0x451);
      uVar4 = *(uint *)(iVar3 + 4);
      if (*(uint *)(iVar3 + 0xc) <= uVar4) break;
      iVar7 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c);
      *(uint *)(iVar3 + 4) = uVar4 + 1;
      if (iVar7 == 0) break;
      puVar1 = (undefined4 *)(iVar7 + 8);
      Library::DKW::TBL::FUN_006ae1c0(puVar6,puVar1);
      FUN_006a5e90((undefined4 *)*puVar1);
    }
    FUN_006ae110(*(byte **)((int)param_1 + 0x451));
    *(undefined4 *)((int)param_1 + 0x451) = 0;
    iStack_8 = 0;
    if (0 < *(int *)((int)param_1 + 0x455)) {
      param_1 = (int *)((int)param_1 + 0x459);
      do {
        iVar3 = *param_1;
        if ((iVar3 != 0) && (piVar2 = (int *)(iVar3 + 0xc), *(int *)(iVar3 + 0xc) != 0)) {
          puVar6[1] = 0;
          do {
            uVar4 = puVar6[1];
            if (puVar6[3] <= uVar4) goto LAB_0057554f;
            piVar8 = (int *)(puVar6[2] * uVar4 + puVar6[7]);
            puVar6[1] = uVar4 + 1;
            if (piVar8 == (int *)0x0) goto LAB_0057554f;
          } while (*piVar2 != *piVar8);
          if (piVar8 == (int *)0x0) {
LAB_0057554f:
            Library::DKW::TBL::FUN_006ae1c0(puVar6,piVar2);
            FUN_006ab060(piVar2);
          }
          *piVar2 = 0;
        }
        iStack_8 = iStack_8 + 1;
        param_1 = param_1 + 1;
      } while (iStack_8 < *(int *)((int)piVar5 + 0x455));
    }
    FUN_006ae110((byte *)puVar6);
  }
  *(undefined4 *)(*(int *)((int)piVar5 + 0x44d) + 4) = 0;
  while( true ) {
    iVar3 = *(int *)((int)piVar5 + 0x44d);
    uVar4 = *(uint *)(iVar3 + 4);
    if (*(uint *)(iVar3 + 0xc) <= uVar4) break;
    iVar7 = *(int *)(iVar3 + 8) * uVar4 + *(int *)(iVar3 + 0x1c);
    *(uint *)(iVar3 + 4) = uVar4 + 1;
    if (iVar7 == 0) break;
    FUN_006a5e90(*(undefined4 **)(iVar7 + 4));
  }
  FUN_006ae110(*(byte **)((int)piVar5 + 0x44d));
  *(undefined4 *)((int)piVar5 + 0x44d) = 0;
  return;
}


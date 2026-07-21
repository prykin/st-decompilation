
void __thiscall FUN_00695cd0(void *this,uint param_1,int param_2,int param_3)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  AnonShape_006B0C70_7C4FE646 *groupContent;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  bool bVar9;
  
  iVar8 = *(int *)((int)this + 0x5853);
  if (((iVar8 != 0) && (param_1 < *(uint *)(iVar8 + 0xc))) &&
     (piVar7 = (int *)(*(int *)(iVar8 + 8) * param_1 + *(int *)(iVar8 + 0x1c)), piVar7 != (int *)0x0
     )) {
    if (*(DArrayTy **)((int)piVar7 + 0x15) != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)((int)piVar7 + 0x15));
      *(undefined4 *)((int)piVar7 + 0x15) = 0;
    }
    if (*(DArrayTy **)((int)piVar7 + 0x19) != (DArrayTy *)0x0) {
      DArrayDestroy(*(DArrayTy **)((int)piVar7 + 0x19));
      *(undefined4 *)((int)piVar7 + 0x19) = 0;
    }
    if (param_2 == 0) {
      param_2 = 0;
    }
    else {
      param_2 = *piVar7;
    }
    FUN_006b0c70(*(AnonShape_006B0C70_7C4FE646 **)((int)this + 0x5853),param_1);
    iVar8 = *(int *)((int)this + 0x5853);
    uVar6 = 0;
    if (0 < *(int *)(iVar8 + 0xc)) {
      bVar9 = *(int *)(iVar8 + 0xc) != 0;
      do {
        if (bVar9) {
          iVar8 = *(int *)(iVar8 + 8) * uVar6 + *(int *)(iVar8 + 0x1c);
        }
        else {
          iVar8 = 0;
        }
        if (((int)param_1 <= (int)uVar6) && (iVar3 = *(int *)(iVar8 + 0x15), iVar3 != 0)) {
          uVar5 = 0;
          if (0 < *(int *)(iVar3 + 0xc)) {
            bVar9 = *(int *)(iVar3 + 0xc) != 0;
            do {
              if (bVar9) {
                iVar3 = *(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c);
              }
              else {
                iVar3 = 0;
              }
              psVar1 = (short *)(*(int *)((int)this + 0x584f) +
                                (*(int *)((int)this + 0x582f) * param_2 + *(int *)(iVar3 + 2)) * 2);
              if ((int)*psVar1 != uVar6) {
                *psVar1 = (short)uVar6;
              }
              iVar3 = *(int *)(iVar8 + 0x15);
              uVar5 = uVar5 + 1;
              bVar9 = uVar5 < *(uint *)(iVar3 + 0xc);
            } while ((int)uVar5 < (int)*(uint *)(iVar3 + 0xc));
          }
        }
        groupContent = *(AnonShape_006B0C70_7C4FE646 **)(iVar8 + 0x19);
        if (groupContent != (AnonShape_006B0C70_7C4FE646 *)0x0) {
          uVar5 = 0;
          if (0 < (int)groupContent->field_000C) {
            bVar9 = groupContent->field_000C != 0;
            do {
              if (bVar9) {
                puVar4 = (uint *)(groupContent->field_0008 * uVar5 + groupContent->field_001C);
              }
              else {
                puVar4 = (uint *)0x0;
              }
              uVar2 = *puVar4;
              if ((int)param_1 < (int)uVar2) {
                *puVar4 = uVar2 - 1;
              }
              else if (uVar2 == param_1) {
                if (param_3 < 0) {
                  FUN_006b0c70(groupContent,uVar5);
                }
                else {
                  thunk_FUN_006960d0(this,uVar6,param_3);
                }
              }
              groupContent = *(AnonShape_006B0C70_7C4FE646 **)(iVar8 + 0x19);
              uVar5 = uVar5 + 1;
              bVar9 = uVar5 < (uint)groupContent->field_000C;
            } while ((int)uVar5 < (int)groupContent->field_000C);
          }
        }
        uVar6 = uVar6 + 1;
        iVar8 = *(int *)((int)this + 0x5853);
        bVar9 = uVar6 < *(uint *)(iVar8 + 0xc);
      } while ((int)uVar6 < (int)*(uint *)(iVar8 + 0xc));
    }
  }
  return;
}


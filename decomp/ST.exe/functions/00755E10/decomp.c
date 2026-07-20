
int FUN_00755e10(AnonShape_00755E10_BD685653 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined2 local_8;
  
  iVar6 = *(short *)(param_1->field_0008 + 0x16) + -0x10;
  *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
  iVar3 = param_1->field_000C;
  iVar1 = *(int *)(iVar3 + 0x1c);
  iVar5 = *(int *)(iVar3 + 0x44 + iVar1 * 8);
  iVar1 = FUN_00753b80((AnonShape_00753B80_E259A731 *)param_1,
                       *(undefined4 *)(iVar3 + 0x40 + iVar1 * 8),iVar1);
  *(uint *)(param_1->field_0008 + 8) = *(uint *)(param_1->field_0008 + 8) | 0x10;
  iVar2 = FUN_00757450((AnonShape_00757450_3CCFEA7C *)param_1,iVar5);
  iVar3 = param_1->field_000C;
  if (iVar2 < *(short *)(iVar1 + 8)) {
    if (*(short *)(iVar3 + 0x34) == 0) {
      iVar3 = (**(code **)(iVar3 + 8))(iVar2 + 0x18 + iVar1);
    }
    else {
      iVar3 = (int)*(short *)(iVar3 + 0x34);
    }
    if (iVar3 + 8 + param_2 < iVar6) {
      uVar4 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar2 + 0x10 + iVar1));
      if (uVar4 == 0) {
        return -2;
      }
      iVar3 = param_1->field_000C;
      uVar7 = *(undefined4 *)(*(int *)(iVar3 + 0x44 + *(int *)(iVar3 + 0x1c) * 8) + 0x10 + iVar1);
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      iVar1 = FUN_00753b80((AnonShape_00753B80_E259A731 *)param_1,uVar7,
                           *(int *)(param_1->field_000C + 0x1c));
      iVar3 = param_1->field_0010;
      iVar5 = FUN_00753b80((AnonShape_00753B80_E259A731 *)param_1,param_3,
                           *(int *)(param_1->field_000C + 0x1c));
      if ((iVar6 <= (int)((int)*(short *)(iVar1 + 8) + (int)*(short *)(iVar5 + 8) + uVar4)) &&
         ((int)*(short *)(iVar1 + 8) <= (int)((int)*(short *)(iVar5 + 8) + uVar4))) {
        return 0;
      }
      *(undefined4 *)param_1->field_001C = *(undefined4 *)(iVar1 + 4);
      FUN_007574c0((AnonShape_007574C0_ED6B02E3 *)param_1,iVar5,(uint *)param_1->field_001C,
                   (int)*(short *)(iVar5 + 8));
      if ((int)*(short *)(iVar1 + 8) + (int)*(short *)(iVar5 + 8) < iVar6) {
        Library::MSVCRT::FUN_0072da70
                  ((undefined4 *)(*(short *)(iVar5 + 8) + 0x10 + iVar5),(undefined4 *)(iVar1 + 0x10)
                   ,(int)*(short *)(iVar1 + 8));
        *(short *)(iVar5 + 8) = *(short *)(iVar5 + 8) + *(short *)(iVar1 + 8);
        iVar3 = FUN_00757670((AnonShape_00757670_86D3B9A7 *)param_1,iVar3);
        if (iVar3 < 0) {
          return iVar3;
        }
        *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
        return 1;
      }
      uVar4 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,(undefined4 *)(iVar1 + 0x10));
      if (uVar4 == 0) {
        return -2;
      }
      Library::MSVCRT::FUN_0072da70
                ((undefined4 *)(iVar1 + 0x10),(undefined4 *)(iVar1 + 0x10 + uVar4),
                 (int)*(short *)(iVar1 + 8) - uVar4);
      *(short *)(iVar1 + 8) = *(short *)(iVar1 + 8) - (short)uVar4;
      *(undefined4 *)(iVar1 + 4) = *(undefined4 *)param_1->field_001C;
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
      iVar3 = FUN_00755da0((uint)param_1,(undefined4 *)param_1->field_001C);
      if (iVar3 != 0) {
        return iVar3;
      }
      return 0;
    }
  }
  else {
    if (*(short *)(iVar3 + 0x34) == 0) {
      iVar3 = (**(code **)(iVar3 + 8))
                        (*(int *)(iVar3 + 0x44 + *(int *)(iVar3 + 0x1c) * 8) + 0x18 + iVar1);
    }
    else {
      iVar3 = (int)*(short *)(iVar3 + 0x34);
    }
    if ((iVar3 + 8 + param_2 < iVar6) || (param_2 == 0)) {
      uVar4 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar1 + 0x10 + iVar5));
      if (uVar4 == 0) {
        return -2;
      }
      FUN_007561d0((AnonShape_00753C80_4C8E695D *)param_1,iVar5);
      iVar3 = param_1->field_000C;
      iVar2 = *(int *)(iVar3 + 0x44 + *(int *)(iVar3 + 0x1c) * 8);
      if (iVar2 == -1) {
        uVar7 = *(undefined4 *)(iVar1 + 4);
      }
      else {
        uVar7 = *(undefined4 *)(iVar2 + 0x10 + iVar1);
      }
      *(int *)(iVar3 + 0x1c) = *(int *)(iVar3 + 0x1c) + 1;
      iVar3 = FUN_00753b80((AnonShape_00753B80_E259A731 *)param_1,uVar7,
                           *(int *)(param_1->field_000C + 0x1c));
      iVar1 = FUN_00753c80((AnonShape_00753C80_4C8E695D *)param_1,(int)*(short *)(iVar3 + 8));
      iVar2 = FUN_00753b80((AnonShape_00753B80_E259A731 *)param_1,param_3,
                           *(int *)(param_1->field_000C + 0x1c));
      if ((iVar6 <= (int)((int)*(short *)(iVar2 + 8) + (int)*(short *)(iVar3 + 8) + uVar4)) &&
         ((int)*(short *)(iVar3 + 8) <= (int)((int)*(short *)(iVar2 + 8) + uVar4))) {
        return 0;
      }
      *(undefined4 *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = 0;
      *(undefined4 *)param_1->field_001C = *(undefined4 *)(iVar2 + 4);
      FUN_007574c0((AnonShape_007574C0_ED6B02E3 *)param_1,iVar2,(uint *)param_1->field_001C,0);
      if ((int)*(short *)(iVar2 + 8) + (int)*(short *)(iVar3 + 8) < iVar6) {
        Library::MSVCRT::FUN_0072da70
                  ((undefined4 *)(*(short *)(iVar3 + 8) + 0x10 + iVar3),(undefined4 *)(iVar2 + 0x10)
                   ,(int)*(short *)(iVar2 + 8));
        *(short *)(iVar3 + 8) = *(short *)(iVar3 + 8) + *(short *)(iVar2 + 8);
        iVar3 = FUN_00757670((AnonShape_00757670_86D3B9A7 *)param_1,param_1->field_0010);
        if (iVar3 < 0) {
          return iVar3;
        }
        *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
        *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = iVar5;
        return 1;
      }
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar3 + 0x10 + iVar1);
      uVar4 = FUN_00757530((AnonShape_00757530_EEED7D69 *)param_1,1,
                           (undefined4 *)(iVar3 + 0x10 + iVar1));
      if (uVar4 == 0) {
        return -2;
      }
      local_8 = (undefined2)iVar1;
      *(undefined2 *)(iVar3 + 8) = local_8;
      *(int *)(param_1->field_000C + 0x1c) = *(int *)(param_1->field_000C + 0x1c) + -1;
      *(int *)(param_1->field_000C + 0x44 + *(int *)(param_1->field_000C + 0x1c) * 8) = iVar5;
      iVar3 = FUN_00755da0((uint)param_1,(undefined4 *)param_1->field_001C);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
  }
  return 0;
}


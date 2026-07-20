
int FUN_00755970(int param_1,ushort *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_c;
  int local_8;
  
  iVar2 = param_1;
  iVar6 = 0;
  local_8 = 0;
  local_c = 0;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*(int *)(param_1 + 8) + 0x50);
  do {
    *(int *)(*(int *)(iVar2 + 0xc) + 0x1c) = local_8;
    iVar3 = FUN_00753b80((AnonShape_00753B80_E259A731 *)iVar2,iVar6,local_8);
    param_1 = -1;
    iVar5 = -1;
    iVar6 = 0;
    if (0 < *(short *)(iVar3 + 8)) {
      do {
        iVar7 = iVar6;
        if (*(int *)(*(int *)(iVar2 + 0xc) + 0x30) == 0xff) {
          uVar4 = (**(code **)(*(int *)(iVar2 + 0xc) + 4))(param_2);
        }
        else {
          uVar4 = FUN_007575b0(iVar2,param_2,(ushort *)(iVar3 + 0x18 + iVar7));
        }
        iVar5 = param_1;
        if ((int)uVar4 < 0) break;
        iVar5 = iVar7;
        if (uVar4 == 0) {
          local_c = 1;
          break;
        }
        sVar1 = *(short *)(*(int *)(iVar2 + 0xc) + 0x34);
        if (sVar1 == 0) {
          iVar6 = (**(code **)(*(int *)(iVar2 + 0xc) + 8))(iVar7 + 0x18 + iVar3);
        }
        else {
          iVar6 = (int)sVar1;
        }
        iVar6 = iVar7 + 8 + iVar6;
        *(int *)(*(int *)(iVar2 + 0xc) + 0x44 + *(int *)(*(int *)(iVar2 + 0xc) + 0x1c) * 8) = iVar6;
        param_1 = iVar7;
      } while (iVar6 < *(short *)(iVar3 + 8));
    }
    *(int *)(*(int *)(iVar2 + 0xc) + 0x44 + *(int *)(*(int *)(iVar2 + 0xc) + 0x1c) * 8) = iVar5;
    if ((local_c != 0) && (param_3 != 0)) {
      return local_c;
    }
    if (iVar5 == -1) {
      iVar6 = *(int *)(iVar3 + 4);
    }
    else {
      iVar6 = *(int *)(iVar5 + 0x10 + iVar3);
    }
    *(int *)(*(int *)(iVar2 + 0xc) + 0x44 + local_8 * 8) = iVar5;
    local_8 = local_8 + 1;
    if (iVar6 == -1) {
      return local_c;
    }
  } while( true );
}


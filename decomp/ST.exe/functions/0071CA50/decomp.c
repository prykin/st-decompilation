
undefined4 FUN_0071ca50(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  byte *pbVar5;
  BOOL BVar6;
  DWORD DVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar10;
  undefined4 local_5c;
  undefined4 local_58 [16];
  tagRECT local_18;
  InputClassTy *local_8;
  
  local_5c = DAT_00858df8;
  DAT_00858df8 = &local_5c;
  iVar4 = __setjmp3(local_58,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_5c;
    iVar8 = FUN_006ad4d0(s_E__Ourlib_Sinput_cpp_007f092c,0x2f1,0,iVar4,
                         (byte *)s_InputClassTy__GetMessage_error__M_007f09d8);
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      uVar9 = (*pcVar3)();
      return uVar9;
    }
    FUN_006a5e40(iVar4,0,0x7f092c,0x2f2);
    return 0xffff;
  }
  switch(*(undefined4 *)(param_1 + 0x10)) {
  case 0:
    if (DAT_00856d74 != 0) {
      FUN_0071b9c0();
      DAT_00858df8 = (undefined4 *)local_5c;
      return 0;
    }
    break;
  default:
    FUN_006e5fd0();
    break;
  case 2:
    FUN_0071b220();
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 3:
    InputClassTy::Done(local_8);
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 4:
    iVar4 = **(int **)(local_8 + 0x1c);
    if ((*(byte *)(param_1 + 0x14) & 3) == 0) {
      (**(code **)(iVar4 + 0x20))();
      *(undefined4 *)(local_8 + 0x60) = 0;
      (**(code **)(**(int **)(local_8 + 0x20) + 0x20))(*(int **)(local_8 + 0x20));
      *(undefined4 *)(local_8 + 100) = 0;
      DAT_00858df8 = (undefined4 *)local_5c;
      return 0;
    }
    iVar4 = (**(code **)(iVar4 + 0x1c))(*(int **)(local_8 + 0x1c));
    *(uint *)(local_8 + 0x60) = (uint)(-1 < iVar4);
    iVar4 = (**(code **)(**(int **)(local_8 + 0x20) + 0x1c))(*(int **)(local_8 + 0x20));
    *(uint *)(local_8 + 100) = (uint)(-1 < iVar4);
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x10:
    FUN_0071c1d0(*(uint **)(param_1 + 0x14));
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x11:
    FUN_0071c530(*(byte **)(param_1 + 0x14));
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x12:
    uVar9 = FUN_0071c7c0(local_8,*(int **)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar9;
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x13:
    FUN_0071c8c0(*(int *)(param_1 + 0x14),*(uint *)(param_1 + 0x18));
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x14:
    FUN_0071c9f0(local_8,*(int *)(param_1 + 0x14));
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x15:
    *(undefined2 *)(param_1 + 0x18) = *(undefined2 *)(local_8 + 0x2c);
    *(undefined2 *)(param_1 + 0x1a) = *(undefined2 *)(local_8 + 0x30);
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x16:
    *(uint *)(local_8 + 0x2c) = (uint)*(ushort *)(param_1 + 0x18);
    *(uint *)(local_8 + 0x30) = (uint)*(ushort *)(param_1 + 0x1a);
    *(undefined4 *)(local_8 + 0x54) = 1;
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x17:
    puVar1 = *(undefined4 **)(param_1 + 0x14);
    *(undefined4 *)(local_8 + 0x34) = *puVar1;
    *(undefined4 *)(local_8 + 0x38) = puVar1[1];
    *(undefined4 *)(local_8 + 0x3c) = puVar1[2];
    *(undefined4 *)(local_8 + 0x40) = puVar1[3];
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x18:
    FUN_0071c830((int)local_8);
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x19:
    FUN_0071c870((int)local_8);
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x1a:
    pbVar5 = *(byte **)(local_8 + 0x28);
    uVar9 = *(undefined4 *)(pbVar5 + 4);
    do {
      pbVar5[4] = 0;
      pbVar5[5] = 0;
      pbVar5[6] = 0;
      pbVar5[7] = 0;
      do {
        iVar4 = *(int *)(local_8 + 0x28);
        uVar2 = *(uint *)(iVar4 + 4);
        if (uVar2 < *(uint *)(iVar4 + 0xc)) {
          pbVar5 = (byte *)(*(int *)(iVar4 + 8) * uVar2 + *(int *)(iVar4 + 0x1c));
          *(uint *)(iVar4 + 4) = uVar2 + 1;
        }
        else {
          pbVar5 = (byte *)0x0;
        }
        if (pbVar5 == (byte *)0x0) {
          *(undefined4 *)(*(int *)(local_8 + 0x28) + 4) = uVar9;
          DAT_00858df8 = (undefined4 *)local_5c;
          return 0;
        }
      } while ((*pbVar5 & 1) != 0);
    } while( true );
  case 0x1b:
    uVar9 = *(undefined4 *)(*(int *)(local_8 + 0x28) + 4);
    *(undefined4 *)(*(int *)(local_8 + 0x28) + 4) = 0;
    while( true ) {
      iVar4 = *(int *)(local_8 + 0x28);
      uVar2 = *(uint *)(iVar4 + 4);
      if (uVar2 < *(uint *)(iVar4 + 0xc)) {
        iVar8 = *(int *)(iVar4 + 8) * uVar2 + *(int *)(iVar4 + 0x1c);
        *(uint *)(iVar4 + 4) = uVar2 + 1;
      }
      else {
        iVar8 = 0;
      }
      if (iVar8 == 0) break;
      *(undefined4 *)(iVar8 + 4) = 1;
    }
    *(undefined4 *)(*(int *)(local_8 + 0x28) + 4) = uVar9;
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  case 0x65:
    *(undefined4 *)(param_1 + 0x14) = 0;
    iVar4 = *(int *)(local_8 + 0x24);
    if (iVar4 != 0) {
      uVar2 = *(uint *)(iVar4 + 0xc);
      if (uVar2 - 1 < uVar2) {
        *(undefined4 *)(param_1 + 0x14) =
             *(undefined4 *)((uVar2 - 1) * *(int *)(iVar4 + 8) + *(int *)(iVar4 + 0x1c) + 8);
        DAT_00858df8 = (undefined4 *)local_5c;
        return 0;
      }
      *(undefined4 *)(param_1 + 0x14) = uRam00000008;
      DAT_00858df8 = (undefined4 *)local_5c;
      return 0;
    }
    break;
  case 0x66:
    BVar6 = GetClientRect(DAT_00856d78,&local_18);
    if (BVar6 == 0) {
      uVar9 = 0x2ca;
      pcVar10 = s_E__Ourlib_Sinput_cpp_007f092c;
      iVar4 = DAT_007ed77c;
      DVar7 = GetLastError();
      FUN_006a5e40(DVar7,iVar4,(int)pcVar10,uVar9);
    }
    *(LONG *)(local_8 + 0x3c) = local_18.right - local_18.left;
    *(LONG *)(local_8 + 0x34) = local_18.left;
    *(LONG *)(local_8 + 0x38) = local_18.top;
    *(int *)(local_8 + 0x2c) = (local_18.right - local_18.left) / 2 + local_18.left;
    *(LONG *)(local_8 + 0x40) = local_18.bottom - local_18.top;
    *(undefined4 *)(local_8 + 0x54) = 1;
    *(int *)(local_8 + 0x30) = (local_18.bottom - local_18.top) / 2 + local_18.top;
    DAT_00858df8 = (undefined4 *)local_5c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_5c;
  return 0;
}



int FUN_006e3bf0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  undefined4 local_54;
  undefined4 local_50 [17];
  uint local_c;
  int local_8;
  
  local_8 = 0;
  local_54 = DAT_00858df8;
  DAT_00858df8 = &local_54;
  iVar4 = __setjmp3(local_50,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    DAT_00858df8 = (undefined4 *)local_54;
    iVar6 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0xdf,0,iVar4,&DAT_007a4ccc);
    if (iVar6 == 0) {
      FUN_006a5e40(iVar4,0,0x7ee78c,0xe0);
      return iVar4;
    }
    pcVar3 = (code *)swi(3);
    iVar4 = (*pcVar3)();
    return iVar4;
  }
  local_c = *(uint *)(param_1 + 0xc);
  uVar7 = 0;
  if (0 < (int)local_c) {
    do {
      if ((*(uint *)(param_2 + 0xc) & 0x80000000) == 0) {
        if (uVar7 < local_c) {
          piVar5 = (int *)(*(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c));
        }
        else {
          piVar5 = (int *)0x0;
        }
        if (*piVar5 == 1) goto LAB_006e3c65;
      }
      else {
LAB_006e3c65:
        if (uVar7 < local_c) {
          iVar4 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar4 = 0;
        }
        iVar4 = (**(code **)(**(int **)(iVar4 + 4) + 0x20))(param_2);
        local_8 = iVar4;
        if (iVar4 != 0) {
          FUN_006a5e40(iVar4,DAT_007ed77c,0x7ee78c,0xca);
        }
        uVar1 = *(uint *)(param_1 + 0xc);
        if ((uVar1 < local_c) && (uVar7 = uVar7 + (uVar1 - local_c), (int)uVar7 < 0)) {
          DAT_00858df8 = (undefined4 *)local_54;
          return iVar4;
        }
        FUN_006e5c70(param_2);
        uVar2 = *(uint *)(param_1 + 0xc);
        if ((uVar2 < uVar1) && (uVar7 = uVar7 + (uVar2 - uVar1), (int)uVar7 < 0)) {
          DAT_00858df8 = (undefined4 *)local_54;
          return local_8;
        }
        if (uVar7 < uVar2) {
          iVar4 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar4 = 0;
        }
        if (*(int *)(iVar4 + 8) != 0) {
          if (uVar7 < uVar2) {
            iVar4 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
          }
          else {
            iVar4 = 0;
          }
          local_8 = FUN_006e3bf0(*(int *)(iVar4 + 8),param_2);
          if (local_8 != 0) {
            FUN_006a5e40(local_8,DAT_007ed77c,0x7ee78c,0xd9);
          }
        }
      }
      local_c = *(uint *)(param_1 + 0xc);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)local_c);
  }
  DAT_00858df8 = (undefined4 *)local_54;
  return local_8;
}


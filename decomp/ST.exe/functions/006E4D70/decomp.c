
int FUN_006e4d70(int param_1)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  uint uVar7;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [17];
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  if (iVar3 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar5 = FUN_006ad4d0(s_E__Ourlib_Sapp_cpp_007ee78c,0x297,0,iVar3,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar3,0,0x7ee78c,0x298);
      return iVar3;
    }
    pcVar2 = (code *)swi(3);
    iVar3 = (*pcVar2)();
    return iVar3;
  }
  uVar6 = *(uint *)(param_1 + 0xc);
  uVar7 = 0;
  if (0 < (int)uVar6) {
    do {
      if (uVar7 < uVar6) {
        piVar4 = (int *)(*(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c));
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (*piVar4 == 1) {
        if (uVar7 < uVar6) {
          iVar3 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        iVar3 = (**(code **)(**(int **)(iVar3 + 4) + 0x1c))();
        if (iVar3 != 0) {
          FUN_006a5e40(iVar3,DAT_007ed77c,0x7ee78c,0x28d);
        }
        uVar1 = *(uint *)(param_1 + 0xc);
        if (((int)uVar1 < (int)uVar6) && (uVar7 = uVar7 + (uVar1 - uVar6), (int)uVar7 < 0)) {
          DAT_00858df8 = (undefined4 *)local_4c;
          return 0;
        }
        if (uVar7 < uVar1) {
          iVar3 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
        }
        else {
          iVar3 = 0;
        }
        if (*(int *)(iVar3 + 8) != 0) {
          if (uVar7 < uVar1) {
            iVar3 = *(int *)(param_1 + 8) * uVar7 + *(int *)(param_1 + 0x1c);
          }
          else {
            iVar3 = 0;
          }
          iVar3 = FUN_006e4d70(*(int *)(iVar3 + 8));
          if (iVar3 != 0) {
            FUN_006a5e40(iVar3,DAT_007ed77c,0x7ee78c,0x293);
          }
        }
      }
      uVar6 = *(uint *)(param_1 + 0xc);
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar6);
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  return 0;
}


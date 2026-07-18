
void __fastcall FUN_0054ec20(int param_1)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 unaff_ESI;
  undefined4 *puVar9;
  void *unaff_EDI;
  undefined4 *puVar10;
  undefined4 local_58;
  undefined4 local_54 [16];
  uint local_14;
  int local_10;
  int *local_c;
  uint local_8;
  
  local_c = *(int **)(param_1 + 0x39);
  local_8 = 4;
  local_58 = DAT_00858df8;
  DAT_00858df8 = &local_58;
  local_10 = param_1;
  iVar5 = __setjmp3(local_54,0,unaff_EDI,unaff_ESI);
  iVar6 = local_10;
  if (iVar5 == 0) {
    **(undefined4 **)(local_10 + 0x4f) = 0;
    if (local_c != (int *)0x0) {
      do {
        piVar1 = (int *)((int)local_c + 0x13);
        piVar2 = (int *)((int)local_c + 0xf);
        local_c = (int *)*local_c;
        local_8 = local_8 + 0x1b + *piVar1 + *piVar2;
      } while (local_c != (int *)0x0);
      local_c = (int *)0x0;
    }
    uVar4 = local_8;
    if (*(uint *)(local_10 + 0x53) < local_8) {
      iVar5 = FUN_006acf50(*(undefined4 **)(local_10 + 0x4f),local_8);
      *(int *)(iVar6 + 0x4f) = iVar5;
      *(uint *)(iVar6 + 0x53) = uVar4;
    }
    local_c = *(int **)(iVar6 + 0x39);
    puVar8 = (undefined4 *)(*(int *)(iVar6 + 0x4f) + 4);
    if (local_c != (undefined4 *)0x0) {
      do {
        local_8 = *(int *)((int)local_c + 0x13) + 0x1b + *(int *)((int)local_c + 0xf);
        puVar9 = local_c;
        puVar10 = puVar8;
        for (uVar7 = local_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar7 = local_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puVar8 = (undefined4 *)((int)puVar8 + local_8);
        **(int **)(local_10 + 0x4f) = **(int **)(local_10 + 0x4f) + 1;
        local_c = (int *)*local_c;
      } while (local_c != (undefined4 *)0x0);
      local_c = (undefined4 *)0x0;
      iVar6 = local_10;
    }
    local_14 = uVar4;
    if (*(int *)(iVar6 + 0x39) != 0) {
      FUN_006b9890((int *)(iVar6 + 0x39));
    }
    if ((**(int **)(iVar6 + 0x4f) != 0) && (DAT_0080c512 == 0)) {
      iVar6 = FUN_00715360(DAT_00811764,1,'8',(char *)*(int **)(iVar6 + 0x4f),local_14,1,0xffffffff)
      ;
      if (iVar6 != 0) {
        thunk_FUN_00550380(4);
      }
    }
    DAT_00858df8 = (undefined4 *)local_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)local_58;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x4e6,0,iVar5,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar5,0,0x7c8430,0x4e8);
  return;
}


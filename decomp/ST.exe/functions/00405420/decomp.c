
void __fastcall thunk_FUN_0054ec20(int param_1)

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
  undefined4 uStack_58;
  undefined4 auStack_54 [16];
  uint uStack_14;
  int iStack_10;
  int *piStack_c;
  uint uStack_8;
  
  piStack_c = *(int **)(param_1 + 0x39);
  uStack_8 = 4;
  uStack_58 = DAT_00858df8;
  DAT_00858df8 = &uStack_58;
  iStack_10 = param_1;
  iVar5 = __setjmp3(auStack_54,0,unaff_EDI,unaff_ESI);
  iVar6 = iStack_10;
  if (iVar5 == 0) {
    **(undefined4 **)(iStack_10 + 0x4f) = 0;
    if (piStack_c != (int *)0x0) {
      do {
        piVar1 = (int *)((int)piStack_c + 0x13);
        piVar2 = (int *)((int)piStack_c + 0xf);
        piStack_c = (int *)*piStack_c;
        uStack_8 = uStack_8 + 0x1b + *piVar1 + *piVar2;
      } while (piStack_c != (int *)0x0);
      piStack_c = (int *)0x0;
    }
    uVar4 = uStack_8;
    if (*(uint *)(iStack_10 + 0x53) < uStack_8) {
      iVar5 = FUN_006acf50(*(undefined4 **)(iStack_10 + 0x4f),uStack_8);
      *(int *)(iVar6 + 0x4f) = iVar5;
      *(uint *)(iVar6 + 0x53) = uVar4;
    }
    piStack_c = *(int **)(iVar6 + 0x39);
    puVar8 = (undefined4 *)(*(int *)(iVar6 + 0x4f) + 4);
    if (piStack_c != (undefined4 *)0x0) {
      do {
        uStack_8 = *(int *)((int)piStack_c + 0x13) + 0x1b + *(int *)((int)piStack_c + 0xf);
        puVar9 = piStack_c;
        puVar10 = puVar8;
        for (uVar7 = uStack_8 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
          *puVar10 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar10 = puVar10 + 1;
        }
        for (uVar7 = uStack_8 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
          puVar9 = (undefined4 *)((int)puVar9 + 1);
          puVar10 = (undefined4 *)((int)puVar10 + 1);
        }
        puVar8 = (undefined4 *)((int)puVar8 + uStack_8);
        **(int **)(iStack_10 + 0x4f) = **(int **)(iStack_10 + 0x4f) + 1;
        piStack_c = (int *)*piStack_c;
      } while (piStack_c != (undefined4 *)0x0);
      piStack_c = (undefined4 *)0x0;
      iVar6 = iStack_10;
    }
    uStack_14 = uVar4;
    if (*(int *)(iVar6 + 0x39) != 0) {
      FUN_006b9890((int *)(iVar6 + 0x39));
    }
    if ((**(int **)(iVar6 + 0x4f) != 0) && (DAT_0080c512 == 0)) {
      iVar6 = FUN_00715360(DAT_00811764,1,'8',(char *)*(int **)(iVar6 + 0x4f),uStack_14,1,0xffffffff
                          );
      if (iVar6 != 0) {
        thunk_FUN_00550380(4);
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_58;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_58;
  iVar6 = FUN_006ad4d0(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x4e6,0,iVar5,&DAT_007a4ccc);
  if (iVar6 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  FUN_006a5e40(iVar5,0,0x7c8430,0x4e8);
  return;
}


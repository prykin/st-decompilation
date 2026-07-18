
void thunk_FUN_0068f660(int param_1)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  undefined2 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar8;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined8 uVar9;
  undefined4 uStack_4c;
  undefined4 auStack_48 [16];
  void *pvStack_8;
  
  uStack_4c = DAT_00858df8;
  DAT_00858df8 = &uStack_4c;
  iVar4 = __setjmp3(auStack_48,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0xc), uVar8 = extraout_EDX, uVar1 != 0)) {
      while (uVar1 = uVar1 - 1, -1 < (int)uVar1) {
        if (uVar1 < *(uint *)(param_1 + 0xc)) {
          puVar5 = (undefined2 *)(*(int *)(param_1 + 8) * uVar1 + *(int *)(param_1 + 0x1c));
        }
        else {
          puVar5 = (undefined2 *)0x0;
        }
        if (DAT_007fa174 == 0) {
          piVar6 = (int *)0x0;
        }
        else {
          piVar6 = (int *)thunk_FUN_0042b620(CONCAT31((int3)((uint)uVar8 >> 8),
                                                      *(undefined1 *)((int)pvStack_8 + 0x24)),
                                             CONCAT22((short)((uint)puVar5 >> 0x10),*puVar5),1);
          uVar8 = extraout_EDX_00;
        }
        if (piVar6 != (int *)0x0) {
          uVar9 = (**(code **)(*piVar6 + 0x2c))();
          uVar8 = (undefined4)((ulonglong)uVar9 >> 0x20);
          if (((int)uVar9 < 1) || (0x28 < (int)uVar9)) {
            bVar3 = false;
          }
          else {
            bVar3 = true;
          }
          if ((bVar3) &&
             (iVar4 = thunk_FUN_0068e290(pvStack_8,(short)piVar6[0x207]), uVar8 = extraout_EDX_01,
             iVar4 != 0)) {
            thunk_FUN_0065d760(piVar6,0);
            FUN_006b0c70(param_1,uVar1);
            uVar8 = extraout_EDX_02;
          }
        }
      }
    }
    DAT_00858df8 = (undefined4 *)uStack_4c;
    return;
  }
  DAT_00858df8 = (undefined4 *)uStack_4c;
  iVar7 = FUN_006ad4d0(s_E____titans_ai_ai_tact_cpp_007d56e0,0x292,0,iVar4,&DAT_007a4ccc);
  if (iVar7 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  FUN_006a5e40(iVar4,0,0x7d56e0,0x293);
  return;
}


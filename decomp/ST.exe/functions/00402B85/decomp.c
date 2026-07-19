
undefined4 __thiscall STGroupBoatC::SetMine(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  STGroupBoatC *pSVar8;
  uint uVar9;
  undefined4 *puVar10;
  InternalExceptionFrame IStack_6c;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined2 uStack_22;
  undefined2 uStack_20;
  STGroupBoatC *pSStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  int iStack_c;
  uint uStack_8;
  
  iStack_c = *(int *)(*(int *)(this + 0x29) + 0xc);
  uStack_18 = 2;
  iStack_14 = 0;
  IStack_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_6c;
  pSStack_1c = this;
  iVar3 = __setjmp3(IStack_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_1c;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      pSVar8 = pSStack_1c + 0x89;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pSVar8 = 0;
        pSVar8 = pSVar8 + 4;
      }
      uVar9 = 0;
      *(undefined4 *)(pSStack_1c + 0x65) = 0;
      *(undefined4 *)(pSStack_1c + 0x2b3) = *(undefined4 *)(pSStack_1c + 0x182);
      *(undefined4 *)(pSStack_1c + 0x2b7) = *(undefined4 *)(pSStack_1c + 0x186);
      *(undefined2 *)(pSStack_1c + 699) = *(undefined2 *)(pSStack_1c + 0x18a);
      uStack_24 = *(undefined2 *)(pSStack_1c + 0x2b3);
      uStack_22 = *(undefined2 *)(pSStack_1c + 0x2b5);
      uStack_28 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      uStack_10 = uStack_28;
      if (0 < iStack_c) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar9,&uStack_8);
          if ((short)uStack_8 != -1) {
            pvVar4 = (void *)thunk_FUN_0042b620(CONCAT31((int3)((uint)extraout_EDX >> 8),
                                                         pSVar2[0x24]),uStack_8,1);
            if (pvVar4 == (void *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb1f);
            }
            if (*(int *)(pSVar2 + 0x2b9) == -1) {
              if (*(int *)((int)pvVar4 + 0x7b6) == 0) goto LAB_0049eb44;
LAB_0049eb2a:
              if (*(int *)((int)pvVar4 + 0x7be) < 1) goto LAB_0049eb44;
              uStack_20 = *(undefined2 *)((int)pvVar4 + 0x4b);
              puVar10 = &uStack_28;
              iVar3 = 7;
            }
            else {
              if (*(int *)((int)pvVar4 + 0x7b6) == *(int *)(pSVar2 + 0x2b9)) goto LAB_0049eb2a;
LAB_0049eb44:
              puVar10 = &uStack_10;
              iVar3 = 3;
            }
            thunk_FUN_0045ef00(pvVar4,iVar3,puVar10);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < iStack_c);
      }
      RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb3c)
      ;
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 5) {
      uVar9 = 0;
      if (0 < iStack_c) {
        do {
          FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar9,&uStack_8);
          if ((short)uStack_8 != -1) {
            pvVar4 = (void *)thunk_FUN_0042b620(CONCAT31((int3)(uStack_8 >> 8),pSVar2[0x24]),
                                                uStack_8,1);
            if (pvVar4 == (void *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb43);
            }
            iVar3 = thunk_FUN_0045ff10((int)pvVar4);
            if ((iVar3 == 7) || (uVar5 = thunk_FUN_0045f400(pvVar4,7), uVar5 == 1)) {
              iStack_14 = iStack_14 + 1;
              break;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < iStack_c);
      }
      if (iStack_14 == 0) {
        uStack_18 = 0;
      }
    }
    g_currentExceptionFrame = IStack_6c.previous;
  }
  else {
    g_currentExceptionFrame = IStack_6c.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb4c,0,iVar3,&DAT_007a4ccc
                                 ,s_STGroupBoatC__SetMine_007ac0b4);
      if (iVar6 == 0) {
        RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb4d);
        return 0xffffffff;
      }
      pcVar1 = (code *)swi(3);
      uVar7 = (*pcVar1)();
      return uVar7;
    }
  }
  return uStack_18;
}



uint * __thiscall STGroupBoatC::Bring(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_ESI;
  uint *puVar9;
  void *unaff_EDI;
  STGroupBoatC *pSVar10;
  uint uVar11;
  InternalExceptionFrame IStack_70;
  undefined4 uStack_2c;
  undefined2 uStack_28;
  undefined2 uStack_26;
  undefined2 uStack_24;
  STGroupBoatC *pSStack_20;
  uint *puStack_1c;
  undefined4 uStack_18;
  uint *puStack_14;
  uint uStack_10;
  uint *puStack_c;
  uint uStack_8;
  
  uStack_10 = *(uint *)(*(int *)(this + 0x29) + 0xc);
  puStack_14 = (uint *)0x0;
  puStack_c = (uint *)0x0;
  puStack_1c = (uint *)0x2;
  IStack_70.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &IStack_70;
  pSStack_20 = this;
  iVar3 = Library::MSVCRT::__setjmp3(IStack_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = pSStack_20;
  if (iVar3 != 0) {
    g_currentExceptionFrame = IStack_70.previous;
    if (iVar3 == -0x5001fff7) {
      return puStack_1c;
    }
    iVar8 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcb0,0,iVar3,&DAT_007a4ccc,
                               s_STGroupBoatC__Bring_007ac140);
    if (iVar8 != 0) {
      pcVar1 = (code *)swi(3);
      puVar5 = (uint *)(*pcVar1)();
      return puVar5;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xcb1);
    return (uint *)0xffffffff;
  }
  if ((param_1 != 0) && (param_1 != 1)) goto LAB_0049fe51;
  pSVar10 = pSStack_20 + 0x89;
  for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(undefined4 *)pSVar10 = 0;
    pSVar10 = pSVar10 + 4;
  }
  uVar11 = 0;
  *(undefined4 *)(pSStack_20 + 0x65) = 0;
  *(undefined4 *)(pSStack_20 + 0x2e8) = *(undefined4 *)(pSStack_20 + 0x1b3);
  *(undefined2 *)(pSStack_20 + 0x2ec) = *(undefined2 *)(pSStack_20 + 0x1b7);
  uStack_28 = *(undefined2 *)(pSStack_20 + 0x2e8);
  uStack_26 = *(undefined2 *)(pSStack_20 + 0x2ea);
  uStack_2c = *(undefined4 *)(DAT_00802a38 + 0xe4);
  uStack_24 = *(undefined2 *)(pSStack_20 + 0x2ec);
  uStack_18 = uStack_2c;
  if (0 < (int)uStack_10) {
    do {
      FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar11,&uStack_8);
      if ((short)uStack_8 != -1) {
        pSVar4 = (STBoatC *)
                 STAllPlayersC::GetObjPtr
                           (DAT_007fa174,CONCAT31((int3)(uStack_8 >> 8),pSVar2[0x24]),uStack_8,1);
        if (pSVar4 == (STBoatC *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc79);
        }
        iVar3 = (**(code **)(*(int *)pSVar4 + 0x2c))();
        if (((iVar3 == 7) || (iVar3 = (**(code **)(*(int *)pSVar4 + 0x2c))(), iVar3 == 0x13)) ||
           (iVar3 = (**(code **)(*(int *)pSVar4 + 0x2c))(), iVar3 == 0x1b)) {
          STBoatC::CmdToObj(pSVar4,0x17,&uStack_2c);
          puVar5 = puStack_14;
          if (puStack_14 == (uint *)0x0) {
            puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            puStack_14 = puVar5;
          }
        }
        else {
          iVar3 = thunk_FUN_00490d90((int)pSVar4);
          if (iVar3 == 0) {
            STBoatC::CmdToObj(pSVar4,3,&uStack_18);
            goto LAB_0049fd94;
          }
          puVar5 = puStack_c;
          if (puStack_c == (uint *)0x0) {
            puVar5 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
            puStack_c = puVar5;
          }
        }
        Library::DKW::TBL::FUN_006ae1c0(puVar5,&uStack_8);
      }
LAB_0049fd94:
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uStack_10);
  }
  puVar9 = puStack_c;
  puVar5 = puStack_14;
  if ((puStack_14 == (uint *)0x0) || (puStack_c == (uint *)0x0)) {
    if (puStack_14 == (uint *)0x0) {
      if (puStack_c != (uint *)0x0) {
        uVar11 = puStack_c[3];
        uVar7 = 0;
        uStack_10 = uVar11;
        if (0 < (int)uVar11) {
          do {
            uVar6 = FUN_006acc70((int)puStack_c,uVar7,&uStack_8);
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31((int3)(uVar6 >> 8),pSVar2[0x24]),uStack_8,1);
            STBoatC::CmdToObj(pSVar4,3,&uStack_18);
            uVar7 = uVar7 + 1;
          } while ((int)uVar7 < (int)uVar11);
        }
        puStack_1c = (uint *)0x0;
      }
      puVar9 = puStack_c;
      puVar5 = puStack_14;
      if (puStack_14 == (uint *)0x0) {
        if (puStack_c == (uint *)0x0) {
          puStack_1c = puStack_c;
        }
        goto LAB_0049fe22;
      }
    }
LAB_0049fe26:
    FUN_006ae110((byte *)puVar5);
  }
  else {
    STAllPlayersC::RegisterPGPair
              (DAT_007fa174,CONCAT31((int3)(uStack_10 >> 8),pSVar2[0x24]),puStack_14,puStack_c);
LAB_0049fe22:
    if (puVar5 != (uint *)0x0) goto LAB_0049fe26;
  }
  if (puVar9 != (uint *)0x0) {
    FUN_006ae110((byte *)puVar9);
  }
  RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xca0);
LAB_0049fe51:
  if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 7) {
    uVar11 = 0;
    if (0 < (int)uStack_10) {
      do {
        FUN_006acc70(*(int *)(pSVar2 + 0x29),uVar11,&uStack_8);
        if ((short)uStack_8 != -1) {
          pSVar4 = (STBoatC *)
                   STAllPlayersC::GetObjPtr
                             (DAT_007fa174,CONCAT31((int3)(uStack_8 >> 8),pSVar2[0x24]),uStack_8,1);
          if (pSVar4 == (STBoatC *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xca7);
          }
          iVar3 = thunk_FUN_0045ff10((int)pSVar4);
          if ((iVar3 == 0x17) || (uVar7 = STBoatC::CheckPBoxCmd(pSVar4,0x17), uVar7 == 1)) break;
        }
        uVar11 = uVar11 + 1;
      } while ((int)uVar11 < (int)uStack_10);
    }
    if (uVar11 == uStack_10) {
      puStack_1c = (uint *)0x0;
    }
  }
  g_currentExceptionFrame = IStack_70.previous;
  return puStack_1c;
}


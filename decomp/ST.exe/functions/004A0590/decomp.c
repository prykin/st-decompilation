
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Scout
   
   [STPrototypeApplier] Propagated return.
   Evidence: 004A0590 returns return of STGroupBoatC::Way3DGrpGetDistrPoint @ 004A0681 */

uint * __thiscall STGroupBoatC::Scout(STGroupBoatC *this,int param_1)

{
  undefined1 *puVar1;
  short *psVar2;
  code *pcVar3;
  STGroupBoatC *pSVar4;
  int iVar5;
  uint *puVar6;
  STBoatC *pSVar7;
  uint uVar8;
  int iVar9;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar10;
  uint uVar11;
  InternalExceptionFrame local_80;
  undefined4 local_3c;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined2 local_28;
  undefined2 local_24;
  undefined2 local_22;
  undefined2 local_20;
  uint *local_1c;
  STGroupBoatC *local_18;
  uint *local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *(uint *)(this->field_0029 + 0xc);
  local_14 = (uint *)0x2;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_18;
  if (iVar5 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar1 = &local_18->field_0x300;
      puVar10 = (undefined4 *)&local_18->field_0x89;
      for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar10 = 0;
        puVar10 = puVar10 + 1;
      }
      local_18->field_0065 = 0;
      psVar2 = &local_18->field_0302;
      local_18->field_02FA = local_18->field_01C1;
      *(undefined2 *)&local_18->field_0x2fc = local_18->field_01C3;
      *(undefined2 *)&local_18->field_0x2f8 = *(undefined2 *)&local_18->field_0x1bf;
      thunk_FUN_0049a500(local_18,&local_18->field_02FE,(undefined2 *)puVar1,psVar2);
      local_10 = Way3DGrpGetDistrPoint
                           (pSVar4,pSVar4->field_0029,(int)pSVar4->field_02FE,(int)*(short *)puVar1,
                            (int)*psVar2,(int)*(short *)&pSVar4->field_0x2f8,(int)pSVar4->field_02FA
                            ,(int)*(short *)&pSVar4->field_0x2fc);
      if (local_10 == (uint *)0x0) {
        return (uint *)0x0;
      }
      puVar6 = Way3DGrpGetDistrPoint
                         (pSVar4,pSVar4->field_0029,(int)*(short *)&pSVar4->field_0x2f8,
                          (int)pSVar4->field_02FA,(int)*(short *)&pSVar4->field_0x2fc,
                          (int)pSVar4->field_02FE,(int)*(short *)puVar1,(int)*psVar2);
      local_1c = puVar6;
      if (puVar6 == (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
        return (uint *)0x0;
      }
      uVar11 = 0;
      local_3c = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (0 < (int)local_8) {
        do {
          FUN_006acc70((int)local_10,uVar11,(undefined4 *)&local_24);
          FUN_006acc70((int)puVar6,uVar11,(undefined4 *)&local_2c);
          FUN_006acc70(pSVar4->field_0029,uVar11,&local_c);
          if ((short)local_c != -1) {
            pSVar7 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar4->field_0024),local_c
                                ,CASE_1);
            if (pSVar7 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd2a);
            }
            local_38 = local_24;
            local_36 = local_22;
            local_32 = local_2c;
            local_34 = local_20;
            local_30 = local_2a;
            local_2e = local_28;
            STBoatC::CmdToObj(pSVar7,CASE_8,&local_3c);
            puVar6 = local_1c;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_8);
      }
      FUN_006ae110((byte *)local_10);
      FUN_006ae110((byte *)puVar6);
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 3) {
      uVar11 = 0;
      if (0 < (int)local_8) {
        do {
          FUN_006acc70(pSVar4->field_0029,uVar11,&local_c);
          if ((short)local_c != -1) {
            pSVar7 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)(local_c >> 8),pSVar4->field_0024),local_c,CASE_1);
            if (pSVar7 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd3d);
            }
            iVar5 = thunk_FUN_0045ff10((int)pSVar7);
            if (iVar5 == 8) break;
            uVar8 = STBoatC::CheckPBoxCmd(pSVar7,CASE_8);
            if (uVar8 == 1) break;
          }
          uVar11 = uVar11 + 1;
        } while ((int)uVar11 < (int)local_8);
      }
      if (uVar11 == local_8) {
        local_14 = (uint *)0x0;
      }
    }
    g_currentExceptionFrame = local_80.previous;
  }
  else {
    g_currentExceptionFrame = local_80.previous;
    if (iVar5 != -0x5001fff7) {
      iVar9 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd46,0,iVar5,&DAT_007a4ccc
                                 ,s_STGroupBoatC__Scout_007ac178);
      if (iVar9 != 0) {
        pcVar3 = (code *)swi(3);
        puVar6 = (uint *)(*pcVar3)();
        return puVar6;
      }
      RaiseInternalException(iVar5,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd47);
      return (uint *)0xffffffff;
    }
  }
  return local_14;
}


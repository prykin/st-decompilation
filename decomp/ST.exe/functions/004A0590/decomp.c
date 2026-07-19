
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Scout */

undefined4 __thiscall STGroupBoatC::Scout(STGroupBoatC *this,int param_1)

{
  undefined1 *puVar1;
  undefined2 *puVar2;
  code *pcVar3;
  STGroupBoatC *pSVar4;
  int iVar5;
  uint *puVar6;
  STBoatC *pSVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar11;
  uint uVar12;
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
  undefined4 local_14;
  uint *local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *(uint *)(this->field_0029 + 0xc);
  local_14 = 2;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_18;
  if (iVar5 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar1 = &local_18->field_0x300;
      puVar11 = (undefined4 *)&local_18->field_0x89;
      for (iVar5 = 0x15; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      local_18->field_0065 = 0;
      puVar2 = &local_18->field_0302;
      local_18->field_02FA = local_18->field_01C1;
      *(undefined2 *)&local_18->field_0x2fc = local_18->field_01C3;
      *(undefined2 *)&local_18->field_0x2f8 = *(undefined2 *)&local_18->field_0x1bf;
      thunk_FUN_0049a500(local_18,&local_18->field_02FE,(undefined2 *)puVar1,puVar2);
      local_10 = Way3DGrpGetDistrPoint
                           (pSVar4,pSVar4->field_0029,(int)(short)pSVar4->field_02FE,
                            (int)*(short *)puVar1,(int)(short)*puVar2,
                            (int)*(short *)&pSVar4->field_0x2f8,(int)(short)pSVar4->field_02FA,
                            (int)*(short *)&pSVar4->field_0x2fc);
      if (local_10 == (uint *)0x0) {
        return 0;
      }
      puVar6 = Way3DGrpGetDistrPoint
                         (pSVar4,pSVar4->field_0029,(int)*(short *)&pSVar4->field_0x2f8,
                          (int)(short)pSVar4->field_02FA,(int)*(short *)&pSVar4->field_0x2fc,
                          (int)(short)pSVar4->field_02FE,(int)*(short *)puVar1,(int)(short)*puVar2);
      local_1c = puVar6;
      if (puVar6 == (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
        return 0;
      }
      uVar12 = 0;
      local_3c = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (0 < (int)local_8) {
        do {
          FUN_006acc70((int)local_10,uVar12,(undefined4 *)&local_24);
          FUN_006acc70((int)puVar6,uVar12,(undefined4 *)&local_2c);
          FUN_006acc70(pSVar4->field_0029,uVar12,&local_c);
          if ((short)local_c != -1) {
            pSVar7 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,
                                CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar4->field_0024),local_c
                                ,CASE_1);
            if (pSVar7 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd2a);
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
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_8);
      }
      FUN_006ae110((byte *)local_10);
      FUN_006ae110((byte *)puVar6);
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 3) {
      uVar12 = 0;
      if (0 < (int)local_8) {
        do {
          FUN_006acc70(pSVar4->field_0029,uVar12,&local_c);
          if ((short)local_c != -1) {
            pSVar7 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31((int3)(local_c >> 8),pSVar4->field_0024),
                                local_c,CASE_1);
            if (pSVar7 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd3d);
            }
            iVar5 = thunk_FUN_0045ff10((int)pSVar7);
            if (iVar5 == 8) break;
            uVar8 = STBoatC::CheckPBoxCmd(pSVar7,CASE_8);
            if (uVar8 == 1) break;
          }
          uVar12 = uVar12 + 1;
        } while ((int)uVar12 < (int)local_8);
      }
      if (uVar12 == local_8) {
        local_14 = 0;
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
        uVar10 = (*pcVar3)();
        return uVar10;
      }
      RaiseInternalException(iVar5,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd47);
      return 0xffffffff;
    }
  }
  return local_14;
}


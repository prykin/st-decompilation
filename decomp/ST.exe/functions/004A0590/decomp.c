
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Scout */

undefined4 __thiscall STGroupBoatC::Scout(STGroupBoatC *this,int param_1)

{
  undefined4 *puVar1;
  short *psVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  STGroupBoatC *pSVar6;
  int iVar7;
  uint *puVar8;
  STBoatC *pSVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar13;
  uint uVar14;
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
  iVar7 = Library::MSVCRT::__setjmp3(local_80.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar6 = local_18;
  if (iVar7 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar1 = &local_18->field_0300;
      puVar13 = (undefined4 *)&local_18->field_0x89;
      for (iVar7 = 0x15; iVar7 != 0; iVar7 = iVar7 + -1) {
        *puVar13 = 0;
        puVar13 = puVar13 + 1;
      }
      uVar3 = *(undefined2 *)&local_18->field_0x1c3;
      uVar4 = *(undefined2 *)&local_18->field_0x1bf;
      *(undefined4 *)&local_18->field_0x65 = 0;
      psVar2 = (short *)((int)&local_18->field_0300 + 2);
      *(undefined2 *)((int)&local_18->field_02F8 + 2) = *(undefined2 *)&local_18->field_0x1c1;
      *(undefined2 *)&local_18->field_02FC = uVar3;
      *(undefined2 *)&local_18->field_02F8 = uVar4;
      thunk_FUN_0049a500(local_18,(undefined2 *)((int)&local_18->field_02FC + 2),
                         (undefined2 *)puVar1,psVar2);
      local_10 = Way3DGrpGetDistrPoint
                           (pSVar6,pSVar6->field_0029,(int)*(short *)((int)&pSVar6->field_02FC + 2),
                            (int)*(short *)puVar1,(int)*psVar2,(int)*(short *)&pSVar6->field_02F8,
                            (int)*(short *)((int)&pSVar6->field_02F8 + 2),
                            (int)*(short *)&pSVar6->field_02FC);
      if (local_10 == (uint *)0x0) {
        return 0;
      }
      puVar8 = Way3DGrpGetDistrPoint
                         (pSVar6,pSVar6->field_0029,(int)*(short *)&pSVar6->field_02F8,
                          (int)*(short *)((int)&pSVar6->field_02F8 + 2),
                          (int)*(short *)&pSVar6->field_02FC,
                          (int)*(short *)((int)&pSVar6->field_02FC + 2),(int)*(short *)puVar1,
                          (int)*psVar2);
      local_1c = puVar8;
      if (puVar8 == (uint *)0x0) {
        FUN_006ae110((byte *)local_10);
        return 0;
      }
      uVar14 = 0;
      local_3c = *(undefined4 *)(DAT_00802a38 + 0xe4);
      if (0 < (int)local_8) {
        do {
          FUN_006acc70((int)local_10,uVar14,(undefined4 *)&local_24);
          FUN_006acc70((int)puVar8,uVar14,(undefined4 *)&local_2c);
          FUN_006acc70(pSVar6->field_0029,uVar14,&local_c);
          if ((short)local_c != -1) {
            pSVar9 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,
                                CONCAT31((int3)((uint)extraout_ECX >> 8),pSVar6->field_0024),local_c
                                ,CASE_1);
            if (pSVar9 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd2a);
            }
            local_38 = local_24;
            local_36 = local_22;
            local_32 = local_2c;
            local_34 = local_20;
            local_30 = local_2a;
            local_2e = local_28;
            STBoatC::CmdToObj(pSVar9,CASE_8,&local_3c);
            puVar8 = local_1c;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_8);
      }
      FUN_006ae110((byte *)local_10);
      FUN_006ae110((byte *)puVar8);
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 3) {
      uVar14 = 0;
      if (0 < (int)local_8) {
        do {
          FUN_006acc70(pSVar6->field_0029,uVar14,&local_c);
          if ((short)local_c != -1) {
            pSVar9 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31((int3)(local_c >> 8),pSVar6->field_0024),
                                local_c,CASE_1);
            if (pSVar9 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd3d);
            }
            iVar7 = thunk_FUN_0045ff10((int)pSVar9);
            if (iVar7 == 8) break;
            uVar10 = STBoatC::CheckPBoxCmd(pSVar9,CASE_8);
            if (uVar10 == 1) break;
          }
          uVar14 = uVar14 + 1;
        } while ((int)uVar14 < (int)local_8);
      }
      if (uVar14 == local_8) {
        local_14 = 0;
      }
    }
    g_currentExceptionFrame = local_80.previous;
  }
  else {
    g_currentExceptionFrame = local_80.previous;
    if (iVar7 != -0x5001fff7) {
      iVar11 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd46,0,iVar7,
                                  &DAT_007a4ccc,s_STGroupBoatC__Scout_007ac178);
      if (iVar11 != 0) {
        pcVar5 = (code *)swi(3);
        uVar12 = (*pcVar5)();
        return uVar12;
      }
      RaiseInternalException(iVar7,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xd47);
      return 0xffffffff;
    }
  }
  return local_14;
}


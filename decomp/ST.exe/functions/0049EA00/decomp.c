
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::SetMine */

undefined4 __thiscall STGroupBoatC::SetMine(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  uint uVar9;
  STBoatC_CmdToObj_param_1Enum SVar10;
  InternalExceptionFrame local_6c;
  undefined4 local_28;
  undefined2 local_24;
  undefined2 local_22;
  short local_20;
  STGroupBoatC *local_1c;
  undefined4 local_18;
  int local_14;
  undefined4 local_10;
  int local_c;
  uint local_8;
  
  local_c = *(int *)(this->field_0029 + 0xc);
  local_18 = 2;
  local_14 = 0;
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_1c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_6c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_1c;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar8 = (undefined4 *)&local_1c->field_0x89;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      uVar9 = 0;
      local_1c->field_0065 = 0;
      *(undefined4 *)&local_1c->field_0x2b3 = local_1c->field_0182;
      *(undefined4 *)&local_1c->field_0x2b7 = local_1c->field_0186;
      *(undefined2 *)&local_1c->field_0x2bb = local_1c->field_018A;
      local_24 = *(undefined2 *)&local_1c->field_0x2b3;
      local_22 = local_1c->field_02B5;
      local_28 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      local_10 = local_28;
      if (0 < local_c) {
        do {
          FUN_006acc70(pSVar2->field_0029,uVar9,&local_8);
          if ((short)local_8 != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),local_8
                                ,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb1f);
            }
            if (*(int *)&pSVar2->field_0x2b9 == -1) {
              if (*(int *)&pSVar4->field_0x7b6 == 0) goto LAB_0049eb44;
LAB_0049eb2a:
              if (*(int *)&pSVar4->field_0x7be < 1) goto LAB_0049eb44;
              local_20 = pSVar4->field_004B;
              puVar8 = &local_28;
              SVar10 = CASE_7;
            }
            else {
              if (*(int *)&pSVar4->field_0x7b6 == *(int *)&pSVar2->field_0x2b9) goto LAB_0049eb2a;
LAB_0049eb44:
              puVar8 = &local_10;
              SVar10 = CASE_3;
            }
            STBoatC::CmdToObj(pSVar4,SVar10,puVar8);
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < local_c);
      }
      RaiseInternalException
                (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_grpb_cpp_007abe3c,
                 0xb3c);
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x1e == 5) {
      uVar9 = 0;
      if (0 < local_c) {
        do {
          FUN_006acc70(pSVar2->field_0029,uVar9,&local_8);
          if ((short)local_8 != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (g_sTAllPlayers_007FA174,
                                CONCAT31((int3)(local_8 >> 8),pSVar2->field_0024),local_8,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,g_overwriteContext_007ED77C,
                         s_E____titans_wlad_to_grpb_cpp_007abe3c,0xb43);
            }
            iVar3 = thunk_FUN_0045ff10((int)pSVar4);
            if ((iVar3 == 7) || (uVar5 = STBoatC::CheckPBoxCmd(pSVar4,CASE_7), uVar5 == 1)) {
              local_14 = local_14 + 1;
              break;
            }
          }
          uVar9 = uVar9 + 1;
        } while ((int)uVar9 < local_c);
      }
      if (local_14 == 0) {
        local_18 = 0;
      }
    }
    g_currentExceptionFrame = local_6c.previous;
  }
  else {
    g_currentExceptionFrame = local_6c.previous;
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
  return local_18;
}


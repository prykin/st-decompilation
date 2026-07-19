
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_grpb.cpp
   STGroupBoatC::Recharge */

undefined4 __thiscall STGroupBoatC::Recharge(STGroupBoatC *this,int param_1)

{
  code *pcVar1;
  STGroupBoatC *pSVar2;
  int iVar3;
  STBoatC *pSVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_EDX;
  uint uVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar9;
  InternalExceptionFrame local_68;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  undefined2 local_1a;
  undefined2 local_18;
  STGroupBoatC *local_14;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = *(uint *)(this->field_0029 + 0xc);
  uVar8 = 0;
  local_10 = 2;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_14;
  if (iVar3 == 0) {
    if ((param_1 == 0) || (param_1 == 1)) {
      puVar9 = (undefined4 *)&local_14->field_0x89;
      for (iVar3 = 0x15; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar9 = 0;
        puVar9 = puVar9 + 1;
      }
      *(undefined4 *)&local_14->field_0x65 = 0;
      local_14->field_02CE = *(undefined4 *)&local_14->field_0x199;
      local_14->field_02D2 = *(undefined4 *)&local_14->field_0x19d;
      local_14->field_02D6 = *(undefined2 *)&local_14->field_0x1a1;
      local_20 = local_14->field_02CE;
      local_24 = *(undefined4 *)(DAT_00802a38 + 0xe4);
      local_1c = *(undefined2 *)&local_14->field_02D2;
      local_18 = local_14->field_02D6;
      local_1a = *(undefined2 *)((int)&local_14->field_02D2 + 2);
      if (0 < (int)local_8) {
        do {
          FUN_006acc70(pSVar2->field_0029,uVar8,&local_c);
          if ((short)local_c != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,
                                CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),local_c
                                ,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc11);
            }
            STBoatC::CmdToObj(pSVar4,CASE_16,&local_24);
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_8);
      }
    }
    if (*(uint *)(DAT_00802a38 + 0xe4) % 0x19 == 7) {
      uVar8 = 0;
      if (0 < (int)local_8) {
        do {
          FUN_006acc70(pSVar2->field_0029,uVar8,&local_c);
          if ((short)local_c != -1) {
            pSVar4 = (STBoatC *)
                     STAllPlayersC::GetObjPtr
                               (DAT_007fa174,CONCAT31((int3)(local_c >> 8),pSVar2->field_0024),
                                local_c,CASE_1);
            if (pSVar4 == (STBoatC *)0x0) {
              RaiseInternalException
                        (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc1c);
            }
            iVar3 = thunk_FUN_0045ff10((int)pSVar4);
            if (iVar3 == 0x16) break;
            uVar5 = STBoatC::CheckPBoxCmd(pSVar4,CASE_16);
            if (uVar5 == 1) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < (int)local_8);
      }
      if (uVar8 == local_8) {
        local_10 = 0;
      }
    }
    g_currentExceptionFrame = local_68.previous;
  }
  else {
    g_currentExceptionFrame = local_68.previous;
    if (iVar3 != -0x5001fff7) {
      iVar6 = ReportDebugMessage(s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc25,0,iVar3,&DAT_007a4ccc
                                 ,s_STGroupBoatC__Recharge_007ac108);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      RaiseInternalException(iVar3,0,s_E____titans_wlad_to_grpb_cpp_007abe3c,0xc26);
      return 0xffffffff;
    }
  }
  return local_10;
}


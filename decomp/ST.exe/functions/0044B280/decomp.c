
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::CalibrateTmp */

void __thiscall
STAllPlayersC::CalibrateTmp
          (STAllPlayersC *this,char param_1,int param_2,int param_3,uint *param_4,int *param_5,
          int *param_6,int *param_7)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  uint uVar6;
  void *unaff_EDI;
  uint uVar7;
  InternalExceptionFrame local_5c;
  uint *local_18;
  uint local_14;
  uint *local_10;
  uint *local_c;
  short local_8;
  short local_6;
  
  local_10 = (uint *)0x0;
  local_c = (uint *)0x0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  iVar2 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    if (iVar2 != -0x5001fff7) {
      iVar4 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3095,0,iVar2,
                                 &DAT_007a4ccc,s_STAllPlayersC__CalibrateTmp_007a892c);
      if (iVar4 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar2,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x3096);
    }
    return;
  }
  if ((param_4 == (uint *)0x0) || (local_14 = param_4[3], local_14 == 0)) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x3075)
    ;
  }
  if (param_2 == 0) {
    local_18 = *(uint **)((int)&DAT_007f4f8d + param_1 * 0xa62 + param_3 * 0x10);
  }
  else if (param_2 == 1) {
    local_18 = *(uint **)((int)&DAT_007f4fdd + param_1 * 0xa62 + param_3 * 0x10);
  }
  else {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3079,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__CalibrateTmp_inva_007a8950);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x307a)
    ;
  }
  uVar5 = local_18[3];
  if (uVar5 == 0) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x307c)
    ;
  }
  if ((param_5 != (int *)0x0) && (*param_5 == 0)) {
    puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    *param_5 = (int)puVar3;
  }
  if ((param_6 != (int *)0x0) && (*param_6 == 0)) {
    puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    *param_6 = (int)puVar3;
  }
  if ((param_7 != (int *)0x0) && (*param_7 == 0)) {
    puVar3 = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
    *param_7 = (int)puVar3;
  }
  if (((param_5 == (int *)0x0) && (param_6 == (int *)0x0)) && (param_7 == (int *)0x0)) {
    RaiseInternalException(-0x5001fff7,DAT_007ed77c,s_E____titans_wlad_to_allpl_cpp_007a6004,0x3080)
    ;
  }
  Library::DKW::TBL::FUN_006afe40((int *)&local_10,local_18);
  Library::DKW::TBL::FUN_006afe40((int *)&local_c,param_4);
  uVar7 = 0;
  if (0 < (int)uVar5) {
    do {
      FUN_006acc70((int)local_10,uVar7,(undefined4 *)&local_8);
      if ((local_8 != -1) && (uVar6 = 0, 0 < (int)local_14)) {
        do {
          FUN_006acc70((int)local_c,uVar6,(undefined4 *)&local_6);
          if (local_8 == local_6) {
            if (param_6 != (int *)0x0) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)*param_6,(undefined4 *)&local_6);
            }
            FUN_006b0c70((int)local_10,uVar7);
            uVar5 = uVar5 - 1;
            uVar7 = uVar7 - 1;
            FUN_006b0c70((int)local_c,uVar6);
            local_14 = local_14 - 1;
            uVar6 = uVar6 - 1;
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < (int)local_14);
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < (int)uVar5);
  }
  if (param_5 != (int *)0x0) {
    Library::DKW::TBL::FUN_006afe40(param_5,local_10);
  }
  if (param_7 != (int *)0x0) {
    Library::DKW::TBL::FUN_006afe40(param_7,local_c);
  }
  FUN_006ae110((byte *)local_10);
  FUN_006ae110((byte *)local_c);
  g_currentExceptionFrame = local_5c.previous;
  return;
}


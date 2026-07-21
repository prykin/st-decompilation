
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
  dword dVar5;
  undefined4 unaff_ESI;
  uint index;
  void *unaff_EDI;
  uint index_00;
  InternalExceptionFrame local_5c;
  DArrayTy *local_18;
  uint local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  short local_8;
  short local_6;
  
  local_10 = (DArrayTy *)0x0;
  local_c = (DArrayTy *)0x0;
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
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x3075);
  }
  if (param_2 == 0) {
    local_18 = *(DArrayTy **)(param_3 * 0x10 + 0x7f4f8d + param_1 * 0xa62);
  }
  else if (param_2 == 1) {
    local_18 = *(DArrayTy **)(param_3 * 0x10 + 0x7f4fdd + param_1 * 0xa62);
  }
  else {
    iVar2 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x3079,0,0,&DAT_007a4ccc,
                               s_STAllPlayersC__CalibrateTmp_inva_007a8950);
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x307a);
  }
  dVar5 = local_18->count;
  if (dVar5 == 0) {
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x307c);
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
    RaiseInternalException
              (-0x5001fff7,g_overwriteContext_007ED77C,s_E____titans_wlad_to_allpl_cpp_007a6004,
               0x3080);
  }
  Library::DKW::TBL::FUN_006afe40((int *)&local_10,&local_18->flags);
  Library::DKW::TBL::FUN_006afe40((int *)&local_c,param_4);
  index_00 = 0;
  if (0 < (int)dVar5) {
    do {
      DArrayGetElement(local_10,index_00,&local_8);
      if ((local_8 != -1) && (index = 0, 0 < (int)local_14)) {
        do {
          DArrayGetElement(local_c,index,&local_6);
          if (local_8 == local_6) {
            if (param_6 != (int *)0x0) {
              Library::DKW::TBL::FUN_006ae1c0((uint *)*param_6,(undefined4 *)&local_6);
            }
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_10,index_00);
            dVar5 = dVar5 - 1;
            index_00 = index_00 - 1;
            FUN_006b0c70((AnonShape_006B0C70_7C4FE646 *)local_c,index);
            local_14 = local_14 - 1;
            index = index - 1;
          }
          index = index + 1;
        } while ((int)index < (int)local_14);
      }
      index_00 = index_00 + 1;
    } while ((int)index_00 < (int)dVar5);
  }
  if (param_5 != (int *)0x0) {
    Library::DKW::TBL::FUN_006afe40(param_5,&local_10->flags);
  }
  if (param_7 != (int *)0x0) {
    Library::DKW::TBL::FUN_006afe40(param_7,&local_c->flags);
  }
  DArrayDestroy(local_10);
  DArrayDestroy(local_c);
  g_currentExceptionFrame = local_5c.previous;
  return;
}


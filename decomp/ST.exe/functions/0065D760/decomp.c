
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_flt.cpp
   AiFltClassTy::_AddObjFlt
   
   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 0065D940 -> 0065D760 @ 0065D98B */

void __thiscall AiFltClassTy::_AddObjFlt(AiFltClassTy *this,uint objPtr,int param_2)

{
  code *pcVar1;
  bool bVar2;
  AiFltClassTy *pAVar3;
  undefined2 uVar4;
  int iVar5;
  DArrayTy *array;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  AiFltClassTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pAVar3 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    if (iVar5 != -100) {
      iVar6 = ReportDebugMessage(s_E____titans_ai_ai_flt_cpp_007d2b80,0xa5,0,iVar5,&DAT_007a4ccc,
                                 s_AiFltClassTy___AddObjFlt_007d2be0);
      if (iVar6 != 0) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      RaiseInternalException(iVar5,0,s_E____titans_ai_ai_flt_cpp_007d2b80,0xa6);
    }
    return;
  }
  if (objPtr == 0) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (local_8->field_007D == -2) {
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  if (g_sTAllPlayers_007FA174 != (STAllPlayersC *)0x0) {
    iVar5 = (**(code **)(*(int *)objPtr + 0x2c))();
    if ((iVar5 < 0x32) || (0x73 < iVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (((bVar2) && (pAVar3->field_007B != 1)) ||
       (iVar5 = (**(code **)(*(int *)objPtr + 0x2c))(), iVar5 == 0x78)) {
      RaiseInternalException
                (-100,g_overwriteContext_007ED77C,s_E____titans_ai_ai_flt_cpp_007d2b80,0x9b);
    }
    array = (DArrayTy *)Library::DKW::TBL::FUN_006ae290((uint *)0x0,1,2,1);
    Library::DKW::TBL::FUN_006ae1c0((uint *)array,(undefined4 *)(objPtr + 0x32));
    iVar5 = (**(code **)(*(int *)objPtr + 0x2c))();
    if ((iVar5 < 1) || (0x28 < iVar5)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      if (param_2 == 0) {
        uVar4 = 0xfffe;
      }
      else {
        uVar4 = *(undefined2 *)(objPtr + 0x30);
      }
      *(undefined2 *)(objPtr + 0x81c) = uVar4;
    }
    STAllPlayersC::AddObjsToGroup
              (g_sTAllPlayers_007FA174,CONCAT31((int3)((uint)extraout_ECX >> 8),pAVar3->field_0x24),
               pAVar3->field_007D,(uint *)array,(undefined2 *)0x0);
    DArrayDestroy(array);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  return;
}


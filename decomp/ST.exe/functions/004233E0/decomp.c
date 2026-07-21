
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetGroupContent */

uint * __thiscall STGroupC::GetGroupContent(STGroupC *this,int param_1)

{
  code *pcVar1;
  uint uVar2;
  int errorCode;
  int iVar3;
  uint *puVar4;
  uint index;
  undefined4 unaff_ESI;
  uint uVar5;
  void *unaff_EDI;
  uint uVar6;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  STGroupC *local_10;
  uint *local_c;
  short local_6;
  
  local_18 = *(uint *)(this->field_0029 + 0xc);
  uVar5 = 0;
  local_c = (uint *)0x0;
  local_14 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  errorCode = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (errorCode == 0) {
    local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,(uint)(ushort)local_10->field_0027,2,1);
    uVar2 = local_18;
    if (local_18 != 0) {
      index = 0;
      uVar6 = local_14;
      do {
        DArrayGetElement((DArrayTy *)local_10->field_0029,index,&local_6);
        if (local_6 != -1) {
          Library::DKW::TBL::FUN_006ae140(local_c,uVar6 & 0xffff,(undefined4 *)&local_6);
          uVar6 = uVar6 + 1;
          local_14 = uVar6;
        }
        uVar5 = uVar5 + 1;
        index = uVar5 & 0xffff;
      } while (index < uVar2);
    }
    g_currentExceptionFrame = local_5c.previous;
    return local_c;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar3 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x52,0,errorCode,&DAT_007a4ccc,
                             s_STGroupC__GetGroupContent_007a50c8);
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(3);
    puVar4 = (uint *)(*pcVar1)();
    return puVar4;
  }
  RaiseInternalException(errorCode,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x53);
  return local_c;
}


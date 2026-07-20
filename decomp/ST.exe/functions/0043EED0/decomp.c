
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJListFromDArr
   
   [STSwitchEnumApplier] Switch target param_3 uses
   /SubmarineTitans/Recovered/Enums/STAllPlayersC_GetTOBJListFromDArr_param_3Enum. Cases:
   CASE_38=56;CASE_39=57;CASE_4F=79;CASE_5E=94 */

uint * __thiscall
STAllPlayersC::GetTOBJListFromDArr
          (STAllPlayersC *this,uint param_1,int param_2,
          STAllPlayersC_GetTOBJListFromDArr_param_3Enum param_3,int param_4,char param_5)

{
  short sVar1;
  code *pcVar2;
  bool bVar3;
  STAllPlayersC *this_00;
  int iVar4;
  int *piVar5;
  STAllPlayersC_GetTOBJListFromDArr_param_3Enum SVar6;
  int iVar7;
  uint *puVar8;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_5c;
  undefined1 local_18 [4];
  STAllPlayersC *local_14;
  int local_10;
  uint *local_c;
  uint local_8;
  
  local_10 = *(int *)(param_2 + 0xc);
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar4 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar7 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x2049,0,iVar4,&DAT_007a4ccc
                               ,s_STAllPlayersC__GetTOBJListFromDA_007a7fb4);
    if (iVar7 == 0) {
      RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x204a);
      return (uint *)0x0;
    }
    pcVar2 = (code *)swi(3);
    puVar8 = (uint *)(*pcVar2)();
    return puVar8;
  }
  local_c = Library::DKW::TBL::FUN_006ae290((uint *)0x0,0,2,1);
  this_00 = local_14;
  iVar4 = 0;
  if (0 < local_10) {
    do {
      sVar1 = *(short *)(*(int *)(param_2 + 0x1c) + iVar4 * 2);
      local_8 = CONCAT22((short)((uint)*(int *)(param_2 + 0x1c) >> 0x10),sVar1);
      if (sVar1 != -1) {
        piVar5 = (int *)GetObjPtr(this_00,param_1,local_8,CASE_1);
        if (piVar5 == (int *)0x0) {
          RaiseInternalException
                    (-0x5001fffc,g_overwriteContext_007ED77C,
                     s_E____titans_wlad_to_allpl_cpp_007a6004,0x2040);
switchD_0043efb1_caseD_3a:
          bVar3 = false;
        }
        else {
          SVar6 = (**(code **)(*piVar5 + 0x2c))();
          if ((SVar6 != param_3) || (iVar7 = (**(code **)(*piVar5 + 0xf8))(), iVar7 == 0))
          goto switchD_0043efb1_caseD_3a;
          if (param_4 != 0) {
            switch(param_3) {
            case CASE_38:
            case CASE_39:
            case CASE_4F:
            case CASE_5E:
              if ((param_4 == 1) && (iVar7 = (**(code **)(*piVar5 + 0x88))(local_18), 0 < iVar7)) {
                bVar3 = true;
                goto LAB_0043efd8;
              }
            }
            goto switchD_0043efb1_caseD_3a;
          }
          bVar3 = true;
        }
LAB_0043efd8:
        if ((bVar3) &&
           ((param_5 == -1 || (iVar7 = (**(code **)(*piVar5 + 0x6c))(), iVar7 == param_5)))) {
          Library::DKW::TBL::FUN_006ae1c0(local_c,&local_8);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_10);
  }
  g_currentExceptionFrame = local_5c.previous;
  return local_c;
}



/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetTOBJQty */

uint __thiscall STGroupC::GetTOBJQty(STGroupC *this,int param_1)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined2 extraout_var;
  undefined4 extraout_EDX;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  int local_14;
  STGroupC *local_10;
  uint local_c;
  int local_8;
  
  uVar6 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_10;
  if (iVar3 == 0) {
    local_8 = 0;
    local_14 = *(int *)(local_10->field_0029 + 0xc);
    if (0 < local_14) {
      do {
        FUN_006acc70(pSVar2->field_0029,uVar6,&local_c);
        if ((short)local_c != -1) {
          piVar4 = (int *)STAllPlayersC::GetObjPtr
                                    (DAT_007fa174,
                                     CONCAT31((int3)((uint)extraout_EDX >> 8),pSVar2->field_0024),
                                     local_c,CASE_1);
          if (piVar4 == (int *)0x0) {
            RaiseInternalException
                      (-0x5001fffc,DAT_007ed77c,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x66);
          }
          iVar3 = (**(code **)(*piVar4 + 0x2c))();
          if (iVar3 == param_1) {
            local_8 = local_8 + 1;
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < local_14);
    }
    g_currentExceptionFrame = local_58.previous;
    return CONCAT22((short)((uint)local_58.previous >> 0x10),(undefined2)local_8);
  }
  g_currentExceptionFrame = local_58.previous;
  iVar5 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x6b,0,iVar3,&DAT_007a4ccc,
                             s_STGroupC__GetTOBJQty_007a50e8);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    uVar6 = (*pcVar1)();
    return uVar6;
  }
  RaiseInternalException(iVar3,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x6c);
  return CONCAT22(extraout_var,(undefined2)local_8);
}


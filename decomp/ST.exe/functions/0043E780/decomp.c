
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\to_allpl.cpp
   STAllPlayersC::GetTOBJList */

uint * __thiscall
STAllPlayersC::GetTOBJList(STAllPlayersC *this,char param_1,int param_2,int param_3,char param_4)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_58;
  undefined1 local_14 [4];
  int local_10;
  int local_c;
  uint *local_8;
  
  local_10 = *(int *)((int)&DAT_007f4e29 + param_1 * 0xa62);
  local_c = *(int *)(local_10 + 0xc);
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar4 = __setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_to_allpl_cpp_007a6004,0x1fbf,0,iVar4,&DAT_007a4ccc
                               ,s_STAllPlayersC__GetTOBJList_007a7f94);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      puVar6 = (uint *)(*pcVar2)();
      return puVar6;
    }
    RaiseInternalException(iVar4,0,s_E____titans_wlad_to_allpl_cpp_007a6004,0x1fc0);
    return (uint *)0x0;
  }
  local_8 = FUN_006ae290((uint *)0x0,0,2,1);
  iVar4 = 0;
  if (0 < local_c) {
    do {
      piVar1 = *(int **)(*(int *)(local_10 + 0x1c) + iVar4 * 4);
      if (((piVar1 == (int *)0x0) || (iVar5 = (**(code **)(*piVar1 + 0x2c))(), iVar5 != param_2)) ||
         (iVar5 = (**(code **)(*piVar1 + 0xf8))(), iVar5 == 0)) {
switchD_0043e836_caseD_3a:
        bVar3 = false;
      }
      else {
        if (param_3 != 0) {
          switch(param_2) {
          case 0x38:
          case 0x39:
          case 0x4f:
          case 0x5e:
            if ((param_3 == 1) && (iVar5 = (**(code **)(*piVar1 + 0x88))(local_14), 0 < iVar5)) {
              bVar3 = true;
              goto LAB_0043e85d;
            }
          }
          goto switchD_0043e836_caseD_3a;
        }
        bVar3 = true;
      }
LAB_0043e85d:
      if ((bVar3) &&
         ((param_4 == -1 || (iVar5 = (**(code **)(*piVar1 + 0x6c))(), iVar5 == param_4)))) {
        FUN_006ae1c0(local_8,(undefined4 *)((int)piVar1 + 0x32));
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < local_c);
  }
  g_currentExceptionFrame = local_58.previous;
  return local_8;
}


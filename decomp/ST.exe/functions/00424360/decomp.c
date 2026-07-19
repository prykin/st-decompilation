
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::RestoreGrpData */

void __thiscall STGroupC::RestoreGrpData(STGroupC *this,int param_1)

{
  code *pcVar1;
  STGroupC *pSVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_50;
  STGroupC *local_c;
  int local_8;
  
  local_8 = param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  iVar5 = local_8;
  pSVar2 = local_c;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_wlad_tc_grp_cpp_007a50a4,0x1d5,0,iVar3,&DAT_007a4ccc,
                               s_STGroupC__RestoreGrpData_007a5184);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_wlad_tc_grp_cpp_007a50a4,0x1d6);
    return;
  }
  local_c->field_0020 = *(undefined4 *)(local_8 + 0x14);
  local_c->field_0024 = *(undefined1 *)(local_8 + 4);
  local_c->field_0025 = *(undefined2 *)(local_8 + 0x18);
  local_c->field_0027 = *(undefined2 *)(local_8 + 0x1a);
  local_c->field_0031 = *(undefined4 *)(local_8 + 0x2c);
  local_c->field_0035 = *(undefined4 *)(local_8 + 0x30);
  local_c->field_0039 = *(undefined4 *)(local_8 + 0x34);
  if (*(int *)(local_8 + 0x1c) == -1) {
    local_c->field_0029 = 0;
  }
  else {
    puVar4 = FUN_006b00c0((uint *)0x0,(uint *)(*(int *)(local_8 + 0x1c) + local_8),&LAB_004045c5);
    pSVar2->field_0029 = puVar4;
  }
  iVar3 = *(int *)(iVar5 + 0x24);
  if (iVar3 != -1) {
    puVar4 = FUN_006b00c0((uint *)0x0,(uint *)(iVar3 + iVar5),&LAB_004045c5);
    pSVar2->field_002D = puVar4;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  pSVar2->field_002D = 0;
  g_currentExceptionFrame = local_50.previous;
  return;
}


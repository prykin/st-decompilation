
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\optpanel.cpp
   OptPanelTy::DoneOptPanel */

void __thiscall OptPanelTy::DoneOptPanel(OptPanelTy *this)

{
  code *pcVar1;
  OptPanelTy *pOVar2;
  int iVar3;
  int iVar4;
  ccFntTy *extraout_ECX;
  ccFntTy *extraout_ECX_00;
  ccFntTy *extraout_ECX_01;
  ccFntTy *extraout_ECX_02;
  ccFntTy *extraout_ECX_03;
  ccFntTy *extraout_ECX_04;
  ccFntTy *extraout_ECX_05;
  ccFntTy *this_00;
  undefined4 unaff_ESI;
  uint *puVar5;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  OptPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pOVar2 = local_8;
  if (iVar3 == 0) {
    if (*(byte **)&local_8[1].field_0x30 != (byte *)0x0) {
      FUN_006b5570(*(byte **)&local_8[1].field_0x30);
      *(undefined4 *)&pOVar2[1].field_0x30 = 0;
    }
    if (*(byte **)&pOVar2[1].field_0x34 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&pOVar2[1].field_0x34);
      *(undefined4 *)&pOVar2[1].field_0x34 = 0;
    }
    if (*(byte **)&pOVar2[1].field_0x38 != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pOVar2[1].field_0x38);
      *(undefined4 *)&pOVar2[1].field_0x38 = 0;
    }
    this_00 = (ccFntTy *)0x0;
    if (*(int *)&pOVar2[1].field_0x2c != 0) {
      FUN_006ab060((undefined4 *)&pOVar2[1].field_0x2c);
      this_00 = extraout_ECX;
    }
    if (*(byte **)&pOVar2[1].field_0x140 != (byte *)0x0) {
      FUN_006b5570(*(byte **)&pOVar2[1].field_0x140);
      this_00 = extraout_ECX_00;
    }
    *(undefined4 *)&pOVar2[1].field_0x140 = 0;
    if (*(byte **)&pOVar2[1].field_0x144 != (byte *)0x0) {
      FUN_006ae110(*(byte **)&pOVar2[1].field_0x144);
      this_00 = extraout_ECX_01;
    }
    *(undefined4 *)&pOVar2[1].field_0x144 = 0;
    if (*(HANDLE *)&pOVar2[1].field_0x24 != (HANDLE)0x0) {
      FindCloseChangeNotification(*(HANDLE *)&pOVar2[1].field_0x24);
      *(undefined4 *)&pOVar2[1].field_0x24 = 0;
      this_00 = extraout_ECX_02;
    }
    puVar5 = &pOVar2->field_01B5;
    iVar3 = 10;
    do {
      if (*puVar5 != 0) {
        FUN_006e56b0(*(void **)&pOVar2->field_0xc,*puVar5);
        this_00 = extraout_ECX_03;
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    puVar5 = (uint *)&pOVar2->field_0x1ad;
    iVar3 = 2;
    do {
      if (*puVar5 != 0) {
        FUN_006e56b0(*(void **)&pOVar2->field_0xc,*puVar5);
        this_00 = extraout_ECX_04;
      }
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    DAT_008016dc = 0;
    if (*(uint **)&pOVar2->field_0x17c != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)&pOVar2->field_0x17c);
      *(undefined4 *)&pOVar2->field_0x17c = 0;
      this_00 = extraout_ECX_05;
    }
    if (*(uint **)&pOVar2->field_0x180 != (uint *)0x0) {
      ccFntTy::operator(this_00,*(uint **)&pOVar2->field_0x180);
      *(undefined4 *)&pOVar2->field_0x180 = 0;
    }
    *(undefined4 *)&pOVar2->field_0x198 = 0;
    puVar5 = (uint *)&pOVar2->field_0x184;
    iVar3 = 5;
    do {
      if (*puVar5 != 0) {
        cMf32::RecMemFree(DAT_00806790,puVar5);
      }
      puVar5 = puVar5 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_optpanel_cpp_007c70a0,0x79,0,iVar3,&DAT_007a4ccc,
                             s_OptPanelTy__DoneOptPanel_007c714c);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_optpanel_cpp_007c70a0,0x79);
  return;
}


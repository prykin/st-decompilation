
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\frmpanel.cpp
   FrmPanelTy::PaintBut */

void __thiscall
FrmPanelTy::PaintBut(FrmPanelTy *this,AnonShape_005105E0_BBFE3E3B *param_1,char *param_2)

{
  code *pcVar1;
  FrmPanelTy *pFVar2;
  int iVar3;
  LPSTR text;
  int iVar4;
  void *unaff_ESI;
  int *piVar5;
  InternalExceptionFrame *pIVar6;
  undefined4 local_58 [16];
  int local_18;
  FrmPanelTy *local_14;
  int local_10;
  ushort *local_c;
  uint local_8;
  
  pIVar6 = g_currentExceptionFrame;
  local_c = (ushort *)0x0;
  piVar5 = param_1->field_0018;
  local_18 = *piVar5 - this->field_003C;
  if (this->field_005C == 0) {
    local_10 = piVar5[1] - DAT_00806734;
  }
  else {
    local_10 = piVar5[1] - this->field_0044;
  }
  local_8 = 0;
  g_currentExceptionFrame = (InternalExceptionFrame *)&stack0xffffffa4;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_58,0,unaff_ESI,pIVar6);
  pFVar2 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = pIVar6;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_frmpanel_cpp_007c2958,0x8f,0,iVar3,&DAT_007a4ccc
                               ,s_FrmPanelTy__PaintBut_007c2ac4);
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_frmpanel_cpp_007c2958,0x8f);
      return;
    }
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  switch(param_1->field_0014) {
  case 0:
    local_8 = 0;
    break;
  case 1:
    local_8 = (uint)(*(char *)(param_1->field_0010 + -0xbf04 + (int)local_14) != '\0');
    break;
  case 2:
  case 3:
    local_8 = 1;
  }
  iVar3 = 1;
  piVar5 = (int *)0x0;
  text = FUN_006f2c00(param_2,1,local_8);
  local_c = cMf32::RecGet(DAT_00806790,1,text,piVar5,iVar3);
  DibPut((AnonShape_006B5B10_E0D06CF1 *)pFVar2->field_0068,local_18,local_10,'\x01',(byte *)local_c)
  ;
  cMf32::RecMemFree(DAT_00806790,(uint *)&local_c);
  Library::DKW::DDX::FUN_006b3640
            (DAT_008075a8,pFVar2->field_0060,0xffffffff,pFVar2->field_003C,pFVar2->field_0044);
  g_currentExceptionFrame = pIVar6;
  return;
}


#include "../../pseudocode_runtime.h"


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
  int *piVar5;
  InternalExceptionFrame local_5c;
  int local_18;
  FrmPanelTy *local_14;
  int local_10;
  ushort *local_c;
  uint local_8;

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
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_14 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_5c.jumpBuffer,0);
  pFVar2 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar4 = ReportDebugMessage("E:\\__titans\\Andrey\\frmpanel.cpp",0x8f,0,iVar3,"%s"
                               ,"FrmPanelTy::PaintBut");
    if (iVar4 == 0) {
      RaiseInternalException(iVar3,0,"E:\\__titans\\Andrey\\frmpanel.cpp",0x8f);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  switch(param_1->field_0014) {
  case 0:
    local_8 = 0;
    break;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
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
  g_currentExceptionFrame = local_5c.previous;
  return;
}


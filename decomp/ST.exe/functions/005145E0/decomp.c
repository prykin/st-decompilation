
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::FwdBut */

void __thiscall HelpPanelTy::FwdBut(HelpPanelTy *this)

{
  void *pvVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 unaff_ESI;
  undefined1 *puVar6;
  void *unaff_EDI;
  InternalExceptionFrame local_4c;
  HelpPanelTy *local_8;
  
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar3 == 0) {
    iVar3 = local_8->field_01CB;
    if (*(int *)&local_8->field_0x1cf < *(int *)(iVar3 + 0xc) + -1) {
      uVar5 = *(int *)&local_8->field_0x1cf + 1;
      *(uint *)&local_8->field_0x1cf = uVar5;
      if (uVar5 < *(uint *)(iVar3 + 0xc)) {
        puVar6 = (undefined1 *)(*(int *)(iVar3 + 8) * uVar5 + *(int *)(iVar3 + 0x1c));
      }
      else {
        puVar6 = (undefined1 *)0x0;
      }
      if (puVar6 != (undefined1 *)0x0) {
        local_8->field_01A1 = 0;
        local_8->field_01A7 = 0;
        local_8->field_01A3 = 0;
        uVar5 = *(uint *)(puVar6 + 5);
        pvVar1 = *(void **)(puVar6 + 1);
        switch(*puVar6) {
        case 0:
          HomeBut(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 1:
          RCProc(local_8,(int)pvVar1,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 2:
          ObjProc(local_8,(int)pvVar1,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 3:
          SubProc(local_8,(int)pvVar1,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 4:
          ArmProc(local_8,(int)pvVar1,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 5:
          TechProc(local_8,(uint)pvVar1,(byte)uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 6:
          TTreeProc(local_8,(uint)pvVar1,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 7:
          MObjProc(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 8:
          TipProc(local_8,pvVar1,uVar5,'\0');
          break;
        case 10:
          IndexBut(local_8);
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xb:
          SpecProc(local_8,(int)pvVar1,uVar5,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        case 0xc:
          NatProc(local_8,(int)pvVar1,'\0');
          g_currentExceptionFrame = local_4c.previous;
          return;
        }
      }
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x327,0,iVar3,&DAT_007a4ccc,
                             s_HelpPanelTy__FwdBut_007c3b08);
  if (iVar4 != 0) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x327);
  return;
}



/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\helppan.cpp
   HelpPanelTy::PrevBut */

void __thiscall HelpPanelTy::PrevBut(HelpPanelTy *this)

{
  void *pvVar1;
  code *pcVar2;
  HelpPanelTy *this_00;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  InternalExceptionFrame local_50;
  uint local_c;
  HelpPanelTy *local_8;
  
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar3 = Library::MSVCRT::__setjmp3(local_50.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_8;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Andrey_helppan_cpp_007c383c,0x2e9,0,iVar3,&DAT_007a4ccc
                               ,s_HelpPanelTy__PrevBut_007c3ab8);
    if (iVar5 == 0) {
      RaiseInternalException(iVar3,0,s_E____titans_Andrey_helppan_cpp_007c383c,0x2e9);
      return;
    }
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  iVar5 = *(int *)&local_8->field_0x1b7;
  iVar3 = *(int *)&local_8->field_0x1b3;
  if (iVar5 == 0) {
    iVar5 = *(int *)(iVar3 + 0xc);
    if (iVar5 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(iVar3 + 0x1c);
    }
    if ((char)piVar4[2] != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    if (*(char *)((int)piVar4 + 0x12) != '\0') {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    uVar6 = 0xffffffff;
  }
  else {
    uVar6 = iVar5 - 1;
    if (uVar6 < *(uint *)(iVar3 + 0xc)) {
      piVar4 = (int *)(*(int *)(iVar3 + 8) * (iVar5 + -1) + *(int *)(iVar3 + 0x1c));
    }
    else {
      piVar4 = (int *)0x0;
    }
    if (piVar4 == (int *)0x0) {
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    local_c = uVar6;
    if ((char)piVar4[2] != '\0') {
      *(uint *)&local_8->field_0x1b7 = uVar6;
      local_8->field_01A1 = 0;
      local_8->field_01A7 = 0;
      local_8->field_01A3 = 0;
      uVar6 = *(uint *)((int)piVar4 + 0xd);
      pvVar1 = *(void **)((int)piVar4 + 9);
      switch((char)piVar4[2]) {
      case '\x01':
        RCProc(local_8,(int)pvVar1,uVar6,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x02':
        ObjProc(local_8,(int)pvVar1,uVar6,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x03':
        SubProc(local_8,(int)pvVar1,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x04':
        ArmProc(local_8,(int)pvVar1,uVar6,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x05':
        TechProc(local_8,(uint)pvVar1,(byte)uVar6,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\x06':
        TTreeProc(local_8,(uint)pvVar1,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\a':
        MObjProc(local_8);
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\b':
        TipProc(local_8,pvVar1,uVar6,'\0');
        break;
      case '\n':
        IndexBut(local_8);
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\v':
        SpecProc(local_8,(int)pvVar1,uVar6,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      case '\f':
        NatProc(local_8,(int)pvVar1,'\0');
        PutToSHlp(this_00,(int)unaff_EDI);
        g_currentExceptionFrame = local_50.previous;
        return;
      }
      PutToSHlp(this_00,(int)unaff_EDI);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    iVar5 = *(uint *)(iVar3 + 0xc) - iVar5;
    if (*(char *)((int)piVar4 + 0x12) != '\0') {
      *(uint *)&local_8->field_0x1b7 = uVar6;
      goto LAB_00513e3e;
    }
  }
  ChangeTree(local_8,piVar4,uVar6);
  *(int *)&this_00->field_0x1b7 = *(int *)(*(int *)&this_00->field_0x1b3 + 0xc) - iVar5;
LAB_00513e3e:
  PrevBut(this_00);
  g_currentExceptionFrame = local_50.previous;
  return;
}


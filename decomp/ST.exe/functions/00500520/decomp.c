
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel1.cpp
   CPanelTy::PaintDeep */

void __thiscall CPanelTy::PaintDeep(CPanelTy *this,int param_1)

{
  code *pcVar1;
  CPanelTy *pCVar2;
  char cVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  CPanelTy *pCVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  InternalExceptionFrame local_70;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  CPanelTy *local_1c;
  int local_18;
  int local_14;
  int local_10;
  CPanelTy *local_c;
  uint local_8;
  
  if (param_1 == 0) {
    local_c = this + 0xc51;
  }
  else {
    local_c = this + 0xb63;
  }
  if (param_1 == 0) {
    cVar3 = (DAT_0080874e != '\x03') + '\x05';
  }
  else {
    cVar3 = (DAT_0080874e == '\x03') + '\x02';
  }
  local_8 = CONCAT31(local_8._1_3_,cVar3);
  if (*local_c != (CPanelTy)0x0) {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    local_1c = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pCVar2 = local_1c;
    if (iVar4 == 0) {
      local_2c = -0x16 - (int)local_c;
      local_20 = -0x25 - (int)local_c;
      local_24 = -0x11 - (int)local_c;
      local_28 = -0x2a - (int)local_c;
      local_14 = 6;
      pCVar7 = local_c + 0x2a;
      iVar4 = 0xb;
      local_10 = 0x37;
      local_18 = 5;
      do {
        if (DAT_0080874e == '\x03') {
          iVar10 = iVar4;
          if (param_1 != 0) {
            iVar9 = local_20;
            if (*pCVar7 != (CPanelTy)0x0) {
              iVar9 = local_28;
            }
            pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2a2),(int)(pCVar7 + iVar9));
            cVar3 = '\x06';
            iVar9 = local_10;
            goto LAB_00500689;
          }
          iVar9 = local_24;
          if (*pCVar7 == (CPanelTy)0x0) {
            iVar9 = local_2c;
          }
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2a2),(int)(pCVar7 + iVar9));
          cVar3 = '\x06';
          iVar9 = iVar4 + 0x7c;
          puVar8 = *(undefined4 **)(pCVar2 + (local_8 & 0xff) * 4 + 0x180);
        }
        else {
          if (*pCVar7 == (CPanelTy)0x0) {
            uVar6 = 2;
          }
          else {
            uVar6 = -(uint)(local_c[2] != (CPanelTy)0x1) & 3;
          }
          pbVar5 = (byte *)FUN_0070b3a0(*(int *)(pCVar2 + 0x2a2),uVar6);
          cVar3 = '\x01';
          iVar9 = 7;
          iVar10 = local_14;
LAB_00500689:
          puVar8 = *(undefined4 **)(pCVar2 + (local_8 & 0xff) * 4 + 0x180);
        }
        thunk_FUN_00540760(puVar8,iVar9,iVar10,cVar3,pbVar5);
        local_10 = local_10 + -0xb;
        iVar4 = iVar4 + 0xb;
        pCVar7 = pCVar7 + 1;
        local_14 = local_14 + 0x1d;
        local_18 = local_18 + -1;
        if (local_18 == 0) {
          g_currentExceptionFrame = local_70.previous;
          return;
        }
      } while( true );
    }
    g_currentExceptionFrame = local_70.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1da,0,iVar4,&DAT_007a4ccc
                               ,s_CPanelTy__PaintDeep_007c24d4);
    if (iVar9 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Andrey_cpanel1_cpp_007c23cc,0x1da);
  }
  return;
}


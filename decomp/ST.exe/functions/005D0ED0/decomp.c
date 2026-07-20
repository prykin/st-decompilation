
/* Recovered from embedded debug metadata:
   E:\__titans\Start\settmobj.cpp
   SettMapMTy::ChangePlayerList */

void __thiscall
SettMapMTy::ChangePlayerList
          (SettMapMTy *this,int param_1,uint param_2,int param_3,char param_4,char *param_5)

{
  char cVar1;
  DArrayTy *pDVar2;
  code *pcVar3;
  SettMapMTy *pSVar4;
  int errorCode;
  void *pvVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char *pcVar9;
  undefined4 unaff_ESI;
  char *pcVar10;
  void *unaff_EDI;
  char *pcVar11;
  InternalExceptionFrame local_4c;
  SettMapMTy *local_8;
  
  if (this->field_1F84 != (DArrayTy *)0x0) {
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    local_8 = this;
    errorCode = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar4 = local_8;
    if (errorCode == 0) {
      pDVar2 = local_8->field_1F84;
      if (param_2 < pDVar2->count) {
        pvVar5 = (void *)(pDVar2->elementSize * param_2 + (int)pDVar2->data);
      }
      else {
        pvVar5 = (void *)0x0;
      }
      if (pvVar5 != (void *)0x0) {
        if ((param_3 == 2) || (param_3 == 3)) {
          DeletePlayer(local_8,param_1);
        }
        pDVar2 = pSVar4->field_1F84;
        if (param_2 < pDVar2->count) {
          pcVar9 = (char *)(pDVar2->elementSize * param_2 + (int)pDVar2->data);
        }
        else {
          pcVar9 = (char *)0x0;
        }
        pcVar9[4] = (char)param_3;
        pcVar9[5] = param_4;
        if ((param_3 != 2) && (param_3 != 3)) {
          param_1 = 0;
        }
        *(int *)(pcVar9 + 6) = param_1;
        if (param_5 == (char *)0x0) {
          param_5 = &DAT_008016a0;
        }
        uVar7 = 0xffffffff;
        do {
          pcVar10 = param_5;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar10 = param_5 + 1;
          cVar1 = *param_5;
          param_5 = pcVar10;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        pcVar10 = pcVar10 + -uVar7;
        pcVar11 = pcVar9 + 10;
        for (uVar8 = uVar7 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pcVar11 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar11 = pcVar11 + 1;
        }
        if (pcVar9[4] == '\0') {
          if (pcVar9[2] != 0xff) {
            thunk_FUN_0056a840(&DAT_00807620,pcVar9[2]);
          }
          pcVar9[2] = -1;
        }
        pSVar4 = local_8;
        if (pcVar9[2] == -1) {
          pcVar9[0x4f] = '\0';
        }
        else {
          pcVar9[0x4f] = '\x01';
        }
        if ((*pcVar9 != '\0') && (pcVar9[4] != '\x02')) {
          pcVar9[1] = '\x01';
        }
        CheckPlList(local_8,unaff_EDI);
        if ((pSVar4->field_1E26 != CASE_C) && (pSVar4->field_1E26 != CASE_10)) {
          thunk_FUN_005d1380((AnonShape_005D1380_CEECF2C3 *)pSVar4);
        }
        (*(code *)pSVar4->field_0000->field_002C)();
        SettMapTy::PaintSC((SettMapTy *)pSVar4);
        pSVar4->field_2121 = pSVar4->field_2121 + 1;
      }
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_settmobj_cpp_007cd258,0x605,0,errorCode,
                               &DAT_007a4ccc,s_SettMapMTy__ChangePlayerList_007cd4a0);
    if (iVar6 != 0) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    RaiseInternalException(errorCode,0,s_E____titans_Start_settmobj_cpp_007cd258,0x605);
  }
  return;
}


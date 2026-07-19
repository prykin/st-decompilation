
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::GetMessage */

undefined4 __thiscall STPlaySystemC::GetMessage(STPlaySystemC *this,int param_1)

{
  char cVar1;
  STPlaySystemCVTable *pSVar2;
  code *pcVar3;
  cMf32 *this_00;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  DWORD DVar8;
  uint uVar9;
  uint uVar10;
  STPlaySystemC *pSVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  char *pcVar12;
  char *pcVar13;
  undefined1 local_2b8;
  char local_2b7 [515];
  InternalExceptionFrame local_b4;
  InternalExceptionFrame local_70;
  undefined4 local_2c [8];
  STPlaySystemC *local_c;
  int local_8;
  
  local_c = this;
  iVar4 = SystemClassTy::GetMessage((SystemClassTy *)this,param_1);
  if (iVar4 != 0xffff) {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    iVar4 = Library::MSVCRT::__setjmp3(local_70.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pSVar11 = local_c;
    if (iVar4 == 0) {
      if (*(int *)(param_1 + 0x10) == 8) {
        local_b4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_b4;
        iVar4 = Library::MSVCRT::__setjmp3(local_b4.jumpBuffer,0,unaff_EDI,unaff_ESI);
        this_00 = DAT_00806754;
        if (iVar4 == 0) {
          if (DAT_00802a58 != (cLoadingTy *)0x0) {
            uVar10 = 0xffffffff;
            pcVar12 = PTR_DAT_007c83b0;
            do {
              pcVar13 = pcVar12;
              if (uVar10 == 0) break;
              uVar10 = uVar10 - 1;
              pcVar13 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar1 != '\0');
            uVar10 = ~uVar10;
            local_2b8 = 0xc;
            pcVar12 = pcVar13 + -uVar10;
            pcVar13 = local_2b7;
            for (uVar9 = uVar10 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar13 = pcVar13 + 4;
            }
            local_8 = 0;
            for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
              *pcVar13 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            }
            cMf32::ToBeg(DAT_00806754,FUN_006f2d10,&local_2b8);
            puVar5 = cMf32::RecNameGetNext(this_00);
            iVar4 = local_8;
            while (puVar5 != (undefined4 *)0x0) {
              local_8 = iVar4 + 1;
              puVar5 = cMf32::RecNameGetNext(this_00);
              iVar4 = local_8;
            }
            local_8 = iVar4;
            puVar6 = (uint *)FUN_006b0140(19000,DAT_00807618);
            cLoadingTy::SetProcess(DAT_00802a58,0,puVar6,iVar4);
          }
          pSVar11 = local_c;
          DAT_00802a3c = 0;
          mfAObjEnum(DAT_00806754,PTR_DAT_007c83b0,&LAB_00403535,local_c,0);
          uVar7 = FUN_006b0140(0x4a39,DAT_00807618);
          wsprintfA((LPSTR)&DAT_0080f33a,s__d__s_007c2864,DAT_00802a3c,uVar7);
          if (DAT_00802a58 != (cLoadingTy *)0x0) {
            cLoadingTy::SetState(DAT_00802a58,CASE_2,0,(char *)&DAT_0080f33a);
          }
          g_currentExceptionFrame = local_b4.previous;
        }
        else {
          g_currentExceptionFrame = local_b4.previous;
          RaiseInternalException(iVar4,0,s_E____titans_Andrey_tplaysys_cpp_007c8430,0x42f);
          pSVar11 = local_c;
        }
        uVar10 = 0;
        pSVar2 = pSVar11->vtable;
        puVar5 = local_2c;
        for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        local_2c[3] = 0xf;
        local_2c[4] = 0x111;
        (*pSVar2->SendMessage)((SystemWithNamedObjClassTy *)pSVar11,(int)local_2c);
        if (DAT_00808783 == '\x03') {
          pSVar11->field_0038 = 1;
          if (DAT_00811764 != (undefined4 *)0x0) {
            FUN_006b6500((int)DAT_00811764,DAT_0080733c);
          }
          if (DAT_0080877e == '\0') {
            FUN_00715360(DAT_00811764,1,'.',(char *)0x0,0,0,0xffffffff);
          }
          else if (DAT_00808aaf != 0) {
            puVar5 = &DAT_00808af8;
            do {
              uVar7 = FUN_006e51b0(0x807620);
              *puVar5 = uVar7;
              uVar10 = uVar10 + 1;
              puVar5 = puVar5 + 0x27;
            } while (uVar10 < DAT_00808aaf);
          }
        }
        DVar8 = timeGetTime();
        pSVar11->field_00BC = DVar8;
        pSVar11->field_007F = DVar8;
        pSVar11->field_0083 = DVar8;
      }
      else if (*(int *)(param_1 + 0x10) == 0x44ff) {
        uVar10 = 0;
        DAT_00808788 = 0;
        if (DAT_00808aaf != 0) {
          pcVar12 = &DAT_00808af6;
          do {
            puVar5 = DAT_00811764;
            if ((*(int *)(pcVar12 + -6) == pSVar11->field_00F4) && (*pcVar12 != '\0')) {
              *pcVar12 = '\0';
              FUN_006b6500((int)puVar5,1);
              FUN_00715360(DAT_00811764,pSVar11->field_00F4,'7',(char *)0x0,0,0,0xffffffff);
              FUN_006b6500((int)DAT_00811764,DAT_0080733c);
              thunk_FUN_005508f0(pSVar11,pSVar11->field_00F4);
              pSVar11->field_00F4 = 0;
            }
            uVar10 = uVar10 + 1;
            pcVar12 = pcVar12 + 0x9c;
          } while (uVar10 < DAT_00808aaf);
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
      }
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    g_currentExceptionFrame = local_70.previous;
    iVar4 = ReportDebugMessage(s_E____titans_Andrey_tplaysys_cpp_007c8430,0x463,0,iVar4,
                               &DAT_007a4ccc,s_STPlaySystemC__GetMessage_error___007c8554);
    if (iVar4 != 0) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
  }
  return 0xffff;
}



/* Recovered from embedded debug metadata:
   E:\__titans\Start\wait_obj.cpp
   WaitTy::AddStr */

void __thiscall WaitTy::AddStr(WaitTy *this,uint *param_1,int param_2)

{
  code *pcVar1;
  WaitTy *pWVar2;
  int iVar3;
  AnonShape_006B7830_769CA2DF *pAVar4;
  AnonShape_006B5570_4D68B99C *pAVar5;
  AnonShape_006B5570_4D68B99C *pAVar6;
  char *text;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  InternalExceptionFrame local_54;
  AnonShape_006B5570_4D68B99C *local_10;
  WaitTy *local_c;
  uint *local_8;
  
  if (param_1 != (uint *)0x0) {
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    local_c = this;
    iVar3 = Library::MSVCRT::__setjmp3(local_54.jumpBuffer,0,unaff_EDI,unaff_ESI);
    pWVar2 = local_c;
    if (iVar3 == 0) {
      if (param_2 != 0) {
        pAVar4 = (AnonShape_006B7830_769CA2DF *)local_c->field_1AF0;
        uVar9 = local_c->field_1AF4;
        if ((int)uVar9 < (int)pAVar4->field_0008) {
          do {
            FUN_006b7830(pAVar4,uVar9);
            pAVar4 = (AnonShape_006B7830_769CA2DF *)pWVar2->field_1AF0;
            uVar9 = pWVar2->field_1AF4;
          } while ((int)uVar9 < (int)pAVar4->field_0008);
        }
        FUN_006b4170(pWVar2->field_1AEC,0,0,pWVar2->field_1AF4 * 0x13,
                     *(int *)(pWVar2->field_1AEC + 4),(0x16 - pWVar2->field_1AF4) * 0x13,0);
      }
      pAVar5 = (AnonShape_006B5570_4D68B99C *)
               ccFntTy::_TxtToSarr((ccFntTy *)PTR_0081176c->field_0030,param_1);
      pAVar6 = local_10;
      if (pAVar5 != (AnonShape_006B5570_4D68B99C *)0x0) {
        pAVar6 = (AnonShape_006B5570_4D68B99C *)
                 ccFntTy::FormSarr((ccFntTy *)PTR_0081176c->field_0030,(uint *)pAVar5,
                                   s________________007c21d8,0x1e4,0,0xffffffff,1);
        local_10 = pAVar6;
        FUN_006b5570(pAVar5);
      }
      pWVar2->field_1AF4 = *(undefined4 *)(pWVar2->field_1AF0 + 8);
      if (pAVar6 != (AnonShape_006B5570_4D68B99C *)0x0) {
        iVar3 = 0;
        if (0 < (int)pAVar6->field_0008) {
          if ((int)pAVar6->field_0008 < 1) {
            text = (char *)0x0;
            goto LAB_005e7d14;
          }
          do {
            text = *(char **)(pAVar6->field_0014 + iVar3 * 4);
LAB_005e7d14:
            Library::DKW::TBL::FUN_006b5aa0((uint *)pWVar2->field_1AF0,text);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)pAVar6->field_0008);
        }
        FUN_006b5570(pAVar6);
      }
      iVar3 = *(int *)(pWVar2->field_1AF0 + 8);
      if (iVar3 < 0x16) {
        iVar10 = iVar3 + -1;
      }
      else if (iVar3 < 0x2c) {
        puVar7 = (undefined4 *)pWVar2->field_1AEC;
        iVar10 = 0x2c - iVar3;
        Library::DKW::WGR::FUN_006b55f0
                  (puVar7,0,0,0,(byte *)puVar7,0,0,iVar3 * 0x13 + -0x1a2,puVar7[1],iVar10 * 0x13);
      }
      else {
        iVar3 = pWVar2->field_1AEC;
        iVar10 = 0;
        local_8 = *(uint **)(iVar3 + 0x14);
        if (local_8 == (uint *)0x0) {
          local_8 = (uint *)(((uint)*(ushort *)(iVar3 + 0xe) * *(int *)(iVar3 + 4) + 0x1f >> 3 &
                             0x1ffffffc) * *(int *)(iVar3 + 8));
        }
        puVar7 = (undefined4 *)FUN_006b4fa0(iVar3);
        for (uVar9 = (uint)local_8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        for (uVar9 = (uint)local_8 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
          *(undefined1 *)puVar7 = 0;
          puVar7 = (undefined4 *)((int)puVar7 + 1);
        }
      }
      for (iVar3 = *(int *)(pWVar2->field_1AF0 + 8); 0x15 < iVar3; iVar3 = *(int *)(iVar3 + -0x10))
      {
        FUN_006b7830((AnonShape_006B7830_769CA2DF *)pWVar2->field_1AF0,0);
        iVar3 = pWVar2->field_1AF0;
        pWVar2->field_1AF0 = iVar3 + -0x18;
      }
      if (iVar10 <= *(int *)(pWVar2->field_1AF0 + 8) + -1) {
        local_8 = &pWVar2->field_1A94 + iVar10;
        uVar9 = iVar10 * 0x13;
        do {
          FUN_006b4170(pWVar2->field_1AEC,0,0,uVar9,*(int *)(pWVar2->field_1AEC + 4),0x13,0);
          ccFntTy::SetSurf((ccFntTy *)PTR_0081176c->field_0030,pWVar2->field_1AEC,0,2,uVar9,
                           *(int *)(pWVar2->field_1AEC + 4) + -4,0x13);
          if (iVar10 < *(int *)(pWVar2->field_1AF0 + 8)) {
            puVar8 = *(uint **)(*(int *)(pWVar2->field_1AF0 + 0x14) + iVar10 * 4);
          }
          else {
            puVar8 = (uint *)0x0;
          }
          ccFntTy::WrStr((ccFntTy *)PTR_0081176c->field_0030,puVar8,0,-1,1);
          FUN_006b35d0(DAT_008075a8,*local_8);
          iVar10 = iVar10 + 1;
          local_8 = local_8 + 1;
          uVar9 = uVar9 + 0x13;
        } while (iVar10 <= *(int *)(pWVar2->field_1AF0 + 8) + -1);
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar10 = ReportDebugMessage(s_E____titans_Start_wait_obj_cpp_007cdd5c,0x120,0,iVar3,
                                &DAT_007a4ccc,s_WaitTy__AddStr_007cddc4);
    if (iVar10 != 0) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_wait_obj_cpp_007cdd5c,0x120);
  }
  return;
}


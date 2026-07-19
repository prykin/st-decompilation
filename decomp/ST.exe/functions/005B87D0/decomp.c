
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetPanel */

undefined4 __thiscall
MMsgTy::SetPanel(MMsgTy *this,UINT param_1,int param_2,int param_3,UINT param_4)

{
  int *piVar1;
  code *pcVar2;
  MMObjTy *this_00;
  MMObjTy MVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  UINT *pUVar11;
  void *unaff_EDI;
  MMObjTy *pMVar12;
  int *piVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint local_478 [256];
  InternalExceptionFrame local_78;
  int local_34 [8];
  MMObjTy *local_14;
  UINT *local_10;
  uint local_c;
  uint local_8;
  
  local_c = local_c & 0xffffff00;
  if ((this[0x65] == (MMsgTy)0x2) && (this[0x1ca9] == (MMsgTy)0x0)) {
    local_78.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_78;
    local_14 = (MMObjTy *)this;
    iVar4 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_14;
    if (iVar4 == 0) {
      MMObjTy::CloseButtons(local_14);
      HidePanel((MMsgTy *)this_00,0,0,1);
      if (param_1 == 0) {
        *(undefined4 *)(this_00 + 0x1cd0) = 0;
      }
      else {
        *(UINT *)(this_00 + 0x1cd0) = param_1;
        if (param_3 == 0) {
          uVar6 = 0xffffffff;
          local_8 = *(uint *)(this_00 + 0x1d88);
          uVar5 = 7;
          iVar18 = -1;
          iVar15 = -1;
          iVar14 = 1;
          uVar16 = 0xffffffff;
          uVar10 = 0xfffffffe;
          iVar9 = 0x39;
          iVar4 = 0x158;
          puVar8 = (uint *)FUN_006b0140(param_1,DAT_00807618);
          puVar7 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),puVar8,iVar4,iVar9,uVar10,uVar16,
                              iVar14,iVar15,iVar18);
          (**(code **)(local_8 + 8))(puVar7,uVar5,uVar6);
          *(undefined4 *)(this_00 + 0x1d90) = 0;
        }
        else {
          uVar5 = FUN_006b0140(param_4,DAT_00807618);
          uVar6 = FUN_006b0140(param_1,DAT_00807618);
          wsprintfA((LPSTR)local_478,s__s___s__li__007ccca4,uVar6,uVar5,param_3);
          iVar4 = *(int *)(this_00 + 0x1d88);
          uVar6 = 0xffffffff;
          uVar5 = 7;
          puVar7 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),local_478,0x158,0x39,0xfffffffe,
                              0xffffffff,1,-1,-1);
          (**(code **)(iVar4 + 8))(puVar7,uVar5,uVar6);
          *(undefined4 *)(this_00 + 0x1d90) = 0;
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00[0x9a] != (MMObjTy)0x0) {
        do {
          uVar10 = local_8 & 0xff;
          local_10 = (UINT *)(uVar10 * 0x27 + param_2);
          if (*local_10 == 0) {
            pMVar12 = this_00 + uVar10 * 0x1fb + 0xbc;
            for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pMVar12 = 0;
              pMVar12 = pMVar12 + 4;
            }
            *(undefined2 *)pMVar12 = 0;
            pMVar12[2] = (MMObjTy)0x0;
          }
          else {
            uVar6 = 0xffffffff;
            uVar5 = 7;
            iVar20 = -1;
            iVar19 = -1;
            iVar18 = 1;
            uVar17 = 0xffffffff;
            uVar16 = 0xfffffffe;
            iVar15 = 0x1e;
            iVar14 = 0x7d;
            iVar4 = *(int *)(this_00 + uVar10 * 0x1fb + 0x174);
            iVar9 = uVar10 * 0x1fb;
            puVar8 = (uint *)FUN_006b0140(*local_10,DAT_00807618);
            puVar7 = ccFntTy::CreateTypeSSpr
                               (*(ccFntTy **)(DAT_0081176c + 0x30),puVar8,iVar14,iVar15,uVar16,
                                uVar17,iVar18,iVar19,iVar20);
            (**(code **)(iVar4 + 8))(puVar7,uVar5,uVar6);
            if ((*local_10 == *(UINT *)(this_00 + iVar9 + 0xbc)) && ((char)local_10[1] == '\0')) {
              *(int *)(this_00 + iVar9 + 0x17c) = *(int *)(this_00 + iVar9 + 0x180) + -3;
              pUVar11 = local_10;
              pMVar12 = this_00 + iVar9 + 0xbc;
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(UINT *)pMVar12 = *pUVar11;
                pUVar11 = pUVar11 + 1;
                pMVar12 = pMVar12 + 4;
              }
              *(short *)pMVar12 = (short)*pUVar11;
              pMVar12[2] = *(MMObjTy *)((int)pUVar11 + 2);
            }
            else {
              *(undefined4 *)(this_00 + iVar9 + 0x17c) = 0;
              pUVar11 = local_10;
              pMVar12 = this_00 + iVar9 + 0xbc;
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *(UINT *)pMVar12 = *pUVar11;
                pUVar11 = pUVar11 + 1;
                pMVar12 = pMVar12 + 4;
              }
              *(short *)pMVar12 = (short)*pUVar11;
              pMVar12[2] = *(MMObjTy *)((int)pUVar11 + 2);
            }
          }
          MVar3 = (MMObjTy)((char)local_8 + 1);
          local_8 = CONCAT31(local_8._1_3_,MVar3);
        } while ((byte)MVar3 < (byte)this_00[0x9a]);
      }
      MVar3 = (MMObjTy)0x0;
      local_8 = local_8 & 0xffffff00;
      if (this_00[0x9a] != (MMObjTy)0x0) {
        do {
          uVar10 = local_8 & 0xff;
          *(undefined4 *)(this_00 + uVar10 * 0x1fb + 0x127) = *(undefined4 *)(this_00 + 0x61);
          *(uint *)(this_00 + uVar10 * 0x1fb + 0x123) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)(this_00 + uVar10 * 0x1fb + 0xbc) != 0) {
            local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
          }
          MVar3 = (MMObjTy)((char)MVar3 + 1);
          local_8 = CONCAT31(local_8._1_3_,MVar3);
        } while ((byte)MVar3 < (byte)this_00[0x9a]);
      }
      pMVar12 = this_00 + 0x1c82;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined4 *)pMVar12 = 0;
        pMVar12 = pMVar12 + 4;
      }
      *(undefined2 *)pMVar12 = 0;
      *(undefined4 *)(this_00 + 0x1c9c) = 0x1010101;
      *(undefined4 *)(this_00 + 0x1ca0) = 0x1010101;
      *(undefined4 *)(this_00 + 0x1ca4) = 0x1010101;
      this_00[0x1ca8] = (MMObjTy)0x1;
      this_00[0x65] = (MMObjTy)0x3;
      thunk_FUN_005b6730(this_00,5,'\0',-1);
      iVar4 = *(int *)(this_00 + 0x1cab);
      if (iVar4 != 0) {
        piVar1 = *(int **)(this_00 + 0xc);
        piVar13 = local_34;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar13 = 0;
          piVar13 = piVar13 + 1;
        }
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar4;
        (**(code **)(*piVar1 + 0x18))(local_34);
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x181,0,iVar4,&DAT_007a4ccc
                               ,s_MMsgTy__SetPanel_007cccb4);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x181);
  }
  return 0;
}


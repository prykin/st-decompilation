
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetPanel */

undefined4 __thiscall
MMsgTy::SetPanel(MMsgTy *this,UINT param_1,int param_2,int param_3,UINT param_4)

{
  StartSystemTy *pSVar1;
  code *pcVar2;
  MMObjTy *this_00;
  byte bVar3;
  int iVar4;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 *puVar5;
  uint *extraout_EAX_01;
  uint *extraout_EAX_02;
  int iVar6;
  uint uVar7;
  undefined4 unaff_ESI;
  UINT *pUVar8;
  void *unaff_EDI;
  UINT *pUVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_478 [256];
  InternalExceptionFrame local_78;
  int local_34 [8];
  MMObjTy *local_14;
  UINT *local_10;
  uint local_c;
  uint local_8;
  
  local_c = local_c & 0xffffff00;
  if ((this->field_0065 == '\x02') && (this->field_1CA9 == '\0')) {
    local_78.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_78;
    local_14 = (MMObjTy *)this;
    iVar4 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_14;
    if (iVar4 == 0) {
      MMObjTy::CloseButtons(local_14);
      HidePanel((MMsgTy *)this_00,0,0,1);
      if (param_1 == 0) {
        *(undefined4 *)&this_00[0x20].field_0x70 = 0;
      }
      else {
        *(UINT *)&this_00[0x20].field_0x70 = param_1;
        if (param_3 == 0) {
          uVar19 = 0xffffffff;
          local_8 = *(uint *)&this_00[0x21].field_0x45;
          uVar18 = 7;
          iVar15 = -1;
          iVar12 = -1;
          iVar11 = 1;
          uVar7 = 0xffffffff;
          cVar13 = CASE_FFFFFFFE;
          iVar6 = 0x39;
          iVar4 = 0x158;
          LoadResourceString(param_1,HINSTANCE_00807618);
          puVar5 = ccFntTy::CreateTypeSSpr
                             ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_01,iVar4,iVar6,cVar13
                              ,uVar7,iVar11,iVar12,iVar15);
          (**(code **)(local_8 + 8))(puVar5,uVar18,uVar19);
          *(undefined4 *)&this_00[0x21].field_0x4d = 0;
        }
        else {
          LoadResourceString(param_4,HINSTANCE_00807618);
          uVar18 = extraout_EAX;
          LoadResourceString(param_1,HINSTANCE_00807618);
          wsprintfA((LPSTR)local_478,s__s___s__li__007ccca4,extraout_EAX_00,uVar18,param_3);
          iVar4 = *(int *)&this_00[0x21].field_0x45;
          uVar19 = 0xffffffff;
          uVar18 = 7;
          puVar5 = ccFntTy::CreateTypeSSpr
                             ((ccFntTy *)PTR_0081176c->field_0030,local_478,0x158,0x39,CASE_FFFFFFFE
                              ,0xffffffff,1,-1,-1);
          (**(code **)(iVar4 + 8))(puVar5,uVar18,uVar19);
          *(undefined4 *)&this_00[0x21].field_0x4d = 0;
        }
      }
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0x9a != '\0') {
        do {
          uVar7 = local_8 & 0xff;
          local_10 = (UINT *)(uVar7 * 0x27 + param_2);
          if (*local_10 == 0) {
            puVar5 = (undefined4 *)(uVar7 * 0x1fb + 0xbc + (int)this_00);
            for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar5 = 0;
              puVar5 = puVar5 + 1;
            }
            *(undefined2 *)puVar5 = 0;
            *(undefined1 *)((int)puVar5 + 2) = 0;
          }
          else {
            uVar19 = 0xffffffff;
            uVar18 = 7;
            iVar17 = -1;
            iVar16 = -1;
            iVar15 = 1;
            uVar14 = 0xffffffff;
            cVar13 = CASE_FFFFFFFE;
            iVar12 = 0x1e;
            iVar11 = 0x7d;
            iVar4 = *(int *)((int)this_00 + uVar7 * 0x1fb + 0x174);
            iVar6 = uVar7 * 0x1fb;
            LoadResourceString(*local_10,HINSTANCE_00807618);
            puVar5 = ccFntTy::CreateTypeSSpr
                               ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_02,iVar11,iVar12,
                                cVar13,uVar14,iVar15,iVar16,iVar17);
            (**(code **)(iVar4 + 8))(puVar5,uVar18,uVar19);
            pUVar9 = (UINT *)((int)this_00 + iVar6 + 0xbc);
            if ((*local_10 == *(UINT *)((int)this_00 + iVar6 + 0xbc)) && ((char)local_10[1] == '\0')
               ) {
              *(int *)((int)this_00 + iVar6 + 0x17c) = *(int *)((int)this_00 + iVar6 + 0x180) + -3;
              pUVar8 = local_10;
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pUVar9 = *pUVar8;
                pUVar8 = pUVar8 + 1;
                pUVar9 = pUVar9 + 1;
              }
              *(short *)pUVar9 = (short)*pUVar8;
              *(undefined1 *)((int)pUVar9 + 2) = *(undefined1 *)((int)pUVar8 + 2);
            }
            else {
              *(undefined4 *)((int)this_00 + iVar6 + 0x17c) = 0;
              pUVar8 = local_10;
              for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pUVar9 = *pUVar8;
                pUVar8 = pUVar8 + 1;
                pUVar9 = pUVar9 + 1;
              }
              *(short *)pUVar9 = (short)*pUVar8;
              *(undefined1 *)((int)pUVar9 + 2) = *(undefined1 *)((int)pUVar8 + 2);
            }
          }
          bVar3 = (char)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < (byte)this_00->field_0x9a);
      }
      bVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0x9a != '\0') {
        do {
          uVar7 = local_8 & 0xff;
          *(undefined4 *)((int)this_00 + uVar7 * 0x1fb + 0x127) =
               *(undefined4 *)&this_00->field_0x61;
          *(uint *)((int)this_00 + uVar7 * 0x1fb + 0x123) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)((int)this_00 + uVar7 * 0x1fb + 0xbc) != 0) {
            local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
          }
          bVar3 = bVar3 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < (byte)this_00->field_0x9a);
      }
      puVar5 = (undefined4 *)&this_00[0x20].field_0x22;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      *(undefined2 *)puVar5 = 0;
      *(undefined4 *)&this_00[0x20].field_0x3c = 0x1010101;
      *(undefined4 *)&this_00[0x20].field_0x40 = 0x1010101;
      *(undefined4 *)&this_00[0x20].field_0x44 = 0x1010101;
      this_00[0x20].field_0x48 = 1;
      this_00->field_0x65 = 3;
      thunk_FUN_005b6730(this_00,5,'\0',-1);
      iVar4 = *(int *)&this_00[0x20].field_0x4b;
      if (iVar4 != 0) {
        pSVar1 = this_00->field_000C;
        piVar10 = local_34;
        for (iVar6 = 8; iVar6 != 0; iVar6 = iVar6 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar4;
        (*pSVar1->vtable->vfunc_18)(local_34);
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar6 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x181,0,iVar4,&DAT_007a4ccc
                               ,s_MMsgTy__SetPanel_007cccb4);
    if (iVar6 != 0) {
      pcVar2 = (code *)swi(3);
      uVar18 = (*pcVar2)();
      return uVar18;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x181);
  }
  return 0;
}


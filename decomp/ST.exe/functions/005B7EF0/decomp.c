
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetMessage */

undefined4 __thiscall
MMsgTy::SetMessage(MMsgTy *this,UINT param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,int param_6,UINT param_7)

{
  char cVar1;
  code *pcVar2;
  MMsgTy *this_00;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  uint local_478 [256];
  InternalExceptionFrame local_78;
  int local_34 [8];
  MMsgTy *local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_c = local_c & 0xffffff00;
  if ((param_1 != 0) && (this->field_1CA9 == '\0')) {
    local_78.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_78;
    local_14 = this;
    iVar4 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_14;
    if (iVar4 == 0) {
      iVar4 = *(int *)&local_14[1].field_0x1;
      if (iVar4 != 0) {
        piVar10 = local_34;
        for (iVar9 = 8; iVar9 != 0; iVar9 = iVar9 + -1) {
          *piVar10 = 0;
          piVar10 = piVar10 + 1;
        }
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar4;
        (**(code **)(**(int **)&this_00->field_0xc + 0x18))(local_34);
      }
      this_00->field_1CA9 = 1;
      puVar7 = (undefined4 *)&this_00[1].field_0x26;
      puVar12 = (undefined4 *)&this_00->field_0x1a60;
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar12 = *puVar7;
        puVar7 = puVar7 + 1;
        puVar12 = puVar12 + 1;
      }
      *(undefined2 *)puVar12 = *(undefined2 *)puVar7;
      *(undefined1 *)((int)puVar12 + 2) = *(undefined1 *)((int)puVar7 + 2);
      this_00->field_0x1a5f = this_00->field_0065;
      this_00->field_002D = 0x21;
      puVar7 = (undefined4 *)&this_00->field_0x1c82;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = 0;
        puVar7 = puVar7 + 1;
      }
      *(undefined2 *)puVar7 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0x9a != '\0') {
        do {
          uVar11 = local_8 & 0xff;
          if (*(int *)(&this_00->field_0x66 + uVar11 * 4) != 0) {
            FUN_006e6080(this_00,2,*(int *)(&this_00->field_0x66 + uVar11 * 4),
                         (undefined4 *)&this_00->field_0x1d);
            *(ushort *)(&this_00->field_0x1c82 + uVar11 * 2) =
                 (-(ushort)(*(int *)&this_00->field_0x31 != 0) & 2) - 1;
          }
          puVar7 = (undefined4 *)(&this_00->field_0xbc + uVar11 * 0x1fb);
          puVar12 = (undefined4 *)(&this_00->field_0x1a87 + uVar11 * 0x27);
          for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar12 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar12 = puVar12 + 1;
          }
          *(undefined2 *)puVar12 = *(undefined2 *)puVar7;
          *(undefined1 *)((int)puVar12 + 2) = *(undefined1 *)((int)puVar7 + 2);
          bVar3 = (char)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < (byte)this_00->field_0x9a);
      }
      *(UINT *)&this_00[1].field_0x26 = param_1;
      if (param_6 == 0) {
        uVar6 = 0xffffffff;
        local_10 = *(int *)&this_00[1].field_0xde;
        uVar5 = 7;
        iVar16 = -1;
        iVar15 = -1;
        iVar13 = 1;
        uVar11 = 0xffffffff;
        cVar14 = CASE_FFFFFFFE;
        iVar9 = 0x39;
        iVar4 = 0x158;
        puVar8 = (uint *)FUN_006b0140(param_1,DAT_00807618);
        puVar7 = ccFntTy::CreateTypeSSpr
                           (*(ccFntTy **)(DAT_0081176c + 0x30),puVar8,iVar4,iVar9,cVar14,uVar11,
                            iVar13,iVar15,iVar16);
        (**(code **)(local_10 + 8))(puVar7,uVar5,uVar6);
      }
      else {
        uVar5 = FUN_006b0140(param_7,DAT_00807618);
        uVar6 = FUN_006b0140(param_1,DAT_00807618);
        wsprintfA((LPSTR)local_478,s__s___s__li__007ccca4,uVar6,uVar5,param_6);
        iVar4 = *(int *)&this_00[1].field_0xde;
        uVar6 = 0xffffffff;
        uVar5 = 7;
        puVar7 = ccFntTy::CreateTypeSSpr
                           (*(ccFntTy **)(DAT_0081176c + 0x30),local_478,0x158,0x39,CASE_FFFFFFFE,
                            0xffffffff,1,-1,-1);
        (**(code **)(iVar4 + 8))(puVar7,uVar5,uVar6);
      }
      cVar1 = this_00->field_0x9a;
      bVar3 = 0;
      *(undefined4 *)&this_00[1].field_0xe6 = 0;
      local_8 = local_8 & 0xffffff00;
      if (cVar1 != '\0') {
        do {
          uVar11 = local_8 & 0xff;
          bVar3 = bVar3 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar3);
          *(undefined4 *)(&this_00->field_0xbc + uVar11 * 0x1fb) = 0;
          (&this_00->field_0xe1)[uVar11 * 0x1fb] = 1;
        } while (bVar3 < (byte)this_00->field_0x9a);
      }
      if (param_2 == '\0') {
        *(undefined4 *)&this_00->field_0x4b2 = 0x24b8;
        this_00->field_0x4d7 = 1;
        iVar4 = 8;
        if (param_3 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)&this_00->field_0x4b7;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          puVar7 = (undefined4 *)&this_00->field_0x4b7;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *param_3;
            param_3 = param_3 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        uVar6 = 0xffffffff;
        uVar5 = 7;
        iVar17 = -1;
        iVar4 = *(int *)&this_00->field_0x56a;
        iVar16 = -1;
        iVar15 = 1;
        uVar11 = 0xffffffff;
        cVar14 = CASE_FFFFFFFE;
        iVar13 = 0x1e;
        iVar9 = 0x7d;
        puVar8 = (uint *)FUN_006b0140(*(UINT *)&this_00->field_0x4b2,DAT_00807618);
        puVar7 = ccFntTy::CreateTypeSSpr
                           (*(ccFntTy **)(DAT_0081176c + 0x30),puVar8,iVar9,iVar13,cVar14,uVar11,
                            iVar15,iVar16,iVar17);
        (**(code **)(iVar4 + 8))(puVar7,uVar5,uVar6);
        *(undefined4 *)&this_00->field_0x572 = 0;
      }
      else {
        if (param_2 == '\x01') {
          *(undefined4 *)&this_00->field_0x4b2 = 0x24b9;
          this_00->field_0x4d7 = 1;
          iVar4 = 8;
          if (param_3 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            puVar7 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *param_3;
              param_3 = param_3 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          uVar6 = 0xffffffff;
          uVar5 = 7;
          iVar17 = -1;
          iVar4 = *(int *)&this_00->field_0x56a;
          iVar16 = -1;
          iVar15 = 1;
          uVar11 = 0xffffffff;
          cVar14 = CASE_FFFFFFFE;
          iVar13 = 0x1e;
          iVar9 = 0x7d;
          puVar8 = (uint *)FUN_006b0140(*(UINT *)&this_00->field_0x4b2,DAT_00807618);
          puVar7 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),puVar8,iVar9,iVar13,cVar14,uVar11,
                              iVar15,iVar16,iVar17);
          (**(code **)(iVar4 + 8))(puVar7,uVar5,uVar6);
          *(undefined4 *)&this_00->field_0x572 = 0;
          *(undefined4 *)&this_00->field_0x2b7 = 0x24ba;
          this_00->field_0x2dc = 1;
          param_5 = param_4;
        }
        else {
          if (param_2 != '\x02') goto LAB_005b8415;
          *(undefined4 *)&this_00->field_0x6ad = 0x24b9;
          this_00->field_0x6d2 = 1;
          iVar4 = 8;
          if (param_3 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)&this_00->field_0x6b2;
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            puVar7 = (undefined4 *)&this_00->field_0x6b2;
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *param_3;
              param_3 = param_3 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          uVar6 = 0xffffffff;
          uVar5 = 7;
          iVar17 = -1;
          iVar4 = *(int *)&this_00->field_0x765;
          iVar16 = -1;
          iVar15 = 1;
          uVar11 = 0xffffffff;
          cVar14 = CASE_FFFFFFFE;
          iVar13 = 0x1e;
          iVar9 = 0x7d;
          puVar8 = (uint *)FUN_006b0140(*(UINT *)&this_00->field_0x6ad,DAT_00807618);
          puVar7 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),puVar8,iVar9,iVar13,cVar14,uVar11,
                              iVar15,iVar16,iVar17);
          (**(code **)(iVar4 + 8))(puVar7,uVar5,uVar6);
          *(undefined4 *)&this_00->field_0x76d = 0;
          *(undefined4 *)&this_00->field_0x4b2 = 0x24ba;
          this_00->field_0x4d7 = 1;
          iVar4 = 8;
          if (param_4 == (undefined4 *)0x0) {
            puVar7 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = 0;
              puVar7 = puVar7 + 1;
            }
          }
          else {
            puVar7 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar4 != 0; iVar4 = iVar4 + -1) {
              *puVar7 = *param_4;
              param_4 = param_4 + 1;
              puVar7 = puVar7 + 1;
            }
          }
          uVar6 = 0xffffffff;
          uVar5 = 7;
          iVar17 = -1;
          iVar4 = *(int *)&this_00->field_0x56a;
          iVar16 = -1;
          iVar15 = 1;
          uVar11 = 0xffffffff;
          cVar14 = CASE_FFFFFFFE;
          iVar13 = 0x1e;
          iVar9 = 0x7d;
          puVar8 = (uint *)FUN_006b0140(*(UINT *)&this_00->field_0x4b2,DAT_00807618);
          puVar7 = ccFntTy::CreateTypeSSpr
                             (*(ccFntTy **)(DAT_0081176c + 0x30),puVar8,iVar9,iVar13,cVar14,uVar11,
                              iVar15,iVar16,iVar17);
          (**(code **)(iVar4 + 8))(puVar7,uVar5,uVar6);
          *(undefined4 *)&this_00->field_0x572 = 0;
          *(undefined4 *)&this_00->field_0x2b7 = 0x24bb;
          this_00->field_0x2dc = 1;
        }
        iVar4 = 8;
        if (param_5 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)&this_00->field_0x2bc;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = 0;
            puVar7 = puVar7 + 1;
          }
        }
        else {
          puVar7 = (undefined4 *)&this_00->field_0x2bc;
          for (; iVar4 != 0; iVar4 = iVar4 + -1) {
            *puVar7 = *param_5;
            param_5 = param_5 + 1;
            puVar7 = puVar7 + 1;
          }
        }
        uVar6 = 0xffffffff;
        uVar5 = 7;
        iVar17 = -1;
        iVar4 = *(int *)&this_00->field_0x36f;
        iVar16 = -1;
        iVar15 = 1;
        uVar11 = 0xffffffff;
        cVar14 = CASE_FFFFFFFE;
        iVar13 = 0x1e;
        iVar9 = 0x7d;
        puVar8 = (uint *)FUN_006b0140(*(UINT *)&this_00->field_0x2b7,DAT_00807618);
        puVar7 = ccFntTy::CreateTypeSSpr
                           (*(ccFntTy **)(DAT_0081176c + 0x30),puVar8,iVar9,iVar13,cVar14,uVar11,
                            iVar15,iVar16,iVar17);
        (**(code **)(iVar4 + 8))(puVar7,uVar5,uVar6);
        *(undefined4 *)&this_00->field_0x377 = 0;
      }
LAB_005b8415:
      MMObjTy::CloseButtons((MMObjTy *)this_00);
      bVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_0x9a != '\0') {
        do {
          uVar11 = local_8 & 0xff;
          *(undefined4 *)(&this_00->field_0x127 + uVar11 * 0x1fb) = this_00->field_0061;
          *(uint *)(&this_00->field_0x123 + uVar11 * 0x1fb) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)(&this_00->field_0x1a87 + uVar11 * 0x27) != 0) {
            local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
          }
          bVar3 = bVar3 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar3);
        } while (bVar3 < (byte)this_00->field_0x9a);
      }
      if (this_00->field_0065 == '\x02') {
        this_00->field_0065 = 3;
        *(undefined4 *)&this_00->field_0x1c9c = 0x1010101;
        *(undefined4 *)&this_00->field_0x1ca0 = 0x1010101;
        *(undefined4 *)&this_00->field_0x1ca4 = 0x1010101;
        this_00->field_0x1ca8 = 1;
        thunk_FUN_005b6730(this_00,5,'\0',-1);
        *(undefined1 *)(this_00 + 1) = 0;
      }
      else {
        this_00->field_0065 = 4;
        *(undefined4 *)&this_00->field_0x1c9c = 0x1010101;
        *(undefined4 *)&this_00->field_0x1ca0 = 0x1010101;
        *(undefined4 *)&this_00->field_0x1ca4 = 0x1010101;
        this_00->field_0x1ca8 = 1;
        thunk_FUN_005b6730(this_00,6,'\x01',-1);
        *(undefined1 *)(this_00 + 1) = 1;
        if (*(uint *)&this_00[1].field_0xe2 != 0xffffffff) {
          FUN_006b3af0(*(int **)&this_00[1].field_0x126,*(uint *)&this_00[1].field_0xe2);
        }
        local_8 = local_8 & 0xffffff00;
        if (this_00->field_0x9a != '\0') {
          do {
            iVar4 = (local_8 & 0xff) * 0x1fb;
            if (*(uint *)(&this_00->field_0x178 + (local_8 & 0xff) * 0x1fb) != 0xffffffff) {
              FUN_006b3af0(*(int **)(&this_00->field_0x1bc + iVar4),
                           *(uint *)(&this_00->field_0x178 + (local_8 & 0xff) * 0x1fb));
            }
            if (((&this_00->field_0xe2)[iVar4] != '\0') &&
               (*(uint *)(&this_00->field_0x209 + iVar4) != 0xffffffff)) {
              FUN_006b3af0(*(int **)(&this_00->field_0x24d + iVar4),
                           *(uint *)(&this_00->field_0x209 + iVar4));
            }
            bVar3 = (char)local_8 + 1;
            local_8 = CONCAT31(local_8._1_3_,bVar3);
          } while (bVar3 < (byte)this_00->field_0x9a);
          g_currentExceptionFrame = local_78.previous;
          return 1;
        }
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar9 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x14e,0,iVar4,&DAT_007a4ccc
                               ,s_MMsgTy__SetMessage_007ccc8c);
    if (iVar9 != 0) {
      pcVar2 = (code *)swi(3);
      uVar5 = (*pcVar2)();
      return uVar5;
    }
    RaiseInternalException(iVar4,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x14e);
  }
  return 0;
}


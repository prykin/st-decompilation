
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetMessage */

undefined4 __thiscall
MMsgTy::SetMessage(MMsgTy *this,UINT param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,int param_6,UINT param_7)

{
  code *pcVar1;
  MMsgTy *this_00;
  byte bVar2;
  int iVar3;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  undefined4 *puVar4;
  uint *extraout_EAX_01;
  uint *extraout_EAX_02;
  uint *extraout_EAX_03;
  uint *extraout_EAX_04;
  uint *extraout_EAX_05;
  uint *extraout_EAX_06;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
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
    iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0,unaff_EDI,unaff_ESI);
    this_00 = local_14;
    if (iVar3 == 0) {
      iVar3 = local_14->field_1CAB;
      if (iVar3 != 0) {
        piVar6 = local_34;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar6 = 0;
          piVar6 = piVar6 + 1;
        }
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar3;
        (*this_00->field_000C->vtable->vfunc_18)(local_34);
      }
      this_00->field_1CA9 = 1;
      puVar4 = &this_00->field_1CD0;
      puVar8 = (undefined4 *)&this_00->field_0x1a60;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar8 = *puVar4;
        puVar4 = puVar4 + 1;
        puVar8 = puVar8 + 1;
      }
      *(undefined2 *)puVar8 = *(undefined2 *)puVar4;
      *(undefined1 *)((int)puVar8 + 2) = *(undefined1 *)((int)puVar4 + 2);
      this_00->field_1A5F = this_00->field_0065;
      this_00->field_002D = 0x21;
      puVar4 = (undefined4 *)&this_00->field_0x1c82;
      for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar4 = 0;
        puVar4 = puVar4 + 1;
      }
      *(undefined2 *)puVar4 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != '\0') {
        do {
          uVar7 = local_8 & 0xff;
          if ((&this_00->field_0066)[uVar7] != 0) {
            FUN_006e6080(this_00,2,(&this_00->field_0066)[uVar7],(undefined4 *)&this_00->field_0x1d)
            ;
            *(ushort *)(&this_00->field_0x1c82 + uVar7 * 2) =
                 (-(ushort)(this_00->field_0031 != 0) & 2) - 1;
          }
          puVar4 = (undefined4 *)(&this_00->field_0xbc + uVar7 * 0x1fb);
          puVar8 = (undefined4 *)(&this_00->field_0x1a87 + uVar7 * 0x27);
          for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar8 = *puVar4;
            puVar4 = puVar4 + 1;
            puVar8 = puVar8 + 1;
          }
          *(undefined2 *)puVar8 = *(undefined2 *)puVar4;
          *(undefined1 *)((int)puVar8 + 2) = *(undefined1 *)((int)puVar4 + 2);
          bVar2 = (char)local_8 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < (byte)this_00->field_009A);
      }
      this_00->field_1CD0 = param_1;
      if (param_6 == 0) {
        uVar15 = 0xffffffff;
        local_10 = this_00->field_1D88;
        uVar14 = 7;
        iVar12 = -1;
        iVar11 = -1;
        iVar9 = 1;
        uVar7 = 0xffffffff;
        cVar10 = CASE_FFFFFFFE;
        iVar5 = 0x39;
        iVar3 = 0x158;
        LoadResourceString(param_1,HINSTANCE_00807618);
        puVar4 = ccFntTy::CreateTypeSSpr
                           ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_01,iVar3,iVar5,cVar10,
                            uVar7,iVar9,iVar11,iVar12);
        (**(code **)(local_10 + 8))(puVar4,uVar14,uVar15);
      }
      else {
        LoadResourceString(param_7,HINSTANCE_00807618);
        uVar14 = extraout_EAX;
        LoadResourceString(param_1,HINSTANCE_00807618);
        wsprintfA((LPSTR)local_478,s__s___s__li__007ccca4,extraout_EAX_00,uVar14,param_6);
        iVar3 = this_00->field_1D88;
        uVar15 = 0xffffffff;
        uVar14 = 7;
        puVar4 = ccFntTy::CreateTypeSSpr
                           ((ccFntTy *)PTR_0081176c->field_0030,local_478,0x158,0x39,CASE_FFFFFFFE,
                            0xffffffff,1,-1,-1);
        (**(code **)(iVar3 + 8))(puVar4,uVar14,uVar15);
      }
      bVar2 = 0;
      this_00->field_1D90 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != '\0') {
        do {
          uVar7 = local_8 & 0xff;
          bVar2 = bVar2 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar2);
          *(undefined4 *)(&this_00->field_0xbc + uVar7 * 0x1fb) = 0;
          (&this_00->field_0xe1)[uVar7 * 0x1fb] = 1;
        } while (bVar2 < (byte)this_00->field_009A);
      }
      if (param_2 == '\0') {
        this_00->field_04B2 = 0x24b8;
        this_00->field_04D7 = 1;
        iVar3 = 8;
        if (param_3 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)&this_00->field_0x4b7;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          puVar4 = (undefined4 *)&this_00->field_0x4b7;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = *param_3;
            param_3 = param_3 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        uVar15 = 0xffffffff;
        uVar14 = 7;
        iVar13 = -1;
        iVar3 = this_00->field_056A;
        iVar12 = -1;
        iVar11 = 1;
        uVar7 = 0xffffffff;
        cVar10 = CASE_FFFFFFFE;
        iVar9 = 0x1e;
        iVar5 = 0x7d;
        LoadResourceString(this_00->field_04B2,HINSTANCE_00807618);
        puVar4 = ccFntTy::CreateTypeSSpr
                           ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_06,iVar5,iVar9,cVar10,
                            uVar7,iVar11,iVar12,iVar13);
        (**(code **)(iVar3 + 8))(puVar4,uVar14,uVar15);
        this_00->field_0572 = 0;
      }
      else {
        if (param_2 == '\x01') {
          this_00->field_04B2 = 0x24b9;
          this_00->field_04D7 = 1;
          iVar3 = 8;
          if (param_3 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
          }
          else {
            puVar4 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar4 = *param_3;
              param_3 = param_3 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          uVar15 = 0xffffffff;
          uVar14 = 7;
          iVar13 = -1;
          iVar3 = this_00->field_056A;
          iVar12 = -1;
          iVar11 = 1;
          uVar7 = 0xffffffff;
          cVar10 = CASE_FFFFFFFE;
          iVar9 = 0x1e;
          iVar5 = 0x7d;
          LoadResourceString(this_00->field_04B2,HINSTANCE_00807618);
          puVar4 = ccFntTy::CreateTypeSSpr
                             ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_05,iVar5,iVar9,cVar10
                              ,uVar7,iVar11,iVar12,iVar13);
          (**(code **)(iVar3 + 8))(puVar4,uVar14,uVar15);
          this_00->field_0572 = 0;
          this_00->field_02B7 = 0x24ba;
          this_00->field_02DC = 1;
          param_5 = param_4;
        }
        else {
          if (param_2 != '\x02') goto LAB_005b8415;
          this_00->field_06AD = 0x24b9;
          this_00->field_06D2 = 1;
          iVar3 = 8;
          if (param_3 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)&this_00->field_0x6b2;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
          }
          else {
            puVar4 = (undefined4 *)&this_00->field_0x6b2;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar4 = *param_3;
              param_3 = param_3 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          uVar15 = 0xffffffff;
          uVar14 = 7;
          iVar13 = -1;
          iVar3 = this_00->field_0765;
          iVar12 = -1;
          iVar11 = 1;
          uVar7 = 0xffffffff;
          cVar10 = CASE_FFFFFFFE;
          iVar9 = 0x1e;
          iVar5 = 0x7d;
          LoadResourceString(this_00->field_06AD,HINSTANCE_00807618);
          puVar4 = ccFntTy::CreateTypeSSpr
                             ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_02,iVar5,iVar9,cVar10
                              ,uVar7,iVar11,iVar12,iVar13);
          (**(code **)(iVar3 + 8))(puVar4,uVar14,uVar15);
          this_00->field_076D = 0;
          this_00->field_04B2 = 0x24ba;
          this_00->field_04D7 = 1;
          iVar3 = 8;
          if (param_4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar4 = 0;
              puVar4 = puVar4 + 1;
            }
          }
          else {
            puVar4 = (undefined4 *)&this_00->field_0x4b7;
            for (; iVar3 != 0; iVar3 = iVar3 + -1) {
              *puVar4 = *param_4;
              param_4 = param_4 + 1;
              puVar4 = puVar4 + 1;
            }
          }
          uVar15 = 0xffffffff;
          uVar14 = 7;
          iVar13 = -1;
          iVar3 = this_00->field_056A;
          iVar12 = -1;
          iVar11 = 1;
          uVar7 = 0xffffffff;
          cVar10 = CASE_FFFFFFFE;
          iVar9 = 0x1e;
          iVar5 = 0x7d;
          LoadResourceString(this_00->field_04B2,HINSTANCE_00807618);
          puVar4 = ccFntTy::CreateTypeSSpr
                             ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_03,iVar5,iVar9,cVar10
                              ,uVar7,iVar11,iVar12,iVar13);
          (**(code **)(iVar3 + 8))(puVar4,uVar14,uVar15);
          this_00->field_0572 = 0;
          this_00->field_02B7 = 0x24bb;
          this_00->field_02DC = 1;
        }
        iVar3 = 8;
        if (param_5 == (undefined4 *)0x0) {
          puVar4 = (undefined4 *)&this_00->field_0x2bc;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
        }
        else {
          puVar4 = (undefined4 *)&this_00->field_0x2bc;
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar4 = *param_5;
            param_5 = param_5 + 1;
            puVar4 = puVar4 + 1;
          }
        }
        uVar15 = 0xffffffff;
        uVar14 = 7;
        iVar13 = -1;
        iVar3 = this_00->field_036F;
        iVar12 = -1;
        iVar11 = 1;
        uVar7 = 0xffffffff;
        cVar10 = CASE_FFFFFFFE;
        iVar9 = 0x1e;
        iVar5 = 0x7d;
        LoadResourceString(this_00->field_02B7,HINSTANCE_00807618);
        puVar4 = ccFntTy::CreateTypeSSpr
                           ((ccFntTy *)PTR_0081176c->field_0030,extraout_EAX_04,iVar5,iVar9,cVar10,
                            uVar7,iVar11,iVar12,iVar13);
        (**(code **)(iVar3 + 8))(puVar4,uVar14,uVar15);
        this_00->field_0377 = 0;
      }
LAB_005b8415:
      MMObjTy::CloseButtons((MMObjTy *)this_00);
      bVar2 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != '\0') {
        do {
          uVar7 = local_8 & 0xff;
          *(undefined4 *)((int)&this_00->field_0127 + uVar7 * 0x1fb) = this_00->field_0061;
          *(uint *)((int)&this_00->field_0123 + uVar7 * 0x1fb) = ((local_c & 0xff) + 1) * 100;
          if (*(int *)(&this_00->field_0x1a87 + uVar7 * 0x27) != 0) {
            local_c = CONCAT31(local_c._1_3_,(char)local_c + '\x01');
          }
          bVar2 = bVar2 + 1;
          local_8 = CONCAT31(local_8._1_3_,bVar2);
        } while (bVar2 < (byte)this_00->field_009A);
      }
      if (this_00->field_0065 == '\x02') {
        this_00->field_0065 = 3;
        *(undefined4 *)&this_00->field_0x1c9c = 0x1010101;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        thunk_FUN_005b6730(this_00,5,'\0',-1);
        this_00->field_1CAA = 0;
      }
      else {
        this_00->field_0065 = 4;
        *(undefined4 *)&this_00->field_0x1c9c = 0x1010101;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        thunk_FUN_005b6730(this_00,6,'\x01',-1);
        this_00->field_1CAA = 1;
        if (this_00->field_1D8C != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1DD0,this_00->field_1D8C);
        }
        local_8 = local_8 & 0xffffff00;
        if (this_00->field_009A != '\0') {
          do {
            iVar3 = (local_8 & 0xff) * 0x1fb;
            uVar7 = *(uint *)((int)&this_00->field_0178 + (local_8 & 0xff) * 0x1fb);
            if (uVar7 != 0xffffffff) {
              FUN_006b3af0(*(int **)((int)&this_00->field_01BC + iVar3),uVar7);
            }
            if (((&this_00->field_00E2)[iVar3] != '\0') &&
               (uVar7 = *(uint *)((int)&this_00->field_0209 + iVar3), uVar7 != 0xffffffff)) {
              FUN_006b3af0(*(int **)((int)&this_00->field_024D + iVar3),uVar7);
            }
            bVar2 = (char)local_8 + 1;
            local_8 = CONCAT31(local_8._1_3_,bVar2);
          } while (bVar2 < (byte)this_00->field_009A);
          g_currentExceptionFrame = local_78.previous;
          return 1;
        }
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar5 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x14e,0,iVar3,&DAT_007a4ccc
                               ,s_MMsgTy__SetMessage_007ccc8c);
    if (iVar5 != 0) {
      pcVar1 = (code *)swi(3);
      uVar14 = (*pcVar1)();
      return uVar14;
    }
    RaiseInternalException(iVar3,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0x14e);
  }
  return 0;
}


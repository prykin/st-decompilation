
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::NoneMMsg */

void __thiscall MMsgTy::NoneMMsg(MMsgTy *this)

{
  char cVar1;
  byte bVar2;
  UINT UVar3;
  code *pcVar4;
  MMsgTy *this_00;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 unaff_ESI;
  char *pcVar9;
  UINT *pUVar10;
  void *unaff_EDI;
  uint *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  UINT *pUVar14;
  int *piVar15;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  InternalExceptionFrame local_bc;
  int local_78 [8];
  int local_58 [8];
  int local_38 [8];
  MMsgTy *local_18;
  int local_14;
  UINT *local_10;
  int local_c;
  UINT *local_8;
  
  local_c = 1;
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_18 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0,unaff_EDI,unaff_ESI);
  this_00 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_bc.previous;
    iVar8 = ReportDebugMessage(s_E____titans_Start_mmsg_obj_cpp_007ccb74,0xe4,0,iVar5,&DAT_007a4ccc,
                               s_MMsgTy__NoneMMsg_007ccc78);
    if (iVar8 != 0) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    RaiseInternalException(iVar5,0,s_E____titans_Start_mmsg_obj_cpp_007ccb74,0xe4);
    return;
  }
  cVar1 = local_18->field_0065;
  if (cVar1 == '\x01') {
    if ((*(int *)&local_18[1].field_0x26 != 0) &&
       (*(int *)&local_18[1].field_0xe6 < *(int *)&local_18[1].field_0xea + -3)) {
      if ((*(int *)&local_18[1].field_0xe6 == 0) && (*(uint *)&local_18[1].field_0xe2 != 0xffffffff)
         ) {
        Library::DKW::DDX::FUN_006b34d0
                  (*(uint **)&local_18[1].field_0x126,*(uint *)&local_18[1].field_0xe2,0xfffffffe,
                   *(uint *)&local_18[1].field_0xfa,*(uint *)&local_18[1].field_0xfe);
      }
      *(int *)&this_00[1].field_0xe6 = *(int *)&this_00[1].field_0xe6 + 1;
      if (*(uint *)&this_00[1].field_0xe2 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)&this_00[1].field_0x126,*(uint *)&this_00[1].field_0xe2,
                   *(uint *)&this_00[1].field_0xe6,*(uint *)&this_00[1].field_0xfa,
                   *(uint *)&this_00[1].field_0xfe);
      }
      thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
    }
  }
  else if (cVar1 == '\x03') {
    if (*(int *)&local_18[1].field_0x26 != 0) {
      if (*(int *)&local_18[1].field_0x55 < *(int *)&local_18[1].field_0x59 + -1) {
        *(int *)&local_18[1].field_0x55 = *(int *)&local_18[1].field_0x55 + 1;
        if (*(uint *)&local_18[1].field_0x51 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)&local_18[1].field_0x95,*(uint *)&local_18[1].field_0x51,
                     *(uint *)&local_18[1].field_0x55,*(uint *)&local_18[1].field_0x69,
                     *(uint *)&local_18[1].field_0x6d);
        }
        local_c = 0;
      }
      else if (*(int *)&local_18[1].field_0xe6 < *(int *)&local_18[1].field_0xea + -3) {
        if ((*(int *)&local_18[1].field_0xe6 == 0) &&
           (*(uint *)&local_18[1].field_0xe2 != 0xffffffff)) {
          Library::DKW::DDX::FUN_006b34d0
                    (*(uint **)&local_18[1].field_0x126,*(uint *)&local_18[1].field_0xe2,0xfffffffe,
                     *(uint *)&local_18[1].field_0xfa,*(uint *)&local_18[1].field_0xfe);
        }
        *(int *)&this_00[1].field_0xe6 = *(int *)&this_00[1].field_0xe6 + 1;
        if (*(uint *)&this_00[1].field_0xe2 != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    (*(uint **)&this_00[1].field_0x126,*(uint *)&this_00[1].field_0xe2,
                     *(uint *)&this_00[1].field_0xe6,*(uint *)&this_00[1].field_0xfa,
                     *(uint *)&this_00[1].field_0xfe);
        }
        thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
      }
    }
    iVar5 = 0;
    if (this_00->field_0x9a != '\0') {
      puVar11 = (uint *)&this_00->field_0xff;
      do {
        if (((&this_00->field_0x1c9c)[iVar5] != '\0') && (*(int *)((int)puVar11 + -0x43) != 0)) {
          if (puVar11[9] <= this_00->field_0061 - puVar11[10]) {
            if ((int)puVar11[-5] < (int)(puVar11[-4] - 1)) {
              uVar6 = puVar11[-5] + 1;
              puVar11[-5] = uVar6;
              if (puVar11[-6] != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          ((uint *)puVar11[0xb],puVar11[-6],uVar6,*puVar11,puVar11[1]);
              }
            }
            else {
              if (*(int *)((int)puVar11 + 0x81) + -3 <= *(int *)((int)puVar11 + 0x7d))
              goto LAB_005b7ad9;
              if ((*(int *)((int)puVar11 + 0x7d) == 0) &&
                 (*(uint *)((int)puVar11 + 0x79) != 0xffffffff)) {
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)((int)puVar11 + 0xbd),*(uint *)((int)puVar11 + 0x79),0xfffffffe
                           ,*(uint *)((int)puVar11 + 0x91),*(uint *)((int)puVar11 + 0x95));
              }
              uVar6 = *(int *)((int)puVar11 + 0x7d) + 1;
              *(uint *)((int)puVar11 + 0x7d) = uVar6;
              if (*(uint *)((int)puVar11 + 0x79) != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          (*(uint **)((int)puVar11 + 0xbd),*(uint *)((int)puVar11 + 0x79),uVar6,
                           *(uint *)((int)puVar11 + 0x91),*(uint *)((int)puVar11 + 0x95));
              }
              thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
            }
          }
          local_c = 0;
        }
LAB_005b7ad9:
        iVar5 = iVar5 + 1;
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
      } while (iVar5 < (int)(uint)(byte)this_00->field_0x9a);
    }
    if (local_c != 0) {
      this_00->field_0065 = 1;
      if (this_00->field_0x9a != '\0') {
        local_8 = (UINT *)&this_00->field_0x66;
        local_10 = (UINT *)&this_00->field_0x1c82;
        puVar7 = (undefined4 *)&this_00->field_0xa7;
        iVar5 = 0x68ff;
        do {
          if ((*(int *)((int)puVar7 + 0x15) != 0) && (*local_8 == 0)) {
            if (this_00->field_1CA9 == '\0') {
              uVar6 = (uint)(-1 < (short)*local_10);
            }
            else {
              uVar6 = 1;
            }
            iVar8 = MMObjTy::CreateSprBut
                              ((MMObjTy *)this_00,1,uVar6,puVar7[0x16] + puVar7[-3],
                               puVar7[0x17] + puVar7[-2],puVar7[-1],*puVar7,iVar5,iVar5 + 0x80);
            *local_8 = iVar8;
          }
          local_10 = (UINT *)((int)local_10 + 2);
          local_8 = local_8 + 1;
          puVar7 = (undefined4 *)((int)puVar7 + 0x1fb);
          iVar8 = iVar5 + -0x68fe;
          iVar5 = iVar5 + 1;
        } while (iVar8 < (int)(uint)(byte)this_00->field_0x9a);
      }
      if ((this_00->field_1CA9 == '\0') &&
         (local_58[2] = *(int *)&this_00[1].field_0x1, local_58[2] != 0)) {
        piVar12 = *(int **)&this_00->field_0xc;
        piVar15 = local_58;
        for (iVar5 = 8; iVar5 != 0; iVar5 = iVar5 + -1) {
          *piVar15 = 0;
          piVar15 = piVar15 + 1;
        }
        local_58[3] = 2;
        local_58[4] = 0x693f;
        (**(code **)(*piVar12 + 0x18))(local_58);
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    if ((*(int *)&local_18[1].field_0x26 != 0) && (0 < *(int *)&local_18[1].field_0x55)) {
      *(int *)&local_18[1].field_0x55 = *(int *)&local_18[1].field_0x55 + -1;
      if (*(uint *)&local_18[1].field_0x51 != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  (*(uint **)&local_18[1].field_0x95,*(uint *)&local_18[1].field_0x51,
                   *(uint *)&local_18[1].field_0x55,*(uint *)&local_18[1].field_0x69,
                   *(uint *)&local_18[1].field_0x6d);
      }
      local_c = 0;
    }
    if (this_00->field_0x9a != '\0') {
      pcVar9 = &this_00->field_0x1c9c;
      local_14 = -0x1c9c - (int)this_00;
      puVar11 = (uint *)&this_00->field_0xff;
      do {
        if (*pcVar9 != '\0') {
          if (puVar11[9] <= this_00->field_0061 - puVar11[10]) {
            if ((int)puVar11[-5] < 1) {
              if (*(char *)(this_00 + 1) == '\0') {
                *(undefined4 *)((int)puVar11 + -0x43) = 0;
              }
              *pcVar9 = '\0';
              goto LAB_005b7655;
            }
            uVar6 = puVar11[-5] - 1;
            puVar11[-5] = uVar6;
            if (puVar11[-6] != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)puVar11[0xb],puVar11[-6],uVar6,*puVar11,puVar11[1]);
            }
          }
          local_c = 0;
        }
LAB_005b7655:
        puVar11 = (uint *)((int)puVar11 + 0x1fb);
        pcVar9 = pcVar9 + 1;
      } while ((int)(pcVar9 + local_14) < (int)(uint)(byte)this_00->field_0x9a);
    }
    if (local_c != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_1CA9 != '\0') {
        if (*(char *)(this_00 + 1) != '\0') {
          *(undefined4 *)&this_00->field_0x1c9c = 0x1010101;
          *(undefined4 *)&this_00->field_0x1ca0 = 0x1010101;
          *(undefined4 *)&this_00->field_0x1ca4 = 0x1010101;
          this_00->field_0x1ca8 = 1;
          this_00->field_0065 = 3;
          thunk_FUN_005b6730(this_00,5,'\0',-1);
          *(undefined1 *)(this_00 + 1) = 0;
          g_currentExceptionFrame = local_bc.previous;
          return;
        }
        bVar2 = this_00->field_0x1a5a;
        if ((bVar2 != 0xff) && (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0)) {
          AppClassTy::PostNextMessage
                    ((AppClassTy *)&DAT_00807620,
                     (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
        }
        iVar5 = *(int *)&this_00[1].field_0x1;
        if (iVar5 != 0) {
          piVar12 = local_78;
          for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
            *piVar12 = 0;
            piVar12 = piVar12 + 1;
          }
          local_78[3] = 2;
          local_78[4] = 0x693f;
          local_78[2] = iVar5;
          (**(code **)(**(int **)&this_00->field_0xc + 0x18))(local_78);
        }
        if (this_00->field_0x1a5f != '\0') {
          local_14 = 0;
          puVar7 = (undefined4 *)&this_00->field_0x1a60;
          puVar13 = (undefined4 *)&this_00[1].field_0x26;
          for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar13 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar13 = puVar13 + 1;
          }
          *(undefined2 *)puVar13 = *(undefined2 *)puVar7;
          *(undefined1 *)((int)puVar13 + 2) = *(undefined1 *)((int)puVar7 + 2);
          if (this_00->field_0x9a != '\0') {
            local_8 = (UINT *)&this_00->field_0xbc;
            local_10 = (UINT *)&this_00->field_0x1a87;
            do {
              pUVar10 = local_10;
              pUVar14 = local_8;
              for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pUVar14 = *pUVar10;
                pUVar10 = pUVar10 + 1;
                pUVar14 = pUVar14 + 1;
              }
              *(short *)pUVar14 = (short)*pUVar10;
              *(undefined1 *)((int)pUVar14 + 2) = *(undefined1 *)((int)pUVar10 + 2);
              if (*local_8 != 0) {
                uVar21 = 0xffffffff;
                uVar20 = 7;
                iVar19 = -1;
                UVar3 = local_8[0x2e];
                iVar18 = -1;
                iVar17 = 1;
                uVar6 = 0xffffffff;
                cVar16 = CASE_FFFFFFFE;
                iVar8 = 0x1e;
                iVar5 = 0x7d;
                puVar11 = (uint *)FUN_006b0140(*local_8,DAT_00807618);
                puVar7 = ccFntTy::CreateTypeSSpr
                                   (*(ccFntTy **)(DAT_0081176c + 0x30),puVar11,iVar5,iVar8,cVar16,
                                    uVar6,iVar17,iVar18,iVar19);
                (**(code **)(UVar3 + 8))(puVar7,uVar20,uVar21);
                local_8[0x30] = 0;
              }
              local_14 = local_14 + 1;
              local_10 = (UINT *)((int)local_10 + 0x27);
              local_8 = (UINT *)((int)local_8 + 0x1fb);
            } while (local_14 < (int)(uint)(byte)this_00->field_0x9a);
          }
          if ((this_00->field_0x1a5f == '\x03') || (this_00->field_0x1a5f == '\x01')) {
            *(undefined4 *)&this_00->field_0x1c9c = 0x1010101;
            *(undefined4 *)&this_00->field_0x1ca0 = 0x1010101;
            *(undefined4 *)&this_00->field_0x1ca4 = 0x1010101;
            this_00->field_0x1ca8 = 1;
            this_00->field_0065 = 3;
          }
          this_00->field_0x1a5f = 0;
        }
        this_00->field_1CA9 = 0;
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
      iVar5 = *(int *)&this_00[1].field_0x1;
      if (iVar5 != 0) {
        piVar12 = local_38;
        for (iVar8 = 8; iVar8 != 0; iVar8 = iVar8 + -1) {
          *piVar12 = 0;
          piVar12 = piVar12 + 1;
        }
        local_38[3] = 2;
        local_38[4] = 0x693f;
        local_38[2] = iVar5;
        (**(code **)(**(int **)&this_00->field_0xc + 0x18))(local_38);
      }
      bVar2 = this_00->field_0x1a5a;
      if ((bVar2 != 0xff) && (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0)) {
        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,
                   (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_bc.previous;
  return;
}


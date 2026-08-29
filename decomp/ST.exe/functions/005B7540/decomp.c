#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::NoneMMsg */

void __thiscall MMsgTy::NoneMMsg(MMsgTy *this)

{
  SpriteClassTy *this_00;
  char cVar1;
  byte bVar2;
  SpriteClassTyVTable *pSVar3;
  StartSystemTy *pSVar4;
  MMsgTy *this_01;
  int iVar6;
  uint uVar6;
  char *pcVar11_mg1;
  short *psVar7;
  int iVar9;
  int iVar8;
  int iVar10;
  char *pcVar11;
  uint *puVar12;
  byte *puVar14;
  MMsgTy_Record_00BC_01FB *pMVar15;
  byte *puVar16;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  SpriteClassTy_SetImagesPtr_param_2Enum arg_2;
  uint arg_3;
  InternalExceptionFrame local_bc;
  int local_78 [8];
  int local_58 [8];
  int local_38 [8];
  MMsgTy *local_18;
  int local_14;
  short *local_10;
  int local_c;
  MMsgTy_Record_00BC_01FB *local_8;

  local_c = 1;
  local_bc.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_bc;
  local_18 = this;

  iVar6 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0);
  this_01 = local_18;
  if (iVar6 != 0) {
    g_currentExceptionFrame = local_bc.previous;

    iVar9 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0xe4,0,iVar6,"%s",
                               "MMsgTy::NoneMMsg");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar6,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0xe4);
    return;
  }
  cVar1 = local_18->field_0065;
  if (cVar1 == '\x01') {
    if ((local_18->field_1CD0 != 0) && (local_18->field_1D90 < local_18->field_1D94 + -3)) {
      if ((local_18->field_1D90 == 0) && (local_18->field_1D8C != 0xffffffff)) {

        Library::DKW::DDX::FUN_006b34d0
                  ((uint *)local_18->field_1DD0,local_18->field_1D8C,0xfffffffe,local_18->field_1DA4
                   ,local_18->field_1DA8);
      }
      this_01->field_1D90 = this_01->field_1D90 + 1;
      if (this_01->field_1D8C != 0xffffffff) {

        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_01->field_1DD0,this_01->field_1D8C,this_01->field_1D90,
                   this_01->field_1DA4,this_01->field_1DA8);
      }
      thunk_FUN_005b6730(this_01,0x1e,'\x01',-1);
    }
  }
  else if (cVar1 == '\x03') {
    if (local_18->field_1CD0 != 0) {
      if (local_18->field_1CFF < local_18->field_1D03 + -1) {
        local_18->field_1CFF = local_18->field_1CFF + 1;
        if (local_18->field_1CFB != 0xffffffff) {

          Library::DKW::DDX::FUN_006b3730
                    ((uint *)local_18->field_1D3F,local_18->field_1CFB,local_18->field_1CFF,
                     local_18->field_1D13,local_18->field_1D17);
        }
        local_c = 0;
      }
      else if (local_18->field_1D90 < local_18->field_1D94 + -3) {
        if ((local_18->field_1D90 == 0) && (local_18->field_1D8C != 0xffffffff)) {

          Library::DKW::DDX::FUN_006b34d0
                    ((uint *)local_18->field_1DD0,local_18->field_1D8C,0xfffffffe,
                     local_18->field_1DA4,local_18->field_1DA8);
        }
        this_01->field_1D90 = this_01->field_1D90 + 1;
        if (this_01->field_1D8C != 0xffffffff) {

          Library::DKW::DDX::FUN_006b3730
                    ((uint *)this_01->field_1DD0,this_01->field_1D8C,this_01->field_1D90,
                     this_01->field_1DA4,this_01->field_1DA8);
        }
        thunk_FUN_005b6730(this_01,0x1e,'\x01',-1);
      }
    }
    iVar10 = 0;
    if (this_01->field_009A != 0) {
      puVar12 = &this_01->array_00BC[0].field_0027.field_001C;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(char *)((int)&this_01->field_1C9C + iVar10) != '\0') &&
           (*(int *)((int)puVar12 + -0x43) != 0)) {
          if (puVar12[9] <= this_01->field_0061 - puVar12[10]) {
            if ((int)puVar12[-5] < (int)(puVar12[-4] - 1)) {
              uVar6 = puVar12[-5] + 1;
              puVar12[-5] = uVar6;
              if (puVar12[-6] != 0xffffffff) {

                Library::DKW::DDX::FUN_006b3730
                          ((uint *)puVar12[0xb],puVar12[-6],uVar6,*puVar12,puVar12[1]);
              }
            }
            else {
              if (STField<int>(puVar12,0x81) + -3 <= STField<int>(puVar12,0x7d))
              goto LAB_005b7ad9;
              if ((STField<int>(puVar12,0x7d) == 0) &&
                 (STField<uint>(puVar12,0x79) != 0xffffffff)) {

                Library::DKW::DDX::FUN_006b34d0
                          (STField<uint *>(puVar12,0xbd),STField<uint>(puVar12,0x79),0xfffffffe
                           ,STField<uint>(puVar12,0x91),STField<uint>(puVar12,0x95));
              }
              uVar6 = STField<int>(puVar12,0x7d) + 1;
              STField<uint>(puVar12,0x7d) = uVar6;
              if (STField<uint>(puVar12,0x79) != 0xffffffff) {

                Library::DKW::DDX::FUN_006b3730
                          (STField<uint *>(puVar12,0xbd),STField<uint>(puVar12,0x79),uVar6,
                           STField<uint>(puVar12,0x91),STField<uint>(puVar12,0x95));
              }
              thunk_FUN_005b6730(this_01,0x1e,'\x01',-1);
            }
          }
          local_c = 0;
        }
LAB_005b7ad9:
        iVar10 = iVar10 + 1;
        puVar12 = (uint *)((int)puVar12 + 0x1fb);
      } while (iVar10 < (int)(uint)this_01->field_009A);
    }
    if (local_c != 0) {
      this_01->field_0065 = 1;
      if (this_01->field_009A != 0) {
        local_8 = (MMsgTy_Record_00BC_01FB *)this_01->field_0066;
        local_10 = (short *)&this_01->field_0x1c82;
        puVar16 = (byte *)&this_01->field_0xa7;
        iVar10 = 0x68ff;
        do {
          if ((STField<int>(puVar16,0x15) != 0) && (*(uint *)local_8 == 0)) {
            if (this_01->field_1CA9 == '\0') {
              uVar6 = (uint)(-1 < *local_10);
            }
            else {
              uVar6 = 1;
            }
            /* ST_CALLSITE[005B7B78]: CALL 0x0040361b; direct=0040361B MMObjTy::CreateSprBut */
            uVar6 = MMObjTy::CreateSprBut
                              ((MMObjTy *)this_01,1,uVar6,puVar16[0x16] + puVar16[-3],
                               puVar16[0x17] + puVar16[-2],puVar16[-1],*puVar16,iVar10,iVar10 + 0x80
                              );
            *(uint *)local_8 = uVar6;
          }
          local_10 = local_10 + 1;
          local_8 = (MMsgTy_Record_00BC_01FB *)((int)local_8 + 4);
          puVar16 = (byte *)((int)puVar16 + 0x1fb);
          iVar8 = iVar10 + -0x68fe;
          iVar10 = iVar10 + 1;
        } while (iVar8 < (int)(uint)this_01->field_009A);
      }
      if ((this_01->field_1CA9 == '\0') && (local_58[2] = this_01->field_1CAB, local_58[2] != 0)) {
        pSVar4 = this_01->field_000C;
        memset(local_58, 0, 0x20); /* compiler bulk-zero initialization */
        local_58[3] = 2;
        local_58[4] = 0x693f;
        /* ST_CALLSITE[005B7BF5]: CALL dword ptr [EDX + 0x18] */
        (*pSVar4->vtable->vfunc_18)((short)local_58);
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
    }
  }
  else if (cVar1 == '\x04') {
    if ((local_18->field_1CD0 != 0) && (0 < local_18->field_1CFF)) {
      local_18->field_1CFF = local_18->field_1CFF + -1;
      if (local_18->field_1CFB != 0xffffffff) {

        Library::DKW::DDX::FUN_006b3730
                  ((uint *)local_18->field_1D3F,local_18->field_1CFB,local_18->field_1CFF,
                   local_18->field_1D13,local_18->field_1D17);
      }
      local_c = 0;
    }
    if (this_01->field_009A != 0) {
      pcVar11 = (char *)&this_01->field_1C9C;
      local_14 = -0x1c9c - (int)this_01;
      puVar12 = &this_01->array_00BC[0].field_0027.field_001C;
      do {
        if (*pcVar11 != '\0') {
          if (puVar12[9] <= this_01->field_0061 - puVar12[10]) {
            if ((int)puVar12[-5] < 1) {
              if (this_01->field_1CAA == '\0') {
                *(undefined4 *)((int)puVar12 + -0x43) = 0;
              }
              *pcVar11 = '\0';
              goto LAB_005b7655;
            }
            uVar6 = puVar12[-5] - 1;
            puVar12[-5] = uVar6;
            if (puVar12[-6] != 0xffffffff) {

              Library::DKW::DDX::FUN_006b3730
                        ((uint *)puVar12[0xb],puVar12[-6],uVar6,*puVar12,puVar12[1]);
            }
          }
          local_c = 0;
        }
LAB_005b7655:
        puVar12 = (uint *)((int)puVar12 + 0x1fb);
        pcVar11 = pcVar11 + 1;
      } while ((int)(pcVar11 + local_14) < (int)(uint)this_01->field_009A);
    }
    if (local_c != 0) {
      this_01->field_0065 = 2;
      if (this_01->field_1CA9 != '\0') {
        if (this_01->field_1CAA != '\0') {
          this_01->field_1C9C = 0x1010101;
          this_01->field_1CA0 = 0x1010101;
          this_01->field_1CA4 = 0x1010101;
          this_01->field_1CA8 = 1;
          this_01->field_0065 = 3;
          thunk_FUN_005b6730(this_01,5,'\0',-1);
          this_01->field_1CAA = 0;
          g_currentExceptionFrame = local_bc.previous;
          return;
        }
        bVar2 = this_01->array_00BC[0xc].field_01DA;
        if ((bVar2 != 0xff) && (*(int *)&this_01->array_00BC[bVar2].field_0x15 != 0)) {

          AppClassTy::PostNextMessage
                    ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->array_00BC[bVar2].field_0x5
                    );
        }
        iVar10 = this_01->field_1CAB;
        if (iVar10 != 0) {
          memset(local_78, 0, 0x20); /* compiler bulk-zero initialization */
          local_78[3] = 2;
          local_78[4] = 0x693f;
          local_78[2] = iVar10;
          /* ST_CALLSITE[005B775C]: CALL dword ptr [EDX + 0x18] */
          (*this_01->field_000C->vtable->vfunc_18)((short)local_78);
        }
        if (this_01->array_00BC[0xc].field_01DF != '\0') {
          local_14 = 0;
          puVar16 = (byte *)&this_01->array_00BC[0xc].field_0x1e0;
          puVar14 = (byte *)(&this_01->field_1CD0);
          memmove(puVar14, puVar16, 0x27); /* compiler REP MOVS byte copy */
          iVar10 = 0;
          if (this_01->field_009A != 0) {
            local_8 = this_01->array_00BC;
            local_10 = (short *)&this_01->field_0x1a87;
            do {
              psVar7 = local_10;
              pMVar15 = local_8;
              for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
                pMVar15->field_0000 = *(undefined4 *)psVar7;
                psVar7 = (short *)((int)psVar7 + 4);
                pMVar15 = (MMsgTy_Record_00BC_01FB *)&pMVar15->field_0x4;
              }
              *(short *)&pMVar15->field_0000 = *psVar7;
              STField<undefined1>(pMVar15,0x2) = STField<undefined1>(psVar7,2);
              if (local_8->field_0000 != 0) {
                arg_3 = 0xffffffff;
                arg_2 = CASE_7;
                iVar20 = -1;
                pSVar3 = (local_8->field_00B8).vtable;
                iVar19 = -1;
                iVar18 = 1;
                uVar6 = 0xffffffff;
                cVar17 = CASE_FFFFFFFE;
                iVar8 = 0x1e;
                this_00 = &local_8->field_00B8;
                iVar10 = 0x7d;
                /* ST_CALLSITE[005B77E8]: CALL 0x006b0140; direct=006B0140 LoadResourceString; [STCallResultViewApplier] presentation_only; exact direct-call result=pointer:/ccFntTy; source view only; no Ghidra override */
                pcVar11_mg1 = LoadResourceString(local_8->field_0000,g_hINSTANCE_00807618);

                psVar7 = STPointerBoundaryCast<short *>(ccFntTy::CreateTypeSSpr
                                            ((ccFntTy *)g_startSystem_0081176C->field_0030,
                                             pcVar11_mg1,iVar10,iVar8,cVar17,uVar6,iVar18,iVar19,
                                             iVar20));
                /* ST_CALLSITE[005B77FF]: CALL dword ptr [EDI + 0x8] */
                (*pSVar3->SetImagesPtr)(this_00,psVar7,arg_2,arg_3);
                (local_8->field_00B8).field_0008 = 0;
              }
              local_14 = local_14 + 1;
              local_10 = (short *)((int)local_10 + 0x27);
              local_8 = local_8 + 1;
            } while (local_14 < (int)(uint)this_01->field_009A);
          }
          cVar1 = this_01->array_00BC[0xc].field_01DF;
          if ((cVar1 == '\x03') || (cVar1 == '\x01')) {
            this_01->field_1C9C = 0x1010101;
            this_01->field_1CA0 = 0x1010101;
            this_01->field_1CA4 = 0x1010101;
            this_01->field_1CA8 = 1;
            this_01->field_0065 = 3;
          }
          this_01->array_00BC[0xc].field_01DF = 0;
        }
        this_01->field_1CA9 = 0;
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
      iVar10 = this_01->field_1CAB;
      if (iVar10 != 0) {
        memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
        local_38[3] = 2;
        local_38[4] = 0x693f;
        local_38[2] = iVar10;
        /* ST_CALLSITE[005B78B2]: CALL dword ptr [EDX + 0x18] */
        (*this_01->field_000C->vtable->vfunc_18)((short)local_38);
      }
      bVar2 = this_01->array_00BC[0xc].field_01DA;
      if ((bVar2 != 0xff) && (*(int *)&this_01->array_00BC[bVar2].field_0x15 != 0)) {

        AppClassTy::PostNextMessage
                  ((AppClassTy *)&DAT_00807620,(undefined4 *)&this_01->array_00BC[bVar2].field_0x5);
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
    }
  }
  g_currentExceptionFrame = local_bc.previous;
  return;
}


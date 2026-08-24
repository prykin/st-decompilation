#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::SetMessage */

undefined4 __thiscall
MMsgTy::SetMessage(MMsgTy *this,UINT param_1,char param_2,undefined4 *param_3,undefined4 *param_4,
                  undefined4 *param_5,int param_6,UINT param_7)

{
  SpriteClassTyVTable *pSVar1;
  MMsgTy *this_00;
  byte bVar3;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte *puVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  MMsgTy_Record_00BC_01FB *pMVar11;
  byte *puVar13;
  uint uVar14;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  byte uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  CHAR local_478 [1024];
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
    iVar3 = Library::MSVCRT::__setjmp3(local_78.jumpBuffer,0);
    this_00 = local_14;
    if (iVar3 == 0) {
      iVar10 = local_14->field_1CAB;
      if (iVar10 != 0) {
        memset(local_34, 0, 0x20); /* compiler bulk-zero initialization */
        local_34[3] = 2;
        local_34[4] = 0x6940;
        local_34[2] = iVar10;
        /* ST_CALLSITE[005B7F76]: CALL dword ptr [EAX + 0x18] */
        (*this_00->field_000C->vtable->vfunc_18)((short)local_34);
      }
      this_00->field_1CA9 = 1;
      puVar6 = (byte *)(&this_00->field_1CD0);
      puVar13 = (byte *)&this_00->array_00BC[0xc].field_0x1e0;
      memmove(puVar13, puVar6, 0x27); /* compiler REP MOVS byte copy */
      this_00->array_00BC[0xc].field_01DF = this_00->field_0065;
      this_00->field_002D = 0x21;
      memset(&this_00->field_0x1c82, 0, 0x1a); /* compiler bulk-zero initialization */
      iVar10 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar14 = local_8 & 0xff;
          if (this_00->field_0066[uVar14] != 0) {
            FUN_006e6080(this_00,2,this_00->field_0066[uVar14],(undefined4 *)&this_00->field_0x1d);
            *(ushort *)(&this_00->field_0x1c82 + uVar14 * 2) =
                 (-(ushort)(this_00->field_0031 != 0) & 2) - 1;
          }
          pMVar11 = this_00->array_00BC + uVar14;
          puVar6 = (byte *)((int)(this_00->array_00BC + 0xd) + uVar14 * 0x27 + 0xc);
          for (iVar10 = 9; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar6 = pMVar11->field_0000;
            pMVar11 = (MMsgTy_Record_00BC_01FB *)&pMVar11->field_0x4;
            puVar6 = (byte *)(puVar6 + 1);
          }
          *(undefined2 *)puVar6 = *(undefined2 *)&pMVar11->field_0000;
          STField<undefined1>(puVar6,2) = *(undefined1 *)((int)&pMVar11->field_0000 + 2);
          bVar3 = (char)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        } while (bVar3 < this_00->field_009A);
      }
      this_00->field_1CD0 = param_1;
      if (param_6 == 0) {
        uVar22 = 0xffffffff;
        local_10 = this_00->field_1D88;
        uVar21 = 7;
        iVar18 = -1;
        iVar17 = -1;
        iVar16 = 1;
        uVar14 = 0xffffffff;
        cVar15 = CASE_FFFFFFFE;
        iVar9 = 0x39;
        iVar10 = 0x158;
        pcVar4 = LoadResourceString(param_1,g_hINSTANCE_00807618);
        puVar6 = ccFntTy::CreateTypeSSpr
                           ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,iVar9,cVar15
                            ,uVar14,iVar16,iVar17,iVar18);
        /* ST_CALLSITE[005B8102]: CALL dword ptr [EAX + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(local_10 + 8))(puVar6,uVar21,uVar22);
      }
      else {
        pcVar4 = LoadResourceString(param_7,g_hINSTANCE_00807618);
        pcVar5 = LoadResourceString(param_1,g_hINSTANCE_00807618);
        /* ST_CALLSITE[005B8076]: CALL dword ptr [0x0085bde8] */
        wsprintfA(local_478,"%s\n(%s=%li)",pcVar5,pcVar4,param_6);
        iVar10 = this_00->field_1D88;
        uVar22 = 0xffffffff;
        uVar21 = 7;
        puVar6 = ccFntTy::CreateTypeSSpr
                           ((ccFntTy *)g_startSystem_0081176C->field_0030,local_478,0x158,0x39,
                            CASE_FFFFFFFE,0xffffffff,1,-1,-1);
        /* ST_CALLSITE[005B80B7]: CALL dword ptr [ESI + 0x8] */
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
        (**(code **)(iVar10 + 8))(puVar6,uVar21,uVar22);
      }
      bVar3 = 0;
      this_00->field_1D90 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar14 = local_8 & 0xff;
          bVar3 = bVar3 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
          this_00->array_00BC[uVar14].field_0000 = 0;
          this_00->array_00BC[uVar14].field_0025 = 1;
        } while (bVar3 < this_00->field_009A);
      }
      if (param_2 == '\0') {
        this_00->array_00BC[2].field_0000 = 0x24b8;
        this_00->array_00BC[2].field_0025 = 1;
        iVar10 = 8;
        if (param_3 == nullptr) {
          puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar6 = 0;
            puVar6 = (byte *)(puVar6 + 1);
          }
        }
        else {
          puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar6 = *param_3;
            param_3 = param_3 + 1;
            puVar6 = (byte *)(puVar6 + 1);
          }
        }
        uVar20 = 0xffffffff;
        uVar19 = 7;
        iVar18 = -1;
        pSVar1 = this_00->array_00BC[2].field_00B8.vtable;
        iVar17 = -1;
        iVar16 = 1;
        uVar14 = 0xffffffff;
        cVar15 = CASE_FFFFFFFE;
        iVar9 = 0x1e;
        iVar10 = 0x7d;
        pcVar4 = LoadResourceString(this_00->array_00BC[2].field_0000,g_hINSTANCE_00807618);
        psVar7 = (short *)ccFntTy::CreateTypeSSpr
                                    ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,
                                     iVar9,cVar15,uVar14,iVar16,iVar17,iVar18);
        /* ST_CALLSITE[005B840A]: CALL dword ptr [ESI + 0x8] */
        (*pSVar1->SetImagesPtr)(&this_00->array_00BC[2].field_00B8,psVar7,uVar19,uVar20);
        this_00->array_00BC[2].field_00B8.field_0008 = 0;
      }
      else {
        if (param_2 == '\x01') {
          this_00->array_00BC[2].field_0000 = 0x24b9;
          this_00->array_00BC[2].field_0025 = 1;
          iVar10 = 8;
          if (param_3 == nullptr) {
            puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = 0;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          else {
            puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = *param_3;
              param_3 = param_3 + 1;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          uVar20 = 0xffffffff;
          uVar19 = 7;
          iVar18 = -1;
          pSVar1 = this_00->array_00BC[2].field_00B8.vtable;
          iVar17 = -1;
          iVar16 = 1;
          uVar14 = 0xffffffff;
          cVar15 = CASE_FFFFFFFE;
          iVar9 = 0x1e;
          iVar10 = 0x7d;
          pcVar4 = LoadResourceString(this_00->array_00BC[2].field_0000,g_hINSTANCE_00807618);
          psVar7 = (short *)ccFntTy::CreateTypeSSpr
                                      ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,
                                       iVar9,cVar15,uVar14,iVar16,iVar17,iVar18);
          /* ST_CALLSITE[005B836E]: CALL dword ptr [ESI + 0x8] */
          (*pSVar1->SetImagesPtr)(&this_00->array_00BC[2].field_00B8,psVar7,uVar19,uVar20);
          this_00->array_00BC[2].field_00B8.field_0008 = 0;
          this_00->array_00BC[1].field_0000 = 0x24ba;
          this_00->array_00BC[1].field_0025 = 1;
          param_5 = param_4;
        }
        else {
          if (param_2 != '\x02') goto LAB_005b8415;
          this_00->array_00BC[3].field_0000 = 0x24b9;
          this_00->array_00BC[3].field_0025 = 1;
          iVar10 = 8;
          if (param_3 == nullptr) {
            puVar6 = (byte *)&this_00->array_00BC[3].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = 0;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          else {
            puVar6 = (byte *)&this_00->array_00BC[3].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = *param_3;
              param_3 = param_3 + 1;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          uVar20 = 0xffffffff;
          uVar19 = 7;
          iVar18 = -1;
          pSVar1 = this_00->array_00BC[3].field_00B8.vtable;
          iVar17 = -1;
          iVar16 = 1;
          uVar14 = 0xffffffff;
          cVar15 = CASE_FFFFFFFE;
          iVar9 = 0x1e;
          iVar10 = 0x7d;
          pcVar4 = LoadResourceString(this_00->array_00BC[3].field_0000,g_hINSTANCE_00807618);
          psVar7 = (short *)ccFntTy::CreateTypeSSpr
                                      ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,
                                       iVar9,cVar15,uVar14,iVar16,iVar17,iVar18);
          /* ST_CALLSITE[005B81E6]: CALL dword ptr [ESI + 0x8] */
          (*pSVar1->SetImagesPtr)(&this_00->array_00BC[3].field_00B8,psVar7,uVar19,uVar20);
          this_00->array_00BC[3].field_00B8.field_0008 = 0;
          this_00->array_00BC[2].field_0000 = 0x24ba;
          this_00->array_00BC[2].field_0025 = 1;
          iVar10 = 8;
          if (param_4 == nullptr) {
            puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = 0;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          else {
            puVar6 = (byte *)&this_00->array_00BC[2].field_0x5;
            for (; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar6 = *param_4;
              param_4 = param_4 + 1;
              puVar6 = (byte *)(puVar6 + 1);
            }
          }
          uVar20 = 0xffffffff;
          uVar19 = 7;
          iVar18 = -1;
          pSVar1 = this_00->array_00BC[2].field_00B8.vtable;
          iVar17 = -1;
          iVar16 = 1;
          uVar14 = 0xffffffff;
          cVar15 = CASE_FFFFFFFE;
          iVar9 = 0x1e;
          iVar10 = 0x7d;
          pcVar4 = LoadResourceString(this_00->array_00BC[2].field_0000,g_hINSTANCE_00807618);
          psVar7 = (short *)ccFntTy::CreateTypeSSpr
                                      ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,
                                       iVar9,cVar15,uVar14,iVar16,iVar17,iVar18);
          /* ST_CALLSITE[005B8267]: CALL dword ptr [ESI + 0x8] */
          (*pSVar1->SetImagesPtr)(&this_00->array_00BC[2].field_00B8,psVar7,uVar19,uVar20);
          this_00->array_00BC[2].field_00B8.field_0008 = 0;
          this_00->array_00BC[1].field_0000 = 0x24bb;
          this_00->array_00BC[1].field_0025 = 1;
        }
        iVar10 = 8;
        if (param_5 == nullptr) {
          puVar6 = (byte *)&this_00->array_00BC[1].field_0x5;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar6 = 0;
            puVar6 = (byte *)(puVar6 + 1);
          }
        }
        else {
          puVar6 = (byte *)&this_00->array_00BC[1].field_0x5;
          for (; iVar10 != 0; iVar10 = iVar10 + -1) {
            *puVar6 = *param_5;
            param_5 = param_5 + 1;
            puVar6 = (byte *)(puVar6 + 1);
          }
        }
        uVar20 = 0xffffffff;
        uVar19 = 7;
        iVar18 = -1;
        pSVar1 = this_00->array_00BC[1].field_00B8.vtable;
        iVar17 = -1;
        iVar16 = 1;
        uVar14 = 0xffffffff;
        cVar15 = CASE_FFFFFFFE;
        iVar9 = 0x1e;
        iVar10 = 0x7d;
        pcVar4 = LoadResourceString(this_00->array_00BC[1].field_0000,g_hINSTANCE_00807618);
        psVar7 = (short *)ccFntTy::CreateTypeSSpr
                                    ((ccFntTy *)g_startSystem_0081176C->field_0030,pcVar4,iVar10,
                                     iVar9,cVar15,uVar14,iVar16,iVar17,iVar18);
        /* ST_CALLSITE[005B82E8]: CALL dword ptr [ESI + 0x8] */
        (*pSVar1->SetImagesPtr)(&this_00->array_00BC[1].field_00B8,psVar7,uVar19,uVar20);
        this_00->array_00BC[1].field_00B8.field_0008 = 0;
      }
LAB_005b8415:
      /* ST_CALLSITE[005B8417]: CALL 0x00403459; direct=00403459 MMObjTy::CloseButtons */
      MMObjTy::CloseButtons((MMObjTy *)this_00);
      bVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      if (this_00->field_009A != 0) {
        do {
          uVar14 = local_8 & 0xff;
          this_00->array_00BC[uVar14].field_0027.field_0044 = this_00->field_0061;
          this_00->array_00BC[uVar14].field_0027.field_0040 = ((local_c & 0xff) + 1) * 100;
          /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
          if (*(int *)((int)(this_00->array_00BC + 0xd) + uVar14 * 0x27 + 0xc) != 0) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)((char)local_c + '\x01'));
          }
          bVar3 = bVar3 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
        } while (bVar3 < this_00->field_009A);
      }
      if (this_00->field_0065 == '\x02') {
        this_00->field_0065 = 3;
        this_00->field_1C9C = 0x1010101;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        thunk_FUN_005b6730(this_00,5,'\0',-1);
        this_00->field_1CAA = 0;
      }
      else {
        this_00->field_0065 = 4;
        this_00->field_1C9C = 0x1010101;
        this_00->field_1CA0 = 0x1010101;
        this_00->field_1CA4 = 0x1010101;
        this_00->field_1CA8 = 1;
        thunk_FUN_005b6730(this_00,6,'\x01',-1);
        this_00->field_1CAA = 1;
        if (this_00->field_1D8C != 0xffffffff) {
          FUN_006b3af0((int *)this_00->field_1DD0,this_00->field_1D8C);
        }
        local_8 = local_8 & 0xffffff00;
        if (this_00->field_009A != 0) {
          do {
            uVar20 = local_8 & 0xff;
            uVar14 = this_00->array_00BC[uVar20].field_00B8.field_0004;
            if (uVar14 != 0xffffffff) {
              FUN_006b3af0((int *)this_00->array_00BC[uVar20].field_00B8.field_0048,uVar14);
            }
            if ((this_00->array_00BC[uVar20].field_0026 != '\0') &&
               (uVar14 = this_00->array_00BC[uVar20].field_0149.field_0004, uVar14 != 0xffffffff)) {
              FUN_006b3af0((int *)this_00->array_00BC[uVar20].field_0149.field_0048,uVar14);
            }
            bVar3 = (char)local_8 + 1;
            local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
          } while (bVar3 < this_00->field_009A);
          g_currentExceptionFrame = local_78.previous;
          return 1;
        }
      }
      g_currentExceptionFrame = local_78.previous;
      return 1;
    }
    g_currentExceptionFrame = local_78.previous;
    iVar8 = ReportDebugMessage("E:\\__titans\\Start\\mmsg_obj.cpp",0x14e,0,iVar3,"%s"
                               ,"MMsgTy::SetMessage");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    RaiseInternalException(iVar3,0,"E:\\__titans\\Start\\mmsg_obj.cpp",0x14e);
  }
  return 0;
}


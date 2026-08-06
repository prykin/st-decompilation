#include "../../pseudocode_runtime.h"


/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmsg_obj.cpp
   MMsgTy::NoneMMsg */

void __thiscall MMsgTy::NoneMMsg(MMsgTy *this)

{
  char cVar1;
  byte bVar2;
  UINT UVar3;
  StartSystemTy *pSVar4;
  MMsgTy *this_00;
  int iVar6;
  uint uVar6;
  byte *puVar7;
  int iVar9;
  int iVar8;
  int iVar10;
  char *pcVar11;
  UINT *pUVar12;
  uint *puVar13;
  byte *puVar15;
  UINT *pUVar16;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
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
  iVar6 = Library::MSVCRT::__setjmp3(local_bc.jumpBuffer,0);
  this_00 = local_18;
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
      this_00->field_1D90 = this_00->field_1D90 + 1;
      if (this_00->field_1D8C != 0xffffffff) {
        Library::DKW::DDX::FUN_006b3730
                  ((uint *)this_00->field_1DD0,this_00->field_1D8C,this_00->field_1D90,
                   this_00->field_1DA4,this_00->field_1DA8);
      }
      thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
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
        this_00->field_1D90 = this_00->field_1D90 + 1;
        if (this_00->field_1D8C != 0xffffffff) {
          Library::DKW::DDX::FUN_006b3730
                    ((uint *)this_00->field_1DD0,this_00->field_1D8C,this_00->field_1D90,
                     this_00->field_1DA4,this_00->field_1DA8);
        }
        thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
      }
    }
    iVar10 = 0;
    if (this_00->field_009A != 0) {
      puVar13 = &this_00->field_00FF;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(char *)((int)&this_00->field_1C9C + iVar10) != '\0') &&
           (*(int *)((int)puVar13 + -0x43) != 0)) {
          if (puVar13[9] <= this_00->field_0061 - puVar13[10]) {
            if ((int)puVar13[-5] < (int)(puVar13[-4] - 1)) {
              uVar6 = puVar13[-5] + 1;
              puVar13[-5] = uVar6;
              if (puVar13[-6] != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          ((uint *)puVar13[0xb],puVar13[-6],uVar6,*puVar13,puVar13[1]);
              }
            }
            else {
              if (STField<int>(puVar13,0x81) + -3 <= STField<int>(puVar13,0x7d))
              goto LAB_005b7ad9;
              if ((STField<int>(puVar13,0x7d) == 0) &&
                 (STField<uint>(puVar13,0x79) != 0xffffffff)) {
                Library::DKW::DDX::FUN_006b34d0
                          (STField<uint *>(puVar13,0xbd),STField<uint>(puVar13,0x79),0xfffffffe
                           ,STField<uint>(puVar13,0x91),STField<uint>(puVar13,0x95));
              }
              uVar6 = STField<int>(puVar13,0x7d) + 1;
              STField<uint>(puVar13,0x7d) = uVar6;
              if (STField<uint>(puVar13,0x79) != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          (STField<uint *>(puVar13,0xbd),STField<uint>(puVar13,0x79),uVar6,
                           STField<uint>(puVar13,0x91),STField<uint>(puVar13,0x95));
              }
              thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
            }
          }
          local_c = 0;
        }
LAB_005b7ad9:
        iVar10 = iVar10 + 1;
        puVar13 = (uint *)((int)puVar13 + 0x1fb);
      } while (iVar10 < (int)(uint)this_00->field_009A);
    }
    if (local_c != 0) {
      this_00->field_0065 = 1;
      if (this_00->field_009A != 0) {
        local_8 = &this_00->field_0066;
        local_10 = (UINT *)&this_00->field_0x1c82;
        puVar7 = (byte *)&this_00->field_0xa7;
        iVar10 = 0x68ff;
        do {
          if ((STField<int>(puVar7,0x15) != 0) && (*local_8 == 0)) {
            if (this_00->field_1CA9 == '\0') {
              uVar6 = (uint)(-1 < (short)*local_10);
            }
            else {
              uVar6 = 1;
            }
            iVar8 = MMObjTy::CreateSprBut
                              ((MMObjTy *)this_00,1,uVar6,puVar7[0x16] + puVar7[-3],
                               puVar7[0x17] + puVar7[-2],puVar7[-1],*puVar7,iVar10,iVar10 + 0x80);
            *local_8 = iVar8;
          }
          local_10 = (UINT *)((int)local_10 + 2);
          local_8 = local_8 + 1;
          puVar7 = (byte *)((int)puVar7 + 0x1fb);
          iVar8 = iVar10 + -0x68fe;
          iVar10 = iVar10 + 1;
        } while (iVar8 < (int)(uint)this_00->field_009A);
      }
      if ((this_00->field_1CA9 == '\0') && (local_58[2] = this_00->field_1CAB, local_58[2] != 0)) {
        pSVar4 = this_00->field_000C;
        memset(local_58, 0, 0x20); /* compiler bulk-zero initialization */
        local_58[3] = 2;
        local_58[4] = 0x693f;
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
    if (this_00->field_009A != 0) {
      pcVar11 = (char *)&this_00->field_1C9C;
      local_14 = -0x1c9c - (int)this_00;
      puVar13 = &this_00->field_00FF;
      do {
        if (*pcVar11 != '\0') {
          if (puVar13[9] <= this_00->field_0061 - puVar13[10]) {
            if ((int)puVar13[-5] < 1) {
              if (this_00->field_1CAA == '\0') {
                *(undefined4 *)((int)puVar13 + -0x43) = 0;
              }
              *pcVar11 = '\0';
              goto LAB_005b7655;
            }
            uVar6 = puVar13[-5] - 1;
            puVar13[-5] = uVar6;
            if (puVar13[-6] != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)puVar13[0xb],puVar13[-6],uVar6,*puVar13,puVar13[1]);
            }
          }
          local_c = 0;
        }
LAB_005b7655:
        puVar13 = (uint *)((int)puVar13 + 0x1fb);
        pcVar11 = pcVar11 + 1;
      } while ((int)(pcVar11 + local_14) < (int)(uint)this_00->field_009A);
    }
    if (local_c != 0) {
      this_00->field_0065 = 2;
      if (this_00->field_1CA9 != '\0') {
        if (this_00->field_1CAA != '\0') {
          this_00->field_1C9C = 0x1010101;
          this_00->field_1CA0 = 0x1010101;
          this_00->field_1CA4 = 0x1010101;
          this_00->field_1CA8 = 1;
          this_00->field_0065 = 3;
          thunk_FUN_005b6730(this_00,5,'\0',-1);
          this_00->field_1CAA = 0;
          g_currentExceptionFrame = local_bc.previous;
          return;
        }
        bVar2 = this_00->field_1A5A;
        if ((bVar2 != 0xff) && (*(int *)(&this_00->field_0xd1 + (uint)bVar2 * 0x1fb) != 0)) {
          AppClassTy::PostNextMessage
                    ((AppClassTy *)&DAT_00807620,
                     (undefined4 *)(&this_00->field_0xc1 + (uint)bVar2 * 0x1fb));
        }
        iVar10 = this_00->field_1CAB;
        if (iVar10 != 0) {
          memset(local_78, 0, 0x20); /* compiler bulk-zero initialization */
          local_78[3] = 2;
          local_78[4] = 0x693f;
          local_78[2] = iVar10;
          (*this_00->field_000C->vtable->vfunc_18)((short)local_78);
        }
        if (this_00->field_1A5F != '\0') {
          local_14 = 0;
          puVar7 = (byte *)&this_00->field_0x1a60;
          puVar15 = (byte *)(&this_00->field_1CD0);
          memmove(puVar15, puVar7, 0x27); /* compiler REP MOVS byte copy */
          iVar10 = 0;
          if (this_00->field_009A != 0) {
            local_8 = (UINT *)&this_00->field_0xbc;
            local_10 = (UINT *)&this_00->field_0x1a87;
            do {
              pUVar12 = local_10;
              pUVar16 = local_8;
              memmove(pUVar16, pUVar12, 0x27); /* compiler REP MOVS byte copy */
              if (*local_8 != 0) {
                uVar22 = 0xffffffff;
                uVar21 = 7;
                iVar20 = -1;
                UVar3 = local_8[0x2e];
                iVar19 = -1;
                iVar18 = 1;
                uVar6 = 0xffffffff;
                cVar17 = CASE_FFFFFFFE;
                iVar8 = 0x1e;
                iVar10 = 0x7d;
                puVar13 = (uint *)LoadResourceString(*local_8,g_hINSTANCE_00807618);
                puVar7 = ccFntTy::CreateTypeSSpr
                                   (g_startSystem_0081176C->field_0030,puVar13,iVar10,iVar8,cVar17,
                                    uVar6,iVar18,iVar19,iVar20);
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (**(code **)(UVar3 + 8))(puVar7,uVar21,uVar22);
                local_8[0x30] = 0;
              }
              local_14 = local_14 + 1;
              local_10 = (UINT *)((int)local_10 + 0x27);
              local_8 = (UINT *)((int)local_8 + 0x1fb);
            } while (local_14 < (int)(uint)this_00->field_009A);
          }
          if ((this_00->field_1A5F == '\x03') || (this_00->field_1A5F == '\x01')) {
            this_00->field_1C9C = 0x1010101;
            this_00->field_1CA0 = 0x1010101;
            this_00->field_1CA4 = 0x1010101;
            this_00->field_1CA8 = 1;
            this_00->field_0065 = 3;
          }
          this_00->field_1A5F = 0;
        }
        this_00->field_1CA9 = 0;
        g_currentExceptionFrame = local_bc.previous;
        return;
      }
      iVar10 = this_00->field_1CAB;
      if (iVar10 != 0) {
        memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
        local_38[3] = 2;
        local_38[4] = 0x693f;
        local_38[2] = iVar10;
        (*this_00->field_000C->vtable->vfunc_18)((short)local_38);
      }
      bVar2 = this_00->field_1A5A;
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


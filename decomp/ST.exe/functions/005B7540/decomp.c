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
  code *pcVar5;
  MMsgTy *this_00;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  char *pcVar10;
  UINT *pUVar11;
  uint *puVar12;
  undefined4 *puVar14;
  UINT *pUVar15;
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
    iVar6 = 0;
    if (this_00->field_009A != 0) {
      puVar12 = &this_00->field_00FF;
      do {
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        if ((*(char *)((int)&this_00->field_1C9C + iVar6) != '\0') &&
           (*(int *)((int)puVar12 + -0x43) != 0)) {
          if (puVar12[9] <= this_00->field_0061 - puVar12[10]) {
            if ((int)puVar12[-5] < (int)(puVar12[-4] - 1)) {
              uVar7 = puVar12[-5] + 1;
              puVar12[-5] = uVar7;
              if (puVar12[-6] != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          ((uint *)puVar12[0xb],puVar12[-6],uVar7,*puVar12,puVar12[1]);
              }
            }
            else {
              if (*(int *)((int)puVar12 + 0x81) + -3 <= *(int *)((int)puVar12 + 0x7d))
              goto LAB_005b7ad9;
              if ((*(int *)((int)puVar12 + 0x7d) == 0) &&
                 (*(uint *)((int)puVar12 + 0x79) != 0xffffffff)) {
                Library::DKW::DDX::FUN_006b34d0
                          (*(uint **)((int)puVar12 + 0xbd),*(uint *)((int)puVar12 + 0x79),0xfffffffe
                           ,*(uint *)((int)puVar12 + 0x91),*(uint *)((int)puVar12 + 0x95));
              }
              uVar7 = *(int *)((int)puVar12 + 0x7d) + 1;
              *(uint *)((int)puVar12 + 0x7d) = uVar7;
              if (*(uint *)((int)puVar12 + 0x79) != 0xffffffff) {
                Library::DKW::DDX::FUN_006b3730
                          (*(uint **)((int)puVar12 + 0xbd),*(uint *)((int)puVar12 + 0x79),uVar7,
                           *(uint *)((int)puVar12 + 0x91),*(uint *)((int)puVar12 + 0x95));
              }
              thunk_FUN_005b6730(this_00,0x1e,'\x01',-1);
            }
          }
          local_c = 0;
        }
LAB_005b7ad9:
        iVar6 = iVar6 + 1;
        puVar12 = (uint *)((int)puVar12 + 0x1fb);
      } while (iVar6 < (int)(uint)this_00->field_009A);
    }
    if (local_c != 0) {
      this_00->field_0065 = 1;
      if (this_00->field_009A != 0) {
        local_8 = &this_00->field_0066;
        local_10 = (UINT *)&this_00->field_0x1c82;
        puVar8 = (undefined4 *)&this_00->field_0xa7;
        iVar6 = 0x68ff;
        do {
          if ((*(int *)((int)puVar8 + 0x15) != 0) && (*local_8 == 0)) {
            if (this_00->field_1CA9 == '\0') {
              uVar7 = (uint)(-1 < (short)*local_10);
            }
            else {
              uVar7 = 1;
            }
            iVar9 = MMObjTy::CreateSprBut
                              ((MMObjTy *)this_00,1,uVar7,puVar8[0x16] + puVar8[-3],
                               puVar8[0x17] + puVar8[-2],puVar8[-1],*puVar8,iVar6,iVar6 + 0x80);
            *local_8 = iVar9;
          }
          local_10 = (UINT *)((int)local_10 + 2);
          local_8 = local_8 + 1;
          puVar8 = (undefined4 *)((int)puVar8 + 0x1fb);
          iVar9 = iVar6 + -0x68fe;
          iVar6 = iVar6 + 1;
        } while (iVar9 < (int)(uint)this_00->field_009A);
      }
      if ((this_00->field_1CA9 == '\0') && (local_58[2] = this_00->field_1CAB, local_58[2] != 0)) {
        pSVar4 = this_00->field_000C;
        memset(local_58, 0, 0x20); /* compiler bulk-zero initialization */
        local_58[3] = 2;
        local_58[4] = 0x693f;
        (*pSVar4->vtable->vfunc_18)(local_58);
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
      pcVar10 = (char *)&this_00->field_1C9C;
      local_14 = -0x1c9c - (int)this_00;
      puVar12 = &this_00->field_00FF;
      do {
        if (*pcVar10 != '\0') {
          if (puVar12[9] <= this_00->field_0061 - puVar12[10]) {
            if ((int)puVar12[-5] < 1) {
              if (this_00->field_1CAA == '\0') {
                *(undefined4 *)((int)puVar12 + -0x43) = 0;
              }
              *pcVar10 = '\0';
              goto LAB_005b7655;
            }
            uVar7 = puVar12[-5] - 1;
            puVar12[-5] = uVar7;
            if (puVar12[-6] != 0xffffffff) {
              Library::DKW::DDX::FUN_006b3730
                        ((uint *)puVar12[0xb],puVar12[-6],uVar7,*puVar12,puVar12[1]);
            }
          }
          local_c = 0;
        }
LAB_005b7655:
        puVar12 = (uint *)((int)puVar12 + 0x1fb);
        pcVar10 = pcVar10 + 1;
      } while ((int)(pcVar10 + local_14) < (int)(uint)this_00->field_009A);
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
        iVar6 = this_00->field_1CAB;
        if (iVar6 != 0) {
          memset(local_78, 0, 0x20); /* compiler bulk-zero initialization */
          local_78[3] = 2;
          local_78[4] = 0x693f;
          local_78[2] = iVar6;
          (*this_00->field_000C->vtable->vfunc_18)(local_78);
        }
        if (this_00->field_1A5F != '\0') {
          local_14 = 0;
          puVar8 = (undefined4 *)&this_00->field_0x1a60;
          puVar14 = &this_00->field_1CD0;
          for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar14 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar14 = puVar14 + 1;
          }
          *(undefined2 *)puVar14 = *(undefined2 *)puVar8;
          *(undefined1 *)((int)puVar14 + 2) = *(undefined1 *)((int)puVar8 + 2);
          if (this_00->field_009A != 0) {
            local_8 = (UINT *)&this_00->field_0xbc;
            local_10 = (UINT *)&this_00->field_0x1a87;
            do {
              pUVar11 = local_10;
              pUVar15 = local_8;
              for (iVar6 = 9; iVar6 != 0; iVar6 = iVar6 + -1) {
                *pUVar15 = *pUVar11;
                pUVar11 = pUVar11 + 1;
                pUVar15 = pUVar15 + 1;
              }
              *(short *)pUVar15 = (short)*pUVar11;
              *(undefined1 *)((int)pUVar15 + 2) = *(undefined1 *)((int)pUVar11 + 2);
              if (*local_8 != 0) {
                uVar21 = 0xffffffff;
                uVar20 = 7;
                iVar19 = -1;
                UVar3 = local_8[0x2e];
                iVar18 = -1;
                iVar17 = 1;
                uVar7 = 0xffffffff;
                cVar16 = CASE_FFFFFFFE;
                iVar9 = 0x1e;
                iVar6 = 0x7d;
                puVar12 = (uint *)LoadResourceString(*local_8,g_module_00807618);
                puVar8 = ccFntTy::CreateTypeSSpr
                                   (g_startSystem_0081176C->field_0030,puVar12,iVar6,iVar9,cVar16,
                                    uVar7,iVar17,iVar18,iVar19);
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                (**(code **)(UVar3 + 8))(puVar8,uVar20,uVar21);
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
      iVar6 = this_00->field_1CAB;
      if (iVar6 != 0) {
        memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
        local_38[3] = 2;
        local_38[4] = 0x693f;
        local_38[2] = iVar6;
        (*this_00->field_000C->vtable->vfunc_18)(local_38);
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


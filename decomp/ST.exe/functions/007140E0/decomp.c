#include "../../pseudocode_runtime.h"


int __thiscall FUN_007140e0(void *this,int param_1,char param_2)

{
  char cVar1;
  ccFntTy *this_00;
  AnonShape_00710790_4CBB90D4 *pAVar2;
  bool bVar3;
  int local_EAX_194;
  int local_EAX_260;
  int local_EAX_359;
  char *pcVar4_mgC;
  uint *puVar4;
  int local_EAX_637;
  int local_EAX_717;
  int local_EAX_781;
  int iVar9;
  int local_EAX_1518;
  int local_EAX_1664;
  char *pcVar4_mg5;
  int local_EAX_1946;
  int local_EAX_2026;
  int local_EAX_2090;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int iVar10;
  int iVar11;
  byte *puVar12;
  char *pcVar13;
  char *pcVar14;
  AnonShape_007109F0_BD33A2FF local_6c;
  char local_24 [12];
  int local_18;
  int local_14;
  int local_10;
  RecoveredSourceFamily_dibcopy *local_c;
  undefined1 local_5;

  iVar10 = 0;
  local_c = nullptr;
  local_10 = 0;
  local_5 = 0;
  if ((((STField<char *>(this,0x58) == nullptr) || (*(ccFntTy **)this == nullptr)) ||
      (STField<int>(this,8) <= STField<int>(this,4))) ||
     (*STField<char *>(this,0x58) == '\0')) {
    return 0;
  }
  ccFntTy::Save(*(ccFntTy **)this,(undefined4 *)&local_6c);
  FUN_007109f0(*(void **)this,(AnonShape_007109F0_BD33A2FF *)((int)this + 0x10));
  this_00 = *(ccFntTy **)this;
  if (&stack0x00000000 != &DAT_0000000c) {
    local_c = (RecoveredSourceFamily_dibcopy *)this_00->field_0072;
  }
  if (&stack0x00000000 != (undefined1 *)0x10) {
    iVar10 = this_00->field_0076;
    local_10 = iVar10;
  }
  if (this_00->field_007A == 0) {
    iVar10 = STField<int>(this,8) + -3;
    if (iVar10 <= STField<int>(this,4)) {
      if (param_1 != 0) {
        if (STField<int>(this,4) == iVar10) {
          ccFntTy::WrTxt(this_00,STField<char *>(this,0x58),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x94),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -2) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x98);
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<char *>(this,0x58),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x98),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -1) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x9c);
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<char *>(this,0x58),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x9c),-1,-1);
        }
        *(undefined4 *)(*(int *)this + 0x82) = 0xffffffff;
      }
      goto cf_common_exit_00714ACB;
    }
    iVar10 = STField<int>(this,0x7c);
    if (-1 < iVar10) {
      STField<undefined4>(this,0x7c) = 0xffffffff;
      STField<int>(this,0x8c) = iVar10 + 1 + STField<int>(this,0x58);
    }
    bVar3 = false;
    local_18 = 0;
    local_EAX_194 =
         FUN_0070cd90(&this_00->field_0x9e,
                      (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
    if (local_EAX_194 == 0) {
      iVar10 = STField<int>(this,0xc) + 1;
      STField<int>(this,0xc) = iVar10;
      iVar10 = FUN_0070cdc0((byte *)(iVar10 + STField<int>(this,0x58)));
      if (iVar10 < 0) {
        local_EAX_260 =
             FUN_0070cd90((char *)(*(int *)this + 0x9e),
                          (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
        if (local_EAX_260 == 0) {
          bVar3 = true;
        }
        else {
          local_18 = 1;
        }
      }
      else {
        STField<int>(this,0xc) = STField<int>(this,0xc) + 1;
      }
    }
    uVar6 = STField<int>(this,8) * 2 + 10;
    puVar12 = (byte *)(STField<undefined4 *>(this,0x88));
    memset(puVar12, 0, uVar6); /* compiler bulk-zero initialization */
    uVar5 = 0;
    Library::MSVCRT::_strncpy
              (STField<char *>(this,0x88),STField<char *>(this,0x58),
               STField<size_t>(this,0xc));
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_007c8ff4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_EAX_359 =
         Library::MSVCRT::_strncmp
                   ((char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),&DAT_007c8ff4,
                    ~uVar6 - 1);
    if (local_EAX_359 == 0) {
      STField<undefined4>(this,0x7c) = STField<undefined4>(this,0xc);
    }
    else {
      if ((!bVar3) && (local_18 == 0)) {
        uVar6 = 0xffffffff;
        pcVar7 = (char *)(*(int *)this + 0x9e);
        do {
          pcVar14 = pcVar7;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar14 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar14;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar10 = -1;
        pcVar7 = STField<char *>(this,0x88);
        do {
          pcVar13 = pcVar7;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar13;
        } while (cVar1 != '\0');
        pcVar7 = pcVar14 + -uVar6;
        pcVar14 = pcVar13 + -1;
        memmove(pcVar14, pcVar7, uVar6); /* compiler REP MOVS byte copy */
        uVar5 = 0;
      }
      pcVar4_mgC = Library::MSVCRT::__itoa(STField<int>(this,0x98),local_24,0x10);
      uVar6 = 0xffffffff;
      do {
        pcVar7 = pcVar4_mgC;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar7 = pcVar4_mgC + 1;
        cVar1 = *pcVar4_mgC;
        pcVar4_mgC = pcVar7;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar10 = -1;
      pcVar14 = STField<char *>(this,0x88);
      do {
        pcVar13 = pcVar14;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar13;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -uVar6;
      pcVar14 = pcVar13 + -1;
      memmove(pcVar14, pcVar7, uVar6); /* compiler REP MOVS byte copy */
      Library::MSVCRT::_strncat
                (STField<char *>(this,0x88),
                 (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      if (bVar3) {
        Library::MSVCRT::_strncat
                  (STField<char *>(this,0x88),
                   (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      }
    }
    iVar10 = -1;
    iVar11 = -1;
    switch(STField<undefined4>(this,0x74)) {
    case 0xfffffffc:
      puVar4 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar4 != nullptr) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      local_EAX_781 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar10 = (STField<int>(this,0x5c) + STField<int>(this,100)) / 2 - local_EAX_781;
      if (puVar4 != nullptr) {
        *(undefined1 *)puVar4 = local_5;
      }
    case 0xfffffff9:
      iVar11 = STField<int>(this,100);
      break;
    case 0xfffffffd:
      puVar4 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar4 != nullptr) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      local_EAX_717 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar10 = STField<int>(this,0x5c) - local_EAX_717;
      if (puVar4 != nullptr) {
        *(undefined1 *)puVar4 = local_5;
      }
      break;
    case 0xfffffffe:
      puVar4 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar4 != nullptr) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      local_EAX_637 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar10 = (STField<int>(this,0x5c) - local_EAX_637) / 2;
      if (puVar4 != nullptr) {
        *(undefined1 *)puVar4 = local_5;
      }
    }
    if (param_1 == 0) goto cf_common_exit_00714ACB;
    iVar8 = STField<int>(this,0x70);
    uVar6 = STField<uint>(this,0x94);
  }
  else {
    if (STField<int>(this,8) + -3 <= STField<int>(this,4)) {
      if (param_1 != 0) {
        FUN_006b4170(local_c,iVar10,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                     (byte)STField<undefined4>(this,0xa0));
        if (STField<int>(this,4) == STField<int>(this,8) + -3) {
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<char *>(this,0x90),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x94),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -2) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x98);
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<char *>(this,0x90),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x98),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -1) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x9c);
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<char *>(this,0x90),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x9c),-1,-1);
        }
        *(undefined4 *)(*(int *)this + 0x82) = 0xffffffff;
      }
      goto cf_common_exit_00714ACB;
    }
    if (((int)this_00->field_005C < 0) && (STField<int>(this,0x74) < -4)) {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = '\x01';
    }
    if (-1 < STField<int>(this,0x7c)) {
      if (this_00->field_00A0 != 0) {
        FUN_00710790((AnonShape_00710790_4CBB90D4 *)this_00);
      }
      iVar11 = *(int *)(*(int *)this + 0x5c) + *(int *)&this_00->field_0x8a +
               STField<int>(this,0xa4);
      iVar10 = STField<int>(this,0x7c) + 1;
      STField<undefined4>(this,0x7c) = 0xffffffff;
      STField<int>(this,0x80) = iVar10;
      *(int *)(STField<int>(this,0xa8) + STField<int>(this,0xb0) * 4) = iVar10;
      pAVar2 = *(AnonShape_00710790_4CBB90D4 **)this;
      STField<int>(this,0xb0) = STField<int>(this,0xb0) + 1;
      STField<int>(this,0x8c) = STField<int>(this,0x80) + STField<int>(this,0x58);
      if (*(int *)(pAVar2 + 1) != 0) {
        FUN_00710790(pAVar2);
      }
      if (pAVar2->field_008A + -1 + iVar11 < STField<int>(this,0x60)) {
        STField<int>(this,0xa4) = iVar11;
      }
      else {
        iVar10 = *(int *)(STField<int>(this,0xa8) + STField<int>(this,0xac) * 4);
        STField<int>(this,0x84) = iVar10;
        STField<int>(this,0xac) = STField<int>(this,0xac) + 1;
        STField<int>(this,0x90) = iVar10 + STField<int>(this,0x58);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_2 == '\0') {
          uVar6 = STField<int>(this,8) * 2 + 10;
          puVar12 = (byte *)(STField<undefined4 *>(this,0x88));
          memset(puVar12, 0, uVar6); /* compiler bulk-zero initialization */
          uVar5 = 0;
          Library::MSVCRT::_strncpy
                    (STField<char *>(this,0x88),STField<char *>(this,0x90),
                     STField<int>(this,0xc) - STField<int>(this,0x84));
          FUN_006b4170(local_c,local_10,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                       (byte)STField<undefined4>(this,0xa0));
          if ((STField<int>(this,0x74) == -4) || (STField<int>(this,0x74) == -7)) {
            iVar10 = STField<int>(this,100);
          }
          else {
            iVar10 = -1;
          }
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<char *>(this,0x88),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x94),-1,iVar10);
        }
      }
    }
    bVar3 = false;
    local_14 = 0;
    local_18 = 0;
    iVar9 = FUN_0070cd90((char *)(*(int *)this + 0x9e),
                         (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
    if (iVar9 == 0) {
      iVar10 = STField<int>(this,0xc) + 1;
      STField<int>(this,0xc) = iVar10;
      iVar10 = FUN_0070cdc0((byte *)(iVar10 + STField<int>(this,0x58)));
      if (iVar10 < 0) {
        local_EAX_1518 =
             FUN_0070cd90((char *)(*(int *)this + 0x9e),
                          (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
        if (local_EAX_1518 == 0) {
          bVar3 = true;
          local_14 = 1;
        }
        else {
          local_18 = 1;
        }
      }
      else {
        STField<int>(this,0xc) = STField<int>(this,0xc) + 1;
      }
    }
    uVar6 = STField<int>(this,8) * 2 + 10;
    puVar12 = (byte *)(STField<undefined4 *>(this,0x88));
    memset(puVar12, 0, uVar6); /* compiler bulk-zero initialization */
    uVar5 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == '\x01') {
      iVar10 = STField<int>(this,0x84);
      pcVar7 = STField<char *>(this,0x90);
    }
    else {
      iVar10 = STField<int>(this,0x80);
      pcVar7 = STField<char *>(this,0x8c);
    }
    Library::MSVCRT::_strncpy
              (STField<char *>(this,0x88),pcVar7,STField<int>(this,0xc) - iVar10);
    uVar6 = 0xffffffff;
    pcVar7 = &DAT_007c8ff4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    local_EAX_1664 =
         Library::MSVCRT::_strncmp
                   ((char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),&DAT_007c8ff4,
                    ~uVar6 - 1);
    if (local_EAX_1664 == 0) {
      STField<undefined4>(this,0x7c) = STField<undefined4>(this,0xc);
    }
    else {
      if ((!bVar3) && (local_18 == 0)) {
        uVar6 = 0xffffffff;
        pcVar7 = (char *)(*(int *)this + 0x9e);
        do {
          pcVar14 = pcVar7;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar14 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar14;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar10 = -1;
        pcVar7 = STField<char *>(this,0x88);
        do {
          pcVar13 = pcVar7;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar13 = pcVar7 + 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar13;
        } while (cVar1 != '\0');
        pcVar7 = pcVar14 + -uVar6;
        pcVar14 = pcVar13 + -1;
        memmove(pcVar14, pcVar7, uVar6); /* compiler REP MOVS byte copy */
        uVar5 = 0;
      }
      pcVar4_mg5 = Library::MSVCRT::__itoa(STField<int>(this,0x98),local_24,0x10);
      uVar6 = 0xffffffff;
      do {
        pcVar7 = pcVar4_mg5;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar7 = pcVar4_mg5 + 1;
        cVar1 = *pcVar4_mg5;
        pcVar4_mg5 = pcVar7;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar10 = -1;
      pcVar14 = STField<char *>(this,0x88);
      do {
        pcVar13 = pcVar14;
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        pcVar13 = pcVar14 + 1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar13;
      } while (cVar1 != '\0');
      pcVar7 = pcVar7 + -uVar6;
      pcVar14 = pcVar13 + -1;
      memmove(pcVar14, pcVar7, uVar6); /* compiler REP MOVS byte copy */
      Library::MSVCRT::_strncat
                (STField<char *>(this,0x88),
                 (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      if (local_14 != 0) {
        Library::MSVCRT::_strncat
                  (STField<char *>(this,0x88),
                   (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      }
    }
    iVar10 = -1;
    local_14 = -1;
    local_18 = 0;
    switch(STField<undefined4>(this,0x74)) {
    case 0xfffffff9:
      local_14 = STField<int>(this,100);
    case 0xfffffffa:
    case 0xfffffffb:
      local_18 = 1;
      break;
    case 0xfffffffc:
      puVar4 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar4 != nullptr) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      local_EAX_2090 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar10 = (STField<int>(this,0x5c) + STField<int>(this,100)) / 2 - local_EAX_2090;
      if (puVar4 != nullptr) {
        *(undefined1 *)puVar4 = local_5;
      }
      local_14 = STField<int>(this,100);
      break;
    case 0xfffffffd:
      puVar4 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar4 != nullptr) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      local_EAX_2026 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar10 = STField<int>(this,0x5c) - local_EAX_2026;
      if (puVar4 != nullptr) {
        *(undefined1 *)puVar4 = local_5;
      }
      break;
    case 0xfffffffe:
      puVar4 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar4 != nullptr) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      local_EAX_1946 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar10 = (STField<int>(this,0x5c) - local_EAX_1946) / 2;
      if (puVar4 != nullptr) {
        *(undefined1 *)puVar4 = local_5;
      }
    }
    if (param_1 == 0) goto cf_common_exit_00714ACB;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == '\x01') {
      FUN_006b4170(local_c,local_10,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                   (byte)STField<undefined4>(this,0xa0));
      ccFntTy::WrTxt(*(ccFntTy **)this,STField<char *>(this,0x88),STField<int>(this,0x6c),
                     STField<int>(this,0x70),STField<uint>(this,0x94),iVar10,local_14);
      goto cf_common_exit_00714ACB;
    }
    if (local_18 != 0) {
      pAVar2 = *(AnonShape_00710790_4CBB90D4 **)this;
      if (*(int *)(pAVar2 + 1) != 0) {
        FUN_00710790(pAVar2);
      }
      FUN_006b4170(local_c,local_10,0,STField<int>(this,0xa4),STField<int>(this,0x5c),
                   pAVar2->field_008A,(byte)STField<undefined4>(this,0xa0));
    }
    uVar6 = STField<uint>(this,0x94);
    iVar8 = STField<int>(this,0xa4);
    iVar11 = local_14;
  }
  ccFntTy::WrTxt(*(ccFntTy **)this,STField<char *>(this,0x88),STField<int>(this,0x6c),iVar8,
                 uVar6,iVar10,iVar11);
cf_common_exit_00714ACB:
  STField<int>(this,0xc) = STField<int>(this,0xc) + 1;
  STField<int>(this,4) = STField<int>(this,4) + 1;
  FUN_007109f0(*(void **)this,&local_6c);
  return (int)local_c;
}


#include "../../pseudocode_runtime.h"


int __thiscall FUN_007140e0(void *this,int param_1,char param_2)

{
  char cVar1;
  ccFntTy *this_00;
  AnonShape_00710790_4CBB90D4 *pAVar2;
  bool bVar3;
  char *pcVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *puVar11;
  char *pcVar12;
  char *pcVar13;
  AnonShape_007109F0_BD33A2FF local_6c;
  char local_24 [12];
  int local_18;
  int local_14;
  int local_10;
  RecoveredSourceFamily_dibcopy *local_c;
  undefined1 local_5;

  iVar9 = 0;
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
    iVar9 = this_00->field_0076;
    local_10 = iVar9;
  }
  if (this_00->field_007A == 0) {
    iVar9 = STField<int>(this,8) + -3;
    if (iVar9 <= STField<int>(this,4)) {
      if (param_1 != 0) {
        if (STField<int>(this,4) == iVar9) {
          ccFntTy::WrTxt(this_00,STField<uint *>(this,0x58),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x94),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -2) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x98);
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<uint *>(this,0x58),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x98),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -1) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x9c);
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<uint *>(this,0x58),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x9c),-1,-1);
        }
        *(undefined4 *)(*(int *)this + 0x82) = 0xffffffff;
      }
      goto cf_common_exit_00714ACB;
    }
    iVar9 = STField<int>(this,0x7c);
    if (-1 < iVar9) {
      STField<undefined4>(this,0x7c) = 0xffffffff;
      STField<int>(this,0x8c) = iVar9 + 1 + STField<int>(this,0x58);
    }
    bVar3 = false;
    local_18 = 0;
    iVar9 = FUN_0070cd90(&this_00->field_0x9e,
                         (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
    if (iVar9 == 0) {
      iVar9 = STField<int>(this,0xc) + 1;
      STField<int>(this,0xc) = iVar9;
      iVar9 = FUN_0070cdc0((byte *)(iVar9 + STField<int>(this,0x58)));
      if (iVar9 < 0) {
        iVar9 = FUN_0070cd90((char *)(*(int *)this + 0x9e),
                             (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
        if (iVar9 == 0) {
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
    uVar7 = STField<int>(this,8) * 2 + 10;
    puVar11 = (byte *)(STField<undefined4 *>(this,0x88));
    memset(puVar11, 0, uVar7); /* compiler bulk-zero initialization */
    uVar6 = 0;
    Library::MSVCRT::_strncpy
              (STField<char *>(this,0x88),STField<char *>(this,0x58),
               STField<size_t>(this,0xc));
    uVar7 = 0xffffffff;
    pcVar4 = &DAT_007c8ff4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar9 = Library::MSVCRT::_strncmp
                      ((char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),
                       &DAT_007c8ff4,~uVar7 - 1);
    if (iVar9 == 0) {
      STField<undefined4>(this,0x7c) = STField<undefined4>(this,0xc);
    }
    else {
      if ((!bVar3) && (local_18 == 0)) {
        uVar7 = 0xffffffff;
        pcVar4 = (char *)(*(int *)this + 0x9e);
        do {
          pcVar13 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar4 = STField<char *>(this,0x88);
        do {
          pcVar12 = pcVar4;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar12;
        } while (cVar1 != '\0');
        pcVar4 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        memmove(pcVar13, pcVar4, uVar7); /* compiler REP MOVS byte copy */
        uVar6 = 0;
      }
      pcVar4 = Library::MSVCRT::__itoa(STField<int>(this,0x98),local_24,0x10);
      uVar7 = 0xffffffff;
      do {
        pcVar13 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar4 = STField<char *>(this,0x88);
      do {
        pcVar12 = pcVar4;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      pcVar4 = pcVar13 + -uVar7;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar4, uVar7); /* compiler REP MOVS byte copy */
      Library::MSVCRT::_strncat
                (STField<char *>(this,0x88),
                 (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      if (bVar3) {
        Library::MSVCRT::_strncat
                  (STField<char *>(this,0x88),
                   (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      }
    }
    iVar9 = -1;
    iVar10 = -1;
    switch(STField<undefined4>(this,0x74)) {
    case 0xfffffffc:
      puVar5 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = (STField<int>(this,0x5c) + STField<int>(this,100)) / 2 - iVar9;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
    case 0xfffffff9:
      iVar10 = STField<int>(this,100);
      break;
    case 0xfffffffd:
      puVar5 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = STField<int>(this,0x5c) - iVar9;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
      break;
    case 0xfffffffe:
      puVar5 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = (STField<int>(this,0x5c) - iVar9) / 2;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
    }
    if (param_1 == 0) goto cf_common_exit_00714ACB;
    iVar8 = STField<int>(this,0x70);
    uVar7 = STField<uint>(this,0x94);
  }
  else {
    if (STField<int>(this,8) + -3 <= STField<int>(this,4)) {
      if (param_1 != 0) {
        FUN_006b4170(local_c,iVar9,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                     (byte)STField<undefined4>(this,0xa0));
        if (STField<int>(this,4) == STField<int>(this,8) + -3) {
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<uint *>(this,0x90),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x94),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -2) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x98);
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<uint *>(this,0x90),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x98),-1,-1);
        }
        if (STField<int>(this,4) == STField<int>(this,8) + -1) {
          *(undefined4 *)(*(int *)this + 0x82) = STField<undefined4>(this,0x9c);
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<uint *>(this,0x90),STField<int>(this,0x6c),
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
      iVar10 = *(int *)(*(int *)this + 0x5c) + *(int *)&this_00->field_0x8a +
               STField<int>(this,0xa4);
      iVar9 = STField<int>(this,0x7c) + 1;
      STField<undefined4>(this,0x7c) = 0xffffffff;
      STField<int>(this,0x80) = iVar9;
      *(int *)(STField<int>(this,0xa8) + STField<int>(this,0xb0) * 4) = iVar9;
      pAVar2 = *(AnonShape_00710790_4CBB90D4 **)this;
      STField<int>(this,0xb0) = STField<int>(this,0xb0) + 1;
      STField<int>(this,0x8c) = STField<int>(this,0x80) + STField<int>(this,0x58);
      if (*(int *)(pAVar2 + 1) != 0) {
        FUN_00710790(pAVar2);
      }
      if (pAVar2->field_008A + -1 + iVar10 < STField<int>(this,0x60)) {
        STField<int>(this,0xa4) = iVar10;
      }
      else {
        iVar9 = *(int *)(STField<int>(this,0xa8) + STField<int>(this,0xac) * 4);
        STField<int>(this,0x84) = iVar9;
        STField<int>(this,0xac) = STField<int>(this,0xac) + 1;
        STField<int>(this,0x90) = iVar9 + STField<int>(this,0x58);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_2 == '\0') {
          uVar7 = STField<int>(this,8) * 2 + 10;
          puVar11 = (byte *)(STField<undefined4 *>(this,0x88));
          memset(puVar11, 0, uVar7); /* compiler bulk-zero initialization */
          uVar6 = 0;
          Library::MSVCRT::_strncpy
                    (STField<char *>(this,0x88),STField<char *>(this,0x90),
                     STField<int>(this,0xc) - STField<int>(this,0x84));
          FUN_006b4170(local_c,local_10,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                       (byte)STField<undefined4>(this,0xa0));
          if ((STField<int>(this,0x74) == -4) || (STField<int>(this,0x74) == -7)) {
            iVar9 = STField<int>(this,100);
          }
          else {
            iVar9 = -1;
          }
          ccFntTy::WrTxt(*(ccFntTy **)this,STField<uint *>(this,0x88),STField<int>(this,0x6c),
                         STField<int>(this,0x70),STField<uint>(this,0x94),-1,iVar9);
        }
      }
    }
    bVar3 = false;
    local_14 = 0;
    local_18 = 0;
    iVar9 = FUN_0070cd90((char *)(*(int *)this + 0x9e),
                         (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
    if (iVar9 == 0) {
      iVar9 = STField<int>(this,0xc) + 1;
      STField<int>(this,0xc) = iVar9;
      iVar9 = FUN_0070cdc0((byte *)(iVar9 + STField<int>(this,0x58)));
      if (iVar9 < 0) {
        iVar9 = FUN_0070cd90((char *)(*(int *)this + 0x9e),
                             (uint *)(STField<int>(this,0x58) + STField<int>(this,0xc)));
        if (iVar9 == 0) {
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
    uVar7 = STField<int>(this,8) * 2 + 10;
    puVar11 = (byte *)(STField<undefined4 *>(this,0x88));
    memset(puVar11, 0, uVar7); /* compiler bulk-zero initialization */
    uVar6 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == '\x01') {
      iVar9 = STField<int>(this,0x84);
      pcVar4 = STField<char *>(this,0x90);
    }
    else {
      iVar9 = STField<int>(this,0x80);
      pcVar4 = STField<char *>(this,0x8c);
    }
    Library::MSVCRT::_strncpy(STField<char *>(this,0x88),pcVar4,STField<int>(this,0xc) - iVar9);
    uVar7 = 0xffffffff;
    pcVar4 = &DAT_007c8ff4;
    do {
      if (uVar7 == 0) break;
      uVar7 = uVar7 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar9 = Library::MSVCRT::_strncmp
                      ((char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),
                       &DAT_007c8ff4,~uVar7 - 1);
    if (iVar9 == 0) {
      STField<undefined4>(this,0x7c) = STField<undefined4>(this,0xc);
    }
    else {
      if ((!bVar3) && (local_18 == 0)) {
        uVar7 = 0xffffffff;
        pcVar4 = (char *)(*(int *)this + 0x9e);
        do {
          pcVar13 = pcVar4;
          if (uVar7 == 0) break;
          uVar7 = uVar7 - 1;
          pcVar13 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar13;
        } while (cVar1 != '\0');
        uVar7 = ~uVar7;
        iVar9 = -1;
        pcVar4 = STField<char *>(this,0x88);
        do {
          pcVar12 = pcVar4;
          if (iVar9 == 0) break;
          iVar9 = iVar9 + -1;
          pcVar12 = pcVar4 + 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar12;
        } while (cVar1 != '\0');
        pcVar4 = pcVar13 + -uVar7;
        pcVar13 = pcVar12 + -1;
        memmove(pcVar13, pcVar4, uVar7); /* compiler REP MOVS byte copy */
        uVar6 = 0;
      }
      pcVar4 = Library::MSVCRT::__itoa(STField<int>(this,0x98),local_24,0x10);
      uVar7 = 0xffffffff;
      do {
        pcVar13 = pcVar4;
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
        pcVar13 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar13;
      } while (cVar1 != '\0');
      uVar7 = ~uVar7;
      iVar9 = -1;
      pcVar4 = STField<char *>(this,0x88);
      do {
        pcVar12 = pcVar4;
        if (iVar9 == 0) break;
        iVar9 = iVar9 + -1;
        pcVar12 = pcVar4 + 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar12;
      } while (cVar1 != '\0');
      pcVar4 = pcVar13 + -uVar7;
      pcVar13 = pcVar12 + -1;
      memmove(pcVar13, pcVar4, uVar7); /* compiler REP MOVS byte copy */
      Library::MSVCRT::_strncat
                (STField<char *>(this,0x88),
                 (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      if (local_14 != 0) {
        Library::MSVCRT::_strncat
                  (STField<char *>(this,0x88),
                   (char *)(STField<int>(this,0x58) + STField<int>(this,0xc)),1);
      }
    }
    iVar9 = -1;
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
      puVar5 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = (STField<int>(this,0x5c) + STField<int>(this,100)) / 2 - iVar9;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
      local_14 = STField<int>(this,100);
      break;
    case 0xfffffffd:
      puVar5 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = STField<int>(this,0x5c) - iVar9;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
      break;
    case 0xfffffffe:
      puVar5 = Library::MSVCRT::FUN_00730590(STField<uint *>(this,0x8c),&DAT_007c8ff4);
      if (puVar5 != nullptr) {
        local_5 = (undefined1)*puVar5;
        *(undefined1 *)puVar5 = 0;
      }
      iVar9 = FUN_00711110(*(void **)this,STField<char *>(this,0x8c));
      iVar9 = (STField<int>(this,0x5c) - iVar9) / 2;
      if (puVar5 != nullptr) {
        *(undefined1 *)puVar5 = local_5;
      }
    }
    if (param_1 == 0) goto cf_common_exit_00714ACB;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == '\x01') {
      FUN_006b4170(local_c,local_10,0,0,STField<int>(this,0x5c),STField<int>(this,0x60),
                   (byte)STField<undefined4>(this,0xa0));
      ccFntTy::WrTxt(*(ccFntTy **)this,STField<uint *>(this,0x88),STField<int>(this,0x6c),
                     STField<int>(this,0x70),STField<uint>(this,0x94),iVar9,local_14);
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
    uVar7 = STField<uint>(this,0x94);
    iVar8 = STField<int>(this,0xa4);
    iVar10 = local_14;
  }
  ccFntTy::WrTxt(*(ccFntTy **)this,STField<uint *>(this,0x88),STField<int>(this,0x6c),iVar8,
                 uVar7,iVar9,iVar10);
cf_common_exit_00714ACB:
  STField<int>(this,0xc) = STField<int>(this,0xc) + 1;
  STField<int>(this,4) = STField<int>(this,4) + 1;
  FUN_007109f0(*(void **)this,&local_6c);
  return (int)local_c;
}



int __thiscall FUN_007140e0(void *this,int param_1,char param_2)

{
  char cVar1;
  ccFntTy *this_00;
  bool bVar2;
  char *pcVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined4 local_6c [18];
  char local_24 [12];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined1 local_5;
  
  iVar8 = 0;
  local_c = 0;
  local_10 = 0;
  local_5 = 0;
  if ((((*(char **)((int)this + 0x58) == (char *)0x0) || (*(ccFntTy **)this == (ccFntTy *)0x0)) ||
      (*(int *)((int)this + 8) <= *(int *)((int)this + 4))) ||
     (**(char **)((int)this + 0x58) == '\0')) {
    return 0;
  }
  ccFntTy::Save(*(ccFntTy **)this,local_6c);
  FUN_007109f0(*(void **)this,(undefined4 *)((int)this + 0x10));
  this_00 = *(ccFntTy **)this;
  if (&stack0x00000000 != &DAT_0000000c) {
    local_c = *(int *)(this_00 + 0x72);
  }
  if (&stack0x00000000 != (undefined1 *)0x10) {
    iVar8 = *(int *)(this_00 + 0x76);
    local_10 = iVar8;
  }
  if (*(int *)(this_00 + 0x7a) == 0) {
    iVar8 = *(int *)((int)this + 8) + -3;
    if (iVar8 <= *(int *)((int)this + 4)) {
      if (param_1 != 0) {
        if (*(int *)((int)this + 4) == iVar8) {
          ccFntTy::WrTxt(this_00,*(uint **)((int)this + 0x58),*(int *)((int)this + 0x6c),
                         *(int *)((int)this + 0x70),*(undefined4 *)((int)this + 0x94),-1,-1);
        }
        if (*(int *)((int)this + 4) == *(int *)((int)this + 8) + -2) {
          *(undefined4 *)(*(int *)this + 0x82) = *(undefined4 *)((int)this + 0x98);
          ccFntTy::WrTxt(*(ccFntTy **)this,*(uint **)((int)this + 0x58),*(int *)((int)this + 0x6c),
                         *(int *)((int)this + 0x70),*(undefined4 *)((int)this + 0x98),-1,-1);
        }
        if (*(int *)((int)this + 4) == *(int *)((int)this + 8) + -1) {
          *(undefined4 *)(*(int *)this + 0x82) = *(undefined4 *)((int)this + 0x9c);
          ccFntTy::WrTxt(*(ccFntTy **)this,*(uint **)((int)this + 0x58),*(int *)((int)this + 0x6c),
                         *(int *)((int)this + 0x70),*(undefined4 *)((int)this + 0x9c),-1,-1);
        }
        *(undefined4 *)(*(int *)this + 0x82) = 0xffffffff;
      }
      goto cf_common_exit_00714ACB;
    }
    iVar8 = *(int *)((int)this + 0x7c);
    if (-1 < iVar8) {
      *(undefined4 *)((int)this + 0x7c) = 0xffffffff;
      *(int *)((int)this + 0x8c) = iVar8 + 1 + *(int *)((int)this + 0x58);
    }
    bVar2 = false;
    local_18 = 0;
    iVar8 = FUN_0070cd90((char *)(this_00 + 0x9e),
                         (uint *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0xc)));
    if (iVar8 == 0) {
      iVar8 = *(int *)((int)this + 0xc) + 1;
      *(int *)((int)this + 0xc) = iVar8;
      iVar8 = FUN_0070cdc0((byte *)(iVar8 + *(int *)((int)this + 0x58)));
      if (iVar8 < 0) {
        iVar8 = FUN_0070cd90((char *)(*(int *)this + 0x9e),
                             (uint *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0xc)));
        if (iVar8 == 0) {
          bVar2 = true;
        }
        else {
          local_18 = 1;
        }
      }
      else {
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      }
    }
    uVar6 = *(int *)((int)this + 8) * 2 + 10;
    puVar10 = *(undefined4 **)((int)this + 0x88);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    Library::MSVCRT::_strncpy
              (*(char **)((int)this + 0x88),*(char **)((int)this + 0x58),
               *(size_t *)((int)this + 0xc));
    uVar6 = 0xffffffff;
    pcVar3 = &DAT_007c8ff4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar8 = Library::MSVCRT::_strncmp
                      ((char *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0xc)),
                       &DAT_007c8ff4,~uVar6 - 1);
    if (iVar8 == 0) {
      *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0xc);
    }
    else {
      if ((!bVar2) && (local_18 == 0)) {
        uVar6 = 0xffffffff;
        pcVar3 = (char *)(*(int *)this + 0x9e);
        do {
          pcVar12 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar8 = -1;
        pcVar3 = *(char **)((int)this + 0x88);
        do {
          pcVar11 = pcVar3;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar11 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar11;
        } while (cVar1 != '\0');
        pcVar3 = pcVar12 + -uVar6;
        pcVar12 = pcVar11 + -1;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      pcVar3 = Library::MSVCRT::__itoa(*(int *)((int)this + 0x98),local_24,0x10);
      uVar6 = 0xffffffff;
      do {
        pcVar12 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar3 = *(char **)((int)this + 0x88);
      do {
        pcVar11 = pcVar3;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      pcVar3 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar12 = pcVar12 + 1;
      }
      Library::MSVCRT::_strncat
                (*(char **)((int)this + 0x88),
                 (char *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0xc)),1);
      if (bVar2) {
        Library::MSVCRT::_strncat
                  (*(char **)((int)this + 0x88),
                   (char *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0xc)),1);
      }
    }
    iVar8 = -1;
    iVar9 = -1;
    switch(*(undefined4 *)((int)this + 0x74)) {
    case 0xfffffffc:
      puVar4 = Library::MSVCRT::FUN_00730590(*(uint **)((int)this + 0x8c),&DAT_007c8ff4);
      if (puVar4 != (uint *)0x0) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      iVar8 = FUN_00711110(*(void **)this,*(uint **)((int)this + 0x8c));
      iVar8 = (*(int *)((int)this + 0x5c) + *(int *)((int)this + 100)) / 2 - iVar8;
      if (puVar4 != (uint *)0x0) {
        *(undefined1 *)puVar4 = local_5;
      }
    case 0xfffffff9:
      iVar9 = *(int *)((int)this + 100);
      break;
    case 0xfffffffd:
      puVar4 = Library::MSVCRT::FUN_00730590(*(uint **)((int)this + 0x8c),&DAT_007c8ff4);
      if (puVar4 != (uint *)0x0) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      iVar8 = FUN_00711110(*(void **)this,*(uint **)((int)this + 0x8c));
      iVar8 = *(int *)((int)this + 0x5c) - iVar8;
      if (puVar4 != (uint *)0x0) {
        *(undefined1 *)puVar4 = local_5;
      }
      break;
    case 0xfffffffe:
      puVar4 = Library::MSVCRT::FUN_00730590(*(uint **)((int)this + 0x8c),&DAT_007c8ff4);
      if (puVar4 != (uint *)0x0) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      iVar8 = FUN_00711110(*(void **)this,*(uint **)((int)this + 0x8c));
      iVar8 = (*(int *)((int)this + 0x5c) - iVar8) / 2;
      if (puVar4 != (uint *)0x0) {
        *(undefined1 *)puVar4 = local_5;
      }
    }
    if (param_1 == 0) goto cf_common_exit_00714ACB;
    iVar7 = *(int *)((int)this + 0x70);
    uVar13 = *(undefined4 *)((int)this + 0x94);
  }
  else {
    if (*(int *)((int)this + 8) + -3 <= *(int *)((int)this + 4)) {
      if (param_1 != 0) {
        FUN_006b4170(local_c,iVar8,0,0,*(int *)((int)this + 0x5c),*(int *)((int)this + 0x60),
                     (char)*(undefined4 *)((int)this + 0xa0));
        if (*(int *)((int)this + 4) == *(int *)((int)this + 8) + -3) {
          ccFntTy::WrTxt(*(ccFntTy **)this,*(uint **)((int)this + 0x90),*(int *)((int)this + 0x6c),
                         *(int *)((int)this + 0x70),*(undefined4 *)((int)this + 0x94),-1,-1);
        }
        if (*(int *)((int)this + 4) == *(int *)((int)this + 8) + -2) {
          *(undefined4 *)(*(int *)this + 0x82) = *(undefined4 *)((int)this + 0x98);
          ccFntTy::WrTxt(*(ccFntTy **)this,*(uint **)((int)this + 0x90),*(int *)((int)this + 0x6c),
                         *(int *)((int)this + 0x70),*(undefined4 *)((int)this + 0x98),-1,-1);
        }
        if (*(int *)((int)this + 4) == *(int *)((int)this + 8) + -1) {
          *(undefined4 *)(*(int *)this + 0x82) = *(undefined4 *)((int)this + 0x9c);
          ccFntTy::WrTxt(*(ccFntTy **)this,*(uint **)((int)this + 0x90),*(int *)((int)this + 0x6c),
                         *(int *)((int)this + 0x70),*(undefined4 *)((int)this + 0x9c),-1,-1);
        }
        *(undefined4 *)(*(int *)this + 0x82) = 0xffffffff;
      }
      goto cf_common_exit_00714ACB;
    }
    if ((*(int *)(this_00 + 0x5c) < 0) && (*(int *)((int)this + 0x74) < -4)) {
      param_2 = '\x01';
    }
    if (-1 < *(int *)((int)this + 0x7c)) {
      if (*(int *)(this_00 + 0xa0) != 0) {
        FUN_00710790((int)this_00);
      }
      iVar9 = *(int *)(*(int *)this + 0x5c) + *(int *)(this_00 + 0x8a) + *(int *)((int)this + 0xa4);
      iVar8 = *(int *)((int)this + 0x7c) + 1;
      *(undefined4 *)((int)this + 0x7c) = 0xffffffff;
      *(int *)((int)this + 0x80) = iVar8;
      *(int *)(*(int *)((int)this + 0xa8) + *(int *)((int)this + 0xb0) * 4) = iVar8;
      iVar8 = *(int *)this;
      *(int *)((int)this + 0xb0) = *(int *)((int)this + 0xb0) + 1;
      *(int *)((int)this + 0x8c) = *(int *)((int)this + 0x80) + *(int *)((int)this + 0x58);
      if (*(int *)(iVar8 + 0xa0) != 0) {
        FUN_00710790(iVar8);
      }
      if (*(int *)(iVar8 + 0x8a) + -1 + iVar9 < *(int *)((int)this + 0x60)) {
        *(int *)((int)this + 0xa4) = iVar9;
      }
      else {
        iVar8 = *(int *)(*(int *)((int)this + 0xa8) + *(int *)((int)this + 0xac) * 4);
        *(int *)((int)this + 0x84) = iVar8;
        *(int *)((int)this + 0xac) = *(int *)((int)this + 0xac) + 1;
        *(int *)((int)this + 0x90) = iVar8 + *(int *)((int)this + 0x58);
        if (param_2 == '\0') {
          uVar6 = *(int *)((int)this + 8) * 2 + 10;
          puVar10 = *(undefined4 **)((int)this + 0x88);
          for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
            *puVar10 = 0;
            puVar10 = puVar10 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar10 = 0;
            puVar10 = (undefined4 *)((int)puVar10 + 1);
          }
          Library::MSVCRT::_strncpy
                    (*(char **)((int)this + 0x88),*(char **)((int)this + 0x90),
                     *(int *)((int)this + 0xc) - *(int *)((int)this + 0x84));
          FUN_006b4170(local_c,local_10,0,0,*(int *)((int)this + 0x5c),*(int *)((int)this + 0x60),
                       (char)*(undefined4 *)((int)this + 0xa0));
          if ((*(int *)((int)this + 0x74) == -4) || (*(int *)((int)this + 0x74) == -7)) {
            iVar8 = *(int *)((int)this + 100);
          }
          else {
            iVar8 = -1;
          }
          ccFntTy::WrTxt(*(ccFntTy **)this,*(uint **)((int)this + 0x88),*(int *)((int)this + 0x6c),
                         *(int *)((int)this + 0x70),*(undefined4 *)((int)this + 0x94),-1,iVar8);
        }
      }
    }
    bVar2 = false;
    local_14 = 0;
    local_18 = 0;
    iVar8 = FUN_0070cd90((char *)(*(int *)this + 0x9e),
                         (uint *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0xc)));
    if (iVar8 == 0) {
      iVar8 = *(int *)((int)this + 0xc) + 1;
      *(int *)((int)this + 0xc) = iVar8;
      iVar8 = FUN_0070cdc0((byte *)(iVar8 + *(int *)((int)this + 0x58)));
      if (iVar8 < 0) {
        iVar8 = FUN_0070cd90((char *)(*(int *)this + 0x9e),
                             (uint *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0xc)));
        if (iVar8 == 0) {
          bVar2 = true;
          local_14 = 1;
        }
        else {
          local_18 = 1;
        }
      }
      else {
        *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
      }
    }
    uVar6 = *(int *)((int)this + 8) * 2 + 10;
    puVar10 = *(undefined4 **)((int)this + 0x88);
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar10 = 0;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
    if (param_2 == '\x01') {
      iVar8 = *(int *)((int)this + 0x84);
      pcVar3 = *(char **)((int)this + 0x90);
    }
    else {
      iVar8 = *(int *)((int)this + 0x80);
      pcVar3 = *(char **)((int)this + 0x8c);
    }
    Library::MSVCRT::_strncpy(*(char **)((int)this + 0x88),pcVar3,*(int *)((int)this + 0xc) - iVar8)
    ;
    uVar6 = 0xffffffff;
    pcVar3 = &DAT_007c8ff4;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar8 = Library::MSVCRT::_strncmp
                      ((char *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0xc)),
                       &DAT_007c8ff4,~uVar6 - 1);
    if (iVar8 == 0) {
      *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)((int)this + 0xc);
    }
    else {
      if ((!bVar2) && (local_18 == 0)) {
        uVar6 = 0xffffffff;
        pcVar3 = (char *)(*(int *)this + 0x9e);
        do {
          pcVar12 = pcVar3;
          if (uVar6 == 0) break;
          uVar6 = uVar6 - 1;
          pcVar12 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar12;
        } while (cVar1 != '\0');
        uVar6 = ~uVar6;
        iVar8 = -1;
        pcVar3 = *(char **)((int)this + 0x88);
        do {
          pcVar11 = pcVar3;
          if (iVar8 == 0) break;
          iVar8 = iVar8 + -1;
          pcVar11 = pcVar3 + 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar11;
        } while (cVar1 != '\0');
        pcVar3 = pcVar12 + -uVar6;
        pcVar12 = pcVar11 + -1;
        for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
          pcVar3 = pcVar3 + 4;
          pcVar12 = pcVar12 + 4;
        }
        for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *pcVar12 = *pcVar3;
          pcVar3 = pcVar3 + 1;
          pcVar12 = pcVar12 + 1;
        }
      }
      pcVar3 = Library::MSVCRT::__itoa(*(int *)((int)this + 0x98),local_24,0x10);
      uVar6 = 0xffffffff;
      do {
        pcVar12 = pcVar3;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pcVar12 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar12;
      } while (cVar1 != '\0');
      uVar6 = ~uVar6;
      iVar8 = -1;
      pcVar3 = *(char **)((int)this + 0x88);
      do {
        pcVar11 = pcVar3;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar3 + 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar11;
      } while (cVar1 != '\0');
      pcVar3 = pcVar12 + -uVar6;
      pcVar12 = pcVar11 + -1;
      for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar12 = *(undefined4 *)pcVar3;
        pcVar3 = pcVar3 + 4;
        pcVar12 = pcVar12 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar12 = *pcVar3;
        pcVar3 = pcVar3 + 1;
        pcVar12 = pcVar12 + 1;
      }
      Library::MSVCRT::_strncat
                (*(char **)((int)this + 0x88),
                 (char *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0xc)),1);
      if (local_14 != 0) {
        Library::MSVCRT::_strncat
                  (*(char **)((int)this + 0x88),
                   (char *)(*(int *)((int)this + 0x58) + *(int *)((int)this + 0xc)),1);
      }
    }
    iVar8 = -1;
    local_14 = -1;
    local_18 = 0;
    switch(*(undefined4 *)((int)this + 0x74)) {
    case 0xfffffff9:
      local_14 = *(int *)((int)this + 100);
    case 0xfffffffa:
    case 0xfffffffb:
      local_18 = 1;
      break;
    case 0xfffffffc:
      puVar4 = Library::MSVCRT::FUN_00730590(*(uint **)((int)this + 0x8c),&DAT_007c8ff4);
      if (puVar4 != (uint *)0x0) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      iVar8 = FUN_00711110(*(void **)this,*(uint **)((int)this + 0x8c));
      iVar8 = (*(int *)((int)this + 0x5c) + *(int *)((int)this + 100)) / 2 - iVar8;
      if (puVar4 != (uint *)0x0) {
        *(undefined1 *)puVar4 = local_5;
      }
      local_14 = *(int *)((int)this + 100);
      break;
    case 0xfffffffd:
      puVar4 = Library::MSVCRT::FUN_00730590(*(uint **)((int)this + 0x8c),&DAT_007c8ff4);
      if (puVar4 != (uint *)0x0) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      iVar8 = FUN_00711110(*(void **)this,*(uint **)((int)this + 0x8c));
      iVar8 = *(int *)((int)this + 0x5c) - iVar8;
      if (puVar4 != (uint *)0x0) {
        *(undefined1 *)puVar4 = local_5;
      }
      break;
    case 0xfffffffe:
      puVar4 = Library::MSVCRT::FUN_00730590(*(uint **)((int)this + 0x8c),&DAT_007c8ff4);
      if (puVar4 != (uint *)0x0) {
        local_5 = (undefined1)*puVar4;
        *(undefined1 *)puVar4 = 0;
      }
      iVar8 = FUN_00711110(*(void **)this,*(uint **)((int)this + 0x8c));
      iVar8 = (*(int *)((int)this + 0x5c) - iVar8) / 2;
      if (puVar4 != (uint *)0x0) {
        *(undefined1 *)puVar4 = local_5;
      }
    }
    if (param_1 == 0) goto cf_common_exit_00714ACB;
    if (param_2 == '\x01') {
      FUN_006b4170(local_c,local_10,0,0,*(int *)((int)this + 0x5c),*(int *)((int)this + 0x60),
                   (char)*(undefined4 *)((int)this + 0xa0));
      ccFntTy::WrTxt(*(ccFntTy **)this,*(uint **)((int)this + 0x88),*(int *)((int)this + 0x6c),
                     *(int *)((int)this + 0x70),*(undefined4 *)((int)this + 0x94),iVar8,local_14);
      goto cf_common_exit_00714ACB;
    }
    if (local_18 != 0) {
      iVar9 = *(int *)this;
      if (*(int *)(iVar9 + 0xa0) != 0) {
        FUN_00710790(iVar9);
      }
      FUN_006b4170(local_c,local_10,0,*(int *)((int)this + 0xa4),*(int *)((int)this + 0x5c),
                   *(int *)(iVar9 + 0x8a),(char)*(undefined4 *)((int)this + 0xa0));
    }
    uVar13 = *(undefined4 *)((int)this + 0x94);
    iVar7 = *(int *)((int)this + 0xa4);
    iVar9 = local_14;
  }
  ccFntTy::WrTxt(*(ccFntTy **)this,*(uint **)((int)this + 0x88),*(int *)((int)this + 0x6c),iVar7,
                 uVar13,iVar8,iVar9);
cf_common_exit_00714ACB:
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  FUN_007109f0(*(void **)this,local_6c);
  return local_c;
}



int __thiscall SettMapTy::NoneSettMap(SettMapTy *this,int *param_1)

{
  SettMapTy SVar1;
  code *pcVar2;
  SettMapTy *this_00;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  SettMapTy *pSVar6;
  undefined4 *puStack_50;
  undefined4 auStack_4c [16];
  SettMapTy *pSStack_c;
  int iStack_8;
  
  iStack_8 = 1;
  pSStack_c = this;
  DVar3 = timeGetTime();
  *(DWORD *)(this + 0x61) = DVar3;
  puStack_50 = DAT_00858df8;
  DAT_00858df8 = &puStack_50;
  iVar4 = __setjmp3(auStack_4c,0,unaff_EDI,unaff_ESI);
  this_00 = pSStack_c;
  if (iVar4 != 0) {
    DAT_00858df8 = puStack_50;
    iVar5 = FUN_006ad4d0(s_E____titans_Start_sett_obj_cpp_007cd0e8,0x243,0,iVar4,&DAT_007a4ccc);
    if (iVar5 == 0) {
      FUN_006a5e40(iVar4,0,0x7cd0e8,0x243);
      return 0;
    }
    pcVar2 = (code *)swi(3);
    iVar4 = (*pcVar2)();
    return iVar4;
  }
  SVar1 = pSStack_c[0x65];
  if (SVar1 == (SettMapTy)0x1) {
    if (DAT_008067a0 != '\0') {
      CFsgsConnection::PumpMessages((CFsgsConnection *)&DAT_00802a90);
    }
  }
  else if (SVar1 == (SettMapTy)0x3) {
    if (((pSStack_c[0x21e1] != (SettMapTy)0x0) &&
        (*(HoloTy **)(pSStack_c + 0x21e8) != (HoloTy *)0x0)) &&
       (iVar4 = HoloTy::NextFas(*(HoloTy **)(pSStack_c + 0x21e8)), iVar4 != 0)) {
      iStack_8 = 0;
    }
    if (((this_00[0x21e5] != (SettMapTy)0x0) && (*(HoloTy **)(this_00 + 0x21f4) != (HoloTy *)0x0))
       && (iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21f4)), iVar4 != 0)) {
      iStack_8 = 0;
    }
    SVar1 = this_00[0x1e26];
    if (((SVar1 != (SettMapTy)0x6) && (SVar1 != (SettMapTy)0x7)) &&
       ((SVar1 != (SettMapTy)0xe &&
        (((this_00[0x21e2] != (SettMapTy)0x0 && (*(HoloTy **)(this_00 + 0x21ec) != (HoloTy *)0x0))
         && (iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21ec)), iVar4 != 0)))))) {
      iStack_8 = 0;
    }
    SVar1 = this_00[0x1e26];
    if ((((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x7)) || (SVar1 == (SettMapTy)0xe)) &&
       (((this_00[0x21e3] != (SettMapTy)0x0 && (*(HoloTy **)(this_00 + 0x21f0) != (HoloTy *)0x0)) &&
        (iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21f0)), iVar4 != 0)))) {
      iStack_8 = 0;
    }
    SVar1 = this_00[0x1e26];
    if (((((SVar1 != (SettMapTy)0x6) && (SVar1 != (SettMapTy)0x1)) && (SVar1 != (SettMapTy)0x2)) &&
        ((this_00[0x21e6] != (SettMapTy)0x0 && (*(HoloTy **)(this_00 + 0x21f8) != (HoloTy *)0x0))))
       && (iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21f8)), iVar4 != 0)) {
      iStack_8 = 0;
    }
    if ((this_00[0x21e4] != (SettMapTy)0x0) &&
       (*(int *)(DAT_0081176c + 0x300) < *(int *)(DAT_0081176c + 0x304) + -1)) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + 1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                     *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                     *(uint *)(DAT_0081176c + 0x318));
      }
      iStack_8 = 0;
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x01')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      if (*(HoloTy **)(this_00 + 0x21f0) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x21f0));
        FUN_0072e2b0(*(undefined4 **)(this_00 + 0x21f0));
        *(undefined4 *)(this_00 + 0x21f0) = 0;
      }
      SVar1 = this_00[0x1e26];
      if ((((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x7)) || (SVar1 == (SettMapTy)0xe)) &&
         (this_00[0x21e3] != (SettMapTy)0x0)) {
        FUN_006b3430(DAT_008075a8,*(uint *)(this_00 + 0x1f80));
      }
      if (*(HoloTy **)(this_00 + 0x21e8) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x21e8));
        FUN_0072e2b0(*(undefined4 **)(this_00 + 0x21e8));
        *(undefined4 *)(this_00 + 0x21e8) = 0;
      }
      if (this_00[0x21e1] != (SettMapTy)0x0) {
        if (*(uint *)(this_00 + 0x1c6f) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(this_00 + 0x1cb3),*(uint *)(this_00 + 0x1c6f),0xfffffffe,
                       *(uint *)(this_00 + 0x1c87),*(uint *)(this_00 + 0x1c8b));
        }
        if (*(uint *)(this_00 + 0x1d00) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(this_00 + 0x1d44),*(uint *)(this_00 + 0x1d00),0xfffffffe,
                       *(uint *)(this_00 + 0x1d18),*(uint *)(this_00 + 0x1d1c));
        }
        if (*(uint *)(this_00 + 0x1d91) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(this_00 + 0x1dd5),*(uint *)(this_00 + 0x1d91),0xfffffffe,
                       *(uint *)(this_00 + 0x1da9),*(uint *)(this_00 + 0x1dad));
        }
        pSVar6 = this_00 + 0x20cc;
        iVar4 = 10;
        do {
          FUN_006b3430(DAT_008075a8,*(uint *)pSVar6);
          pSVar6 = pSVar6 + 4;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (*(HoloTy **)(this_00 + 0x21f4) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x21f4));
        FUN_0072e2b0(*(undefined4 **)(this_00 + 0x21f4));
        *(undefined4 *)(this_00 + 0x21f4) = 0;
      }
      if (this_00[0x21e5] != (SettMapTy)0x0) {
        FUN_006b3430(DAT_008075a8,*(uint *)(this_00 + 0x1e22));
      }
      if (*(HoloTy **)(this_00 + 0x21ec) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x21ec));
        FUN_0072e2b0(*(undefined4 **)(this_00 + 0x21ec));
        *(undefined4 *)(this_00 + 0x21ec) = 0;
      }
      SVar1 = this_00[0x1e26];
      if (((SVar1 != (SettMapTy)0x6) && (SVar1 != (SettMapTy)0x7)) && (SVar1 != (SettMapTy)0xe)) {
        if (*(uint *)(DAT_0081176c + 0x391) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(DAT_0081176c + 0x3d5),*(uint *)(DAT_0081176c + 0x391),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x3a9),*(uint *)(DAT_0081176c + 0x3ad));
        }
        if (*(uint *)(DAT_0081176c + 0x422) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(DAT_0081176c + 0x466),*(uint *)(DAT_0081176c + 0x422),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x43a),*(uint *)(DAT_0081176c + 0x43e));
        }
        if (*(uint *)(DAT_0081176c + 0x4b3) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(DAT_0081176c + 0x4f7),*(uint *)(DAT_0081176c + 0x4b3),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x4cb),*(uint *)(DAT_0081176c + 0x4cf));
        }
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x540));
      }
      if (this_00[0x21e4] != (SettMapTy)0x0) {
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x2ec));
        if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
          FUN_006b3af0(*(int **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc));
        }
      }
      if (*(HoloTy **)(this_00 + 0x21f8) != (HoloTy *)0x0) {
        HoloTy::Done(*(HoloTy **)(this_00 + 0x21f8));
        FUN_0072e2b0(*(undefined4 **)(this_00 + 0x21f8));
        *(undefined4 *)(this_00 + 0x21f8) = 0;
      }
      if (this_00[0x21e6] != (SettMapTy)0x0) {
        if (*(uint *)(DAT_0081176c + 0x560) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(DAT_0081176c + 0x5a4),*(uint *)(DAT_0081176c + 0x560),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x578),*(uint *)(DAT_0081176c + 0x57c));
        }
        if (*(uint *)(DAT_0081176c + 0x5f1) != 0xffffffff) {
          FUN_006b34d0(*(uint **)(DAT_0081176c + 0x635),*(uint *)(DAT_0081176c + 0x5f1),0xfffffffe,
                       *(uint *)(DAT_0081176c + 0x609),*(uint *)(DAT_0081176c + 0x60d));
        }
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x558));
        FUN_006b3430(DAT_008075a8,*(uint *)(DAT_0081176c + 0x554));
      }
      this_00[0x65] = (SettMapTy)0x1;
      (**(code **)(*(int *)this_00 + 0x18))(0);
      SVar1 = this_00[0x1e26];
      if (((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x7)) || (SVar1 == (SettMapTy)0xe)) {
        thunk_FUN_005c8200();
      }
      PaintSettMap(this_00,'\0');
      DAT_00858df8 = puStack_50;
      return iStack_8;
    }
  }
  else {
    if (SVar1 != (SettMapTy)0x4) {
      DAT_00858df8 = puStack_50;
      return 0;
    }
    if ((pSStack_c[0x21e4] != (SettMapTy)0x0) && (0 < *(int *)(DAT_0081176c + 0x300))) {
      *(int *)(DAT_0081176c + 0x300) = *(int *)(DAT_0081176c + 0x300) + -1;
      if (*(uint *)(DAT_0081176c + 0x2fc) != 0xffffffff) {
        FUN_006b3730(*(uint **)(DAT_0081176c + 0x340),*(uint *)(DAT_0081176c + 0x2fc),
                     *(uint *)(DAT_0081176c + 0x300),*(uint *)(DAT_0081176c + 0x314),
                     *(uint *)(DAT_0081176c + 0x318));
      }
      iStack_8 = 0;
    }
    if ((this_00[0x21e1] != (SettMapTy)0x0) && (*(HoloTy **)(this_00 + 0x21e8) != (HoloTy *)0x0)) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21e8));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x21e8) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x21e8) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((this_00[0x21e5] != (SettMapTy)0x0) && (*(HoloTy **)(this_00 + 0x21f4) != (HoloTy *)0x0)) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21f4));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x21f4) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x21f4) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    SVar1 = this_00[0x1e26];
    if ((((SVar1 != (SettMapTy)0x6) && (SVar1 != (SettMapTy)0x7)) && (SVar1 != (SettMapTy)0xe)) &&
       ((this_00[0x21e2] != (SettMapTy)0x0 && (*(HoloTy **)(this_00 + 0x21ec) != (HoloTy *)0x0)))) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21ec));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x21ec) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x21ec) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    SVar1 = this_00[0x1e26];
    if ((((SVar1 == (SettMapTy)0x6) || (SVar1 == (SettMapTy)0x7)) || (SVar1 == (SettMapTy)0xe)) &&
       ((this_00[0x21e3] != (SettMapTy)0x0 && (*(HoloTy **)(this_00 + 0x21f0) != (HoloTy *)0x0)))) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21f0));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x21f0) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x21f0) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    SVar1 = this_00[0x1e26];
    if ((((SVar1 != (SettMapTy)0x6) && (SVar1 != (SettMapTy)0x1)) && (SVar1 != (SettMapTy)0x2)) &&
       ((this_00[0x21e6] != (SettMapTy)0x0 && (*(HoloTy **)(this_00 + 0x21f8) != (HoloTy *)0x0)))) {
      iVar4 = HoloTy::NextFas(*(HoloTy **)(this_00 + 0x21f8));
      if (iVar4 == 0) {
        if (-1 < (int)*(uint *)(*(int *)(this_00 + 0x21f8) + 3)) {
          FUN_006b3af0(DAT_008075a8,*(uint *)(*(int *)(this_00 + 0x21f8) + 3));
        }
      }
      else {
        iStack_8 = 0;
      }
    }
    if ((*(int *)(DAT_0081176c + 0x2e6) != 0) &&
       (*(char *)(*(int *)(DAT_0081176c + 0x2e6) + 0x65) != '\x02')) {
      iStack_8 = 0;
    }
    if (iStack_8 != 0) {
      SVar1 = this_00[0x1a5a];
      this_00[0x65] = (SettMapTy)0x2;
      if ((SVar1 != (SettMapTy)0xff) && (*(int *)(this_00 + (uint)(byte)SVar1 * 0x1fb + 0xd1) != 0))
      {
        FUN_006e3b50((undefined4 *)(this_00 + (uint)(byte)SVar1 * 0x1fb + 0xc1));
        DAT_00858df8 = puStack_50;
        return iStack_8;
      }
    }
  }
  DAT_00858df8 = puStack_50;
  return iStack_8;
}


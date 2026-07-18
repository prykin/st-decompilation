
int __fastcall thunk_FUN_004c9770(void *param_1)

{
  code *pcVar1;
  void *this;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_ESI;
  undefined4 *this_00;
  void *unaff_EDI;
  uint uVar5;
  char cVar6;
  char *pcVar7;
  undefined4 uVar8;
  byte abStack_154 [256];
  undefined4 *puStack_54;
  undefined4 auStack_50 [16];
  void *pvStack_10;
  int iStack_c;
  int iStack_8;
  
  pvStack_10 = param_1;
  uVar2 = thunk_FUN_004406c0(*(char *)((int)param_1 + 0x23d));
  iStack_8 = (uVar2 & 0xff) - 1;
  puStack_54 = DAT_00858df8;
  DAT_00858df8 = &puStack_54;
  iVar3 = __setjmp3(auStack_50,0,unaff_EDI,unaff_ESI);
  this = pvStack_10;
  if (iVar3 != 0) {
    DAT_00858df8 = puStack_54;
    iVar4 = FUN_006ad4d0(s_E____titans_Artem_TLO_bspr_cpp_007ad4d0,0xbb,0,iVar3,&DAT_007a4ccc);
    if (iVar4 != 0) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
    FUN_006a5e40(iVar3,0,0x7ad4d0,0xbc);
    return iVar3;
  }
  iVar3 = *(int *)((int)pvStack_10 + 0x245);
  iStack_c = iVar3;
  thunk_FUN_004c96e0((int)pvStack_10);
  if ((iVar3 == 1) && (*(int *)((int)this + 0x24d) == 4)) {
    iVar3 = (iStack_8 + *(int *)((int)this + 0x235) * 3) * 0xc;
    *(undefined4 *)((int)this + 0x5ef) = *(undefined4 *)(PTR_DAT_007bb1a8 + iVar3);
    *(undefined4 *)((int)this + 0x5f3) = *(undefined4 *)(PTR_DAT_007bb1a8 + iVar3 + 4);
    *(undefined4 *)((int)this + 0x5f7) = *(undefined4 *)(PTR_DAT_007bb1a8 + iVar3 + 8);
  }
  if (*(byte **)((int)this + 0x5ef) != (byte *)0x0) {
    iVar3 = thunk_FUN_004ab880(0xe,DAT_0080678c,*(byte **)((int)this + 0x5ef),0x1d);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x1f);
    }
  }
  if (*(int *)((int)this + 0x5f3) == 0) {
    thunk_FUN_004ac410(0xd);
    *(undefined4 *)(*(int *)((int)this + 0x1f5) + 0x1e8) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x1f5) + 0x1e4) = 0;
  }
  else {
    wsprintfA((LPSTR)abStack_154,s__s_1i_007ac908,*(int *)((int)this + 0x5f3),
              *(undefined4 *)((int)this + 0x5c0));
    iVar3 = thunk_FUN_004ab880(0xd,DAT_0080678c,abStack_154,0x1d);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x23);
    }
  }
  this_00 = (undefined4 *)((int)this + 0x1d5);
  if (*(byte **)((int)this + 0x5f7) == (byte *)0x0) {
    thunk_FUN_004ac410(0xc);
    *(undefined4 *)(*(int *)((int)this + 0x1f5) + 0x1c4) = 0;
    *(undefined4 *)(*(int *)((int)this + 0x1f5) + 0x1c0) = 0;
  }
  else {
    iVar3 = thunk_FUN_004ab880(0xc,DAT_0080678c,*(byte **)((int)this + 0x5f7),0x1d);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x28);
    }
    if (*(int *)(&DAT_00790c2c + *(int *)((int)this + 0x235) * 4) != 0) {
      iVar3 = 1;
      uVar5 = 0xc;
      uVar2 = thunk_FUN_004ad650((int)this_00);
      FUN_006ea190(*(void **)((int)this + 0x211),uVar2,uVar5,iVar3);
    }
  }
  if (*(int *)(&DAT_00791a10 + *(int *)((int)this + 0x235) * 4) != 0) {
    wsprintfA((LPSTR)abStack_154,s__s_cover_007ac8fc,*(undefined4 *)((int)this + 0x5ef));
    iVar3 = thunk_FUN_004ab880(9,DAT_0080678c,abStack_154,0x1d);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x31);
    }
    if ((*(int *)((int)this + 0x5ac) != 0x40) && (*(int *)((int)this + 0x5ac) != 0x49)) {
      wsprintfA((LPSTR)abStack_154,s__s_cover_1i_007ac8ec,*(undefined4 *)((int)this + 0x5f3),
                *(undefined4 *)((int)this + 0x5c0));
      iVar3 = thunk_FUN_004ab880(8,DAT_0080678c,abStack_154,0x1d);
      if (iVar3 != 0) {
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x35);
      }
    }
    if (*(int *)((int)this + 0x5ac) == 0x4e) {
      wsprintfA((LPSTR)abStack_154,s_htec_ani_cover_007ad4bc);
      iVar3 = thunk_FUN_004ab880(7,DAT_0080678c,abStack_154,0x1d);
      if (iVar3 != 0) {
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x3a);
      }
    }
    if (*(int *)((int)this + 0x5ac) == 0x72) {
      wsprintfA((LPSTR)abStack_154,s_vqb_ani_cover_007ad4ac);
      iVar3 = thunk_FUN_004ab880(7,DAT_0080678c,abStack_154,0x1d);
      if (iVar3 != 0) {
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x3e);
      }
    }
    if (*(int *)((int)this + 0x5ac) == 0x70) {
      wsprintfA((LPSTR)abStack_154,s_glsat_ani_cover_007ad498);
      iVar3 = thunk_FUN_004ab880(7,DAT_0080678c,abStack_154,0x1d);
      if (iVar3 != 0) {
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x42);
      }
    }
    if (*(int *)((int)this + 0x5ac) == 0x52) {
      iVar3 = thunk_FUN_004406c0(*(char *)((int)this + 0x24));
      if ((char)iVar3 == '\x01') {
        pcVar7 = s_traws_ani_007ad48c;
      }
      else {
        pcVar7 = s_trabo_ani_007ad480;
      }
      wsprintfA((LPSTR)abStack_154,pcVar7);
      iVar3 = thunk_FUN_004ab880(7,DAT_0080678c,abStack_154,0x1d);
      if (iVar3 != 0) {
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x46);
      }
    }
  }
  thunk_FUN_004ac660(this_00,'\r');
  iVar3 = thunk_FUN_004acd30(this_00,'\x0e');
  iVar4 = thunk_FUN_004acd30(this_00,'\r');
  if ((iVar4 < iVar3) &&
     (uVar2 = *(int *)(*(int *)((int)this + 0x1f5) + 0x1e4) -
              *(int *)(*(int *)((int)this + 0x1f5) + 0x1e8), uVar5 = (int)uVar2 >> 0x1f,
     1 < (int)((uVar2 ^ uVar5) - uVar5))) {
    iVar3 = thunk_FUN_004cba10();
    if (iVar3 == 2) {
      thunk_FUN_004ac410(0xd);
    }
    else {
      thunk_FUN_004ac700(this_00,'\r');
    }
  }
  thunk_FUN_004cabb0(1);
  iVar3 = iStack_c;
  if ((iStack_c == 1) && (*(int *)((int)this + 0x24d) == 4)) {
    iVar3 = 4;
  }
  if (*(int *)(&DAT_00791b18 + (*(int *)((int)this + 0x235) * 3 + *(int *)((int)this + 0x239)) * 4)
      != 0) {
    if ((iVar3 < 2) || (4 < iVar3)) {
      thunk_FUN_004ad5e0((int)this_00);
    }
    else {
      (**(code **)*this_00)();
    }
  }
  if ((((iVar3 == 0) || (iVar3 == 5)) || ((iVar3 == 1 && (*(int *)((int)this + 0x24d) == 0)))) ||
     (iVar3 == 6)) {
    thunk_FUN_004acef0(this_00,DAT_008073cc);
    iVar3 = thunk_FUN_004ab880(0x10,DAT_0080678c,(&PTR_s_tlo_sha_ws_007bb1b4)[iStack_8],0x1d);
    if (iVar3 != 0) {
      FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,0x6a);
    }
    thunk_FUN_004abce0(this_00,0x10,*(int *)(&DAT_0079104c + *(int *)((int)this + 0x235) * 4),
                       *(int *)(&DAT_0079104c + *(int *)((int)this + 0x235) * 4),'\0');
    thunk_FUN_004abe40(this_00,'\x10',
                       *(undefined4 *)(&DAT_0079104c + *(int *)((int)this + 0x235) * 4));
    uVar8 = FUN_006e51b0(*(int *)((int)this + 0x10));
    thunk_FUN_004ac1a0(0x10,uVar8);
    thunk_FUN_004acf50(this_00,'\x10');
  }
  else {
    thunk_FUN_004acf90(this_00,'\x10');
    thunk_FUN_004ac410(0x10);
  }
  if (*(int *)((int)this + 0x245) == 1) {
    if (*(int *)((int)this + 0x5df) == 5) {
      *(undefined4 *)((int)this + 0x4c8) = 0;
      *(undefined4 *)((int)this + 0x4cc) = *(undefined4 *)(DAT_00802a38 + 0xe4);
      thunk_FUN_004ace60(this_00,'\x0e');
      thunk_FUN_004ace60(this_00,'\r');
      thunk_FUN_004ace60(this_00,'\f');
      thunk_FUN_004ace60(this_00,'\v');
      thunk_FUN_004ace60(this_00,'\t');
      thunk_FUN_004ace60(this_00,'\b');
      thunk_FUN_004ace60(this_00,'\a');
      thunk_FUN_004ace30(this_00,*(uint *)(DAT_00806724 + 0x30 + *(int *)((int)this + 0x4c8) * 4),
                         (int)*(short *)(DAT_00806724 + 0x2c));
    }
    else {
      iVar3 = thunk_FUN_004ab880(4,DAT_00806774,
                                 (byte *)(s_expl_bt0_007cdf30 +
                                         *(int *)(&DAT_0079125c + *(int *)((int)this + 0x235) * 4) *
                                         0x32),0x1d);
      if (iVar3 != 0) {
        return 0xffff;
      }
      thunk_FUN_004ac700(this_00,'\x04');
      cVar6 = '\0';
      iVar3 = thunk_FUN_004acd30(this_00,'\x04');
      thunk_FUN_004abce0(this_00,4,0,iVar3,cVar6);
      thunk_FUN_004abe40(this_00,'\x04',0);
      thunk_FUN_004ac1a0(4,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004ab880(6,DAT_00806774,
                         (byte *)(s_expmask3_007cdf44 +
                                 *(int *)(&DAT_0079125c + *(int *)((int)this + 0x235) * 4) * 0x32),
                         0x1d);
      thunk_FUN_004ac700(this_00,'\x06');
      thunk_FUN_004ac1a0(6,*(undefined4 *)(DAT_00802a38 + 0xe4));
      thunk_FUN_004acf20(this_00,DAT_008032b8,0x10);
      thunk_FUN_004acfe0(this_00,'\x06');
    }
  }
  if (*(int *)((int)this + 0x245) != 6) goto LAB_004ca0a2;
  if (*(int *)((int)this + 0x4bc) == 4) {
    if (*(int *)((int)this + 0x2c) == 0) {
      iVar3 = thunk_FUN_004ab880(4,DAT_00806764,(byte *)s_tlo_emb5_007ad464,0x1d);
      if (iVar3 != 0) {
        uVar8 = 0x91;
LAB_004c9eda:
        FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,uVar8);
      }
    }
    else if (*(int *)((int)this + 0x2c) == 1) {
      iVar3 = thunk_FUN_004ab880(4,DAT_00806764,(byte *)s_tlo_emb5_big_007ad470,0x1d);
      if (iVar3 != 0) {
        uVar8 = 0x92;
        goto LAB_004c9eda;
      }
    }
    thunk_FUN_004ac1a0(4,*(undefined4 *)(DAT_00802a38 + 0xe4));
    thunk_FUN_004abce0(this_00,5,*(int *)(&DAT_007976e4 + *(int *)((int)this + 0x2c) * 0x20),
                       *(int *)(&DAT_007976e4 + *(int *)((int)this + 0x2c) * 0x20),'\0');
    thunk_FUN_004abe40(this_00,'\x05',
                       *(undefined4 *)(&DAT_007976e4 + *(int *)((int)this + 0x2c) * 0x20));
    uVar8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
  }
  else {
    iVar4 = thunk_FUN_004406c0(*(char *)((int)this + 0x23d));
    iVar3 = *(int *)((int)this + 0x2c);
    if ((char)iVar4 == '\x03') {
      if (iVar3 == 0) {
        iVar3 = thunk_FUN_004ab880(5,DAT_0080678c,(byte *)s_si_emb5_007ad44c,0x1d);
        if (iVar3 != 0) {
          uVar8 = 0x9e;
LAB_004c9fb1:
          FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,uVar8);
        }
      }
      else if (iVar3 == 1) {
        iVar3 = thunk_FUN_004ab880(5,DAT_0080678c,(byte *)s_si_emb6_007ad458,0x1d);
        if (iVar3 != 0) {
          uVar8 = 0x9f;
          goto LAB_004c9fb1;
        }
      }
      uVar8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    }
    else {
      if (iVar3 == 0) {
        iVar3 = thunk_FUN_004ab880(5,DAT_0080678c,(byte *)s_tlo_emb2_007ad434,0x1d);
        if (iVar3 != 0) {
          uVar8 = 0xa5;
LAB_004ca02a:
          FUN_006a5e40(iVar3,DAT_007ed77c,0x7ad4d0,uVar8);
        }
      }
      else if (iVar3 == 1) {
        iVar3 = thunk_FUN_004ab880(5,DAT_0080678c,(byte *)s_tlo_emb3_007ad440,0x1d);
        if (iVar3 != 0) {
          uVar8 = 0xa6;
          goto LAB_004ca02a;
        }
      }
      iVar3 = *(int *)((int)this + 0x4bc);
      iVar4 = 0;
      if (iVar3 == 1) {
        iVar4 = 1;
      }
      else if (iVar3 == 2) {
        iVar4 = 2;
      }
      else if (iVar3 == 3) {
        iVar4 = 3;
      }
      iVar3 = (iVar4 + *(int *)((int)this + 0x2c) * 4) * 8;
      thunk_FUN_004abce0(this_00,5,*(int *)(&DAT_007976c8 + iVar3),*(int *)(&DAT_007976cc + iVar3),
                         '\0');
      thunk_FUN_004abe40(this_00,'\x05',
                         *(undefined4 *)
                          (&DAT_007976c8 + (iVar4 + *(int *)((int)this + 0x2c) * 4) * 8));
      uVar8 = *(undefined4 *)(DAT_00802a38 + 0xe4);
    }
  }
  thunk_FUN_004ac1a0(5,uVar8);
LAB_004ca0a2:
  thunk_FUN_00415b30(this,*(short *)((int)this + 0x5b0) * 0xc9 + 100,
                     *(short *)((int)this + 0x5b4) * 0xc9 + 100,
                     *(short *)((int)this + 0x5b8) * 200 + 100,0,0,0,1);
  DAT_00858df8 = puStack_54;
  return 0;
}


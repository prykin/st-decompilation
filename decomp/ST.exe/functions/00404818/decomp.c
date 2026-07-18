
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
thunk_FUN_004c6440(void *this,float param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  char cVar1;
  code *pcVar2;
  float fVar3;
  void *pvVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  longlong lVar9;
  float fVar10;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  iStack_28 = 0;
  iStack_c = 3;
  piStack_20 = &DAT_0079aedc;
  while( true ) {
    piVar7 = piStack_20;
    FUN_006e1c20(DAT_00807598,param_1,param_2,(float)iStack_c * _DAT_00790504,&fStack_14,&fStack_18)
    ;
    if (fStack_14 < _DAT_0079034c) {
      lVar9 = __ftol();
      iVar8 = (short)lVar9 + -1;
    }
    else {
      lVar9 = __ftol();
      iVar8 = (int)(short)lVar9;
    }
    iStack_10 = iVar8;
    if (fStack_18 < _DAT_0079034c) {
      lVar9 = __ftol();
      iStack_8 = (short)lVar9 + -1;
    }
    else {
      lVar9 = __ftol();
      iStack_8 = (int)(short)lVar9;
    }
    pvVar4 = DAT_00802a88;
    if (((((-1 < iVar8) && (iVar8 < DAT_007fb240)) && (-1 < iStack_8)) && (iStack_8 < DAT_007fb242))
       && ((((((DAT_00802a88 == (void *)0x0 || (DAT_0080874d == 0xff)) ||
              ((*(int *)((int)DAT_00802a88 + 0xf8) == 0 ||
               ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),
                                    iStack_10,iStack_8,&iStack_30,&iStack_34),
                (int)piVar7 < 0x79aed0 || (0x79aee3 < (int)piVar7)))))) ||
             ((iStack_30 < 0 ||
              (((*(int *)((int)pvVar4 + 0x30) <= iStack_30 ||
                (iVar8 = *piVar7 + iStack_34, piVar7 = piStack_20, iVar8 < 0)) ||
               (*(int *)((int)pvVar4 + 0x34) <= iVar8)))))) ||
            ((*(int *)((int)pvVar4 + 0x4c) == 0 ||
             (*(char *)(iVar8 * *(int *)((int)pvVar4 + 0x30) + *(int *)((int)pvVar4 + 0x4c) +
                       iStack_30) != '\0')))) &&
           (iVar8 = iStack_10,
           thunk_FUN_004ae0b0(iStack_10,iStack_8,iStack_c,*(int *)((int)this + 0x1c),
                              (uint)DAT_0080874d,&uStack_2c,&iStack_24,&iStack_1c,0,
                              *(int **)((int)this + 0x20)), iStack_24 != 0)))) break;
    piStack_20 = piVar7 + -1;
    iStack_c = iStack_c + -1;
    if ((int)piStack_20 < 0x79aed0) {
LAB_004c6899:
      if (((*(int *)((int)this + 0x24) != 0) || (*(int *)((int)this + 0x28) != 0)) &&
         (iStack_28 == 0)) {
        thunk_FUN_004ad430(*(int *)((int)this + 0x2c));
        *(undefined4 *)((int)this + 0x24) = 0;
        *(undefined4 *)((int)this + 0x28) = 0;
      }
      return *(undefined4 *)((int)this + 0x24);
    }
  }
  iStack_28 = 1;
  if (iStack_1c == 0) {
    if (*(int *)((int)this + 0x28) == 0) {
      iVar8 = *(int *)((int)this + 0x1c);
      if ((((iVar8 != 0x39) && (iVar8 != 0x4f)) && ((iVar8 != 0x4d && (iVar8 != 0x5e)))) &&
         (((((iVar8 < 0x54 || (0x5a < iVar8)) && (iVar8 != 0x61)) &&
           ((iVar8 != 0x65 && (iVar8 != 0x43)))) && (iVar8 != 0x73)))) {
        iStack_28 = 0;
        goto LAB_004c6899;
      }
      iVar8 = STT3DSprC::LoadSequence
                        (*(STT3DSprC **)((int)this + 0x2c),0,DAT_0080678c,
                         (&PTR_s_tlo_bldmark_si_007ad25c)
                         [*(byte *)(*(int *)((int)this + 0x10) + 0x112e)],0x1d);
      if (iVar8 != 0) {
        FUN_006a5e40(iVar8,DAT_007ed77c,0x7ad2f4,0x82);
      }
      iVar8 = 0;
      cVar1 = *(char *)(*(int *)((int)this + 0x10) + 0x112e);
      if ((cVar1 == '\x01') || (cVar1 == '\x02')) {
        iVar5 = *(int *)((int)this + 0x1c);
        if (iVar5 == 0x4f) {
          iVar8 = 1;
        }
        else if (iVar5 == 0x4d) {
          iVar8 = 2;
        }
        else if (iVar5 == 0x43) {
          iVar8 = 3;
        }
      }
      else {
        iVar8 = *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4);
      }
      thunk_FUN_004abce0(*(void **)((int)this + 0x2c),0,iVar8,iVar8,'\0');
      thunk_FUN_004abe40(*(void **)((int)this + 0x2c),'\0',iVar8);
      uVar6 = FUN_006e51b0(*(int *)((int)this + 0x10));
      STT3DSprC::StartShow(*(STT3DSprC **)((int)this + 0x2c),0,uVar6);
      iVar8 = iStack_10;
    }
  }
  else if (*(int *)((int)this + 0x24) == 0) {
    iVar5 = STT3DSprC::LoadSequence
                      (*(STT3DSprC **)((int)this + 0x2c),0,DAT_0080678c,
                       *(byte **)(&DAT_007ad250 +
                                 (uint)*(byte *)(*(int *)((int)this + 0x10) + 0x112e) * 4),0x1d);
    if (iVar5 != 0) {
      FUN_006a5e40(iVar5,DAT_007ed77c,0x7ad2f4,0x77);
    }
    thunk_FUN_004abce0(*(void **)((int)this + 0x2c),0,
                       *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4),
                       *(int *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4),'\0');
    thunk_FUN_004abe40(*(void **)((int)this + 0x2c),'\0',
                       *(undefined4 *)(&DAT_00790f84 + *(int *)((int)this + 0x1c) * 4));
    uVar6 = FUN_006e51b0(*(int *)((int)this + 0x10));
    STT3DSprC::StartShow(*(STT3DSprC **)((int)this + 0x2c),0,uVar6);
  }
  thunk_FUN_004ad460(*(void **)((int)this + 0x2c),0);
  if (*(int *)(&DAT_00791d68 + *(int *)((int)this + 0x1c) * 4) == 0) {
    fVar10 = (float)iStack_8 * _DAT_007904f8 + _DAT_007904f4;
    fVar3 = (float)iStack_10 * _DAT_007904f8 + _DAT_007904f4;
LAB_004c6848:
    thunk_FUN_004ad3c0(*(void **)((int)this + 0x2c),fVar3,fVar10,
                       (float)iStack_c * _DAT_00790504 + _DAT_00790500 + _DAT_007904fc);
  }
  else {
    if (*(int *)(&DAT_00791d68 + *(int *)((int)this + 0x1c) * 4) == 1) {
      fVar10 = (float)(iStack_8 + 1) * _DAT_007904f8;
      fVar3 = (float)(iVar8 + 1) * _DAT_007904f8;
      goto LAB_004c6848;
    }
    iVar5 = FUN_006ad4d0(s_E____titans_Artem_TLO_BldMark_cp_007ad2f4,0x98,0,0,&DAT_007a4ccc);
    if (iVar5 != 0) {
      pcVar2 = (code *)swi(3);
      uVar6 = (*pcVar2)();
      return uVar6;
    }
  }
  *(int *)((int)this + 0x30) = iVar8;
  if (param_3 != (int *)0x0) {
    *param_3 = iVar8;
  }
  *(int *)((int)this + 0x34) = iStack_8;
  if (param_3 != (int *)0x0) {
    *param_4 = iStack_8;
  }
  *(int *)((int)this + 0x38) = iStack_c;
  if (param_3 != (int *)0x0) {
    *param_5 = iStack_c;
  }
  if (iStack_1c == 0) {
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x24) = 1;
    *(undefined4 *)((int)this + 0x28) = 0;
  }
  goto LAB_004c6899;
}


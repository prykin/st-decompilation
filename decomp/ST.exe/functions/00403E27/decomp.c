
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall thunk_FUN_005fdb50(void *this,int param_1,int param_2)

{
  char cVar1;
  short sVar2;
  STT3DSprC *this_00;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  void *pvStack_c;
  int iStack_8;
  
  if (param_2 < 0) {
    iStack_10 = *(int *)((int)this + 0x226);
    iStack_14 = 0;
  }
  else {
    iStack_10 = param_2 + 1;
    iStack_14 = param_2;
  }
  if (iStack_14 < iStack_10) {
    iVar8 = iStack_14 * 0x52;
    pvStack_c = this;
    do {
      iVar5 = *(int *)(iVar8 + 0x39 + *(int *)((int)this + 0x233));
      if ((((iVar5 != 4) && (iVar5 != 5)) &&
          (this_00 = *(STT3DSprC **)(iVar8 + *(int *)((int)this + 0x233) + 0x42),
          this_00 != (STT3DSprC *)0x0)) && (-1 < param_2 || iVar5 != 2)) {
        iStack_8 = iVar8;
        if ((iVar5 == 1) || (iVar5 == 2)) {
          iVar5 = STT3DSprC::Init(this_00,DAT_008073cc,0x5a,0x45,0,0xb4,0x8c,0x11);
          if (iVar5 != 0) {
            FUN_006a5e40(-1,DAT_007ed77c,0x7cebc8,0x13d);
            return 0xffff;
          }
          iVar5 = STT3DSprC::LoadSequence(this_00,0xd,DAT_00806774,(byte *)s_adcbo_007ce924,0x1d);
          if (iVar5 != 0) {
            return 0xffff;
          }
          thunk_FUN_004ad380(this_00,0x5a,0x45);
          iVar5 = iVar8 + *(int *)((int)this + 0x233);
          iStack_18 = (int)*(short *)(iVar5 + 6);
          thunk_FUN_004ad3c0(this_00,(float)iStack_18 * _DAT_007904f8 * _DAT_007904f0,
                             (float)(int)*(short *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                             (float)(int)*(short *)(iVar8 + 10 + *(int *)((int)this + 0x233)) *
                             _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
          STT3DSprC::StartShow(this_00,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
          *(undefined1 *)(iVar8 + 0x41 + *(int *)((int)this + 0x233)) = 1;
          pvVar3 = DAT_00802a88;
          if (DAT_00802a88 != (void *)0x0) {
            iVar5 = iVar8 + *(int *)((int)this + 0x233);
            sVar2 = *(short *)(iVar8 + 10 + *(int *)((int)this + 0x233));
            if (sVar2 < 0) {
              iVar7 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                             (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f)) + -1;
            }
            else {
              iVar7 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                                  (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f));
            }
            sVar2 = *(short *)(iVar5 + 8);
            if (sVar2 < 0) {
              iVar6 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                             (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar6 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                  (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
            }
            sVar2 = *(short *)(iVar5 + 6);
            if (sVar2 < 0) {
              iVar5 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                             (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
            }
            else {
              iVar5 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                  (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
            }
            iVar8 = iStack_8;
            this = pvStack_c;
            if ((((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
                ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar5,
                                     iVar6,&iStack_24,&iStack_28), iVar8 = iStack_8,
                 this = pvStack_c, -1 < iVar7 &&
                 ((((iVar7 < 5 && (-1 < iStack_24)) && (iStack_24 < *(int *)((int)pvVar3 + 0x30)))
                  && ((iVar5 = (&DAT_0079aed0)[iVar7] + iStack_28, -1 < iVar5 &&
                      (iVar5 < *(int *)((int)pvVar3 + 0x34))))))))) &&
               (*(int *)((int)pvVar3 + 0x4c) != 0)) {
              cVar1 = *(char *)(iVar5 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c)
                               + iStack_24);
joined_r0x005fe09b:
              iVar8 = iStack_8;
              this = pvStack_c;
              if (cVar1 == '\0') {
                thunk_FUN_004ad430((int)this_00);
                *(undefined1 *)(iStack_8 + 0x41 + *(int *)((int)pvStack_c + 0x233)) = 0;
                iVar8 = iStack_8;
                this = pvStack_c;
              }
            }
          }
        }
        else if (iVar5 == 3) {
          if (this_00 == (STT3DSprC *)0x0) {
            return 0;
          }
          STT3DSprC::StopShow(this_00,0xd);
          thunk_FUN_004ad5e0((int)this_00);
          if (param_1 == 0) {
            thunk_FUN_004ad310((int)this_00);
          }
          else {
            uVar4 = *(int *)((int)this + 0x1c) * 0x41c64e6d + 0x3039;
            *(uint *)((int)this + 0x1c) = uVar4;
            iVar5 = STT3DSprC::LoadSequence
                              (this_00,0xd,DAT_00806774,(&PTR_s_Expb24_007ce934)[uVar4 >> 0x10 & 1],
                               0x1d);
            if (iVar5 != 0) {
              return 0xffff;
            }
            iVar5 = STT3DSprC::LoadSequence
                              (this_00,0xf,DAT_00806764,(byte *)s_bulb_n3_007ce92c,0x1d);
            if (iVar5 != 0) {
              return 0xffff;
            }
            iVar5 = STT3DSprC::LoadSequence
                              (this_00,0xe,DAT_00806774,(byte *)s_expmask2_007ce93c,0x1d);
            if (iVar5 != 0) {
              return 0xffff;
            }
            STT3DSprC::StartShow(this_00,0xe,*(undefined4 *)(DAT_00802a38 + 0xe4));
            *(undefined1 *)(iVar8 + 0x28 + *(int *)((int)this + 0x233)) = 1;
            thunk_FUN_004ac700(this_00,'\x0f');
            STT3DSprC::StartShow(this_00,0xd,*(undefined4 *)(DAT_00802a38 + 0xe4));
            thunk_FUN_004acf20(this_00,DAT_008032b8,0x10);
            thunk_FUN_004acfe0(this_00,'\x0e');
            iVar5 = iVar8 + *(int *)((int)this + 0x233);
            iStack_18 = (int)*(short *)(iVar5 + 6);
            thunk_FUN_004ad3c0(this_00,(float)iStack_18 * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)*(short *)(iVar5 + 8) * _DAT_007904f8 * _DAT_007904f0,
                               (float)(int)*(short *)(iVar8 + 10 + *(int *)((int)this + 0x233)) *
                               _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
            *(undefined1 *)(iVar8 + 0x41 + *(int *)((int)this + 0x233)) = 1;
            pvVar3 = DAT_00802a88;
            if (DAT_00802a88 != (void *)0x0) {
              sVar2 = *(short *)(iVar8 + 10 + *(int *)((int)this + 0x233));
              iVar8 = iVar8 + *(int *)((int)this + 0x233);
              if (sVar2 < 0) {
                iVar5 = (short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                               (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f)) + -1;
              }
              else {
                iVar5 = (int)(short)((sVar2 / 200 + (sVar2 >> 0xf)) -
                                    (short)((longlong)(int)sVar2 * 0x51eb851f >> 0x3f));
              }
              sVar2 = *(short *)(iVar8 + 8);
              if (sVar2 < 0) {
                iVar7 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                               (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar7 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                    (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
              }
              sVar2 = *(short *)(iVar8 + 6);
              if (sVar2 < 0) {
                iVar6 = (short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                               (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f)) + -1;
              }
              else {
                iVar6 = (int)(short)((sVar2 / 0xc9 + (sVar2 >> 0xf)) -
                                    (short)((longlong)(int)sVar2 * 0x28c1979 >> 0x3f));
              }
              iVar8 = iStack_8;
              this = pvStack_c;
              if ((((DAT_0080874d != -1) && (*(int *)((int)DAT_00802a88 + 0xf8) != 0)) &&
                  ((thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar6
                                       ,iVar7,&iStack_1c,&iStack_20), iVar8 = iStack_8,
                   this = pvStack_c, -1 < iVar5 &&
                   (((iVar5 < 5 && (-1 < iStack_1c)) && (iStack_1c < *(int *)((int)pvVar3 + 0x30))))
                   ))) && (((iVar5 = (&DAT_0079aed0)[iVar5] + iStack_20, -1 < iVar5 &&
                            (iVar5 < *(int *)((int)pvVar3 + 0x34))) &&
                           (*(int *)((int)pvVar3 + 0x4c) != 0)))) {
                cVar1 = *(char *)(iVar5 * *(int *)((int)pvVar3 + 0x30) +
                                  *(int *)((int)pvVar3 + 0x4c) + iStack_1c);
                goto joined_r0x005fe09b;
              }
            }
          }
        }
      }
      iStack_14 = iStack_14 + 1;
      iVar8 = iVar8 + 0x52;
    } while (iStack_14 < iStack_10);
  }
  return 0;
}


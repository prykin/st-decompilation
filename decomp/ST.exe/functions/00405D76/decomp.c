
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall thunk_FUN_006057c0(void *param_1)

{
  int *piVar1;
  short sVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  
  pvVar3 = DAT_00802a88;
  if (*(int *)((int)param_1 + 0x2af) != 0) {
    if (DAT_00802a88 != (void *)0x0) {
      iVar5 = *(int *)((int)param_1 + 0x292);
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iStack_8 = (short)(((short)(iVar5 / 200) + sVar2) -
                          (short)((longlong)iVar5 * 0x51eb851f >> 0x3f)) + -1;
      }
      else {
        iStack_8 = (int)(short)(((short)(iVar5 / 200) + sVar2) -
                               (short)((longlong)iVar5 * 0x51eb851f >> 0x3f));
      }
      iVar5 = *(int *)((int)param_1 + 0x28e);
      sVar2 = (short)(iVar5 >> 0x1f);
      if (iVar5 < 0) {
        iVar5 = (short)(((short)(iVar5 / 0xc9) + sVar2) -
                       (short)((longlong)iVar5 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar5 = (int)(short)(((short)(iVar5 / 0xc9) + sVar2) -
                            (short)((longlong)iVar5 * 0x28c1979 >> 0x3f));
      }
      iVar4 = *(int *)((int)param_1 + 0x28a);
      sVar2 = (short)(iVar4 >> 0x1f);
      if (iVar4 < 0) {
        iVar4 = (short)(((short)(iVar4 / 0xc9) + sVar2) -
                       (short)((longlong)iVar4 * 0x28c1979 >> 0x3f)) + -1;
      }
      else {
        iVar4 = (int)(short)(((short)(iVar4 / 0xc9) + sVar2) -
                            (short)((longlong)iVar4 * 0x28c1979 >> 0x3f));
      }
      if ((((((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) ||
            (thunk_FUN_00558c00(DAT_00802a88,*(undefined4 *)((int)DAT_00802a88 + 0x10c),iVar4,iVar5,
                                &iStack_c,&iStack_10), iStack_8 < 0)) ||
           ((4 < iStack_8 || (iStack_c < 0)))) ||
          ((*(int *)((int)pvVar3 + 0x30) <= iStack_c ||
           ((iStack_10 = (&DAT_0079aed0)[iStack_8] + iStack_10, iStack_10 < 0 ||
            (*(int *)((int)pvVar3 + 0x34) <= iStack_10)))))) ||
         ((*(int *)((int)pvVar3 + 0x4c) == 0 ||
          (*(char *)(iStack_10 * *(int *)((int)pvVar3 + 0x30) + *(int *)((int)pvVar3 + 0x4c) +
                    iStack_c) != '\0')))) {
        if (*(int *)((int)param_1 + 0x286) == 0) {
          thunk_FUN_004ad460(*(void **)((int)param_1 + 0x2af),0);
          *(undefined4 *)((int)param_1 + 0x286) = 1;
        }
      }
      else if (*(int *)((int)param_1 + 0x286) != 0) {
        thunk_FUN_004ad430(*(int *)((int)param_1 + 0x2af));
        *(undefined4 *)((int)param_1 + 0x286) = 0;
      }
    }
    if (*(int *)((int)param_1 + 0x286) == 1) {
      iVar5 = *(int *)((int)param_1 + 0x296);
      piVar1 = (int *)((int)param_1 + 0x282);
      if (iVar5 < (int)(&DAT_007cee44)[*(int *)((int)param_1 + 0x282)]) {
        thunk_FUN_004abe40(*(void **)((int)param_1 + 0x2af),'\r',iVar5);
        STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x2af),'\r');
        thunk_FUN_004ad3c0(*(void **)((int)param_1 + 0x2af),
                           (float)*(int *)((int)param_1 + 0x28a) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)((int)param_1 + 0x28e) * _DAT_007904f8 * _DAT_007904f0,
                           (float)*(int *)((int)param_1 + 0x292) * _DAT_007904f8 * _DAT_007904f0 +
                           _DAT_007904fc);
      }
      else if (iVar5 == (&DAT_007cee44)[*(int *)((int)param_1 + 0x282)]) {
        STT3DSprC::StopShow(*(STT3DSprC **)((int)param_1 + 0x2af),0xd);
      }
      iVar5 = *(int *)((int)param_1 + 0x296) + 1;
      *(int *)((int)param_1 + 0x296) = iVar5;
      if (*(int *)(&DAT_007cedf4 + *piVar1 * 4) <= iVar5) {
        if ((iVar5 == *(int *)(&DAT_007cedf4 + *piVar1 * 4)) &&
           (iVar5 = STExplosionC::LoadImagSpr(param_1,piVar1,0,'\x01'), iVar5 == 0)) {
          *(undefined1 *)((int)param_1 + 0x29e) = 1;
        }
        if (*(char *)((int)param_1 + 0x29e) != '\0') {
          thunk_FUN_004abe40(*(void **)((int)param_1 + 0x2af),'\x0f',
                             *(undefined4 *)((int)param_1 + 0x29f));
          STT3DSprC::ShowCurFase(*(STT3DSprC **)((int)param_1 + 0x2af),'\x0f');
          if ((*(byte *)(DAT_00802a38 + 0xe4) & 1) != 0) {
            *(int *)((int)param_1 + 0x29f) = *(int *)((int)param_1 + 0x29f) + 1;
          }
          if (*(int *)((int)param_1 + 0x2a3) <= *(int *)((int)param_1 + 0x29f)) {
            *(undefined4 *)((int)param_1 + 0x29f) = 0;
            *(undefined1 *)((int)param_1 + 0x29e) = 0;
            STT3DSprC::StopShow(*(STT3DSprC **)((int)param_1 + 0x2af),0xf);
          }
        }
      }
      if (*(int *)(&DAT_007cee1c + *piVar1 * 4) <= *(int *)((int)param_1 + 0x296)) {
        thunk_FUN_00605780((int)param_1);
      }
    }
    return;
  }
  return;
}


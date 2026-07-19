
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0060e210(undefined4 param_1,undefined4 param_2,int param_3,undefined2 *param_4,int param_5)

{
  int iVar1;
  double *pdVar2;
  int iVar3;
  int iVar4;
  double *pdVar5;
  int iVar6;
  float10 fVar7;
  float10 extraout_ST1;
  longlong lVar8;
  
  iVar1 = param_3;
  pdVar2 = (double *)Library::DKW::LIB::FUN_006aac70(param_3 * 8);
  if (pdVar2 != (double *)0x0) {
    iVar6 = param_3 + -1;
    *(undefined4 *)pdVar2 = 0;
    *(undefined4 *)((int)pdVar2 + 4) = 0x3ff00000;
    *(undefined4 *)(pdVar2 + iVar6) = 0;
    *(undefined4 *)((int)pdVar2 + iVar6 * 8 + 4) = 0x3ff00000;
    iVar4 = param_3 + -3;
    fVar7 = (float10)_DAT_0079cd88 / (float10)(param_5 + -1);
    iVar3 = 0;
    pdVar5 = pdVar2;
    param_3 = iVar6;
    if (-1 < iVar4) {
      do {
        iVar3 = iVar3 + 1;
        pdVar5[1] = ((double)param_3 * *pdVar5) / (double)iVar3;
        pdVar5 = pdVar5 + 1;
        param_3 = param_3 + -1;
      } while (iVar3 <= iVar4);
    }
    param_3 = 0;
    if (0 < param_5) {
      do {
        if ((float10)_DAT_007901c0 < (float10)param_3 * fVar7) {
          if (1 < iVar6) {
            iVar4 = iVar1 + -2;
            do {
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          iVar4 = iVar6;
          if (0 < iVar6) {
            do {
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          if (1 < iVar6) {
            iVar4 = iVar1 + -2;
            do {
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
          if (-1 < iVar1 + -2) {
            iVar4 = iVar1 + -1;
            do {
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
          }
        }
        lVar8 = Library::MSVCRT::__ftol();
        *param_4 = (short)lVar8;
        lVar8 = Library::MSVCRT::__ftol();
        param_4[1] = (short)lVar8;
        param_4 = param_4 + 2;
        param_3 = param_3 + 1;
        fVar7 = extraout_ST1;
      } while (param_3 < param_5);
    }
    FUN_006a5e90((undefined4 *)pdVar2);
    return 0;
  }
  return 0xfffffffe;
}


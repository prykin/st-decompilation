
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_0062cac0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
            int param_7,short *param_8)

{
  float fVar1;
  float10 fVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  
  if (param_1 != (int *)0x0) {
    *(int *)((int)param_1 + 0x3d) = (int)*(short *)(param_6 + 2 + param_7 * 4);
    fVar1 = SQRT((float)((param_2 - *param_1) * (param_2 - *param_1) +
                         (param_4 - param_1[2]) * (param_4 - param_1[2]) +
                        (param_3 - param_1[1]) * (param_3 - param_1[1]))) - (float)param_1[3];
    if ((float)-param_1[3] < fVar1) {
      lVar3 = Library::MSVCRT::__ftol();
      param_1[5] = (int)lVar3;
      fVar2 = (float10)*(int *)((int)param_1 + 0x41) + (float10)*(float *)((int)param_1 + 0x45);
      *(float *)((int)param_1 + 0x45) = (float)fVar2;
      fVar2 = fVar2 * (float10)_DAT_0079d07c;
      fcos(fVar2);
      fsin(fVar2);
      lVar3 = Library::MSVCRT::__ftol();
      lVar4 = Library::MSVCRT::__ftol();
      lVar5 = Library::MSVCRT::__ftol();
      param_1[6] = (int)lVar3;
      param_1[7] = (int)lVar4;
      param_1[8] = (int)lVar5;
      *param_8 = (short)lVar3 + (short)*param_1;
      param_8[1] = (short)param_1[1] + (short)lVar4;
      param_8[2] = (short)lVar5 + (short)param_1[2];
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,3,0,0,(int)lVar3 + *param_1,param_1[1] + (int)lVar4,
                 (int)lVar5 + param_1[2],0,0,0,0,0,0,-1,0,1);
      if (fVar1 <= _DAT_0079d070) {
        return 1;
      }
    }
  }
  return 0;
}


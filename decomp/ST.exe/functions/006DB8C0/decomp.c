
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_006db8c0(float param_1,float param_2,float param_3,float param_4)

{
  double dVar1;
  float10 fVar2;
  longlong lVar3;
  
  fVar2 = (float10)fpatan(-((float10)param_4 - (float10)param_2),(float10)param_3 - (float10)param_1
                         );
  if (fVar2 < (float10)_DAT_0079034c) {
    fVar2 = fVar2 + (float10)_DAT_0079c5a4;
  }
  dVar1 = (double)(fVar2 * (float10)_DAT_0079df54 + (float10)_DAT_007901c0);
  Library::MSVCRT::FUN_0072e150(SUB84(dVar1,0),(uint)((ulonglong)dVar1 >> 0x20));
  lVar3 = Library::MSVCRT::__ftol();
  return lVar3;
}


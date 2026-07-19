
undefined4 __thiscall
FUN_004c5bd0(void *this,float param_1,short *param_2,short *param_3,short *param_4,
            undefined4 *param_5)

{
  float fVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  short *psVar5;
  short *psVar6;
  int iVar7;
  float10 extraout_ST0;
  longlong lVar8;
  
  psVar6 = param_3;
  psVar5 = param_2;
  iVar7 = (int)param_1 * 0xc;
  sVar2 = (short)((int)((2 - (uint)(*(int *)(&DAT_00791e30 + *(int *)((int)this + 0x235) * 4) != 1))
                       * 0xc9) / 2);
  *param_2 = *(short *)(iVar7 + *(int *)((int)this + 0x5fb)) + *(short *)((int)this + 0x5b0) * 0xc9
             + sVar2;
  *param_3 = *(short *)(iVar7 + 4 + *(int *)((int)this + 0x5fb)) +
             *(short *)((int)this + 0x5b4) * 0xc9 + sVar2;
  *param_4 = *(short *)(iVar7 + 8 + *(int *)((int)this + 0x5fb)) +
             *(short *)((int)this + 0x5b8) * 200;
  *param_5 = 0;
  FUN_006dd530(*(void **)((int)this + 0x211),&param_1,(float *)&param_2,(float *)&param_3);
  lVar8 = Library::MSVCRT::__ftol();
  param_1 = (float)(int)(short)lVar8;
  lVar8 = Library::MSVCRT::__ftol();
  param_1 = (float)(int)(short)lVar8;
  lVar8 = Library::MSVCRT::__ftol();
  fVar3 = (float)(int)*(short *)((int)this + 0x43) - param_1;
  fVar1 = (float)((float10)(int)*(short *)((int)this + 0x41) - extraout_ST0);
  fVar4 = (float)(int)*param_4 - (float)(int)(short)lVar8;
  fVar4 = fVar4 * fVar4;
  if (((float10)(int)*psVar5 - extraout_ST0) * ((float10)(int)*psVar5 - extraout_ST0) +
      ((float10)(int)*psVar6 - (float10)param_1) * ((float10)(int)*psVar6 - (float10)param_1) +
      (float10)fVar4 <
      (float10)fVar3 * (float10)fVar3 + (float10)fVar1 * (float10)fVar1 + (float10)fVar4) {
    *param_5 = 0;
    return 0;
  }
  *param_5 = 1;
  return 0;
}


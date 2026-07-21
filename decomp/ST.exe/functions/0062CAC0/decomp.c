
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_0062cac0(AnonShape_0062CAC0_4BF74422 *param_1,int param_2,int param_3,int param_4,
            undefined4 param_5,int param_6,int param_7,short *param_8)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;

  if (param_1 != (AnonShape_0062CAC0_4BF74422 *)0x0) {
    iVar2 = param_3 - *(int *)&param_1->field_0x4;
    iVar3 = param_4 - *(int *)&param_1->field_0x8;
    param_1->field_003D = (int)*(short *)(param_6 + 2 + param_7 * 4);
    fVar1 = SQRT((float)((param_2 - *(int *)param_1) * (param_2 - *(int *)param_1) + iVar3 * iVar3 +
                        iVar2 * iVar2)) - (float)*(int *)&param_1->field_0xc;
    if ((float)-*(int *)&param_1->field_0xc < fVar1) {
      lVar5 = Library::MSVCRT::__ftol();
      *(int *)&param_1->field_0x14 = (int)lVar5;
      fVar4 = (float10)param_1->field_0041 + (float10)param_1->field_0045;
      param_1->field_0045 = (float)fVar4;
      fVar4 = fVar4 * (float10)_DAT_0079d07c;
      fcos(fVar4);
      fsin(fVar4);
      lVar5 = Library::MSVCRT::__ftol();
      lVar6 = Library::MSVCRT::__ftol();
      lVar7 = Library::MSVCRT::__ftol();
      *(int *)&param_1->field_0x18 = (int)lVar5;
      *(int *)&param_1->field_0x1c = (int)lVar6;
      *(int *)&param_1->field_0x20 = (int)lVar7;
      *param_8 = (short)lVar5 + *(short *)param_1;
      param_8[1] = *(short *)&param_1->field_0x4 + (short)lVar6;
      param_8[2] = (short)lVar7 + *(short *)&param_1->field_0x8;
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,3,0,0,(int)lVar5 + *(int *)param_1,
                 *(int *)&param_1->field_0x4 + (int)lVar6,(int)lVar7 + *(int *)&param_1->field_0x8,0
                 ,0,0,0,0,0,-1,0,1);
      if (fVar1 <= _DAT_0079d070) {
        return 1;
      }
    }
  }
  return 0;
}


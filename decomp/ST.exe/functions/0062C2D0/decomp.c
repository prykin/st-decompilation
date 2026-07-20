
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl FUN_0062c2d0(AnonShape_0062C2D0_06591E1F *param_1,int param_2,int param_3,int param_4)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  float10 fVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  short sVar13;
  short sVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  short sVar18;
  int iVar19;
  short sVar20;
  byte bVar21;
  
  bVar5 = false;
  if (param_1 != (AnonShape_0062C2D0_06591E1F *)0x0) {
    iVar2 = param_3 - *(int *)&param_1->field_0x4;
    iVar4 = param_4 - *(int *)&param_1->field_0x8;
    bVar5 = true;
    fVar1 = SQRT((float)((param_2 - *(int *)param_1) * (param_2 - *(int *)param_1) + iVar4 * iVar4 +
                        iVar2 * iVar2)) - (float)*(int *)&param_1->field_0xc;
    if ((float)-*(int *)&param_1->field_0xc < fVar1) {
      iVar2 = *(int *)&param_1->field_0x14;
      lVar7 = Library::MSVCRT::__ftol();
      *(int *)&param_1->field_0x14 = (int)lVar7;
      lVar7 = Library::MSVCRT::__ftol();
      iVar4 = (int)lVar7;
      fVar6 = (float10)param_1->field_0041 + (float10)param_1->field_0045;
      param_1->field_0045 = (float)fVar6;
      fVar6 = fVar6 * (float10)_DAT_0079d078;
      fcos(fVar6);
      fsin(fVar6);
      lVar7 = Library::MSVCRT::__ftol();
      lVar8 = Library::MSVCRT::__ftol();
      lVar9 = Library::MSVCRT::__ftol();
      *(int *)&param_1->field_0x18 = (int)lVar7;
      *(int *)&param_1->field_0x1c = (int)lVar8;
      *(int *)&param_1->field_0x20 = (int)lVar9;
      lVar10 = Library::MSVCRT::__ftol();
      lVar11 = Library::MSVCRT::__ftol();
      lVar12 = Library::MSVCRT::__ftol();
      *(int *)&param_1->field_0x2c = (int)lVar12;
      *(int *)&param_1->field_0x24 = (int)lVar10;
      *(int *)&param_1->field_0x28 = (int)lVar11;
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,3,1,0,*(int *)param_1 + (int)lVar7,
                 *(int *)&param_1->field_0x4 + (int)lVar8,*(int *)&param_1->field_0x8 + (int)lVar9,
                 (short)lVar10,(short)lVar11,(short)lVar12,0,0,0,-1,0,0);
      if ((float)iVar2 == _DAT_0079034c) {
        return true;
      }
      bVar5 = fVar1 <= _DAT_0079d070;
      bVar21 = 0;
      sVar20 = 0;
      iVar19 = -1;
      sVar18 = 0;
      sVar17 = 0;
      sVar16 = 0;
      fVar6 = (((float10)param_1->field_0045 - (float10)iVar4) * (float10)_DAT_0079d068 +
              (float10)iVar4) * (float10)_DAT_0079d078;
      fcos(fVar6);
      fsin(fVar6);
      lVar7 = Library::MSVCRT::__ftol();
      sVar15 = (short)lVar7;
      lVar7 = Library::MSVCRT::__ftol();
      sVar14 = (short)lVar7;
      lVar7 = Library::MSVCRT::__ftol();
      sVar13 = (short)lVar7;
      lVar7 = Library::MSVCRT::__ftol();
      iVar2 = (int)lVar7 + *(int *)&param_1->field_0x8;
      lVar7 = Library::MSVCRT::__ftol();
      iVar3 = (int)lVar7 + *(int *)&param_1->field_0x4;
      lVar7 = Library::MSVCRT::__ftol();
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,3,1,3,(int)lVar7 + *(int *)param_1,iVar3,iVar2,sVar13,sVar14,
                 sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
      fVar6 = (((float10)param_1->field_0045 - (float10)iVar4) * (float10)_DAT_00790784 +
              (float10)iVar4) * (float10)_DAT_0079d078;
      fcos(fVar6);
      fsin(fVar6);
      bVar21 = 0;
      sVar20 = 0;
      iVar19 = -1;
      sVar18 = 0;
      sVar17 = 0;
      sVar16 = 0;
      lVar7 = Library::MSVCRT::__ftol();
      sVar15 = (short)lVar7;
      lVar7 = Library::MSVCRT::__ftol();
      sVar14 = (short)lVar7;
      lVar7 = Library::MSVCRT::__ftol();
      sVar13 = (short)lVar7;
      lVar7 = Library::MSVCRT::__ftol();
      iVar2 = (int)lVar7 + *(int *)&param_1->field_0x8;
      lVar7 = Library::MSVCRT::__ftol();
      iVar3 = (int)lVar7 + *(int *)&param_1->field_0x4;
      lVar7 = Library::MSVCRT::__ftol();
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,3,1,2,(int)lVar7 + *(int *)param_1,iVar3,iVar2,sVar13,sVar14,
                 sVar15,sVar16,sVar17,sVar18,iVar19,sVar20,bVar21);
      bVar21 = 0;
      sVar20 = 0;
      iVar3 = -1;
      sVar18 = 0;
      sVar17 = 0;
      sVar16 = 0;
      fVar6 = (((float10)param_1->field_0045 - (float10)iVar4) * (float10)_DAT_0079d06c +
              (float10)iVar4) * (float10)_DAT_0079d078;
      fcos(fVar6);
      fsin(fVar6);
      lVar7 = Library::MSVCRT::__ftol();
      sVar15 = (short)lVar7;
      lVar7 = Library::MSVCRT::__ftol();
      sVar14 = (short)lVar7;
      lVar7 = Library::MSVCRT::__ftol();
      sVar13 = (short)lVar7;
      lVar7 = Library::MSVCRT::__ftol();
      iVar2 = (int)lVar7 + *(int *)&param_1->field_0x8;
      lVar7 = Library::MSVCRT::__ftol();
      iVar4 = (int)lVar7 + *(int *)&param_1->field_0x4;
      lVar7 = Library::MSVCRT::__ftol();
      TraksClassTy::TraksCreate
                (g_traksClass_00802A7C,3,1,1,(int)lVar7 + *(int *)param_1,iVar4,iVar2,sVar13,sVar14,
                 sVar15,sVar16,sVar17,sVar18,iVar3,sVar20,bVar21);
    }
  }
  return bVar5;
}


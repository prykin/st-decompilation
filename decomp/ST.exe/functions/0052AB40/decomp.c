
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\minimap.cpp
   Diagnostic line evidence: 22 | 47 | 58 | 66 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void __cdecl CreateMiniMap(short *param_1,int *param_2,uint param_3,byte *param_4)

{
  int *piVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  HoloTy *this;
  uint uVar9;
  int *piVar10;
  int iVar11;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar12;
  InternalExceptionFrame local_68;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  HoloTy *local_10;
  int *local_c;
  float local_8;
  
  *param_2 = 0;
  param_2[1] = 0;
  local_8 = 1.4142135;
  local_10 = (HoloTy *)0x0;
  local_20 = 0;
  param_2[2] = 0;
  local_14 = 0;
  param_2[3] = 0;
  local_68.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_68;
  iVar7 = Library::MSVCRT::__setjmp3(local_68.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar7 == 0) {
    if (DAT_00802a58 != (cLoadingTy *)0x0) {
      cLoadingTy::SetProcess(DAT_00802a58,0,s_Preparing_mini_map____007c6f28,900);
    }
    puVar8 = FUN_006b04d0(0x4f2);
    if (puVar8 == (undefined4 *)0x0) {
      this = (HoloTy *)0x0;
    }
    else {
      this = (HoloTy *)FUN_006dbca0((int)puVar8);
    }
    local_10 = this;
    if (this == (HoloTy *)0x0) {
      RaiseInternalException
                (-2,g_overwriteContext_007ED77C,s_E____titans_Andrey_minimap_cpp_007c6f00,0x16);
    }
    local_18 = (int)*param_1;
    dVar2 = (double)((float)(int)param_1[1] * local_8 * _DAT_007904f4);
    local_1c = -local_18;
    uVar9 = param_3 + 1 & 0xfffffffe;
    dVar3 = (double)((float)-(int)param_1[1] * local_8 * _DAT_007904f4);
    dVar4 = (double)((float)local_18 * local_8 * _DAT_007904f4);
    dVar5 = (double)((float)(int)local_1c * local_8 * _DAT_007904f4);
    FUN_006dc050(this,DAT_0080759c,0,0,uVar9,uVar9,SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                 SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),SUB84(dVar3,0),
                 (int)((ulonglong)dVar3 >> 0x20),SUB84(dVar2,0),(int)((ulonglong)dVar2 >> 0x20),
                 0x4024000000000000,0x4023ee97865e3540,0);
    *(uint *)((int)&this[5].field_0027 + 2) = (uint)*param_4;
    *(undefined4 *)((int)&this[5].field_0023 + 2) = 2;
    *(undefined4 *)((int)&this[0x15].field_0007 + 2) = *(undefined4 *)param_4;
    iVar7 = 0;
    *(undefined2 *)((int)&this[0x15].field_000B + 2) = *(undefined2 *)(param_4 + 4);
    if (0 < *(int *)((int)param_1 + 0x455)) {
      piVar10 = (int *)((int)param_1 + 0x459);
      do {
        puVar8 = (undefined4 *)*piVar10;
        if ((puVar8 != (undefined4 *)0x0) && (*(short *)(puVar8 + 2) != 0)) {
          *puVar8 = *(undefined4 *)((int)&this[6].field_000B + 3);
          *(undefined4 **)((int)&this[6].field_000B + 3) = puVar8;
          piVar1 = (int *)((int)&this[6].field_0007 + 3);
          *piVar1 = *piVar1 + 1;
        }
        iVar7 = iVar7 + 1;
        piVar10 = piVar10 + 1;
      } while (iVar7 < *(int *)((int)param_1 + 0x455));
    }
    local_24 = param_3 * param_3;
    local_1c = 0;
    local_c = param_2;
    do {
      uVar9 = local_1c;
      if (DAT_00802a58 != (cLoadingTy *)0x0) {
        cLoadingTy::SetState(DAT_00802a58,CASE_1,local_14,(char *)0x0);
      }
      local_14 = local_14 + 1;
      local_18 = (int)*param_1;
      FUN_006dd610(this,uVar9 | 8,SUB84((double)((float)local_18 * _DAT_007904f4),0),
                   (int)((ulonglong)(double)((float)local_18 * _DAT_007904f4) >> 0x20),
                   SUB84((double)((float)(int)param_1[1] * _DAT_007904f4),0),
                   (int)((ulonglong)(double)((float)(int)param_1[1] * _DAT_007904f4) >> 0x20));
      FUN_006ddbe0((int)this);
      FUN_006ddd50(this);
      puVar8 = Library::DKW::LIB::FUN_006aac10(local_24);
      *local_c = (int)puVar8;
      if (puVar8 == (undefined4 *)0x0) {
        RaiseInternalException
                  (-2,g_overwriteContext_007ED77C,s_E____titans_Andrey_minimap_cpp_007c6f00,0x2f);
      }
      iVar7 = 0;
      if (0 < (int)param_3) {
        local_18 = 0;
        do {
          puVar8 = (undefined4 *)
                   (*(int *)((int)&this->field_0027 + 1) * iVar7 +
                   *(int *)((int)&this->field_000B + 1));
          puVar12 = (undefined4 *)(*local_c + local_18);
          for (uVar9 = param_3 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar12 = *puVar8;
            puVar8 = puVar8 + 1;
            puVar12 = puVar12 + 1;
          }
          iVar7 = iVar7 + 1;
          for (uVar9 = param_3 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
            *(undefined1 *)puVar12 = *(undefined1 *)puVar8;
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            puVar12 = (undefined4 *)((int)puVar12 + 1);
          }
          local_18 = local_18 + param_3;
          uVar9 = local_1c;
        } while (iVar7 < (int)param_3);
      }
      local_1c = uVar9 + 1;
      local_c = local_c + 1;
    } while ((int)local_1c < 4);
    g_currentExceptionFrame = local_68.previous;
    iVar7 = local_20;
  }
  else {
    g_currentExceptionFrame = local_68.previous;
    local_20 = iVar7;
    iVar11 = ReportDebugMessage(s_E____titans_Andrey_minimap_cpp_007c6f00,0x3a,0,iVar7,&DAT_007a4ccc
                                ,s_CreateMiniMap_007c6ef0);
    this = local_10;
    if (iVar11 != 0) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
  }
  if (this != (HoloTy *)0x0) {
    FUN_006dbcf0((int *)this);
    Library::MSVCRT::FUN_0072e2b0(this);
  }
  if (iVar7 != 0) {
    iVar11 = 4;
    do {
      FUN_006ab060((LPVOID *)param_2);
      param_2 = param_2 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    RaiseInternalException
              (iVar7,g_overwriteContext_007ED77C,s_E____titans_Andrey_minimap_cpp_007c6f00,0x42);
  }
  if (DAT_00802a58 != (cLoadingTy *)0x0) {
    cLoadingTy::SetState(DAT_00802a58,CASE_2,0,(char *)0x0);
  }
  return;
}


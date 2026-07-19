
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054a9b0(float param_1,float param_2,float param_3)

{
  uint uVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  SpriteClassTy *pSVar6;
  undefined4 unaff_ESI;
  undefined4 *unaff_EDI;
  int iVar7;
  longlong lVar8;
  InternalExceptionFrame local_58;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  if ((DAT_00807598 == (void *)0x0) || (DAT_00802a88 == (void *)0x0)) {
    return;
  }
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar4 = Library::MSVCRT::__setjmp3(local_58.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  if (param_1 < _DAT_0079034c) {
    lVar8 = Library::MSVCRT::__ftol();
    local_8 = (int)(short)lVar8 - 1;
  }
  else {
    lVar8 = Library::MSVCRT::__ftol();
    local_8 = (uint)(short)lVar8;
  }
  if (param_2 < _DAT_0079034c) {
    lVar8 = Library::MSVCRT::__ftol();
    iVar4 = (short)lVar8 + -1;
  }
  else {
    lVar8 = Library::MSVCRT::__ftol();
    iVar4 = (int)(short)lVar8;
  }
  if (param_3 < _DAT_0079034c) {
    lVar8 = Library::MSVCRT::__ftol();
    iVar7 = (short)lVar8 + -1;
  }
  else {
    lVar8 = Library::MSVCRT::__ftol();
    iVar7 = (int)(short)lVar8;
  }
  pvVar3 = DAT_00802a88;
  if ((DAT_0080874d == -1) || (*(int *)((int)DAT_00802a88 + 0xf8) == 0)) {
    uVar5 = 0;
  }
  else {
    thunk_FUN_00558c00(DAT_00802a88,*(Global_sub_00558C00_param_1Enum *)((int)DAT_00802a88 + 0x10c),
                       local_8,iVar4,&local_10,&local_14);
    if ((iVar7 < 0) || (4 < iVar7)) {
      uVar5 = 0xffffffff;
    }
    else {
      if ((((local_10 < 0) || (*(int *)((int)pvVar3 + 0x28) <= local_10)) ||
          ((&DAT_0079aed0)[iVar7] + local_14 < 0)) ||
         (*(int *)((int)pvVar3 + 0x2c) <= (&DAT_0079aed0)[iVar7] + local_14)) {
        bVar2 = false;
      }
      else {
        bVar2 = true;
      }
      if (((bVar2) && (*(int *)((int)pvVar3 + 0x10c) < 4)) &&
         (iVar4 = *(int *)((int)pvVar3 + *(int *)((int)pvVar3 + 0x10c) * 4 + 0x3c), iVar4 != 0)) {
        uVar5 = (uint)*(byte *)(((&DAT_0079aed0)[iVar7] + local_14) * *(int *)((int)pvVar3 + 0x28) +
                                iVar4 + local_10);
      }
      else {
        uVar5 = 0xffffffff;
      }
      if ((int)uVar5 < 0) goto cf_common_exit_0054ACFD;
      if (uVar5 == 0xf) {
        if (((local_10 < 0) || (*(int *)((int)pvVar3 + 0x30) <= local_10)) ||
           (((&DAT_0079aed0)[iVar7] + local_14 < 0 ||
            (*(int *)((int)pvVar3 + 0x34) <= (&DAT_0079aed0)[iVar7] + local_14)))) {
          bVar2 = false;
        }
        else {
          bVar2 = true;
        }
        if ((bVar2) && (*(int *)((int)pvVar3 + 0x4c) != 0)) {
          uVar5 = (uint)*(byte *)(((&DAT_0079aed0)[iVar7] + local_14) * *(int *)((int)pvVar3 + 0x30)
                                  + *(int *)((int)pvVar3 + 0x4c) + local_10);
        }
        else {
          uVar5 = 0xffffffff;
        }
        if ((int)uVar5 < 0) goto cf_common_exit_0054ACFD;
        uVar5 = (uint)(uVar5 != 0xf);
      }
      else {
        uVar5 = 2;
      }
    }
  }
  if (0 < (int)uVar5) {
    if (*(SpriteClassTy **)(local_c + 0x4eb) != (SpriteClassTy *)0x0) {
      SpriteClassTy::CloseSprite(*(SpriteClassTy **)(local_c + 0x4eb));
      Library::MSVCRT::FUN_0072e2b0(*(undefined4 **)(local_c + 0x4eb));
      *(undefined4 *)(local_c + 0x4eb) = 0;
    }
    pSVar6 = (SpriteClassTy *)Library::MSVCRT::FUN_0072e530(0x91);
    if (pSVar6 == (SpriteClassTy *)0x0) {
      pSVar6 = (SpriteClassTy *)0x0;
    }
    else {
      pSVar6 = (SpriteClassTy *)SpriteClassTy::SpriteClassTy(pSVar6,unaff_EDI);
    }
    *(SpriteClassTy **)(local_c + 0x4eb) = pSVar6;
    if (pSVar6 == (SpriteClassTy *)0x0) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    SpriteClassTy::InitSprite(pSVar6,DAT_008075a8,1,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(**(int **)(local_c + 0x4eb) + 4))
              (DAT_00806784,7,0,s_CUR_CONFIRM2D_007c7fb4,0xffffffff);
    *(undefined4 *)(*(int *)(local_c + 0x4eb) + 0x40) = 0x19;
    *(undefined4 *)(*(int *)(local_c + 0x4eb) + 8) = 0;
    *(float *)(local_c + 0x4ef) = param_1;
    *(float *)(local_c + 0x4f3) = param_2;
    *(float *)(local_c + 0x4f7) = param_3;
    FUN_006e2970(DAT_00807598,param_1,param_2,param_3,(int *)(*(int *)(local_c + 0x4eb) + 0x1c),
                 (int *)(*(int *)(local_c + 0x4eb) + 0x20));
    *(int *)(*(int *)(local_c + 0x4eb) + 0x1c) =
         *(int *)(*(int *)(local_c + 0x4eb) + 0x1c) - *(int *)(*(int *)(local_c + 0x4e7) + 9) / 2;
    *(int *)(*(int *)(local_c + 0x4eb) + 0x20) =
         *(int *)(*(int *)(local_c + 0x4eb) + 0x20) - *(int *)(*(int *)(local_c + 0x4e7) + 0xd) / 2;
    iVar4 = *(int *)(local_c + 0x4eb);
    if (*(uint *)(iVar4 + 4) == 0xffffffff) {
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    Library::DKW::DDX::FUN_006b34d0
              (*(uint **)(iVar4 + 0x48),*(uint *)(iVar4 + 4),0xfffffffe,*(uint *)(iVar4 + 0x1c),
               *(uint *)(iVar4 + 0x20));
    g_currentExceptionFrame = local_58.previous;
    return;
  }
cf_common_exit_0054ACFD:
  local_8 = 0xffffffff;
  uVar5 = *(uint *)(*(int *)(local_c + 0x4e7) + 0xd);
  uVar1 = *(uint *)(*(int *)(local_c + 0x4e7) + 9);
  FUN_006e8660(DAT_00807598,(int *)&local_8,1,0,uVar1,uVar5,(int)uVar1 / 2,(int)uVar5 / 2 - 0xe,0);
  if (-1 < (int)local_8) {
    FUN_006e98e0(DAT_00807598,local_8,0,**(undefined4 **)(local_c + 0x4e7),
                 *(int *)((int)*(undefined4 **)(local_c + 0x4e7) + 0x21),1);
    FUN_006eaaa0(DAT_00807598,local_8,0);
    FUN_006ea960(DAT_00807598,local_8,param_1,param_2,param_3 + _DAT_007904fc);
    FUN_006ea050(DAT_00807598,local_8,1,0xffffffff,0);
  }
  g_currentExceptionFrame = local_58.previous;
  return;
}


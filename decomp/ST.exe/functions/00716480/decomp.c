
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sprite.cpp
   SpriteClassTy::SetImagesPtr */

undefined4 __thiscall
SpriteClassTy::SetImagesPtr(SpriteClassTy *this,short *param_1,SpriteClassTy param_2,uint param_3)

{
  char cVar1;
  short *psVar2;
  code *pcVar3;
  SpriteClassTy *pSVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 unaff_ESI;
  SpriteClassTy *pSVar10;
  void *unaff_EDI;
  char *pcVar11;
  char *pcVar12;
  SpriteClassTy *pSVar13;
  InternalExceptionFrame local_4c;
  SpriteClassTy *local_8;
  
  if (*(int *)(this + 4) == -1) {
    return 0;
  }
  if (this[0x4c] == (SpriteClassTy)0x80) {
    return 0;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar5 = Library::MSVCRT::__setjmp3(local_4c.jumpBuffer,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_8;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar7 = ReportDebugMessage(s_E__Ourlib_Sprite_cpp_007f0454,0x161,0,iVar5,&DAT_007a4ccc,
                               s_SpriteClassTy__SetImagesPtr_007f04dc);
    if (iVar7 != 0) {
      pcVar3 = (code *)swi(3);
      uVar6 = (*pcVar3)();
      return uVar6;
    }
    RaiseInternalException(iVar5,0,s_E__Ourlib_Sprite_cpp_007f0454,0x163);
    return 0xfffffc18;
  }
  *(undefined4 *)(local_8 + 0x4d) = 0;
  if (*(int *)(local_8 + 0x61) == 0) {
    switch(local_8[0x4c]) {
    case (SpriteClassTy)0x7:
    case (SpriteClassTy)0x81:
      if (*(int *)(local_8 + 0x51) != 0) {
        FUN_00725e30((int *)(local_8 + 0x51));
      }
      break;
    case (SpriteClassTy)0x8:
      if (*(int *)(local_8 + 0x59) != 0) {
        FUN_00726260((undefined4 *)(local_8 + 0x59));
      }
      break;
    case (SpriteClassTy)0x1e:
      if (*(int *)(local_8 + 0x55) != 0) {
        FUN_00726bd0((int *)(local_8 + 0x55));
      }
    }
  }
  switch(param_2) {
  case (SpriteClassTy)0x7:
  case (SpriteClassTy)0x81:
    *(short **)(pSVar4 + 0x51) = param_1;
    Library::DKW::DDX::FUN_006b2930
              (*(int **)(pSVar4 + 0x48),*(uint *)(pSVar4 + 4),0,
               (undefined4 *)(int)*(short *)((int)param_1 + 0x23),(int *)((int)param_1 + 0x2d),
               0x8000000,(int)*(short *)((int)param_1 + 0x29),(int)*(short *)((int)param_1 + 0x2b));
    iVar5 = *(int *)(pSVar4 + 0x51);
    *(int *)(pSVar4 + 0xc) = (int)*(short *)(iVar5 + 0x23);
    *(int *)(pSVar4 + 0x24) = (int)*(short *)(iVar5 + 0x29);
    *(int *)(pSVar4 + 0x28) = (int)*(short *)(iVar5 + 0x2b);
    break;
  case (SpriteClassTy)0x8:
    *(short **)(pSVar4 + 0x59) = param_1;
    Library::DKW::DDX::FUN_006b2930
              (*(int **)(pSVar4 + 0x48),*(uint *)(pSVar4 + 4),(int)*param_1,
               (undefined4 *)(int)param_1[1],(int *)(param_1 + 6),0x4000000,(int)param_1[2],
               (int)param_1[3]);
    psVar2 = *(short **)(pSVar4 + 0x59);
    *(int *)(pSVar4 + 0xc) = (int)psVar2[1];
    *(int *)(pSVar4 + 0x18) = (int)*psVar2;
    *(int *)(pSVar4 + 0x24) = (int)psVar2[2];
    *(int *)(pSVar4 + 0x28) = (int)psVar2[3];
    *(undefined4 *)(pSVar4 + 0x4d) = 0xffffffff;
    break;
  case (SpriteClassTy)0x1e:
    *(short **)(pSVar4 + 0x55) = param_1;
    Library::DKW::DDX::FUN_006b2930
              (*(int **)(pSVar4 + 0x48),*(uint *)(pSVar4 + 4),0,(undefined4 *)(int)*param_1,
               (int *)(param_1 + 5),0x8000000,(int)param_1[3],(int)param_1[4]);
    psVar2 = *(short **)(pSVar4 + 0x55);
    *(int *)(pSVar4 + 0xc) = (int)*psVar2;
    *(int *)(pSVar4 + 0x24) = (int)psVar2[3];
    *(int *)(pSVar4 + 0x28) = (int)psVar2[4];
  }
  pSVar4[0x4c] = param_2;
  iVar5 = *(int *)(pSVar4 + 0xc);
  if (iVar5 < 1) {
    iVar7 = iVar5 + -1;
  }
  else {
    iVar7 = 0;
  }
  *(int *)(pSVar4 + 0x10) = iVar7;
  *(int *)(pSVar4 + 0x14) = iVar5 + -1;
  uVar8 = 0xffffffff;
  pcVar11 = &DAT_008016a0;
  do {
    pcVar12 = pcVar11;
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    pcVar12 = pcVar11 + 1;
    cVar1 = *pcVar11;
    pcVar11 = pcVar12;
  } while (cVar1 != '\0');
  uVar8 = ~uVar8;
  pSVar10 = (SpriteClassTy *)(pcVar12 + -uVar8);
  pSVar13 = pSVar4 + 0x65;
  for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
    *(undefined4 *)pSVar13 = *(undefined4 *)pSVar10;
    pSVar10 = pSVar10 + 4;
    pSVar13 = pSVar13 + 4;
  }
  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pSVar13 = *pSVar10;
    pSVar10 = pSVar10 + 1;
    pSVar13 = pSVar13 + 1;
  }
  if (param_3 != 0xffffffff) {
    FUN_006b3020(*(int *)(pSVar4 + 0x48),*(uint *)(pSVar4 + 4),param_3);
    *(uint *)(pSVar4 + 0x5d) = param_3;
  }
  *(undefined4 *)(pSVar4 + 0x61) = 0;
  g_currentExceptionFrame = local_4c.previous;
  return 0;
}


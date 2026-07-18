
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sprite.cpp
   SpriteClassTy::SetImagesReg */

undefined4 __thiscall
SpriteClassTy::SetImagesReg
          (SpriteClassTy *this,int *param_1,byte param_2,uint param_3,byte *param_4,uint param_5)

{
  byte bVar1;
  short *psVar2;
  code *pcVar3;
  SpriteClassTy *pSVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 unaff_ESI;
  SpriteClassTy *pSVar11;
  void *unaff_EDI;
  byte *pbVar12;
  SpriteClassTy *pSVar13;
  undefined4 local_4c;
  undefined4 local_48 [16];
  SpriteClassTy *local_8;
  
  if (*(int *)(this + 4) == -1) {
    return 0;
  }
  if (this[0x4c] == (SpriteClassTy)0x80) {
    return 0;
  }
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar5 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pSVar4 = local_8;
  if (iVar5 != 0) {
    DAT_00858df8 = (undefined4 *)local_4c;
    iVar8 = FUN_006ad4d0(s_E__Ourlib_Sprite_cpp_007f0454,0xc3,0,iVar5,&DAT_007a4ccc);
    if (iVar8 != 0) {
      pcVar3 = (code *)swi(3);
      uVar7 = (*pcVar3)();
      return uVar7;
    }
    FUN_006a5e40(iVar5,0,0x7f0454,0xc5);
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
  case 7:
  case 0x81:
    puVar6 = FUN_00709af0(param_1,param_2,param_4,param_3,0,1,0,(undefined4 *)0x0);
    *(ushort **)(pSVar4 + 0x51) = puVar6;
    FUN_006b2930(*(int **)(pSVar4 + 0x48),*(uint *)(pSVar4 + 4),0,
                 (undefined4 *)(int)*(short *)((int)puVar6 + 0x23),(int *)((int)puVar6 + 0x2d),
                 0x8000000,(int)*(short *)((int)puVar6 + 0x29),(int)*(short *)((int)puVar6 + 0x2b));
    iVar5 = *(int *)(pSVar4 + 0x51);
    *(int *)(pSVar4 + 0xc) = (int)*(short *)(iVar5 + 0x23);
    *(int *)(pSVar4 + 0x24) = (int)*(short *)(iVar5 + 0x29);
    *(int *)(pSVar4 + 0x28) = (int)*(short *)(iVar5 + 0x2b);
    break;
  case 8:
    puVar6 = FUN_00709af0(param_1,param_2,param_4,param_3,0,1,0,(undefined4 *)0x0);
    *(ushort **)(pSVar4 + 0x59) = puVar6;
    FUN_006b2930(*(int **)(pSVar4 + 0x48),*(uint *)(pSVar4 + 4),(int)(short)*puVar6,
                 (undefined4 *)(int)(short)puVar6[1],(int *)(puVar6 + 6),0x4000000,
                 (int)(short)puVar6[2],(int)(short)puVar6[3]);
    psVar2 = *(short **)(pSVar4 + 0x59);
    *(int *)(pSVar4 + 0xc) = (int)psVar2[1];
    *(int *)(pSVar4 + 0x18) = (int)*psVar2;
    *(int *)(pSVar4 + 0x24) = (int)psVar2[2];
    *(int *)(pSVar4 + 0x28) = (int)psVar2[3];
    *(uint *)(pSVar4 + 0x4d) = param_3;
    break;
  case 0x1e:
    puVar6 = FUN_00709af0(param_1,param_2,param_4,param_3,0,1,0,(undefined4 *)0x0);
    *(ushort **)(pSVar4 + 0x55) = puVar6;
    FUN_006b2930(*(int **)(pSVar4 + 0x48),*(uint *)(pSVar4 + 4),0,(undefined4 *)(int)(short)*puVar6,
                 (int *)(puVar6 + 5),0x8000000,(int)(short)puVar6[3],(int)(short)puVar6[4]);
    psVar2 = *(short **)(pSVar4 + 0x55);
    *(int *)(pSVar4 + 0xc) = (int)*psVar2;
    *(int *)(pSVar4 + 0x24) = (int)psVar2[3];
    *(int *)(pSVar4 + 0x28) = (int)psVar2[4];
  }
  pSVar4[0x4c] = (SpriteClassTy)param_2;
  iVar5 = *(int *)(pSVar4 + 0xc);
  if (iVar5 < 1) {
    iVar8 = iVar5 + -1;
  }
  else {
    iVar8 = 0;
  }
  *(int *)(pSVar4 + 0x10) = iVar8;
  *(int *)(pSVar4 + 0x14) = iVar5 + -1;
  uVar9 = 0xffffffff;
  do {
    pbVar12 = param_4;
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    pbVar12 = param_4 + 1;
    bVar1 = *param_4;
    param_4 = pbVar12;
  } while (bVar1 != 0);
  uVar9 = ~uVar9;
  pSVar11 = (SpriteClassTy *)(pbVar12 + -uVar9);
  pSVar13 = pSVar4 + 0x65;
  for (uVar10 = uVar9 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined4 *)pSVar13 = *(undefined4 *)pSVar11;
    pSVar11 = pSVar11 + 4;
    pSVar13 = pSVar13 + 4;
  }
  for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
    *pSVar13 = *pSVar11;
    pSVar11 = pSVar11 + 1;
    pSVar13 = pSVar13 + 1;
  }
  if (param_5 != 0xffffffff) {
    FUN_006b3020(*(int *)(pSVar4 + 0x48),*(uint *)(pSVar4 + 4),param_5);
    *(uint *)(pSVar4 + 0x5d) = param_5;
  }
  *(undefined4 *)(pSVar4 + 0x61) = 1;
  DAT_00858df8 = (undefined4 *)local_4c;
  return 0;
}


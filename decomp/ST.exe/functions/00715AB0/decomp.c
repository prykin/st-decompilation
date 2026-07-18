
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sprite.cpp
   SpriteClassTy::CloseSprite */

undefined4 __thiscall SpriteClassTy::CloseSprite(SpriteClassTy *this)

{
  code *pcVar1;
  SpriteClassTy *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_EBX;
  void *unaff_ESI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  SpriteClassTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_ESI,unaff_EBX);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    if ((*(int **)(local_8 + 0x48) != (int *)0x0) && (*(uint *)(local_8 + 4) != 0xffffffff)) {
      FUN_006b3bb0(*(int **)(local_8 + 0x48),*(uint *)(local_8 + 4));
    }
    if (*(int *)(pSVar2 + 0x61) == 0) {
      switch(pSVar2[0x4c]) {
      case (SpriteClassTy)0x7:
      case (SpriteClassTy)0x81:
        if (*(int *)(pSVar2 + 0x51) != 0) {
          FUN_00725e30((int *)(pSVar2 + 0x51));
        }
        break;
      case (SpriteClassTy)0x8:
        if (*(int *)(pSVar2 + 0x59) != 0) {
          FUN_00726260((undefined4 *)(pSVar2 + 0x59));
        }
        break;
      case (SpriteClassTy)0x1e:
        if (*(int *)(pSVar2 + 0x55) != 0) {
          FUN_00726bd0((int *)(pSVar2 + 0x55));
        }
      }
    }
    else {
      *(undefined4 *)(pSVar2 + 0x51) = 0;
      *(undefined4 *)(pSVar2 + 0x55) = 0;
      *(undefined4 *)(pSVar2 + 0x59) = 0;
    }
    *(undefined4 *)(pSVar2 + 0x61) = 0;
    *(undefined4 *)(pSVar2 + 4) = 0xffffffff;
    *(undefined4 *)(pSVar2 + 0x48) = 0;
    *(undefined4 *)(pSVar2 + 0x4d) = 0;
    pSVar2[0x65] = (SpriteClassTy)0x0;
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_Sprite_cpp_007f0454,0x76,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar3,0,0x7f0454,0x78);
  return 0xfffffc18;
}


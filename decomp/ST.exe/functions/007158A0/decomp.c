
/* Recovered from embedded debug metadata:
   E:\Ourlib\Sprite.cpp
   SpriteClassTy::InitSprite */

undefined4 __thiscall
SpriteClassTy::InitSprite
          (SpriteClassTy *this,int *param_1,uint param_2,char param_3,undefined4 *param_4,
          int param_5,int param_6)

{
  code *pcVar1;
  SpriteClassTy *pSVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 local_4c;
  undefined4 local_48 [16];
  SpriteClassTy *local_8;
  
  local_4c = DAT_00858df8;
  DAT_00858df8 = &local_4c;
  local_8 = this;
  iVar3 = __setjmp3(local_48,0,unaff_EDI,unaff_ESI);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    switch(param_3) {
    case '\a':
    case '\x1e':
      FUN_006b21e0((uint)param_1,(uint *)(local_8 + 4),param_2,0,(int *)0x0,0x8000000,0xffffffff,
                   0xffffffff,0);
      break;
    case '\b':
      FUN_006b2220(param_1,(uint *)(local_8 + 4),param_2,0,(undefined4 *)0x0,(int *)0x0,0xffffffff,
                   0xffffffff);
      break;
    case -0x80:
      *(undefined4 *)(local_8 + 0x2c) = 0;
      *(undefined4 *)(local_8 + 0x30) = 0;
      *(undefined4 *)(local_8 + 0x34) = 0;
      *(undefined4 *)(local_8 + 0x38) = 0;
      *(undefined4 *)(local_8 + 0x3c) = 0;
      *(undefined4 *)(local_8 + 0x24) = 1;
      *(undefined4 *)(local_8 + 0x28) = 1;
      if (param_4 != (undefined4 *)0x0) {
        *(undefined4 *)(local_8 + 0x24) = *param_4;
        *(undefined4 *)(local_8 + 0x28) = param_4[1];
      }
      FUN_006b2330((uint)param_1,(uint *)(local_8 + 4),param_2,0x752e10,*(uint *)(local_8 + 0x24),
                   *(uint *)(local_8 + 0x28),(uint)(local_8 + 0x2c));
      break;
    case -0x7f:
      FUN_0072aca0(param_1,(uint *)(local_8 + 4),param_5,param_6,(int)param_4);
    }
    pSVar2[0x4c] = (SpriteClassTy)param_3;
    *(int **)(pSVar2 + 0x48) = param_1;
    *(uint *)(pSVar2 + 0x5d) = -(uint)(param_3 != -0x7f) & param_2;
    DAT_00858df8 = (undefined4 *)local_4c;
    return 0;
  }
  DAT_00858df8 = (undefined4 *)local_4c;
  iVar4 = FUN_006ad4d0(s_E__Ourlib_Sprite_cpp_007f0454,0x50,0,iVar3,&DAT_007a4ccc);
  if (iVar4 != 0) {
    pcVar1 = (code *)swi(3);
    uVar5 = (*pcVar1)();
    return uVar5;
  }
  FUN_006a5e40(iVar3,0,0x7f0454,0x52);
  return 0xfffffc18;
}


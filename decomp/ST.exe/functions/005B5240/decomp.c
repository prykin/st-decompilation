
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::InitSprBut
   
   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00590B40 -> 005B5240 @ 00590EA0 | 00590B40 -> 005B5240 @ 00590EEB | 00590B40 ->
   005B5240 @ 00590F36 | 00590B40 -> 005B5240 @ 00590F81 | 00590B40 -> 005B5240 @ 00590FCC |
   005B2970 -> 005B5240 @ 005B2B6C | 005B2970 -> 005B5240 @ 005B2BB7 | 005B2970 -> 005B5240 @
   005B2C02 | 005B2970 -> 005B5240 @ 005B2C4D | 005B2970 -> 005B5240 @ 005B2C98 | 005B6B20 ->
   005B5240 @ 005B6BAB | 005B6B20 -> 005B5240 @ 005B6BF3 | 005B6B20 -> 005B5240 @ 005B6C3B |
   005B6B20 -> 005B5240 @ 005B6C83 | 005B6B20 -> 005B5240 @ 005B6CC8 | 005B6B20 -> 005B5240 @
   005B6D0D | 005B6B20 -> 005B5240 @ 005B6D52 | 005B6B20 -> 005B5240 @ 005B6D9A | 005B6B20 ->
   005B5240 @ 005B6DDF
   
   [STPrototypeApplier] Propagated parameter 19.
   Evidence: 005B5240 parameter used as this of ccFntTy::CreateTypeSSpr @ 005B540A */

void __thiscall
MMObjTy::InitSprBut(MMObjTy *this,undefined4 *param_1,char *text,int param_3,int param_4,int param_5
                   ,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                   undefined4 param_10,uint param_11,char *param_12,int param_13,int param_14,
                   undefined4 param_15,undefined4 param_16,undefined4 param_17,UINT param_18,
                   ccFntTy *param_19,int param_20,int param_21,int param_22,int param_23,
                   int param_24)

{
  SpriteClassTy *pSVar1;
  SpriteClassTyVTable *pSVar2;
  code *pcVar3;
  int iVar4;
  uint *puVar5;
  short *psVar6;
  int iVar7;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  undefined4 *puVar8;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar4 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar4 == 0) {
    puVar8 = (undefined4 *)((int)param_1 + 0x21);
    for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    *(undefined2 *)puVar8 = 0;
    *(undefined1 *)((int)puVar8 + 2) = 0;
    param_1[2] = param_9;
    *param_1 = param_7;
    param_1[1] = param_8;
    param_1[3] = param_10;
    pSVar1 = (SpriteClassTy *)(param_1 + 0x12);
    SpriteClassTy::InitSprite(pSVar1,DAT_008075a8,param_11,'\a',(undefined4 *)0x0,0,0);
    (*pSVar1->vtable->SetImagesReg)(pSVar1,DAT_00806784,7,0,(byte *)text,0xffffffff);
    param_1[0x19] = param_3;
    param_1[0x1a] = param_4;
    param_1[0x14] = 0;
    if (param_1[0x13] != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                ((uint *)param_1[0x24],param_1[0x13],param_1[0x14],param_1[0x19],param_1[0x1a]);
    }
    if (param_12 == (char *)0x0) {
      *(undefined1 *)((int)param_1 + 0x47) = 0;
    }
    else {
      param_1[4] = param_13;
      param_1[5] = param_14;
      param_1[6] = param_15;
      *(undefined1 *)((int)param_1 + 0x47) = 1;
      param_1[7] = param_16;
      *(undefined4 *)((int)param_1 + 0x1aa) = param_17;
      pSVar1 = (SpriteClassTy *)((int)param_1 + 0x16a);
      SpriteClassTy::InitSprite(pSVar1,DAT_008075a8,param_11 - 1,'\a',(undefined4 *)0x0,0,0);
      (*pSVar1->vtable->SetImagesReg)(pSVar1,DAT_00806784,7,0,(byte *)param_12,0xffffffff);
      *(int *)((int)param_1 + 0x186) = param_3 + param_13;
      *(undefined4 *)((int)param_1 + 0x172) = 0;
      *(int *)((int)param_1 + 0x18a) = param_4 + param_14;
    }
    pSVar1 = (SpriteClassTy *)((int)param_1 + 0xd9);
    SpriteClassTy::InitSprite(pSVar1,DAT_008075a8,param_11 - 2,'\a',(undefined4 *)0x0,0,0);
    *(int *)((int)param_1 + 0xf5) = param_3 + param_5;
    *(int *)((int)param_1 + 0xf9) = param_4 + param_6;
    if ((param_18 != 0) && (param_19 != (ccFntTy *)0x0)) {
      uVar12 = 0xffffffff;
      uVar11 = 7;
      pSVar2 = pSVar1->vtable;
      uVar10 = 0xffffffff;
      cVar9 = CASE_FFFFFFFE;
      puVar5 = (uint *)FUN_006b0140(param_18,HINSTANCE_00807618);
      psVar6 = (short *)ccFntTy::CreateTypeSSpr
                                  (param_19,puVar5,param_20,param_21,cVar9,uVar10,param_22,param_23,
                                   param_24);
      (*pSVar2->SetImagesPtr)(pSVar1,psVar6,uVar11,uVar12);
    }
    *(undefined4 *)((int)param_1 + 0xe1) = 0;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar7 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0x2d,0,iVar4,&DAT_007a4ccc,
                             s_MMObjTy__InitSprBut_007cca60);
  if (iVar7 != 0) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  RaiseInternalException(iVar4,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0x2d);
  return;
}


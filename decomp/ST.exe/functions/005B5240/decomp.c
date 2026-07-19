
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::InitSprBut */

void __thiscall
MMObjTy::InitSprBut(MMObjTy *this,undefined4 *param_1,undefined4 param_2,int param_3,int param_4,
                   int param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                   undefined4 param_10,uint param_11,int param_12,int param_13,int param_14,
                   undefined4 param_15,undefined4 param_16,undefined4 param_17,UINT param_18,
                   int param_19,int param_20,int param_21,int param_22,int param_23,int param_24)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 unaff_ESI;
  void *unaff_EDI;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_48;
  
  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0,unaff_EDI,unaff_ESI);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)((int)param_1 + 0x21);
    for (iVar2 = 9; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    param_1[2] = param_9;
    *param_1 = param_7;
    param_1[1] = param_8;
    param_1[3] = param_10;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)(param_1 + 0x12),DAT_008075a8,param_11,'\a',(undefined4 *)0x0,0,0);
    (**(code **)(*(int *)(param_1 + 0x12) + 4))(DAT_00806784,7,0,param_2,0xffffffff);
    param_1[0x19] = param_3;
    param_1[0x1a] = param_4;
    param_1[0x14] = 0;
    if (param_1[0x13] != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                ((uint *)param_1[0x24],param_1[0x13],param_1[0x14],param_1[0x19],param_1[0x1a]);
    }
    if (param_12 == 0) {
      *(undefined1 *)((int)param_1 + 0x47) = 0;
    }
    else {
      param_1[4] = param_13;
      param_1[5] = param_14;
      param_1[6] = param_15;
      *(undefined1 *)((int)param_1 + 0x47) = 1;
      param_1[7] = param_16;
      *(undefined4 *)((int)param_1 + 0x1aa) = param_17;
      SpriteClassTy::InitSprite
                ((SpriteClassTy *)((int)param_1 + 0x16a),DAT_008075a8,param_11 - 1,'\a',
                 (undefined4 *)0x0,0,0);
      (**(code **)(*(int *)((int)param_1 + 0x16a) + 4))(DAT_00806784,7,0,param_12,0xffffffff);
      *(int *)((int)param_1 + 0x186) = param_3 + param_13;
      *(undefined4 *)((int)param_1 + 0x172) = 0;
      *(int *)((int)param_1 + 0x18a) = param_4 + param_14;
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)((int)param_1 + 0xd9),DAT_008075a8,param_11 - 2,'\a',
               (undefined4 *)0x0,0,0);
    *(int *)((int)param_1 + 0xf5) = param_3 + param_5;
    *(int *)((int)param_1 + 0xf9) = param_4 + param_6;
    if ((param_18 != 0) && (param_19 != 0)) {
      uVar9 = 0xffffffff;
      uVar8 = 7;
      iVar2 = *(int *)((int)param_1 + 0xd9);
      uVar7 = 0xffffffff;
      uVar6 = 0xfffffffe;
      puVar3 = (uint *)FUN_006b0140(param_18,DAT_00807618);
      puVar4 = ccFntTy::CreateTypeSSpr
                         ((ccFntTy *)param_19,puVar3,param_20,param_21,uVar6,uVar7,param_22,param_23
                          ,param_24);
      (**(code **)(iVar2 + 8))(puVar4,uVar8,uVar9);
    }
    *(undefined4 *)((int)param_1 + 0xe1) = 0;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar5 = ReportDebugMessage(s_E____titans_Start_mmenuobj_cpp_007cca38,0x2d,0,iVar2,&DAT_007a4ccc,
                             s_MMObjTy__InitSprBut_007cca60);
  if (iVar5 != 0) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  RaiseInternalException(iVar2,0,s_E____titans_Start_mmenuobj_cpp_007cca38,0x2d);
  return;
}


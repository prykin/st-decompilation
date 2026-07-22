#include "../../pseudocode_runtime.h"


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
MMObjTy::InitSprBut(MMObjTy *this,AnonShape_005B5240_B2C8755B *param_1,char *text,int param_3,
                   int param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,uint param_11,char *param_12,int param_13,
                   int param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                   UINT param_18,ccFntTy *param_19,int param_20,int param_21,int param_22,
                   int param_23,int param_24)

{
  code *pcVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    puVar4 = (undefined4 *)&param_1->field_0x21;
    memset(puVar4, 0, 0x26); /* compiler bulk-zero initialization */
    puVar4 = (undefined4 *)((byte *)puVar4 + 0x24);
    *(undefined1 *)((int)puVar4 + 2) = 0;
    *(undefined4 *)&param_1->field_0x8 = param_9;
    *(undefined4 *)param_1 = param_7;
    *(undefined4 *)&param_1->field_0x4 = param_8;
    *(undefined4 *)&param_1->field_0xc = param_10;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&param_1->field_0x48,(int *)PTR_008075a8,param_11,'\a',
               (undefined4 *)0x0,0,0);
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    (**(code **)(*(int *)&param_1->field_0x48 + 4))(DAT_00806784,7,0,text,0xffffffff);
    *(int *)&param_1->field_0x64 = param_3;
    *(int *)&param_1->field_0x68 = param_4;
    *(undefined4 *)&param_1->field_0x50 = 0;
    if (*(uint *)&param_1->field_0x4c != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                (*(uint **)&param_1->field_0x90,*(uint *)&param_1->field_0x4c,
                 *(uint *)&param_1->field_0x50,*(uint *)&param_1->field_0x64,
                 *(uint *)&param_1->field_0x68);
    }
    if (param_12 == (char *)0x0) {
      param_1->field_0047 = 0;
    }
    else {
      *(int *)&param_1->field_0x10 = param_13;
      *(int *)&param_1->field_0x14 = param_14;
      *(undefined4 *)&param_1->field_0x18 = param_15;
      param_1->field_0047 = 1;
      *(undefined4 *)&param_1->field_0x1c = param_16;
      param_1->field_01AA = param_17;
      SpriteClassTy::InitSprite
                ((SpriteClassTy *)&param_1->field_0x16a,(int *)PTR_008075a8,param_11 - 1,'\a',
                 (undefined4 *)0x0,0,0);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)&param_1->field_0x16a + 4))(DAT_00806784,7,0,param_12,0xffffffff);
      param_1->field_0186 = param_3 + param_13;
      param_1->field_0172 = 0;
      param_1->field_018A = param_4 + param_14;
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&param_1->field_0xd9,(int *)PTR_008075a8,param_11 - 2,'\a',
               (undefined4 *)0x0,0,0);
    param_1->field_00F5 = param_3 + param_5;
    param_1->field_00F9 = param_4 + param_6;
    if ((param_18 != 0) && (param_19 != (ccFntTy *)0x0)) {
      uVar9 = 0xffffffff;
      uVar8 = 7;
      iVar2 = *(int *)&param_1->field_0xd9;
      uVar7 = 0xffffffff;
      cVar6 = CASE_FFFFFFFE;
      puVar3 = (uint *)LoadResourceString(param_18,g_module_00807618);
      puVar4 = ccFntTy::CreateTypeSSpr
                         (param_19,puVar3,param_20,param_21,cVar6,uVar7,param_22,param_23,param_24);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(iVar2 + 8))(puVar4,uVar8,uVar9);
    }
    param_1->field_00E1 = 0;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar5 = ReportDebugMessage("E:\\__titans\\Start\\mmenuobj.cpp",0x2d,0,iVar2,"%s",
                             "MMObjTy::InitSprBut");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\mmenuobj.cpp",0x2d);
  return;
}


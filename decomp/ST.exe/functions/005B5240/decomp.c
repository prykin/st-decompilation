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
   Evidence: 005B5240 parameter used as this of ccFntTy::CreateTypeSSpr @ 005B540A

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0), and
   decompilation contains no value return */

void __thiscall
MMObjTy::InitSprBut(MMObjTy *this,RecoveredRecord_MMObjTy_005B5240 *param_1,char *text,int param_3,
                   int param_4,int param_5,int param_6,undefined4 param_7,undefined4 param_8,
                   undefined4 param_9,undefined4 param_10,uint param_11,char *param_12,int param_13,
                   int param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17,
                   UINT param_18,ccFntTy *param_19,int param_20,int param_21,int param_22,
                   int param_23,int param_24)

{
  int iVar2;
  char *resourceString;
  uint *puVar2;
  int iVar4;
  int iVar3;
  ccFntTy_CreateTypeSSpr_param_4Enum cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  InternalExceptionFrame local_48;

  local_48.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_48;
  iVar2 = Library::MSVCRT::__setjmp3(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    puVar2 = (undefined4 *)&param_1->field_0x21;
    memset(puVar2, 0, 0x27); /* compiler bulk-zero initialization */
    puVar2 = (undefined4 *)((byte *)puVar2 + 0x24);
    *(undefined4 *)&param_1->field_0x8 = param_9;
    *(undefined4 *)param_1 = param_7;
    *(undefined4 *)&param_1->field_0x4 = param_8;
    *(undefined4 *)&param_1->field_0xc = param_10;
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&param_1->field_0x48,(int *)g_ddxContext_008075A8,param_11,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005B52CB]: CALL dword ptr [EDX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)&param_1->field_0x48 + 4))(PTR_00806784,7,0,text,0xffffffff);
    *(int *)&param_1->field_0x64 = param_3;
    *(int *)&param_1->field_0x68 = param_4;
    *(undefined4 *)&param_1->field_0x50 = 0;
    if (*(uint *)&param_1->field_0x4c != 0xffffffff) {
      Library::DKW::DDX::FUN_006b3730
                (*(uint **)&param_1->field_0x90,*(uint *)&param_1->field_0x4c,
                 *(uint *)&param_1->field_0x50,*(uint *)&param_1->field_0x64,
                 *(uint *)&param_1->field_0x68);
    }
    if (param_12 == nullptr) {
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
                ((SpriteClassTy *)&param_1->field_0x16a,(int *)g_ddxContext_008075A8,param_11 - 1,
                 '\a',nullptr,0,0);
      /* ST_CALLSITE[005B5363]: CALL dword ptr [EDX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)&param_1->field_0x16a + 4))(PTR_00806784,7,0,param_12,0xffffffff);
      param_1->field_0186 = param_3 + param_13;
      param_1->field_0172 = 0;
      param_1->field_018A = param_4 + param_14;
    }
    SpriteClassTy::InitSprite
              ((SpriteClassTy *)&param_1->field_0xd9,(int *)g_ddxContext_008075A8,param_11 - 2,'\a',
               nullptr,0,0);
    param_1->field_00F5 = param_3 + param_5;
    param_1->field_00F9 = param_4 + param_6;
    if ((param_18 != 0) && (param_19 != nullptr)) {
      uVar7 = 0xffffffff;
      uVar6 = 7;
      iVar3 = *(int *)&param_1->field_0xd9;
      uVar5 = 0xffffffff;
      cVar4 = CASE_FFFFFFFE;
      resourceString = LoadResourceString(param_18,g_hINSTANCE_00807618);
      puVar2 = ccFntTy::CreateTypeSSpr
                         (param_19,resourceString,param_20,param_21,cVar4,uVar5,param_22,param_23,
                          param_24);
      /* ST_CALLSITE[005B5412]: CALL dword ptr [EBX + 0x8] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(iVar3 + 8))(puVar2,uVar6,uVar7);
    }
    param_1->field_00E1 = 0;
    g_currentExceptionFrame = local_48.previous;
    return;
  }
  g_currentExceptionFrame = local_48.previous;
  iVar4 = ReportDebugMessage("E:\\__titans\\Start\\mmenuobj.cpp",0x2d,0,iVar2,"%s",
                             "MMObjTy::InitSprBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  RaiseInternalException(iVar2,0,"E:\\__titans\\Start\\mmenuobj.cpp",0x2d);
  return;
}


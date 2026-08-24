#include "st/generated.hpp"
// Generated translation unit: source/original/Start/mmenuobj.cpp

// 005B5240 MMObjTy::InitSprBut
#line 4 "decomp/ST.exe/functions/005B5240/decomp.c"
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
st::fn_005B5240(MMObjTy *this,RecoveredRecord_MMObjTy_005B5240 *param_1,char *text,int param_3,
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
  iVar2 = st::fn_0072D7F0(local_48.jumpBuffer,0);
  if (iVar2 == 0) {
    puVar2 = (undefined4 *)&param_1->field_0x21;
    memset(puVar2, 0, 0x27); /* compiler bulk-zero initialization */
    puVar2 = (undefined4 *)((byte *)puVar2 + 0x24);
    *(undefined4 *)&param_1->field_0x8 = param_9;
    *(undefined4 *)param_1 = param_7;
    *(undefined4 *)&param_1->field_0x4 = param_8;
    *(undefined4 *)&param_1->field_0xc = param_10;
    st::fn_007158A0
              ((SpriteClassTy *)&param_1->field_0x48,(int *)g_ddxContext_008075A8,param_11,'\a',
               nullptr,0,0);
    /* ST_CALLSITE[005B52CB]: CALL dword ptr [EDX + 0x4] */
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
    (**(code **)(*(int *)&param_1->field_0x48 + 4))(PTR_00806784,7,0,text,0xffffffff);
    *(int *)&param_1->field_0x64 = param_3;
    *(int *)&param_1->field_0x68 = param_4;
    *(undefined4 *)&param_1->field_0x50 = 0;
    if (*(uint *)&param_1->field_0x4c != 0xffffffff) {
      st::fn_006B3730
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
      st::fn_007158A0
                ((SpriteClassTy *)&param_1->field_0x16a,(int *)g_ddxContext_008075A8,param_11 - 1,
                 '\a',nullptr,0,0);
      /* ST_CALLSITE[005B5363]: CALL dword ptr [EDX + 0x4] */
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(*(int *)&param_1->field_0x16a + 4))(PTR_00806784,7,0,param_12,0xffffffff);
      param_1->field_0186 = param_3 + param_13;
      param_1->field_0172 = 0;
      param_1->field_018A = param_4 + param_14;
    }
    st::fn_007158A0
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
      resourceString = st::fn_006B0140(param_18,g_hINSTANCE_00807618);
      puVar2 = st::fn_00713480
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
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x2d,0,iVar2,st::mutable_c_string("%s"),
                             "MMObjTy::InitSprBut");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x2d);
  return;
}

// 005B5510 MMObjTy::CreateSprBut
#line 4 "decomp/ST.exe/functions/005B5510/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::CreateSprBut */

undefined4 __thiscall
st::fn_005B5510
          (MMObjTy *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
          ,undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar2;
  int iVar3;
  uint uVar2;
  undefined4 local_1cc [4];
  undefined4 local_1bc;
  undefined4 local_1b8;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  InternalExceptionFrame local_50;
  MMObjTy *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar2 == 0) {
    memset(local_1cc, 0, 0x17c); /* compiler bulk-zero initialization */
    local_1cc[0] = param_2;
    local_1cc[1] = param_1;
    local_1bc = param_5;
    local_1cc[2] = param_3;
    local_1cc[3] = param_4;
    local_1ac = local_c->field_0008;
    local_1a4 = param_7;
    local_1b8 = param_6;
    local_1a8 = 2;
    local_168 = 2;
    local_164 = param_8;
    local_16c = local_1ac;
    /* ST_CALLSITE[005B55DB]: CALL dword ptr [EAX + 0x8] */
    (*local_c->field_000C->vtable->CreateObject)
              ((SystemClassTy *)local_c->field_000C,2,&local_8,nullptr,st::machine_word_boundary_cast<undefined4>(local_1cc),0);
    g_currentExceptionFrame = local_50.previous;
    return local_8;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x47,0,iVar2,st::mutable_c_string("%s"),
                             "MMObjTy::CreateSprBut");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x47);
  return 0;
}

// 005B5690 MMObjTy::PaintSprBut
#line 4 "decomp/ST.exe/functions/005B5690/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::PaintSprBut

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall
st::fn_005B5690(MMObjTy *this,int param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  MMObjTy *pMVar3;
  int iVar4;
  int iVar6;
  int iVar5;
  int iVar7;
  uint uVar8;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x8c,0,iVar4,st::mutable_c_string("%s"),
                               "MMObjTy::PaintSprBut");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x8c);
    return;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined2 *)(param_1 + 0x14)) {
  case 0:
  case 1:
  case 3:
    iVar6 = (param_2 & 0xff) * 0x1fb + (int)local_8;
    iVar7 = *(int *)(iVar6 + 0xef);
    break;
  case 2:
    iVar6 = (param_2 & 0xff) * 0x1fb + (int)local_8;
    iVar7 = *(int *)(iVar6 + 0xef) - param_3;
    break;
  default:
    goto switchD_005b56d4_default;
  }
  *(int *)(iVar6 + 0xeb) = iVar7 + -1;
switchD_005b56d4_default:
  iVar7 = (param_2 & 0xff) * 0x1fb;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  uVar8 = *(uint *)((int)local_8 + (param_2 & 0xff) * 0x1fb + 0xe7);
  if (uVar8 != 0xffffffff) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_006B3730
              (*(uint **)((int)local_8 + iVar7 + 299),uVar8,*(uint *)((int)local_8 + iVar7 + 0xeb),
               *(uint *)((int)local_8 + iVar7 + 0xff),*(uint *)((int)local_8 + iVar7 + 0x103));
  }
  if (*(char *)((int)pMVar3 + iVar7 + 0xe2) != '\0') {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    switch(*(undefined2 *)(param_1 + 0x14)) {
    case 0:
    case 1:
    case 3:
      *(int *)((int)pMVar3 + iVar7 + 0x221) =
           *(int *)((int)pMVar3 + iVar7 + 0xff) + *(int *)((int)pMVar3 + iVar7 + 0xab);
      *(int *)((int)pMVar3 + iVar7 + 0x225) =
           *(int *)((int)pMVar3 + iVar7 + 0x103) + *(int *)((int)pMVar3 + iVar7 + 0xaf);
      break;
    case 2:
      *(int *)((int)pMVar3 + iVar7 + 0x221) =
           *(int *)((int)pMVar3 + iVar7 + 0xff) + *(int *)((int)pMVar3 + iVar7 + 0xb3);
      *(int *)((int)pMVar3 + iVar7 + 0x225) =
           *(int *)((int)pMVar3 + iVar7 + 0x103) + *(int *)((int)pMVar3 + iVar7 + 0xb7);
    }
    uVar8 = *(uint *)((int)pMVar3 + iVar7 + 0x209);
    if (uVar8 != 0xffffffff) {
      st::fn_006B3730
                (*(uint **)((int)pMVar3 + iVar7 + 0x24d),uVar8,
                 *(uint *)((int)pMVar3 + iVar7 + 0x20d),*(uint *)((int)pMVar3 + iVar7 + 0x221),
                 *(uint *)((int)pMVar3 + iVar7 + 0x225));
    }
  }
  iVar6 = *(int *)((int)pMVar3 + iVar7 + 400);
  uVar1 = *(undefined4 *)((int)pMVar3 + iVar7 + 0x194);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined2 *)(param_1 + 0x14)) {
  case 0:
    *(int *)((int)pMVar3 + iVar7 + 0x17c) = *(int *)((int)pMVar3 + iVar7 + 0x180) + -1;
    break;
  case 1:
    *(int *)((int)pMVar3 + iVar7 + 0x17c) = *(int *)((int)pMVar3 + iVar7 + 0x180) + -3;
    break;
  case 2:
    *(int *)((int)pMVar3 + iVar7 + 400) = iVar6 + param_4;
    *(int *)((int)pMVar3 + iVar7 + 0x194) = *(int *)((int)pMVar3 + iVar7 + 0x194) + param_5;
  case 3:
    *(int *)((int)pMVar3 + iVar7 + 0x17c) = *(int *)((int)pMVar3 + iVar7 + 0x180) + -2;
  }
  uVar8 = *(uint *)((int)pMVar3 + iVar7 + 0x178);
  if (uVar8 != 0xffffffff) {
    st::fn_006B3730
              (*(uint **)((int)pMVar3 + iVar7 + 0x1bc),uVar8,*(uint *)((int)pMVar3 + iVar7 + 0x17c),
               *(uint *)((int)pMVar3 + iVar7 + 400),*(uint *)((int)pMVar3 + iVar7 + 0x194));
  }
  *(int *)((int)pMVar3 + iVar7 + 400) = iVar6;
  *(undefined4 *)((int)pMVar3 + iVar7 + 0x194) = uVar1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(short *)(param_1 + 0x14) == 2) {
    uVar8 = 4;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)(param_1 + 0x14) != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    uVar8 = 3;
  }
  st::fn_00404BF1(local_8,uVar8,'\x01',-1);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 005B5A30 MMObjTy::PaintButDib
#line 4 "decomp/ST.exe/functions/005B5A30/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::PaintButDib

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=16, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_005B5A30(MMObjTy *this,int param_1,int *param_2,int param_3,byte param_4,uint param_5)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_94;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_40 = param_2[2];
  if (local_40 / 2 <= param_3) {
    param_3 = local_40 / 2;
  }
  local_10 = param_2[3];
  if (local_10 / 2 <= param_3) {
    param_3 = local_10 / 2;
  }
  local_20 = *param_2;
  local_4c = param_2[1];
  local_50 = local_20 + param_3;
  local_48 = (local_20 - param_3) + -1 + local_40;
  local_40 = local_20 + -1 + local_40;
  local_3c = local_4c + param_3;
  local_2c = local_4c + local_10 + -1;
  local_34 = ((local_4c + local_10) - param_3) + -1;
  local_94.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_94;
  local_44 = local_4c;
  local_38 = local_40;
  local_30 = local_48;
  local_28 = local_50;
  local_24 = local_2c;
  local_1c = local_34;
  local_18 = local_20;
  local_14 = local_3c;
  local_c = local_40;
  local_8 = local_3c;
  errorCode = st::fn_0072D7F0(local_94.jumpBuffer,0);
  if (errorCode == 0) {
    if (-1 < (int)param_5) {
      st::fn_006C7EA0((AnonPointee_MReportTy_0073 *)param_1,0,(undefined4 *)&local_50,8,(byte)param_5);
    }
    st::fn_006C7F10((RecoveredSourceFamily_dibcopy *)param_1,0,&local_50,8,param_4);
    g_currentExceptionFrame = local_94.previous;
    return;
  }
  g_currentExceptionFrame = local_94.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0xa0,0,errorCode,
                             st::mutable_c_string("%s"),"MMObjTy::PaintButDib");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0xa0);
  return;
}

// 005B6220 MMObjTy::DoneMMObj
#line 4 "decomp/ST.exe/functions/005B6220/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::DoneMMObj

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=7, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005B6220(MMObjTy *this)

{
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar3;
  SpriteClassTy *this_00;
  int iVar5;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    iVar5 = 0xd;
    puVar3 = local_8->field_0066;
    do {
      if (*puVar3 != 0) {
        st::fn_006E56B0(pMVar2->field_000C,*puVar3);
      }
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    this_00 = (SpriteClassTy *)((int)pMVar2[1].field_0066 + 0x2b);
    iVar5 = 0xd;
    do {
      st::fn_00715AB0(this_00 + -1);
      st::fn_00715AB0(this_00);
      if (*(char *)((int)&this_00[-2].field_008D + 3) != '\0') {
        st::fn_00715AB0(this_00 + 1);
      }
      this_00 = (SpriteClassTy *)&this_00[3].field_0048;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0xe5,0,iVar3,st::mutable_c_string("%s"),
                             "MMObjTy::DoneMMObj");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0xe5);
  return;
}

// 005B6480 MMObjTy::CloseButtons
#line 4 "decomp/ST.exe/functions/005B6480/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMObjTy::CloseButtons

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005B6480(MMObjTy *this)

{
  MMObjTy *pMVar2;
  int iVar3;
  int iVar4;
  uint *puVar3;
  int iVar5;
  InternalExceptionFrame local_4c;
  MMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pMVar2 = local_8;
  if (iVar3 == 0) {
    iVar5 = 0xd;
    puVar3 = local_8->field_0066;
    do {
      if (*puVar3 != 0) {
        st::fn_006E56B0(pMVar2->field_000C,*puVar3);
      }
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x104,0,iVar3,st::mutable_c_string("%s"),
                             "MMObjTy::CloseButtons");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x104);
  return;
}

// 005B6560 MMMObjTy::PaintSlBut
#line 4 "decomp/ST.exe/functions/005B6560/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMMObjTy::PaintSlBut
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:3: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005B65AB MOV ECX,dword ptr [EBP + 0x10];
   first-use mask | 005B65B9 MOV ECX,dword ptr [EBP + 0x10]; first-use mask | 005B65CB MOV ECX,dword
   ptr [EBP + 0x10]; first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=27, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_005B6560
          (MMMObjTy *this,RecoveredRecord_MMMObjTy_005B6560 *param_1,int param_2,byte param_3)

{
  int iVar2;
  int iVar3;
  uint uVar2;
  InternalExceptionFrame local_4c;
  MMMObjTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x121,0,iVar2,st::mutable_c_string("%s")
                               ,"MMMObjTy::PaintSlBut");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x121);
    return;
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined2 *)(param_2 + 0x14)) {
  case 0:
    param_1->field_0008 = (uint)param_3 * 3 + 2;
    goto switchD_005b65a4_default;
  case 1:
  case 3:
    uVar2 = (uint)param_3 * 3;
    break;
  case 2:
    uVar2 = (uint)param_3 * 3 + 1;
    break;
  default:
    goto switchD_005b65a4_default;
  }
  param_1->field_0008 = uVar2;
switchD_005b65a4_default:
  if (param_1->field_0004 != 0xffffffff) {
    st::fn_006B3730
              (param_1->field_0048,param_1->field_0004,param_1->field_0008,param_1->field_001C,
               param_1->field_0020);
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(short *)(param_2 + 0x14) == 2) {
    uVar2 = 10;
  }
  else {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(short *)(param_2 + 0x14) != 3) {
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    uVar2 = 9;
  }
  st::fn_00404BF1(local_8,uVar2,'\x01',-1);
  g_currentExceptionFrame = local_4c.previous;
  return;
}

// 005B67A0 MMMObjTy::OutRGlProc
#line 4 "decomp/ST.exe/functions/005B67A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMMObjTy::OutRGlProc

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=10, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00594D40 -> 005B67A0 @ 00594DAA; FSGSTy::OutTRGlProc parameter param_2 | 00594D40 ->
   005B67A0 @ 00594DCB; FSGSTy::OutTRGlProc parameter param_2 | 00594EB0 -> 005B67A0 @ 00594F17;
   FSGSTy::OutTRGlProc parameter param_2 | 00594EB0 -> 005B67A0 @ 0059501F; FSGSTy::OutTRGlProc
   parameter param_2 | 005952B0 -> 005B67A0 @ 00595314; FSGSTy::OutSGlProc parameter param_2 |
   005B68B0 -> 005B67A0 @ 005B690C; MMMObjTy::OutBSlProc parameter param_2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00594D40 -> 005B67A0 @ 00594DAA; FSGSTy::OutTRGlProc parameter param_3 | 00594D40 ->
   005B67A0 @ 00594DCB; FSGSTy::OutTRGlProc parameter param_3 | 00594EB0 -> 005B67A0 @ 00594F17;
   FSGSTy::OutTRGlProc parameter param_3 | 00594EB0 -> 005B67A0 @ 0059501F; FSGSTy::OutTRGlProc
   parameter param_3 | 005952B0 -> 005B67A0 @ 00595314; FSGSTy::OutSGlProc parameter param_3 |
   005B68B0 -> 005B67A0 @ 005B690C; MMMObjTy::OutBSlProc parameter param_3 */

void __thiscall
st::fn_005B67A0
          (MMMObjTy *this,int param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,int param_5,
          int param_6,int param_7,undefined4 *param_8)

{
  uint *puVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;

  if (param_8 != nullptr) {
    local_8 = param_8;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    puVar2 = local_8;
    if (errorCode == 0) {
      st::fn_006C68F0
                ((AnonShape_GLOBAL_0080759C_9638EF10 *)param_1,param_4,param_5,param_6,param_7,
                 (int)(local_8 + 1));
      st::fn_006C6850(param_1,param_4,param_5,param_6,param_7,*puVar2);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x13b,0,errorCode,
                               st::mutable_c_string("%s"),"MMMObjTy::OutRGlProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x13b);
  }
  return;
}

// 005B68B0 MMMObjTy::OutBSlProc
#line 4 "decomp/ST.exe/functions/005B68B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   MMMObjTy::OutBSlProc

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 005B68B0 parameter used as this of MMMObjTy::OutRGlProc @ 005B690C

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 005B68B0 -> 005B67A0 @ 005B690C | 005B9860 -> 005B68B0 @ 005B98CD; MMMObjTy::OutLstProc
   parameter param_3

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=9, used=0, unknown=0),
   and decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00596CC0 -> 005B68B0 @ 00596E4D; data at 0080759C | 00596CC0 -> 005B68B0 @ 00596F64;
   data at 0080759C | 005AD050 -> 005B68B0 @ 005AD0F0; data at 0080759C | 005AD050 -> 005B68B0 @
   005AD13A; data at 0080759C | 005AF350 -> 005B68B0 @ 005AF447; data at 0080759C | 005B68B0 ->
   005B67A0 @ 005B690C | 005C4E20 -> 005B68B0 @ 005C4EDE; data at 0080759C | 005C4E20 -> 005B68B0 @
   005C4FB2; data at 0080759C | 005E79B0 -> 005B68B0 @ 005E7AA1; data at 0080759C */

void __thiscall
st::fn_005B68B0
          (MMMObjTy *this,DDXContext *param_1,MMMObjTy *param_2,MMMObjTy *param_3,int param_4,
          int param_5,int param_6,int param_7,undefined4 *param_8)

{
  int errorCode;
  int iVar2;
  InternalExceptionFrame local_50;
  int local_c;
  undefined4 *local_8;

  if (param_8 != nullptr) {
    local_8 = param_8;
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
    if (errorCode == 0) {
      /* ST_CALLSITE[005B690C]: CALL 0x00403099; direct=00403099 MMMObjTy::OutRGlProc */
      st::fn_00403099(param_2,(int)param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
      local_c = param_4 + -0x15 + param_6;
      st::fn_006C6660(param_1,local_c,param_5 + 0x26,7,param_7 - 0x4cU,3,0);
      st::fn_006C6470
                ((int)param_1,local_c,param_5 + 0x26,(undefined4 *)0x7,param_7 - 0x4cU,3,*local_8);
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x147,0,errorCode,
                               st::mutable_c_string("%s"),"MMMObjTy::OutBSlProc");
    if (iVar2 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x147);
  }
  return;
}

// 005B69F0 ChatGlassTy::OutChGlProc
#line 4 "decomp/ST.exe/functions/005B69F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\mmenuobj.cpp
   ChatGlassTy::OutChGlProc

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005AD050 -> 005B69F0 @ 005AD199 | 005C4E20 -> 005B69F0 @ 005C4F76 | 005E79B0 ->
   005B69F0 @ 005E7AEA

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=3, used=0, unknown=0),
   and decompilation contains no value return */

void __thiscall
st::fn_005B69F0
          (ChatGlassTy *this,AnonShape_GLOBAL_0080759C_9638EF10 *param_1,undefined4 param_2,
          undefined4 param_3,int param_4,int param_5,int param_6,int param_7,undefined4 *param_8)

{
  uint *puVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  undefined4 *local_8;

  if (param_8 != nullptr) {
    local_8 = param_8;
    local_4c.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_4c;
    iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
    puVar2 = local_8;
    if (iVar3 == 0) {
      st::fn_006C68F0(param_1,param_4,param_5,param_6,param_7,(int)(local_8 + 1));
      st::fn_006C6850((int)param_1,param_4,param_5,param_6,param_7,*puVar2);
      iVar3 = param_5 + -0x16 + param_7;
      st::fn_006C53B0
                ((int)param_1,param_4,iVar3,param_4 + -1 + param_6,iVar3,*puVar2);
      g_currentExceptionFrame = local_4c.previous;
      return;
    }
    g_currentExceptionFrame = local_4c.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x153,0,iVar3,st::mutable_c_string("%s")
                               ,"ChatGlassTy::OutChGlProc");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\mmenuobj.cpp"),0x153);
  }
  return;
}


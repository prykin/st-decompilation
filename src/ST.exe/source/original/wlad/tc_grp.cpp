#include "st/generated.hpp"
// Generated translation unit: source/original/wlad/tc_grp.cpp

// 004233E0 STGroupC::GetGroupContent
#line 4 "decomp/ST.exe/functions/004233E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetGroupContent
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=uint * __thiscall
   GetGroupContent(STGroupC * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=00423494 RET | 004234D5 RET */

uint * __thiscall st::fn_004233E0(STGroupC *this)

{
  uint uVar2;
  int errorCode;
  int iVar3;
  uint *puVar4;
  uint index;
  uint uVar5;
  uint uVar6;
  InternalExceptionFrame local_5c;
  uint local_18;
  uint local_14;
  STGroupC *local_10;
  DArrayTy *local_c;
  short local_6;

  local_18 = this->field_0029[3];
  uVar5 = 0;
  local_c = nullptr;
  local_14 = 0;
  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  errorCode = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  if (errorCode == 0) {
    local_c = st::fn_006AE290
                        (nullptr,(uint)(ushort)local_10->field_0027,2,1);
    uVar2 = local_18;
    if (local_18 != 0) {
      index = 0;
      uVar6 = local_14;
      do {
        st::fn_006ACC70((DArrayTy *)local_10->field_0029,index,&local_6);
        if (local_6 != -1) {
          st::fn_006AE140(local_c,uVar6 & 0xffff,&local_6);
          uVar6 = uVar6 + 1;
          local_14 = uVar6;
        }
        uVar5 = uVar5 + 1;
        index = uVar5 & 0xffff;
      } while (index < uVar2);
    }
    g_currentExceptionFrame = local_5c.previous;
    return st::pointer_boundary_cast<uint *>(&local_c->flags);
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x52,0,errorCode,st::mutable_c_string("%s"),
                             "STGroupC::GetGroupContent");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x53);
  return st::pointer_boundary_cast<uint *>(&local_c->flags);
}

// 00423520 STGroupC::GetTOBJQty
#line 4 "decomp/ST.exe/functions/00423520/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetTOBJQty */

uint __thiscall st::fn_00423520(STGroupC *this,int param_1)

{
  STGroupC *pSVar2;
  int iVar3;
  STGameObjC *pSVar3;
  int iVar5;
  int iVar4;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  uint uVar6;
  InternalExceptionFrame local_58;
  uint local_14;
  STGroupC *local_10;
  undefined1 local_c [4];
  int local_8;

  uVar6 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pSVar2 = local_10;
  if (iVar3 == 0) {
    local_8 = 0;
    local_14 = local_10->field_0029[3];
    if (0 < (int)local_14) {
      do {
        st::fn_006ACC70((DArrayTy *)pSVar2->field_0029,uVar6,local_c);
        if (STPiece<0,2>(local_c) != 0xffff) {
          pSVar3 = st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_c),CASE_1);
          if (pSVar3 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x66);
          }
          iVar5 = (*pSVar3->vtable->vfunc_2C)();
          if (iVar5 == param_1) {
            local_8 = local_8 + 1;
          }
        }
        uVar6 = uVar6 + 1;
      } while ((int)uVar6 < (int)local_14);
    }
    g_currentExceptionFrame = local_58.previous;
    return STReplaceLowWord((uint32_t)(local_58.previous), (uint16_t)((undefined2)local_8));
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x6b,0,iVar3,st::mutable_c_string("%s"),
                             "STGroupC::GetTOBJQty");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x6c);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  return CONCAT22(extraout_var,(undefined2)local_8);
}

// 00423660 STGroupC::GetTOBJList
#line 4 "decomp/ST.exe/functions/00423660/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetTOBJList */

uint * __thiscall st::fn_00423660(STGroupC *this,int param_1)

{
  STGroupC *pSVar2;
  int iVar3;
  STGameObjC *pSVar3;
  int iVar5;
  int iVar4;
  uint *puVar6;
  uint index;
  InternalExceptionFrame local_58;
  uint local_14;
  STGroupC *local_10;
  DArrayTy *local_c;
  undefined1 local_8 [4];

  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (iVar3 == 0) {
    local_c = st::fn_006AE290(nullptr,0,2,1);
    pSVar2 = local_10;
    index = 0;
    local_14 = local_10->field_0029[3];
    if (0 < (int)local_14) {
      do {
        st::fn_006ACC70((DArrayTy *)pSVar2->field_0029,index,local_8);
        if (STPiece<0,2>(local_8) != 0xffff) {
          pSVar3 = st::fn_004028BA
                             (g_allPlayers_007FA174,pSVar2->field_0024,STPiece<0,2>(local_8),CASE_1);
          if (pSVar3 == nullptr) {
            st::fn_006A5E40
                      (-0x5001fffc,g_overwriteContext_007ED77C,
                       st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x81);
          }
          iVar5 = (*pSVar3->vtable->vfunc_2C)();
          if (iVar5 == param_1) {
            st::fn_006AE1C0(local_c,local_8);
          }
        }
        index = index + 1;
      } while ((int)index < (int)local_14);
    }
    g_currentExceptionFrame = local_58.previous;
    return st::pointer_boundary_cast<uint *>(&local_c->flags);
  }
  g_currentExceptionFrame = local_58.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x86,0,iVar3,st::mutable_c_string("%s"),
                             "STGroupC::GetTOBJList");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x87);
  return st::pointer_boundary_cast<uint *>(&local_c->flags);
}

// 00423850 STGroupC::AddObj
#line 4 "decomp/ST.exe/functions/00423850/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::AddObj */

uint __thiscall st::fn_00423850(STGroupC *this,uint param_1,int param_2)

{
  STGroupC *pSVar2;
  int errorCode;
  STGameObjC *this_00;
  DArrayTy *pDVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint index;
  InternalExceptionFrame local_80;
  undefined1 local_3c [16];
  undefined4 local_2c;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  STGroupC *local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  short local_8;
  undefined1 local_5;

  local_18 = this->field_0029[3];
  local_c = 0;
  local_10 = 0;
  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_1c = this;
  local_14 = local_18;
  errorCode = st::fn_0072D7F0(local_80.jumpBuffer,0);
  pSVar2 = local_1c;
  index = local_14;
  uVar6 = local_18;
  if (errorCode == 0) {
    while (uVar6 = uVar6 - 1, -1 < (int)uVar6) {
      st::fn_006ACC70((DArrayTy *)pSVar2->field_0029,uVar6,&local_8);
      if (local_8 == -1) {
        index = uVar6;
        local_14 = uVar6;
      }
      if (local_8 == (short)param_1) {
        st::fn_006A5E40
                  (-0x5001ffff,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),
                   0xb1);
      }
    }
    st::fn_006AE140((DArrayTy *)pSVar2->field_0029,index,&param_1);
    this_00 = st::fn_004028BA
                        (g_allPlayers_007FA174,pSVar2->field_0024,(ushort)param_1,CASE_1);
    st::fn_004033BE(this_00,pSVar2->field_0025);
    pSVar2->field_0027 = pSVar2->field_0027 + 1;
    if (param_2 == 1) {
      if (pSVar2->field_002D == nullptr) {
        pDVar3 = st::fn_006AE290(nullptr,5,2,5);
        pSVar2->field_002D = st::pointer_boundary_cast<uint *>(&pDVar3->flags);
      }
      st::fn_006AE1C0((DArrayTy *)pSVar2->field_002D,&param_1);
      local_5 = 0xff;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (**(code **)(pSVar2->vtable + 8))(0x65,&local_5);
    }
    uVar4 = st::fn_0040579F((int)this_00);
    uVar6 = pSVar2->field_0035;
    if ((uVar6 & 1) == 0) {
      if ((uVar4 & 1) != 0) {
        local_10 = local_10 | 1;
      }
    }
    else if ((uVar4 & 1) == 0) {
      local_c = local_c | 1;
    }
    if ((uVar6 & 2) == 0) {
      if ((uVar4 & 2) != 0) {
        local_10 = local_10 | 2;
      }
    }
    else if ((uVar4 & 2) == 0) {
      local_c = local_c | 2;
    }
    if ((uVar6 & 4) == 0) {
      if ((uVar4 & 4) != 0) {
        local_10 = local_10 | 4;
      }
    }
    else if ((uVar4 & 4) == 0) {
      local_c = local_c | 4;
    }
    if ((uVar6 & 8) == 0) {
      if ((uVar4 & 8) != 0) {
        local_10 = local_10 | 8;
      }
    }
    else if ((uVar4 & 8) == 0) {
      local_c = local_c | 8;
    }
    if ((uVar6 & 0x10) == 0) {
      if ((uVar4 & 0x10) != 0) {
        local_10 = local_10 | 0x10;
      }
    }
    else if ((uVar4 & 0x10) == 0) {
      local_c = local_c | 0x10;
    }
    if (local_c != 0) {
      this_00->vfunc_100((char)local_c);
    }
    if (local_10 != 0) {
      this_00->vfunc_104((char)local_10);
    }
    if (this_00->field_0020 == 0x14) {
      st::fn_00401C26(this_00,pSVar2->field_0039);
    }
    if ((undefined4 *)pSVar2->field_001C != nullptr) {
      local_2c = 0x5d96;
      local_28 = 0;
      local_26 = (short)param_1;
      local_24 = this_00->field_0018;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
      (*(code *)**(undefined4 **)pSVar2->field_001C)(local_3c);
    }
    g_currentExceptionFrame = local_80.previous;
    return index;
  }
  g_currentExceptionFrame = local_80.previous;
  if (errorCode != -0x5001ffff) {
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0xdf,0,errorCode,st::mutable_c_string("%s")
                               ,"STGroupC::AddObj");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0xe0);
    return 0xffffffff;
  }
  return 0xaffe0001;
}

// 00423B50 STGroupC::AddObjs
#line 4 "decomp/ST.exe/functions/00423B50/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::AddObjs */

undefined4 __thiscall st::fn_00423B50(STGroupC *this,DArrayTy *param_1,int param_2)

{
  STGroupC *this_00;
  uint uVar2;
  int errorCode;
  int iVar3;
  undefined4 uVar4;
  uint index;
  uint uVar5;
  InternalExceptionFrame local_54;
  STGroupC *local_10;
  uint local_c;
  uint local_8;

  local_c = param_1->count;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = this;
  errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
  uVar2 = local_c;
  this_00 = local_10;
  if (errorCode != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0xf8,0,errorCode,st::mutable_c_string("%s")
                               ,"STGroupC::AddObjs");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0xf9);
    return 0xffffffff;
  }
  if (local_c == 0) {
    return 0;
  }
  uVar5 = 0;
  if (local_c != 0) {
    index = 0;
    do {
      st::fn_006ACC70(param_1,index,&local_8);
      st::fn_0040340E(this_00,local_8,param_2);
      uVar5 = uVar5 + 1;
      index = uVar5 & 0xffff;
    } while (index < uVar2);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}

// 00423EC0 STGroupC::GetMessage
#line 4 "decomp/ST.exe/functions/00423EC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=004034EA|00423EC0; family_names=STGroupC::GetMessage; ret4=4;
   direct_offsets={10:1,14:2,18:2,1c:1}

   [STDiscriminatedPayloadApplier] Case-local payload view: message->id == MESS_ID_CREATE uses
   /SubmarineTitans/Recovered/DiscriminatedPayloads/STGroupC_GetMessage_00423EC0_MessagePayload_Case_MESS_ID_CREATE.
   The carrier ABI remains pointer:/SubmarineTitans/Recovered/STMessage. */

int __thiscall st::fn_00423EC0(STGroupC *this,STMessage *message)

{
  STGroupC *this_00;
  int iVar2;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint index;
  void *element;
  InternalExceptionFrame local_50;
  int local_c;
  STGroupC *local_8;

  index = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_8;
  if (iVar2 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x17c,0,iVar2,st::mutable_c_string("%s"),
                               "STGroupC::GetMessage");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x17d);
    return 0xffff;
  }
  st::fn_006E5FD0(local_8,message);
  if (message->id == MESS_ID_CREATE) {
    iVar4 = (message->arg0).i32;
    if (*(uint *)(iVar4 + 0xc) < 2) {
      this_00->field_0020 = *(undefined4 *)(iVar4 + 0x20);
      this_00->field_0024 = *(char *)(iVar4 + 4);
      this_00->field_0025 = *(undefined2 *)(iVar4 + 0x14);
      this_00->field_0027 = *(undefined2 *)(iVar4 + 0x18);
      puVar2 = st::fn_006AE310(nullptr,5,2,5,0x4045c5);
      this_00->field_0029 = puVar2;
      local_c = *(int *)(iVar4 + 0x1c);
      if (0 < local_c) {
        element = (void *)(iVar4 + 0x24);
        do {
          st::fn_006AE140((DArrayTy *)this_00->field_0029,index,element);
          index = index + 1;
          element = (void *)((int)element + 4);
        } while ((int)index < local_c);
      }
      st::fn_004059D9
                (g_allPlayers_007FA174,this_00->field_0024,this_00->field_0025,(int)this_00);
      this_00->field_0031 = st::machine_word_boundary_cast<undefined4>(this_00->field_0018 * DAT_00808754);
    }
    else if (*(uint *)(iVar4 + 0xc) == 2) {
      st::fn_00404F48(this_00,iVar4);
      st::fn_004059D9
                (g_allPlayers_007FA174,this_00->field_0024,this_00->field_0025,(int)this_00);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (message->id == MESS_SHARED_0003) {
    st::fn_00405088(this_00);
    st::fn_006AE110((DArrayTy *)this_00->field_0029);
    this_00->field_0029 = nullptr;
    st::fn_004019AB
              (g_allPlayers_007FA174,this_00->field_0024,this_00->field_0025,(int)this_00);
    if ((DArrayTy *)this_00->field_002D != nullptr) {
      st::fn_006AE110((DArrayTy *)this_00->field_002D);
      this_00->field_002D = nullptr;
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}

// 004240F0 STGroupC::SaveGrpData
#line 4 "decomp/ST.exe/functions/004240F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::SaveGrpData */

int __thiscall st::fn_004240F0(STGroupC *this,int *param_1)

{
  int iVar2;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  STGroupC *pSVar6;
  byte *puVar7;
  byte *puVar8;
  InternalExceptionFrame local_5c;
  void *local_18;
  int local_14;
  STGroupC *local_10;
  undefined4 *local_c;
  uint local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_10 = this;
  iVar2 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pSVar6 = local_10;
  if (iVar2 == 0) {
    *param_1 = 0x40;
    if (local_10->field_0029 != nullptr) {
      local_c = (undefined4 *)st::fn_006B0020(local_10->field_0029,(int *)&local_8);
      st::fn_006AB060(&local_c);
      *param_1 = *param_1 + local_8;
    }
    if (pSVar6->field_002D != nullptr) {
      local_c = (undefined4 *)st::fn_006B0020(pSVar6->field_002D,(int *)&local_8);
      st::fn_006AB060(&local_c);
      *param_1 = *param_1 + local_8;
    }
    pvVar2 = st::fn_006AAC70(*param_1);
    local_8 = 0;
    STField<int>(pvVar2,4) = (int)pSVar6->field_0024;
    STField<undefined4>(pvVar2,0xc) = 2;
    STField<undefined4>(pvVar2,0x14) = pSVar6->field_0020;
    STField<undefined2>(pvVar2,0x18) = pSVar6->field_0025;
    STField<undefined2>(pvVar2,0x1a) = pSVar6->field_0027;
    STField<undefined4>(pvVar2,0x2c) = pSVar6->field_0031;
    STField<undefined4>(pvVar2,0x30) = pSVar6->field_0035;
    STField<undefined4>(pvVar2,0x34) = pSVar6->field_0039;
    local_18 = pvVar2;
    if (pSVar6->field_0029 == nullptr) {
      local_8 = 0;
      STField<undefined4>(pvVar2,0x1c) = 0xffffffff;
      STField<undefined4>(pvVar2,0x20) = 0;
    }
    else {
      local_c = (undefined4 *)st::fn_006B0020(pSVar6->field_0029,(int *)&local_8);
      puVar7 = (byte *)(local_c);
      puVar8 = (byte *)((int)pvVar2 + 0x40);
      memmove(puVar8, puVar7, local_8); /* compiler REP MOVS byte copy */
      uVar5 = 0;
      STField<undefined4>(pvVar2,0x1c) = 0x40;
      STField<uint>(pvVar2,0x20) = local_8;
      st::fn_006AB060(&local_c);
      pSVar6 = local_10;
    }
    iVar4 = local_8 + 0x40;
    if (pSVar6->field_002D == nullptr) {
      STField<undefined4>(pvVar2,0x24) = 0xffffffff;
      STField<uint>(pvVar2,0x28) = local_8;
    }
    else {
      local_14 = iVar4;
      local_c = (undefined4 *)st::fn_006B0020(pSVar6->field_002D,(int *)&local_8);
      puVar7 = (byte *)(local_c);
      puVar8 = (byte *)(iVar4 + (int)pvVar2);
      memmove(puVar8, puVar7, local_8); /* compiler REP MOVS byte copy */
      STField<int>(pvVar2,0x24) = local_14;
      STField<uint>(pvVar2,0x28) = local_8;
      st::fn_006AB060(&local_c);
    }
    STField<undefined4>(pvVar2,0x38) = 0xffffffff;
    STField<undefined4>(pvVar2,0x3c) = 0;
    g_currentExceptionFrame = local_5c.previous;
    return (int)pvVar2;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x1b9,0,iVar2,st::mutable_c_string("%s"),
                             "STGroupC::SaveGrpData");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x1ba);
  return (int)local_18;
}

// 00424360 STGroupC::RestoreGrpData
#line 4 "decomp/ST.exe/functions/00424360/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::RestoreGrpData */

void __thiscall st::fn_00424360(STGroupC *this,int param_1)

{
  int iVar1;
  STGroupC *pSVar3;
  AnonShape_00424360_8159BFF1 *pAVar4;
  int iVar4;
  uint *puVar5;
  int iVar5;
  InternalExceptionFrame local_50;
  STGroupC *local_c;
  AnonShape_00424360_8159BFF1 *local_8;

  local_8 = (AnonShape_00424360_8159BFF1 *)param_1;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar4 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pAVar4 = local_8;
  pSVar3 = local_c;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x1d5,0,iVar4,st::mutable_c_string("%s"),
                               "STGroupC::RestoreGrpData");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x1d6);
    return;
  }
  local_c->field_0020 = local_8->field_0014;
  local_c->field_0024 = local_8->field_0004;
  local_c->field_0025 = local_8->field_0018;
  local_c->field_0027 = local_8->field_001A;
  local_c->field_0031 = local_8->field_002C;
  local_c->field_0035 = local_8->field_0030;
  local_c->field_0039 = local_8->field_0034;
  if (local_8->field_001C == -1) {
    local_c->field_0029 = nullptr;
  }
  else {
    puVar5 = st::fn_006B00C0(nullptr,(uint *)(&local_8->field_0x0 + local_8->field_001C),
                          st::pointer_boundary_cast<undefined *>(st::fn_004045C5));
    pSVar3->field_0029 = puVar5;
  }
  iVar1 = *(int *)&pAVar4->field_0x24;
  if (iVar1 != -1) {
    puVar5 = st::fn_006B00C0(nullptr,(uint *)(&pAVar4->field_0x0 + iVar1),st::pointer_boundary_cast<undefined *>(st::fn_004045C5));
    pSVar3->field_002D = puVar5;
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  pSVar3->field_002D = nullptr;
  g_currentExceptionFrame = local_50.previous;
  return;
}

// 004247B0 STGroupC::SetAVPar
#line 4 "decomp/ST.exe/functions/004247B0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\wlad\tc_grp.cpp
   STGroupC::SetAVPar */

void __thiscall st::fn_004247B0(STGroupC *this,uint param_1)

{
  uint uVar1;
  STGameObjC *this_00;
  int iVar3;
  uint index;
  uint uVar4;

  uVar4 = 0;
  uVar1 = this->field_0029[3];
  this->field_0039 = param_1;
  if (uVar1 != 0) {
    index = 0;
    do {
      st::fn_006ACC70((DArrayTy *)this->field_0029,index,&param_1);
      if ((ushort)param_1 != 0xffff) {
        this_00 = st::fn_004028BA
                            (g_allPlayers_007FA174,this->field_0024,(ushort)param_1,CASE_1);
        if (this_00 == nullptr) {
          iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),0x256,0,0,st::mutable_c_string("%s"),
                                     "STGroupC::SetAVPar");
          if (iVar3 != 0) {
            STDebugBreak(); /* noreturn in standalone pseudocode */
          }
          st::fn_006A5E40
                    (-0x5001fffc,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\wlad\\tc_grp.cpp"),
                     599);
        }
        if (this_00->field_0020 == 0x14) {
          st::fn_00401C26(this_00,this->field_0039);
        }
      }
      uVar4 = uVar4 + 1;
      index = uVar4 & 0xffff;
    } while (index < uVar1);
  }
  return;
}


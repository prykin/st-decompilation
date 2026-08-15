#include "st/generated.hpp"
// Generated translation unit: source/original/ai/ai_plr.cpp

// 00678980 AiPlrClassTy::InitData
#line 4 "decomp/ST.exe/functions/00678980/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::InitData */

int __thiscall st::fn_00678980(AiPlrClassTy *this,undefined4 *param_1)

{
  AiPlrClassTy *pAVar2;
  int iVar3;
  DArrayTy *local_EAX_159;
  AiPlrClassTy_field_06A1DArray *pAVar3;
  DArrayTy *pDVar4;
  DArrayTy *pDVar5;
  byte *puVar6;
  int iVar7;
  int iVar8;
  uint uVar10;
  uint uVar11;
  AiPlrClassTy_field_06A1DArray **ppAVar12;
  byte *puVar13;
  bool bVar14;
  InternalExceptionFrame local_50;
  AiPlrClassTy *local_c;
  DArrayTy **local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pAVar2 = local_c;
  if (iVar3 == 0) {
    if (local_c == nullptr) {
      puVar13 = nullptr;
    }
    else {
      puVar13 = (byte *)(&local_c->field_05D3);
    }
    puVar6 = (byte *)(param_1);
    for (iVar8 = 0x4a; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar13 = *puVar6;
      puVar6 = (byte *)(puVar6 + 1);
      puVar13 = (byte *)(puVar13 + 1);
    }
    *(undefined2 *)puVar13 = *(undefined2 *)puVar6;
    STField<undefined1>(puVar13,2) = STField<undefined1>(puVar6,2);
    local_c->field_05D3 = 0x398;
    local_c->field_05EB = 1;
    st::fn_004054B1
              ((AiEventClassTy *)&local_c->vtable_at_1c,
               (int *)(local_c->field_06D1 + 0x12a + (int)param_1));
    ppAVar12 = (AiPlrClassTy_field_06A1DArray **)&pAVar2->field_0695;
    iVar8 = 5;
    local_8 = (DArrayTy **)ppAVar12;
    do {
      if ((DArrayTy *)*ppAVar12 != nullptr) {
        local_EAX_159 = st::fn_006B0060(nullptr,(uint *)((int)ppAVar12[1] + 0x12a + (int)param_1));
        *ppAVar12 = (AiPlrClassTy_field_06A1DArray *)local_EAX_159;
      }
      ppAVar12 = ppAVar12 + 3;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
    if (pAVar2->field_06A1 == nullptr) {
      pAVar3 = (AiPlrClassTy_field_06A1DArray *)
               st::fn_006AE290(nullptr,10,0x12,5);
      pAVar2->field_06A1 = pAVar3;
    }
    if (pAVar2->field_06AD == nullptr) {
      pDVar4 = st::fn_006AE290(nullptr,10,0x1c,5);
      pAVar2->field_06AD = pDVar4;
    }
    uVar11 = 0;
    pDVar5 = *local_8;
    if (0 < (int)pDVar5->count) {
      bVar14 = pDVar5->count != 0;
      do {
        if (bVar14) {
          /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
          puVar13 = (byte *)((int)pDVar5->data + pDVar5->elementSize * uVar11);
        }
        else {
          puVar13 = nullptr;
        }
        if (puVar13[1] == 0) {
          iVar8 = puVar13[2];
          puVar6 = (byte *)(st::fn_006AAC10(puVar13[3]));
          uVar10 = puVar13[3];
          *puVar13 = puVar6;
          puVar13 = (byte *)(iVar8 + 0x12a + (int)param_1);
          memmove(puVar6, puVar13, uVar10); /* compiler REP MOVS byte copy */
        }
        uVar11 = uVar11 + 1;
        pDVar5 = *local_8;
        bVar14 = uVar11 < pDVar5->count;
      } while ((int)uVar11 < (int)pDVar5->count);
    }
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  st::fn_0040485E(local_c);
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x3c,0,iVar3,st::mutable_c_string("%s"),
                             "AiPlrClassTy::InitData");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x3d);
  return iVar3;
}

// 00678BE0 AiPlrClassTy::PrepareToSave
#line 4 "decomp/ST.exe/functions/00678BE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::PrepareToSave

   [STPrototypeApplier] Propagated return.
   Evidence: 00678BE0 returns used as parameter 2 of STPlaySystemC::SaveObjData @ 0067CA5F */

byte * __thiscall st::fn_00678BE0(AiPlrClassTy *this,uint *param_1)

{
  AiPlrClassTy *pAVar2;
  int errorCode;
  int iVar3;
  byte *pbVar4;
  AllocationRecord_0067D3B0 *pAVar5;
  InternalExceptionFrame local_58;
  AiPlrClassTy *local_14;
  uint local_10;
  AllocationRecord_0067D3B0 *local_c;
  undefined4 *local_8;

  local_c = nullptr;
  local_8 = nullptr;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  errorCode = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pAVar2 = local_14;
  if (errorCode == 0) {
    local_8 = st::fn_00401D11((AiEventClassTy *)&local_14->vtable_at_1c,&local_10);
    if (pAVar2 == nullptr) {
      pAVar5 = nullptr;
    }
    else {
      pAVar5 = (AllocationRecord_0067D3B0 *)&pAVar2->field_05D3;
    }
    local_c = st::fn_00405204(pAVar5,local_8,local_10,param_1);
    *(undefined4 *)&local_c->field_0xc = 1;
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
    }
    g_currentExceptionFrame = local_58.previous;
    return (byte *)local_c;
  }
  g_currentExceptionFrame = local_58.previous;
  if (local_8 != nullptr) {
    st::fn_006AB060(&local_8);
  }
  if (local_c != nullptr) {
    st::fn_006AB060(&local_c);
  }
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x61,0,errorCode,st::mutable_c_string("%s"),
                             "AiPlrClassTy::PrepareToSave");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x62);
  return nullptr;
}

// 00679300 AiPlrClassTy::CloseTactByTitle
#line 4 "decomp/ST.exe/functions/00679300/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::CloseTactByTitle */

int __thiscall st::fn_00679300(AiPlrClassTy *this,byte *param_1)

{
  alignas(4) byte st_stack_frame[140];

  DArrayTy *pDVar1;
  AiPlrClassTy *pAVar3;
  int iVar4;
  uint index;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  AiTactClassTy *this_00;
  AnonShape_0068FD00_A5257008 *pAVar7;
  InternalExceptionFrame local_80;
  AnonShape_0068FD00_A5257008 local_3c [3];
  AiPlrClassTy *local_8;

  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  pAVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0xf1,0,iVar4,st::mutable_c_string("%s"),
                               "AiPlrClassTy::CloseTactByTitle");
    if (iVar5 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0xf2);
      return iVar4;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  index = st::fn_00402464(local_8,param_1);
  if ((int)index < 0) {
    g_currentExceptionFrame = local_80.previous;
    return 0;
  }
  pDVar1 = pAVar3->field_0695;
  if ((pDVar1 != nullptr) && ((int)index < (int)pDVar1->count)) {
    if (index < pDVar1->count) {
      puVar4 = DArrayAt<undefined4>(pDVar1, index);
    }
    else {
      puVar4 = nullptr;
    }
    if (puVar4[1] != 0) {
      this_00 = (AiTactClassTy *)*puVar4;
      goto LAB_00679378;
    }
  }
  this_00 = nullptr;
LAB_00679378:
  if (this_00 != nullptr) {
    pAVar7 = local_3c;
    for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(undefined4 *)pAVar7 = 0;
      pAVar7 = (AnonShape_0068FD00_A5257008 *)&pAVar7->field_0x4;
    }
    STPiece<0,4>(local_3c[0]) = 0x71;
    if ((st_stack_frame + 136) != (undefined1 *)0x3c) {
      st::fn_004010E1(this_00,local_3c);
    }
    st::fn_0040432C(g_playSystem_00802A38,*(uint *)&this_00->field_0x8);
    st::fn_006B0C70(local_8->field_0695,index);
  }
  g_currentExceptionFrame = local_80.previous;
  return 0;
}

// 00679470 AiPlrClassTy::CloseAllTact
#line 4 "decomp/ST.exe/functions/00679470/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::CloseAllTact */

int __thiscall st::fn_00679470(AiPlrClassTy *this)

{
  alignas(4) byte st_stack_frame[136];

  uint index;
  DArrayTy *pDVar1;
  AiPlrClassTy *pAVar3;
  int iVar4;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  AiTactClassTy *this_00;
  AnonShape_0068FD00_A5257008 *pAVar7;
  InternalExceptionFrame local_80;
  AnonShape_0068FD00_A5257008 local_3c [3];
  AiPlrClassTy *local_8;

  local_80.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_80;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_80.jumpBuffer,0);
  pAVar3 = local_8;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_80.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x10e,0,iVar4,st::mutable_c_string("%s"),
                               "AiPlrClassTy::CloseAllTact");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x10f);
    return iVar4;
  }
  if (local_8->field_0695 == nullptr) {
    st::fn_006A5E40
              (-0x34,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0xfd);
  }
  pAVar7 = local_3c;
  for (iVar6 = 0xd; iVar6 != 0; iVar6 = iVar6 + -1) {
    *(undefined4 *)pAVar7 = 0;
    pAVar7 = (AnonShape_0068FD00_A5257008 *)&pAVar7->field_0x4;
  }
  STPiece<0,4>(local_3c[0]) = 0x71;
  index = pAVar3->field_0695->count;
  do {
    index = index - 1;
    if ((int)index < 0) {
      g_currentExceptionFrame = local_80.previous;
      return 0;
    }
    pDVar1 = pAVar3->field_0695;
    if (((pDVar1 == nullptr) || ((int)index < 0)) || ((int)pDVar1->count <= (int)index)) {
LAB_00679519:
      this_00 = nullptr;
    }
    else {
      if (index < pDVar1->count) {
        puVar4 = DArrayAt<undefined4>(pDVar1, index);
      }
      else {
        puVar4 = nullptr;
      }
      if (puVar4[1] == 0) goto LAB_00679519;
      this_00 = (AiTactClassTy *)*puVar4;
    }
    if (this_00 != nullptr) {
      if ((st_stack_frame + 132) != (undefined1 *)0x3c) {
        st::fn_004010E1(this_00,local_3c);
      }
      st::fn_0040432C(g_playSystem_00802A38,*(uint *)&this_00->field_0x8);
      st::fn_006B0C70(pAVar3->field_0695,index);
    }
  } while( true );
}

// 0067B3C0 AiPlrClassTy::SetTech
#line 4 "decomp/ST.exe/functions/0067B3C0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::SetTech

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 00652810 -> 0067B3C0 @ 0065668A; literal -1 at 0065667D | 0067B520 -> 0067B3C0 @
   0067B8C7; MOVSX at 0067B8AC establishes signed source width 2 */

int __thiscall
st::fn_0067B3C0(AiPlrClassTy *this,int param_1,int param_2,int param_3,char param_4)

{
  AiPlrClassTy *pAVar2;
  int local_EAX_18;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_60;
  char local_1c;
  undefined2 uStack_1b;
  undefined1 uStack_19;
  undefined1 uStack_18;
  undefined2 uStack_17;
  undefined1 uStack_15;
  int local_14;
  int local_10;
  undefined2 local_c;
  AiPlrClassTy *local_8;

  local_8 = this;
  local_EAX_18 = st::fn_00404D31(this,param_1,param_2);
  if (0 < local_EAX_18) {
    return 0;
  }
  local_60.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_60;
  iVar3 = st::fn_0072D7F0(local_60.jumpBuffer,0);
  pAVar2 = local_8;
  if (iVar3 == 0) {
    local_1c = param_4;
    uStack_1b = (undefined2)param_1;
    local_c = 0;
    uStack_15 = 0;
    uStack_17 = 1;
    uStack_19 = (undefined1)param_2;
    uStack_18 = (undefined1)((uint)param_2 >> 8);
    if (0 < param_3) {
      uStack_17 = (undefined2)param_3;
    }
    local_14 = iVar3;
    local_10 = iVar3;
    st::fn_006AE1C0((DArrayTy *)local_8->field_06A1,&local_1c);
    st::fn_004049A8((DArrayTy *)pAVar2->field_06A1,st::pointer_boundary_cast<STFnType_callback_00676C40_p1_6bf6b031 *>(st::fn_004029B9));
    g_currentExceptionFrame = local_60.previous;
    return 0;
  }
  g_currentExceptionFrame = local_60.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x3a9,0,iVar3,st::mutable_c_string("%s"),
                             "AiPlrClassTy::SetTech");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x3aa);
  return iVar3;
}

// 0067B520 AiPlrClassTy::ExecTech
#line 4 "decomp/ST.exe/functions/0067B520/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::ExecTech
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall ExecTech(AiPlrClassTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0067B8E6 RET | 0067B92E RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_0067B520(AiPlrClassTy *this)

{
  alignas(4) byte st_stack_frame[208];

  short sVar1;
  AiPlrClassTy *this_00;
  bool bVar13;
  int local_EAX_119;
  AiPlrClassTy_field_06A1DArray *array;
  int local_EAX_259;
  int local_EAX_300;
  undefined1 uVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int local_EAX_427;
  uint uVar4;
  undefined4 *puVar5;
  int iVar4;
  int local_EAX_824;
  int iVar9;
  DArrayTy *pDVar6;
  uint uVar7;
  void *pvVar8;
  int iVar10;
  STGameObjC *pSVar11;
  AnonShape_0068FD00_A5257008 *pAVar12;
  bool bVar14;
  int local_c8 [7];
  int local_ac [7];
  InternalExceptionFrame local_90;
  AnonShape_0068FD00_A5257008 local_4c [3];
  AiPlrClassTy *local_18;
  int local_14;
  uint local_10;
  uint local_c;
  STGameObjC *local_8;

  if (((this->field_0695 != nullptr) && (g_allPlayers_007FA174 != nullptr)) &&
     ((this->field_066E == 0 || (this->field_0672 + this->field_066E <= this->field_06FE)))) {
    this->field_0672 = this->field_06FE;
    local_90.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_90;
    local_18 = this;
    local_EAX_119 = st::fn_0072D7F0(local_90.jumpBuffer,0);
    this_00 = local_18;
    if (local_EAX_119 == 0) {
      local_10 = 0;
      array = local_18->field_06A1;
      if (0 < (int)array->count) {
        bVar14 = array->count != 0;
        do {
          uVar4 = local_10;
          if (bVar14) {
            /* ST_PSEUDO[dynamic_array_indexing]: expected DArrayAt<T>(array, index) (runtime elementSize cannot be a static C array) */
            pvVar8 = (void *)((int)&array->data->field_0000 + array->elementSize * local_10);
          }
          else {
            pvVar8 = nullptr;
          }
          switch(STField<undefined1>(pvVar8,7)) {
          case 0:
            sVar1 = STField<short>(pvVar8,3);
            iVar10 = st::fn_0040186B(this_00->field_05D7,(int)STField<short>(pvVar8,1));
            if (iVar10 < sVar1) {
              local_EAX_259 =
                   st::fn_00401E1F(this_00->field_05D7,(int)STField<short>(pvVar8,1));
              if (local_EAX_259 == 0) {
                pSVar11 = (STGameObjC *)(int)STField<short>(pvVar8,1);
                local_14 = (int)STField<short>(pvVar8,3);
                local_8 = pSVar11;
                local_EAX_300 = st::fn_0040524F(this_00->field_05D7,(uint)pSVar11);
                /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                if ((local_EAX_300 == 0) ||
                   (bVar13 = st::fn_00403396((byte *)this_00->field_05D7,(uint)pSVar11),
                   CONCAT31(extraout_var,bVar13) == 0)) {
LAB_0067b6db:
                  bVar14 = false;
                }
                else {
                  uVar3 = st::fn_0040530D(this_00->field_05D7,(int)pSVar11);
                  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
                  local_c = CONCAT31(extraout_var_00,uVar3);
                  iVar10 = st::fn_0040186B(this_00->field_05D7,(int)pSVar11);
                  if (((int)local_c <= iVar10) ||
                     ((iVar10 = st::fn_0040186B(this_00->field_05D7,(int)pSVar11),
                      iVar10 != local_14 + -1 ||
                      (local_EAX_427 = st::fn_00401E1F(this_00->field_05D7,(uint)pSVar11),
                      local_EAX_427 != 0)))) goto LAB_0067b6db;
                  bVar14 = true;
                }
                if (bVar14) {
                  pDVar6 = this_00->field_0695;
                  local_c = 0;
                  uVar4 = pDVar6->count;
                  if (0 < (int)uVar4) {
                    do {
                      uVar7 = local_c;
                      if (((pDVar6 == nullptr) || ((int)local_c < 0)) ||
                         ((int)uVar4 <= (int)local_c)) {
LAB_0067b724:
                        local_8 = nullptr;
                      }
                      else {
                        if (local_c < uVar4) {
                          puVar5 = DArrayAt<undefined4>(pDVar6, local_c);
                        }
                        else {
                          puVar5 = nullptr;
                        }
                        if (puVar5[1] == 0) goto LAB_0067b724;
                        local_8 = (STGameObjC *)*puVar5;
                      }
                      if (local_8 != nullptr) {
                        pAVar12 = local_4c;
                        for (iVar10 = 0xd; iVar10 != 0; iVar10 = iVar10 + -1) {
                          *(undefined4 *)pAVar12 = 0;
                          pAVar12 = (AnonShape_0068FD00_A5257008 *)&pAVar12->field_0x4;
                        }
                        STPiece<4,4>(local_4c[0]) = this_00->field_06FE;
                        STPiece<0,4>(local_4c[0]) = 0x73;
                        local_4c[0].field_0009 = 1;
                        local_4c[0].field_000A = st::machine_word_boundary_cast<undefined4>(pvVar8);
                        if ((st_stack_frame + 204) != (undefined1 *)0x4c) {
                          st::fn_004010E1((AiTactClassTy *)local_8,local_4c);
                          uVar7 = local_c;
                        }
                        if ('\0' < (char)STPiece<8,1>(local_4c[0])) {
                          STField<undefined1>(pvVar8,7) = 1;
                          STField<undefined2>(pvVar8,8) = STPiece<14,2>(local_4c[0]);
                          break;
                        }
                      }
                      pDVar6 = this_00->field_0695;
                      local_c = uVar7 + 1;
                      uVar4 = pDVar6->count;
                    } while ((int)local_c < (int)uVar4);
                  }
                }
              }
            }
            else {
              STField<undefined1>(pvVar8,7) = 2;
            }
            break;
          case 1:
            if (g_allPlayers_007FA174 == nullptr) {
              local_8 = nullptr;
            }
            else {
              local_8 = st::fn_004028BA
                                  (g_allPlayers_007FA174,*(char *)&this_00->field_05D7,
                                   STField<ushort>(pvVar8,8),CASE_1);
            }
            if (local_8 == nullptr) {
              STField<undefined1>(pvVar8,7) = 0;
              STField<undefined2>(pvVar8,8) = 0;
            }
            else {
              sVar1 = STField<short>(pvVar8,3);
              iVar10 = st::fn_0040186B(this_00->field_05D7,(int)STField<short>(pvVar8,1));
              if (iVar10 < sVar1) {
                iVar4 = st::fn_00402D10(local_8,(int)STField<short>(pvVar8,1),
                                           (int)STField<short>(pvVar8,3));
                if (iVar4 == 0) {
                  STField<undefined1>(pvVar8,7) = 0;
                  STField<undefined2>(pvVar8,8) = 0;
                }
              }
              else {
                STField<undefined1>(pvVar8,7) = 2;
              }
            }
            break;
          case 2:
          case 3:
            st::fn_006B0C70((DArrayTy *)array,local_10);
            local_10 = uVar4 - 1;
          }
          array = this_00->field_06A1;
          local_10 = local_10 + 1;
          bVar14 = local_10 < array->count;
        } while ((int)local_10 < (int)array->count);
      }
      if (((g_allPlayers_007FA174 != nullptr) && (this_00->field_0662 == '\x01')) &&
         (local_EAX_824 = st::fn_00402A68(this_00,(int)this_00->field_0660),
         local_EAX_824 < (int)((-(uint)(this_00->field_05EC != 3) & 0xfffffffc) + 5))) {
        st::fn_0040523B(this_00->field_05D7,(int)this_00->field_0660,st::pointer_boundary_cast<undefined4 *>(local_c8),st::pointer_boundary_cast<undefined4 *>(local_ac));
        iVar10 = 0;
        do {
          if (*(int *)((int)local_c8 + iVar10) == 0) {
            g_currentExceptionFrame = local_90.previous;
            return;
          }
          st::fn_00402E37(this_00,*(int *)((int)local_c8 + iVar10),*(int *)((int)local_ac + iVar10),
                  (int)this_00->field_0663,(char)this_00->field_0660);
          iVar10 = iVar10 + 4;
        } while (iVar10 < 0x1c);
      }
      g_currentExceptionFrame = local_90.previous;
      return;
    }
    g_currentExceptionFrame = local_90.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x40d,0,local_EAX_119,
                               st::mutable_c_string("%s"),"AiPlrClassTy::ExecTech");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_119,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x40e);
  }
  return;
}

// 0067C180 AiPlrClassTy::Offensive
#line 4 "decomp/ST.exe/functions/0067C180/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::Offensive
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined1
   __thiscall Offensive(AiPlrClassTy * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0067C634 RET | 0067C687 RET
   [STAbiConsistencyApplier] machine_thiscall_unsized_return_migration target=return:-1:
   return=/undefined Evidence: legacy ABI applier materialized the unsized return as undefined1
   while changing only function arity; restore Ghidra DefaultDataType */

void __thiscall st::fn_0067C180(AiPlrClassTy *this)

{
  STFishC *pSVar1;
  AiPlrClassTy *this_00;
  undefined2 uVar3;
  int local_EAX_93;
  DArrayTy *array;
  short *psVar4;
  int *piVar5;
  int iVar6;
  IMAGE_DOS_HEADER *pIVar7;
  undefined4 *puVar8;
  dword dVar9;
  int iVar4;
  DArrayTy *pDVar10;
  ushort *puVar11;
  int iVar7;
  uint uVar12;
  /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
  uint extraout_EDX;
  int iVar13;
  uint uVar14;
  bool bVar15;
  InternalExceptionFrame local_80;
  undefined4 local_3c;
  short local_38 [6];
  undefined4 local_2c;
  IMAGE_DOS_HEADER *local_28;
  ushort local_24;
  AiPlrClassTy *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  DArrayTy *local_c;
  uint local_8;

  local_c = nullptr;
  if ((((this->field_0676 != '\0') && (this->field_0640 != 0xff)) &&
      (this->field_0695 != nullptr)) && (g_allPlayers_007FA174 != nullptr)) {
    local_80.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_80;
    local_20 = this;
    local_EAX_93 = st::fn_0072D7F0(local_80.jumpBuffer,0);
    this_00 = local_20;
    if (local_EAX_93 == 0) {
      iVar13 = local_20->field_0681;
      if (local_20->field_0689 == 0) {
        if ((iVar13 == 0) || (iVar13 * 3 + local_20->field_0685 <= local_20->field_06FE)) {
          local_20->field_0685 = local_20->field_06FE;
          array = st::fn_006AE290(nullptr,5,0x10,5);
          local_c = array;
          st::fn_004027E3(this_00,st::pointer_boundary_cast<undefined *>(st::fn_00403544),array);
          uVar14 = array->count;
          uVar12 = 0;
          iVar13 = 0;
          bVar15 = uVar14 != 0;
          local_10 = 0;
          local_1c = 0;
          if (0 < (int)uVar14) {
            do {
              if (bVar15) {
                psVar4 = DArrayAt<short>(array, uVar12);
              }
              else {
                psVar4 = nullptr;
              }
              if ((psVar4 != nullptr) && (*psVar4 != 0)) {
                iVar13 = iVar13 + psVar4[1];
                local_10 = local_10 + *(int *)(psVar4 + 2);
              }
              uVar14 = array->count;
              uVar12 = uVar12 + 1;
              bVar15 = uVar12 < uVar14;
              local_1c = iVar13;
            } while ((int)uVar12 < (int)uVar14);
          }
          if ((((this_00->field_0677 <= local_1c) && (0 < (int)uVar14)) && (0 < local_1c)) &&
             ((0 < local_10 &&
              (iVar13 = st::fn_00405989(*(char *)&this_00->field_0640), local_18 = iVar13,
              iVar13 != 0)))) {
            bVar15 = *(int *)(iVar13 + 0xc) != 0;
            local_14 = 0;
            local_8 = 0;
            if (0 < *(int *)(iVar13 + 0xc)) {
              do {
                if (bVar15) {
                  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                  piVar5 = (int *)(*(int *)(iVar13 + 8) * local_8 + *(int *)(iVar13 + 0x1c));
                }
                else {
                  piVar5 = nullptr;
                }
                piVar5 = (int *)*piVar5;
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                if ((piVar5 != nullptr) && (iVar6 = (**(code **)(*piVar5 + 0xf8))(), iVar6 != 0))
                {
                  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                  iVar6 = (**(code **)(*piVar5 + 0x2c))();
                  pIVar7 = st::fn_0040410B(iVar6);
                  if ((((uint)pIVar7 & 3) != 0) || (((uint)pIVar7 & 0x630000) != 0)) {
                    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
                    iVar6 = (**(code **)(*piVar5 + 0xd4))();
                    local_14 = local_14 + iVar6;
                  }
                }
                local_8 = local_8 + 1;
                bVar15 = local_8 < *(uint *)(iVar13 + 0xc);
                array = local_c;
              } while ((int)local_8 < (int)*(uint *)(iVar13 + 0xc));
            }
            if (((this_00->field_0679 <= local_1c) || (local_14 < 1)) ||
               ((int)this_00->field_067B < (local_10 * 100) / local_14)) {
              local_8 = 0;
              this_00->field_06AD->count = 0;
              bVar15 = *(int *)(iVar13 + 0xc) != 0;
              if (0 < *(int *)(iVar13 + 0xc)) {
                do {
                  if (bVar15) {
                    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                    puVar8 = (undefined4 *)
                             (*(int *)(iVar13 + 8) * local_8 + *(int *)(iVar13 + 0x1c));
                  }
                  else {
                    puVar8 = nullptr;
                  }
                  pSVar1 = (STFishC *)*puVar8;
                  if ((pSVar1 != nullptr) &&
                     (iVar6 = pSVar1->vfunc_F8(), iVar6 != 0)) {
                    memset(&local_3c, 0, 0x1c); /* compiler bulk-zero initialization */
                    STPiece<0,2>(local_3c) = (undefined2)local_8;
                    dVar9 = pSVar1->slot_2C();
                    STPiece<2,2>(local_3c) = (short)dVar9;
                    st::fn_004057C2(local_38,pSVar1);
                    local_2c = pSVar1->vfunc_D4();
                    local_28 = st::fn_0040410B((int)STPiece<2,2>(local_3c));
                    local_24 = st::fn_004026B7((Global_sub_00675430_param_1Enum)local_28);
                    st::fn_006AE1C0(this_00->field_06AD,&local_3c);
                    iVar13 = local_18;
                  }
                  local_8 = local_8 + 1;
                  bVar15 = local_8 < *(uint *)(iVar13 + 0xc);
                  array = local_c;
                } while ((int)local_8 < (int)*(uint *)(iVar13 + 0xc));
              }
              st::fn_004049A8(this_00->field_06AD,st::pointer_boundary_cast<STFnType_callback_00676C40_p1_6bf6b031 *>(st::fn_004026FD));
              st::fn_004049A8(array,st::pointer_boundary_cast<STFnType_callback_00676C40_p1_6bf6b031 *>(st::fn_004029B4));
              st::fn_00401C80(this_00,array,this_00->field_06AD);
              this_00->field_0689 = 1;
            }
          }
LAB_0067c61b:
          if (array != nullptr) {
            st::fn_006AE110(array);
          }
          g_currentExceptionFrame = local_80.previous;
          return;
        }
      }
      else {
        /* ST_PSEUDO[call_clobber_piece]: candidate volatile-register merge after CALL: split the partial-register lifetime */
        uVar14 = extraout_EDX;
        if ((iVar13 == 0) ||
           (uVar14 = st::machine_word_boundary_cast<uint>(local_20->field_0685 + iVar13), uVar14 <= local_20->field_06FE)) {
          local_20->field_0685 = local_20->field_06FE;
          st::fn_004029E6((int)local_20,uVar14,local_20->field_06AD);
          iVar4 = st::fn_00401041(this_00->field_06AD);
          pDVar10 = st::fn_006AE290(nullptr,5,0x10,5);
          local_c = pDVar10;
          st::fn_004027E3(this_00,st::pointer_boundary_cast<undefined *>(st::fn_00403544),pDVar10);
          iVar13 = iVar4 + pDVar10->count;
          if (iVar13 == 0) {
            st::fn_0040394F(this_00);
            array = local_c;
          }
          else {
            array = local_c;
            if (0 < (int)pDVar10->count) {
              if ((int)this_00->field_06AD->count < iVar13) {
                iVar13 = st::fn_00405989(*(char *)&this_00->field_0640);
                local_18 = iVar13;
                if (iVar13 != 0) {
                  local_8 = 0;
                  if (0 < *(int *)(iVar13 + 0xc)) {
                    bVar15 = *(int *)(iVar13 + 0xc) != 0;
                    do {
                      uVar14 = local_8;
                      if (bVar15) {
                        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
                        puVar8 = (undefined4 *)
                                 (*(int *)(iVar13 + 8) * local_8 + *(int *)(iVar13 + 0x1c));
                      }
                      else {
                        puVar8 = nullptr;
                      }
                      pSVar1 = (STFishC *)*puVar8;
                      if (((pSVar1 != nullptr) &&
                          (iVar6 = pSVar1->vfunc_F8(), iVar13 = local_18,
                          iVar6 != 0)) &&
                         (puVar11 = st::fn_00405CAE(this_00->field_06AD,uVar14),
                         iVar13 = local_18, puVar11 == nullptr)) {
                        uVar3 = (undefined2)local_8;
                        memset(&local_3c, 0, 0x1c); /* compiler bulk-zero initialization */
                        STPiece<0,2>(local_3c) = uVar3;
                        dVar9 = pSVar1->slot_2C();
                        STPiece<2,2>(local_3c) = (short)dVar9;
                        st::fn_004057C2(local_38,pSVar1);
                        local_2c = pSVar1->vfunc_D4();
                        local_28 = st::fn_0040410B((int)STPiece<2,2>(local_3c));
                        local_24 = st::fn_004026B7((Global_sub_00675430_param_1Enum)local_28);
                        st::fn_006AE1C0(this_00->field_06AD,&local_3c);
                        iVar13 = local_18;
                        uVar14 = local_8;
                      }
                      local_8 = uVar14 + 1;
                      bVar15 = local_8 < *(uint *)(iVar13 + 0xc);
                    } while ((int)local_8 < (int)*(uint *)(iVar13 + 0xc));
                  }
                }
                st::fn_004049A8(this_00->field_06AD,st::pointer_boundary_cast<STFnType_callback_00676C40_p1_6bf6b031 *>(st::fn_004026FD));
              }
              if (this_00->field_06AD->count == 0) {
                st::fn_0040394F(this_00);
                array = local_c;
              }
              else {
                st::fn_00401C80(this_00,local_c,this_00->field_06AD);
                array = local_c;
              }
            }
          }
          goto LAB_0067c61b;
        }
      }
    }
    else {
      g_currentExceptionFrame = local_80.previous;
      iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x570,0,local_EAX_93,
                                 st::mutable_c_string("%s"),"AiPlrClassTy::Offensive");
      if (iVar7 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (local_c != nullptr) {
        st::fn_006AE110(local_c);
        local_c = nullptr;
      }
      st::fn_006A5E40(local_EAX_93,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x573);
    }
  }
  return;
}

// 0067C7E0 AiPlrClassTy::GetMessage
#line 4 "decomp/ST.exe/functions/0067C7E0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\ai\ai_plr.cpp
   AiPlrClassTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401F8C|0067C7E0; family_names=AiPlrClassTy::GetMessage; ret4=2;
   direct_offsets={10:2,14:3,18:4,1c:6} */

int __thiscall st::fn_0067C7E0(AiPlrClassTy *this,STMessage *message)

{
  char cVar1;
  STMessageId SVar2;
  undefined4 *puVar3;
  AiPlrClassTy *this_00;
  int iVar5;
  byte *pbVar5;
  LPSTR pCVar6;
  STGameObjC *objPtr;
  AiFltClassTy *this_01;
  DArrayTy *pDVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;
  char *pcVar12;
  char *pcVar13;
  int *piVar14;
  AnonShape_0068FD00_A5257008 **ppAVar15;
  bool bVar16;
  byte bVar17;
  InternalExceptionFrame local_b0;
  AnonShape_0068FD00_A5257008 *local_6c;
  uint local_68;
  undefined4 local_64;
  DArrayTy *local_60;
  int local_38 [5];
  undefined4 local_24;
  AiPlrClassTyVTable_at_1C **local_20;
  byte *local_18;
  uint local_14;
  AiPlrClassTy *local_10;
  int local_c;
  DArrayTy *local_8;

  local_b0.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_b0;
  local_10 = this;
  iVar5 = st::fn_0072D7F0(local_b0.jumpBuffer,0);
  this_00 = local_10;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_b0.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x655,0,iVar5,
                               st::mutable_c_string("AiPlrClassTy::GetMessage error mess->id == %lX Name=%d "),message->id,
                               local_10->field_0018);
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x656);
    return 0xffff;
  }
  local_10->field_06FE = g_playSystem_00802A38->field_00E4;
  SVar2 = message->id;
  if (SVar2 < 0x5d98) {
    if (SVar2 == MESS_AIPLRCLASSTY_5D97) {
      st::fn_00402090(local_10);
    }
    else if (SVar2 < MESS_TORPHIT) {
      if (SVar2 == MESS_SHARED_010F) {
        local_14 = 0;
        pbVar5 = st::fn_00403300(local_10,&local_14);
        bVar17 = 0xc;
        uVar10 = local_14;
        local_18 = pbVar5;
        pCVar6 = st::fn_006F2C00(PTR_s_AIPLAYER_0079d6d0,2,this_00->field_05D7);
        st::fn_00401078(g_playSystem_00802A38,pCVar6,pbVar5,uVar10,bVar17);
        pCVar6 = st::fn_006F2C00(PTR_s_AIPLAYER_0079d6d0,2,this_00->field_05D7);
        uVar10 = 0xffffffff;
        do {
          pcVar12 = pCVar6;
          if (uVar10 == 0) break;
          uVar10 = uVar10 - 1;
          pcVar12 = pCVar6 + 1;
          cVar1 = *pCVar6;
          pCVar6 = pcVar12;
        } while (cVar1 != '\0');
        uVar10 = ~uVar10;
        pcVar12 = pcVar12 + -uVar10;
        pcVar13 = st::pointer_boundary_cast<char *>(&g_bulkInitializedRecords_008087C7[this_00->field_05D7].field_0x1);
        memmove(pcVar13, pcVar12, uVar10); /* compiler REP MOVS byte copy */
        if (local_18 != nullptr) {
          st::fn_006AB060(&local_18);
        }
      }
      else if (SVar2 == MESS_ID_NONE) {
        if ((&DAT_00809950)[local_10->field_05D7] == '\0') {
          if (DAT_008117bc != nullptr) {
            memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
            iVar9 = 0;
            local_38[4] = 0x5deb;
            local_24 = STReplaceLowWord((uint32_t)(local_24), (uint16_t)(*(undefined2 *)&this_00->field_05D7));
            if (this_00 == nullptr) {
              local_20 = nullptr;
            }
            else {
              local_20 = &this_00->vtable_at_1c;
            }
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
            (**(code **)*DAT_008117bc)(local_38);
          }
          st::fn_00401BE0((AiEventClassTy *)&this_00->vtable_at_1c,message);
          if (this_00->field_0658 == 0) {
            this_00->field_0658 = 1;
            st::fn_00401C3F((AnonShape_0067A2D0_742706D4 *)this_00);
          }
          else {
            st::fn_00404359((AnonShape_00679600_B8E418A8 *)this_00);
            st::fn_00405065(this_00);
            st::fn_00402379(this_00);
          }
        }
        else {
          st::fn_00402090(local_10);
          memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
          iVar9 = 0;
          local_38[2] = this_00->field_000C->systemId;
          local_38[3] = 0;
          local_24 = this_00->field_0008;
          local_38[4] = 10;
          st::fn_006E5810(this_00->field_000C,st::pointer_boundary_cast<undefined4 *>(local_38));
        }
      }
      else if (SVar2 == MESS_ID_CREATE) {
        puVar3 = st::pointer_boundary_cast<undefined4 *>((message->arg0).ptr);
        if (puVar3 == nullptr) {
          st::fn_006A5E40
                    (-6,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\ai\\ai_plr.cpp"),0x586);
        }
        st::fn_004033FF(this_00,puVar3);
        if (g_allPlayers_007FA174 != nullptr) {
          st::fn_00402DEC(*(char *)&this_00->field_05D7,this_00);
        }
        if (puVar3[3] == 0) {
          st::fn_004044BC(this_00);
        }
        st::fn_00401F69();
      }
      else if (SVar2 == MESS_SHARED_0003) {
        if (DAT_008117bc != nullptr) {
          memset(local_38, 0, 0x20); /* compiler bulk-zero initialization */
          local_38[4] = 0x5dec;
          local_24 = STReplaceLowWord((uint32_t)(local_24), (uint16_t)(*(undefined2 *)&this_00->field_05D7));
          if (this_00 == nullptr) {
            local_20 = nullptr;
          }
          else {
            local_20 = &this_00->vtable_at_1c;
          }
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable or function-table callback call with the machine-proven calling convention */
          (**(code **)*DAT_008117bc)(local_38);
        }
        st::fn_0040281F();
        if (g_allPlayers_007FA174 != nullptr) {
          st::fn_00402DEC(*(char *)&this_00->field_05D7,nullptr);
        }
        st::fn_0040485E(this_00);
      }
    }
    else if (SVar2 == MESS_ID_ALLCREATE) {
      pDVar7 = local_10->field_0695;
      uVar10 = 0;
      if (0 < (int)pDVar7->count) {
        bVar16 = pDVar7->count != 0;
        do {
          if (bVar16) {
            piVar14 = DArrayAt<int>(pDVar7, uVar10);
          }
          else {
            piVar14 = nullptr;
          }
          if ((AnonShape_005EFAE0_B406B78B *)piVar14[1] != nullptr) {
            local_c = 0;
            iVar9 = st::fn_006E62D0
                              (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)piVar14[1],
                               &local_c);
            if ((iVar9 == 0) && (local_c != 0)) {
              *piVar14 = local_c;
            }
            else {
              *piVar14 = 0;
              piVar14[1] = 0;
            }
          }
          pDVar7 = this_00->field_0695;
          uVar10 = uVar10 + 1;
          bVar16 = uVar10 < pDVar7->count;
        } while ((int)uVar10 < (int)pDVar7->count);
      }
    }
    else if (SVar2 == MESS_AIPLRCLASSTY_5D94) {
      if (g_allPlayers_007FA174 == nullptr) {
        objPtr = nullptr;
      }
      else {
        objPtr = st::fn_004028BA
                           (g_allPlayers_007FA174,*(char *)&local_10->field_05D7,
                            (message->arg0).words.high,CASE_1);
      }
      if (objPtr != nullptr) {
        iVar9 = (*objPtr->vtable->vfunc_2C)();
        if ((iVar9 < 1) || (0x28 < iVar9)) {
          bVar16 = false;
        }
        else {
          bVar16 = true;
        }
        if ((bVar16) &&
           (this_01 = (AiFltClassTy *)st::fn_00405A4C(this_00,objPtr->field_081C),
           this_01 != nullptr)) {
          st::fn_00404200(this_01,(uint)objPtr,0);
        }
      }
    }
  }
  else {
    switch(SVar2) {
    case 0x5d98:
      if ((message->arg0).words.low == 0) {
        st::fn_00402270(local_10->field_05D7,st::pointer_boundary_cast<DArrayTy *>((message->arg1).ptr));
      }
      else {
        local_8 = nullptr;
        st::fn_006AFE40((int *)&local_8,st::pointer_boundary_cast<uint *>((message->arg1).ptr));
        pDVar7 = local_8;
        if (local_8 != nullptr) {
          ppAVar15 = &local_6c;
          for (iVar9 = 0xd; iVar9 != 0; iVar9 = iVar9 + -1) {
            *ppAVar15 = nullptr;
            ppAVar15 = ppAVar15 + 1;
          }
          local_68 = this_00->field_06FE;
          local_6c = (AnonShape_0068FD00_A5257008 *)0x72;
          local_64 = 0;
          local_60 = pDVar7;
          st::fn_00405DC6(this_00,(AnonShape_0068FD00_A5257008 *)&local_6c,-1);
          local_64 = 1;
          st::fn_00405DC6(this_00,(AnonShape_0068FD00_A5257008 *)&local_6c,-1);
          st::fn_006AE110(local_8);
        }
      }
      break;
    case MESS_AIBOSSCLASSTY_5DC5:
    case MESS_AIBOSSCLASSTY_5DC6:
    case MESS_AIBOSSCLASSTY_5DD0:
    case 0x5dd1:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_ID_CREATE:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0003:
    case 0x5dd4:
    case 0x5dd6:
    case 0x5dd7:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_CURSORCLASSTY_0009:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_SYSTEMCLASSTY_000A:
    case 0x5ddb:
    case 0x5ddc:
    case MESS_AIBOSSCLASSTY_5DD0|MESS_SHARED_0008|MESS_SHARED_0005:
    case 0x5dde:
    case 0x5ddf:
    case 0x5de0:
    case 0x5de1:
    case 0x5de2:
    case 0x5de3:
    case 0x5de4:
    case 0x5de5:
    case 0x5de6:
    case 0x5de7:
    case 0x5de8:
    case 0x5de9:
    case 0x5dea:
    case 0x5deb:
    case MESS_SHARED_5DEC:
      st::fn_00401BE0((AiEventClassTy *)&local_10->vtable_at_1c,message);
      break;
    case MESS_SHARED_5DD5:
      st::fn_00401BE0((AiEventClassTy *)&local_10->vtable_at_1c,message);
      if (this_00->field_0645 + 10 <= this_00->field_06FE) {
        this_00->field_0645 = this_00->field_06FE;
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        st::fn_004010DC(this_00,CONCAT22(extraout_var,(message->arg1).words.low));
        st::fn_00402086(this_00,(int)message);
      }
    }
  }
  st::fn_006E5FD0(this_00,message);
  g_currentExceptionFrame = local_b0.previous;
  return 0;
}


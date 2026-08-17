#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/mpopup.cpp

// 0052D0A0 PopUpTy::OutProc
#line 4 "decomp/ST.exe/functions/0052D0A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::OutProc */

void __thiscall
st::fn_0052D0A0(PopUpTy *this,int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                undefined4 param_6,undefined4 param_7,int param_8)

{
  byte bVar2;
  int errorCode;
  int iVar3;
  byte bVar4;
  InternalExceptionFrame local_54;
  AnonShape_0052D0A0_90C708AF *local_10;
  uint local_c;
  uint local_8;

  if (DAT_00807342 != 0) {
    local_10 = (AnonShape_0052D0A0_90C708AF *)param_8;
    local_54.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_54;
    errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
    if (errorCode == 0) {
      if ((local_10 != nullptr) &&
         (local_10->field_0090 != nullptr)) {
        bVar4 = 0xff;
        bVar2 = 0;
        local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(0xff));
        local_8 = local_8 & 0xffffff00;
        do {
          if (local_10->entries[local_8 & 0xff] == param_2) {
            local_c = STReplaceLowByte((uint32_t)(local_c), (uint8_t)(bVar2));
            bVar4 = bVar2;
            break;
          }
          bVar2 = bVar2 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar2));
        } while (bVar2 < 0xf);
        if (bVar4 != 0xff) {
          st::fn_006B4680
                    (param_1,param_4,param_5,local_10->field_0090,nullptr,0,
                     (local_c & 0xff) * 0x13,local_10->entries[local_c & 0xff],0x13,0x1000089);
        }
      }
      g_currentExceptionFrame = local_54.previous;
      return;
    }
    g_currentExceptionFrame = local_54.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x22,0,errorCode,
                               st::mutable_c_string("%s"),"PopUpTy::OutProc");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x22);
  }
  return;
}

// 0052D200 PopUpTy::OutStr
#line 4 "decomp/ST.exe/functions/0052D200/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::OutStr
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:1: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0052D233 MOV ESI,dword ptr [EBP + 0x8];
   first-use mask

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0052D200(PopUpTy *this,byte param_1)

{
  uint *puVar1;
  uint uVar3;
  PopUpTy *pPVar4;
  int errorCode;
  int iVar5;
  char *resourceString;
  InternalExceptionFrame local_4c;
  PopUpTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pPVar4 = local_8;
  if (errorCode == 0) {
    uVar3 = (uint)param_1;
    st::fn_00710A90(local_8->field_0094,(int)local_8->field_0090,0,0,uVar3 * 0x13,
                     *(int *)(local_8->field_0090 + 2),0x13);
    puVar1 = pPVar4->field_0098;
    if ((int)uVar3 < (int)puVar1[2]) {
      resourceString = *(char **)(puVar1[5] + uVar3 * 4);
    }
    else {
      resourceString = nullptr;
    }
    st::fn_007119C0(pPVar4->field_0094,resourceString,0,0,0);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x2d,0,errorCode,st::mutable_c_string("%s")
                             ,"PopUpTy::OutStr");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x2d);
  return;
}

// 0052D370 PopUpTy::AddStr
#line 4 "decomp/ST.exe/functions/0052D370/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::AddStr
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:2: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=0052D3DB MOV ECX,dword ptr [EBP + 0xc];
   first-use mask */

void __thiscall st::fn_0052D370(PopUpTy *this,char *param_1,byte param_2)

{
  char cVar1;
  PopUpTy *this_00;
  int iVar3;
  DArrayTy *pDVar4;
  DArrayTy *pDVar5;
  char *pcVar6;
  int uVar8;
  int iVar7;
  uint uVar9;
  InternalExceptionFrame local_58;
  PopUpTy *local_14;
  DArrayTy *local_10;
  DArrayTy *local_c;
  uint *local_8;

  local_c = nullptr;
  local_10 = nullptr;
  local_8 = nullptr;
  if (param_1 != nullptr) {
    local_58.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_58;
    local_14 = this;
    iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
    if (iVar3 == 0) {
      uVar9 = 0xffffffff;
      pcVar6 = param_1;
      do {
        if (uVar9 == 0) break;
        uVar9 = uVar9 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
      local_8 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(~uVar9 + 4));
      this_00 = local_14;
      pDVar4 = local_c;
      if (local_8 != nullptr) {
        /* ST_CALLSITE[0052D3F1]: CALL dword ptr [0x0085bde8] */
        st::external_00000080((LPSTR)local_8,st::mutable_c_string("%s%1d%s"),&DAT_007c6ff0,param_2,param_1);
        pDVar4 = (DArrayTy *)st::fn_00712F80(this_00->field_0094,local_8);
        local_c = pDVar4;
        st::fn_006AB060(&local_8);
      }
      pDVar5 = local_10;
      if (pDVar4 != nullptr) {
        pDVar5 = (DArrayTy *)
                 st::fn_007121F0(this_00->field_0094,&pDVar4->flags,st::mutable_c_string(" ,.;:!?/\\()[]{}"),
                                   (&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0,0xffffffff,1);
        local_10 = pDVar5;
        st::fn_007129D0(this_00->field_0094,(uint *)pDVar5,(uint *)pDVar5);
        st::fn_006B5570(pDVar4);
      }
      if (pDVar5 != nullptr) {
        iVar3 = 0;
        if (0 < (int)pDVar5->elementSize) {
          if ((int)pDVar5->elementSize < 1) {
            pcVar6 = nullptr;
            goto LAB_0052d48d;
          }
          do {
            pcVar6 = *(char **)(pDVar5->growCapacity + iVar3 * 4);
LAB_0052d48d:
            st::fn_006B5AA0((DArrayTy *)this_00->field_0098,pcVar6);
            if ((byte)this_00->field_009C < DAT_00807346) {
              this_00->field_009C = this_00->field_009C + 1;
            }
            if (((byte)this_00->field_009C <= DAT_00807346) &&
               /* ST_CALLSITE[0052D4CB]: CALL 0x004041b5; direct=004041B5 PopUpTy::OutStr */
               (st::fn_004041B5(this_00,this_00->field_009C - 1), DAT_00807342 != 0)) {
              if ((int)((byte)this_00->field_009C - 1) < (int)this_00->field_0098[2]) {
                pcVar6 = *(char **)((this_00->field_0098[5] - 4) +
                                   (uint)(byte)this_00->field_009C * 4);
              }
              else {
                pcVar6 = nullptr;
              }
              uVar8 = st::fn_00711110(this_00->field_0094,pcVar6);
              if ((int)*(uint *)(this_00->field_0090 + 2) <= uVar8) {
                uVar8 = *(uint *)(this_00->field_0090 + 2);
              }
              this_00->field_0054[(byte)this_00->field_009C - 1] = uVar8;
              st::fn_006B2800(g_ddxContext_008075A8,
                           this_00->field_0054[(byte)this_00->field_009C - 0x10],uVar8,0x13);
              st::fn_006B3640
                        ((int *)g_ddxContext_008075A8,
                         this_00->field_0054[(byte)this_00->field_009C - 0x10],0xffffffff,0xd,
                         (uint)(byte)this_00->field_009C * 0x13 + 0xb);
              st::fn_006B3430
                        ((int *)g_ddxContext_008075A8,
                         this_00->field_0054[(byte)this_00->field_009C - 0x10]);
            }
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)pDVar5->elementSize);
        }
        st::fn_006B5570(pDVar5);
      }
      g_currentExceptionFrame = local_58.previous;
      return;
    }
    g_currentExceptionFrame = local_58.previous;
    iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x61,0,iVar3,st::mutable_c_string("%s"),
                               "PopUpTy::AddStr");
    if (iVar7 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x61);
  }
  return;
}

// 0052D690 PopUpTy::ChangeNumStr
#line 4 "decomp/ST.exe/functions/0052D690/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::ChangeNumStr */

void __thiscall st::fn_0052D690(PopUpTy *this)

{
  ushort *puVar1;
  uint *puVar2;
  PopUpTy *this_00;
  byte bVar4;
  int iVar5;
  undefined4 *puVar5;
  char *resourceString;
  int uVar9;
  int iVar6;
  int iVar8;
  uint uVar7;
  int iVar9;
  uint uVar10;
  uint *puVar11;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar5 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar8 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x7e,0,iVar5,st::mutable_c_string("%s"),
                               "PopUpTy::ChangeNumStr");
    if (iVar8 == 0) {
      st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x7e);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  puVar1 = local_18->field_0090;
  uVar10 = *(uint *)(puVar1 + 10);
  if (uVar10 == 0) {
    uVar10 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
             *(int *)(puVar1 + 4);
  }
  puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
  for (uVar7 = uVar10 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
    *puVar5 = 0x89898989;
    puVar5 = puVar5 + 1;
  }
  local_8 = local_8 & 0xffffff00;
  local_c = 0x1e;
  for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
    *(undefined1 *)puVar5 = 0x89;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
  }
  local_10 = -0x18 - (int)this_00;
  local_14 = 0;
  puVar11 = &this_00->field_0018;
  do {
    iVar6 = local_14;
    if ((DAT_00807342 == 0) || (DAT_00807346 <= (byte)local_8)) {
LAB_0052d7d4:
      puVar11[0xf] = 0;
      st::fn_006B2800(g_ddxContext_008075A8,*puVar11,0,0x13);
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar11);
    }
    else {
      puVar2 = this_00->field_0098;
      if (local_14 < (int)puVar2[2]) {
        iVar9 = *(int *)(puVar2[5] + local_10 + (int)puVar11);
      }
      else {
        iVar9 = 0;
      }
      if (iVar9 == 0) goto LAB_0052d7d4;
      if (local_14 < (int)puVar2[2]) {
        resourceString = *(char **)(puVar2[5] + local_10 + (int)puVar11);
      }
      else {
        resourceString = nullptr;
      }
      uVar9 = st::fn_00711110(this_00->field_0094,resourceString);
      if ((int)*(uint *)(this_00->field_0090 + 2) <= uVar9) {
        uVar9 = *(uint *)(this_00->field_0090 + 2);
      }
      puVar11[0xf] = uVar9;
      st::fn_006B2800(g_ddxContext_008075A8,*puVar11,uVar9,0x13);
      st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar11,0xffffffff,0xd,local_c);
      st::fn_006B3430((int *)g_ddxContext_008075A8,*puVar11);
    }
    bVar4 = (byte)local_8 + 1;
    local_14 = iVar6 + 1;
    puVar11 = puVar11 + 1;
    local_c = local_c + 0x13;
    local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
    if (0xe < bVar4) {
      bVar4 = DAT_00807346;
      if ((int)this_00->field_0098[2] < (int)(uint)DAT_00807346) {
        bVar4 = (byte)this_00->field_0098[2];
      }
      this_00->field_009C = bVar4;
      local_8 = (uint)STPiece<1,3>(local_8) << 8;
      if (DAT_00807346 != 0) {
        do {
          if ((int)(local_8 & 0xff) < (int)this_00->field_0098[2]) {
            iVar6 = *(int *)(this_00->field_0098[5] + (local_8 & 0xff) * 4);
          }
          else {
            iVar6 = 0;
          }
          if (iVar6 != 0) {
            /* ST_CALLSITE[0052D870]: CALL 0x004041b5; direct=004041B5 PopUpTy::OutStr */
            st::fn_004041B5(this_00,(byte)local_8);
          }
          bVar4 = (byte)local_8 + 1;
          local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar4));
        } while (bVar4 < DAT_00807346);
      }
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

// 0052D980 PopUpTy::ChangeState
#line 4 "decomp/ST.exe/functions/0052D980/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::ChangeState */

void __thiscall st::fn_0052D980(PopUpTy *this)

{
  uint *puVar1;
  PopUpTy *pPVar3;
  int iVar5;
  int iVar4;
  char *resourceString;
  uint uVar6;
  int iVar6;
  int iVar7;
  uint *puVar8;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  int local_10;
  uint local_c;
  byte local_5;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  iVar4 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  pPVar3 = local_18;
  if (iVar4 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x95,0,iVar4,st::mutable_c_string("%s"),
                               "PopUpTy::ChangeState");
    if (iVar6 == 0) {
      st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x95);
      return;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_10 = -0x18 - (int)local_18;
  local_5 = 0;
  local_14 = 0;
  local_c = 0x1e;
  puVar8 = &local_18->field_0018;
  do {
    iVar5 = local_14;
    if ((DAT_00807342 == 0) || ((byte)pPVar3->field_009C <= local_5)) {
LAB_0052da81:
      puVar8[0xf] = 0;
      st::fn_006B2800(g_ddxContext_008075A8,*puVar8,0,0x13);
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar8);
    }
    else {
      puVar1 = pPVar3->field_0098;
      if (local_14 < (int)puVar1[2]) {
        iVar7 = *(int *)(puVar1[5] + local_10 + (int)puVar8);
      }
      else {
        iVar7 = 0;
      }
      if (iVar7 == 0) goto LAB_0052da81;
      if (local_14 < (int)puVar1[2]) {
        resourceString = *(char **)(puVar1[5] + local_10 + (int)puVar8);
      }
      else {
        resourceString = nullptr;
      }
      uVar6 = st::fn_00711110(pPVar3->field_0094,resourceString);
      if ((int)*(uint *)(pPVar3->field_0090 + 2) <= (int)uVar6) {
        uVar6 = *(uint *)(pPVar3->field_0090 + 2);
      }
      puVar8[0xf] = uVar6;
      st::fn_006B2800(g_ddxContext_008075A8,*puVar8,uVar6,0x13);
      st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar8,0xffffffff,0xd,local_c);
      st::fn_006B3430((int *)g_ddxContext_008075A8,*puVar8);
    }
    local_5 = local_5 + 1;
    local_14 = iVar5 + 1;
    puVar8 = puVar8 + 1;
    local_c = local_c + 0x13;
    if (0xe < local_5) {
      g_currentExceptionFrame = local_5c.previous;
      return;
    }
  } while( true );
}

// 0052DB90 PopUpTy::Clear
#line 4 "decomp/ST.exe/functions/0052DB90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::Clear */

void __thiscall st::fn_0052DB90(PopUpTy *this)

{
  ushort *puVar1;
  PopUpTy *pPVar3;
  int iVar4;
  DArrayTy *pDVar4;
  undefined4 *puVar5;
  int iVar9;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  int iVar10;
  InternalExceptionFrame local_4c;
  PopUpTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar4 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pPVar3 = local_8;
  if (iVar4 == 0) {
    if (local_8->field_009C != '\0') {
      if ((DArrayTy *)local_8->field_0098 != nullptr) {
        st::fn_006B5570((DArrayTy *)local_8->field_0098);
      }
      pDVar4 = st::fn_006B54F0(nullptr,10,10);
      pPVar3->field_0098 = &pDVar4->flags;
      puVar1 = pPVar3->field_0090;
      uVar7 = *(uint *)(puVar1 + 10);
      if (uVar7 == 0) {
        uVar7 = ((uint)puVar1[7] * *(int *)(puVar1 + 2) + 0x1f >> 3 & 0x1ffffffc) *
                *(int *)(puVar1 + 4);
      }
      puVar5 = (undefined4 *)st::fn_006B4FA0((int *)puVar1);
      for (uVar6 = uVar7 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *puVar5 = 0x89898989;
        puVar5 = puVar5 + 1;
      }
      puVar8 = &pPVar3->field_0018;
      for (uVar7 = uVar7 & 3; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(undefined1 *)puVar5 = 0x89;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
      }
      iVar10 = 0xf;
      do {
        puVar8[0xf] = 0;
        st::fn_006B2800(g_ddxContext_008075A8,*puVar8,0,0x13);
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar8);
        puVar8 = puVar8 + 1;
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      pPVar3->field_009C = 0;
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0xa8,0,iVar4,st::mutable_c_string("%s"),
                             "PopUpTy::Clear");
  if (iVar9 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar4,0,st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0xa8);
  return;
}

// 0052DD20 PopUpTy::GetMessage
#line 4 "decomp/ST.exe/functions/0052DD20/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\mpopup.cpp
   PopUpTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=0052DD20; family_names=PopUpTy::GetMessage; ret4=2;
   direct_offsets={10:1,14:4,18:4,1c:0} */

int __thiscall st::fn_0052DD20(PopUpTy *this,STMessage *message)

{
  RecoveredSourceFamily_dibcopy *pRVar1;
  uint *puVar2;
  PopUpTy *this_00;
  int local_EAX_36;
  ccFntTy *pcVar4;
  int uVar12;
  ushort *puVar5;
  undefined4 *puVar6;
  DArrayTy *pDVar7;
  DWORD DVar8;
  int iVar9;
  char *resourceString;
  int local_EAX_1044;
  int iVar4;
  int iVar10;
  int iVar11;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  InternalExceptionFrame local_5c;
  PopUpTy *local_18;
  int local_14;
  uint local_10;
  int local_c;
  byte local_5;

  local_5c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_5c;
  local_18 = this;
  local_EAX_36 = st::fn_0072D7F0(local_5c.jumpBuffer,0);
  this_00 = local_18;
  if (local_EAX_36 != 0) {
    g_currentExceptionFrame = local_5c.previous;
    iVar10 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x100,0,local_EAX_36,
                                st::mutable_c_string("%s"),"PopUpTy::GetMessage");
    if (iVar10 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_36,0,st::mutable_c_string("E:\\__titans\\Andrey\\mpopup.cpp"),0x100);
    return 0xffff;
  }
  switch(message->id) {
  case MESS_ID_NONE:
    uVar14 = (uint)DAT_00807347;
    DVar8 = st::fn_006E51B0((STAppC *)&DAT_00807620);
    if (((uVar14 * -1000 + 3000) * (3 - uVar14) < DVar8 - this_00->field_009D) ||
       ((int)(uint)DAT_00807346 < (int)this_00->field_0098[2])) {
      DVar8 = st::fn_006E51B0((STAppC *)&DAT_00807620);
      this_00->field_009D = DVar8;
      if (this_00->field_009C != '\0') {
        st::fn_006B7830((AnonShape_006B7830_769CA2DF *)this_00->field_0098,0);
        pRVar1 = (RecoveredSourceFamily_dibcopy *)this_00->field_0090;
        st::fn_006B55F0
                  (pRVar1,0,0,0,(byte *)pRVar1,0,0,0x13,pRVar1->field_0004,
                   (uint)(byte)this_00->field_009C * 0x13 + -0x13);
        st::fn_006B4170((RecoveredSourceFamily_dibcopy *)this_00->field_0090,0,0,
                     (uint)(byte)this_00->field_009C * 0x13 + -0x13,
                     ((RecoveredSourceFamily_dibcopy *)this_00->field_0090)->field_0004,0x13,0x89);
        puVar15 = this_00->field_0098;
        if ((int)puVar15[2] <= (int)(uint)DAT_00807346) {
          this_00->field_009C = (char)puVar15[2];
        }
        if ((int)(uint)DAT_00807346 <= (int)puVar15[2]) {
          /* ST_CALLSITE[0052E0B7]: CALL 0x004041b5; direct=004041B5 PopUpTy::OutStr */
          st::fn_004041B5(this_00,DAT_00807346 - 1);
        }
        local_5 = 0;
        local_c = -0x18 - (int)this_00;
        local_14 = 0;
        local_10 = 0x1e;
        puVar15 = &this_00->field_0018;
        do {
          iVar11 = local_14;
          if ((DAT_00807342 == 0) || ((byte)this_00->field_009C <= local_5)) {
LAB_0052e184:
            puVar15[0xf] = 0;
            st::fn_006B2800(g_ddxContext_008075A8,*puVar15,0,0x13);
            st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar15);
          }
          else {
            puVar2 = this_00->field_0098;
            if (local_14 < (int)puVar2[2]) {
              iVar9 = *(int *)(puVar2[5] + local_c + (int)puVar15);
            }
            else {
              iVar9 = 0;
            }
            if (iVar9 == 0) goto LAB_0052e184;
            if (local_14 < (int)puVar2[2]) {
              resourceString = *(char **)(puVar2[5] + local_c + (int)puVar15);
            }
            else {
              resourceString = nullptr;
            }
            local_EAX_1044 = st::fn_00711110(this_00->field_0094,resourceString);
            if ((int)*(uint *)(this_00->field_0090 + 2) <= local_EAX_1044) {
              local_EAX_1044 = *(uint *)(this_00->field_0090 + 2);
            }
            puVar15[0xf] = local_EAX_1044;
            st::fn_006B2800(g_ddxContext_008075A8,*puVar15,local_EAX_1044,0x13);
            st::fn_006B3640
                      ((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0xd,local_10);
            st::fn_006B3430((int *)g_ddxContext_008075A8,*puVar15);
          }
          local_5 = local_5 + 1;
          local_14 = iVar11 + 1;
          puVar15 = puVar15 + 1;
          local_10 = local_10 + 0x13;
        } while (local_5 < 0xf);
      }
    }
    break;
  case MESS_ID_CREATE:
    pcVar4 = (ccFntTy *)st::fn_004039EF(PTR_0080679c,nullptr,DAT_00807dd9);
    this_00->field_0094 = pcVar4;
    pcVar4->field_007E = 1;
    *(undefined2 *)&pcVar4->field_0x9e = 0;
    pcVar4->field_0x9e = DAT_007c6ff0;
    iVar11 = 1;
    puVar5 = PTR_0080679c + 0x14;
    uVar12 = st::fn_006B4FE0((int)PTR_0080679c);
    puVar5 = (ushort *)
             st::fn_006B50C0((&DAT_00807570)[(_DAT_00807348 & 0xff) * 4],0x11d,(uint)PTR_0080679c[7],
                          uVar12,(undefined4 *)puVar5,iVar11);
    this_00->field_0090 = puVar5;
    uVar14 = *(uint *)(puVar5 + 10);
    if (uVar14 == 0) {
      uVar14 = ((uint)puVar5[7] * *(int *)(puVar5 + 2) + 0x1f >> 3 & 0x1ffffffc) *
               *(int *)(puVar5 + 4);
    }
    puVar6 = (undefined4 *)st::fn_006B4FA0((int *)puVar5);
    for (uVar13 = uVar14 >> 2; uVar13 != 0; uVar13 = uVar13 - 1) {
      *puVar6 = 0x89898989;
      puVar6 = puVar6 + 1;
    }
    uVar13 = 0x1e;
    local_10 = 0xf;
    for (uVar14 = uVar14 & 3; uVar14 != 0; uVar14 = uVar14 - 1) {
      *(undefined1 *)puVar6 = 0x89;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    puVar15 = &this_00->field_0018;
    do {
      st::fn_006B2330(g_ddxContext_008075A8,puVar15,8,0x405c22,puVar15[0xf],0x13,(ushort *)this_00);
      st::fn_006B1BD0((AnonShape_006B1BD0_7C890E99 *)g_ddxContext_008075A8,*puVar15);
      st::fn_006B3640((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0xd,uVar13);
      st::fn_006B3AF0((int *)g_ddxContext_008075A8,*puVar15);
      puVar15 = puVar15 + 1;
      uVar13 = uVar13 + 0x13;
      local_10 = local_10 - 1;
    } while (local_10 != 0);
    pDVar7 = st::fn_006B54F0(nullptr,10,10);
    this_00->field_0098 = &pDVar7->flags;
    DVar8 = st::fn_006E51B0((STAppC *)&DAT_00807620);
    this_00->field_009D = DVar8;
    g_popUp_008016D8 = this_00;
    break;
  case MESS_SHARED_0003:
    g_popUp_008016D8 = nullptr;
    puVar15 = &local_18->field_0018;
    iVar11 = 0xf;
    do {
      if (*puVar15 != 0xffffffff) {
        st::fn_006B3BB0((int *)g_ddxContext_008075A8,*puVar15);
        *puVar15 = 0xffffffff;
      }
      puVar15 = puVar15 + 1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
    if (this_00->field_0090 != nullptr) {
      st::fn_006AB060(&this_00->field_0090);
    }
    if (this_00->field_0094 != nullptr) {
      st::fn_00710560((uint *)this_00->field_0094);
      this_00->field_0094 = nullptr;
    }
    if ((DArrayTy *)this_00->field_0098 != nullptr) {
      st::fn_006B5570((DArrayTy *)this_00->field_0098);
      this_00->field_0098 = nullptr;
    }
    break;
  case MESS_SHARED_0005:
    local_10 = 0;
    iVar11 = -0x18 - (int)local_18;
    uVar14 = 0x1e;
    puVar15 = &local_18->field_0018;
    local_14 = 0xf;
    local_c = iVar11;
    do {
      if (*puVar15 != 0xffffffff) {
        if ((int)local_10 < (int)this_00->field_0098[2]) {
          iVar9 = *(int *)(this_00->field_0098[5] + iVar11 + (int)puVar15);
        }
        else {
          iVar9 = 0;
        }
        if (iVar9 != 0) {
          st::fn_006B3640
                    ((int *)g_ddxContext_008075A8,*puVar15,0xffffffff,0xd,uVar14);
          iVar11 = local_c;
        }
      }
      local_10 = local_10 + 1;
      puVar15 = puVar15 + 1;
      uVar14 = uVar14 + 0x13;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
    local_14 = 0;
  }
  g_currentExceptionFrame = local_5c.previous;
  iVar4 = st::fn_006E5FD0(this_00,message);
  return iVar4;
}


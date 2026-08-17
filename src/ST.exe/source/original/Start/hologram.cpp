#include "st/generated.hpp"
// Generated translation unit: source/original/Start/hologram.cpp

// 005AA6A0 HoloTy::OutHoloProc
#line 4 "decomp/ST.exe/functions/005AA6A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::OutHoloProc */

void __thiscall st::fn_005AA6A0(HoloTy *this,uint param_1)

{
  char cVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  AnonShape_005AA6A0_963F03BF *in_stack_00000020;
  BITMAPINFO *pBVar7;
  int iVar8;
  DWORD DVar9;
  DWORD DVar10;
  InternalExceptionFrame local_50;
  int local_c;
  AnonShape_005AA6A0_963F03BF *local_8;

  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  local_8 = in_stack_00000020;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  if (((in_stack_00000020 != nullptr) &&
      (in_stack_00000020->field_0007 != nullptr)) && (in_stack_00000020->field_000B != 0))
  {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    if (iVar3 == 0) {
      uVar6 = 0;
      if (local_8->field_000F != 0) {
        do {
          local_c = *(int *)(local_8->field_000B +
                            (local_8->field_0013 * uVar6 + local_8->field_0017) * 4);
          if (local_c < local_8->field_001F) {
            cVar1 = local_8->field_0001;
            switch(cVar1) {
            case '\x01':
            case '\x03':
              DVar9 = local_8->field_001B;
              DVar10 = local_8->field_002F;
              iVar8 = DVar9 * uVar6;
              pBVar7 = local_8->field_0007;
              iVar5 = 0;
              iVar3 = ((-(uint)(cVar1 != '\x01') & 0xfffffffe) + 1) * local_c + local_8->field_0027;
              iVar4 = st::machine_word_boundary_cast<int>(local_8->field_0023 + iVar8);
              break;
            case '\x02':
            case '\x04':
              DVar10 = local_8->field_001B;
              iVar5 = DVar10 * uVar6;
              DVar9 = local_8->field_002B;
              pBVar7 = local_8->field_0007;
              iVar8 = 0;
              iVar3 = st::machine_word_boundary_cast<int>(local_8->field_0027 + iVar5);
              iVar4 = ((-(uint)(cVar1 != '\x02') & 0xfffffffe) + 1) * local_c + local_8->field_0023;
              break;
            default:
              goto switchD_005aa738_default;
            }
            st::fn_006B42D0
                      ((DDXContext *)param_1,iVar4,iVar3,pBVar7,nullptr,iVar8,iVar5,DVar9,DVar10
                      );
          }
switchD_005aa738_default:
          uVar6 = uVar6 + 1;
        } while (uVar6 < (uint)local_8->field_000F);
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\hologram.cpp"),0x1e,0,iVar3,st::mutable_c_string("%s"),
                               "HoloTy::OutHoloProc");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\hologram.cpp"),0x1e);
  }
  return;
}

// 005AA880 HoloTy::CalcHologram
#line 4 "decomp/ST.exe/functions/005AA880/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::CalcHologram
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:5: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005AA8CD MOV EDI,dword ptr [EBP + 0x18];
   first-use mask
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:6: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005AA918 MOV EDX,dword ptr [EBP + 0x1c];
   first-use mask */

undefined4 * __thiscall
st::fn_005AA880
          (HoloTy *this,uint *param_1,uint param_2,int param_3,int param_4,byte param_5,byte param_6
          )

{
  int local_EAX_32;
  uint uVar2;
  int iVar3;
  int iVar2;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar10;
  InternalExceptionFrame local_78;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  undefined4 *local_1c;
  uint local_18;
  int local_14;
  int local_10;
  undefined4 *local_c;
  int local_8;

  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_EAX_32 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  if (local_EAX_32 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\hologram.cpp"),99,0,local_EAX_32,
                               st::mutable_c_string("%s"),"HoloTy::CalcHologram");
    if (iVar2 == 0) {
      return nullptr;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  uVar2 = param_3 / param_4 + (uint)(param_3 % param_4 != 0);
  uVar6 = (uint)param_5;
  *param_1 = uVar2;
  uVar7 = uVar2 + 1 >> 1;
  if (uVar7 < uVar6) {
    return nullptr;
  }
  local_34 = uVar7;
  local_2c = uVar6;
  local_1c = st::pointer_boundary_cast<undefined4 *>(st::fn_006AAC10(uVar6 * uVar2 * 4));
  local_c = local_1c;
  if ((local_1c != nullptr) && (local_14 = 0, uVar7 != 0)) {
    local_30 = (uint)param_6;
    local_20 = 0;
    local_10 = 0;
    local_28 = uVar7;
    do {
      local_18 = local_28 - 1;
      iVar3 = 0;
      iVar5 = -1;
      if (local_30 == 0) {
        local_8 = 0;
        if (uVar7 != 0 && -1 < (int)(uVar7 * 2)) {
          local_24 = 0;
          do {
            iVar3 = (local_24 / 2) / (int)uVar7;
            if (iVar3 != iVar5) {
              local_28 = uVar7 * 2 - local_14;
              if (local_8 < (int)local_28) {
                fsin(((float10)local_8 * (float10)_DAT_0079c040) / (float10)(int)local_28);
              }
              lVar10 = st::fn_0072E288();
              local_c[local_10 + iVar3] = (int)lVar10;
              iVar5 = iVar3;
            }
            local_24 = local_24 + uVar6;
            local_8 = local_8 + 1;
          } while (local_8 < (int)(uVar7 * 2));
        }
      }
      else if (local_30 == 1) {
        if (0 < (int)(uVar7 * 2)) {
          local_24 = 0;
          local_8 = iVar5;
          do {
            iVar5 = (local_24 / 2) / (int)uVar7;
            if (iVar5 != local_8) {
              local_28 = iVar3 - local_18;
              if ((iVar3 < (int)local_18) || ((int)(uVar7 + local_18) <= iVar3)) {
                local_28 = (iVar3 < (int)local_18) - 1 & param_2;
              }
              else {
                fsin(((float10)(int)local_28 * (float10)_DAT_0079c040) / (float10)(int)local_34);
              }
              local_8 = iVar5;
              lVar10 = st::fn_0072E288();
              local_c[local_10 + local_8] = (int)lVar10;
            }
            iVar3 = iVar3 + 1;
            local_24 = local_24 + uVar6;
          } while (iVar3 < (int)(uVar7 * 2));
        }
      }
      else if (local_30 == 2) {
        local_8 = 0;
        local_28 = local_28 + 10;
        local_24 = 0;
        do {
          iVar3 = local_24 / (int)uVar7;
          if (iVar3 != iVar5) {
            if (local_8 < (int)local_28) {
              fsin(((float10)local_8 * (float10)_DAT_0079c040) / (float10)(int)local_28);
            }
            lVar10 = st::fn_0072E288();
            local_c[local_10 + iVar3] = (int)lVar10;
            iVar5 = iVar3;
          }
          local_8 = local_8 + 1;
          local_24 = local_24 + uVar6;
        } while (local_8 < (int)uVar7);
      }
      uVar2 = *param_1;
      if ((uVar2 & 1) == 0) {
        iVar5 = (uVar2 - local_20) + -1;
LAB_005aab34:
        puVar4 = local_1c;
        puVar8 = local_c + iVar5 * uVar6;
        for (; uVar9 = local_2c, uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar8 = *puVar4;
          puVar4 = puVar4 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      else {
        uVar9 = uVar6;
        if (local_14 < (int)(uVar7 - 1)) {
          iVar5 = (uVar2 - local_20) + -2;
          goto LAB_005aab34;
        }
      }
      local_14 = local_14 + 1;
      local_10 = local_10 + uVar9 * 2;
      local_1c = local_1c + uVar9 * 2;
      local_20 = local_20 + 2;
      uVar6 = uVar9;
      local_28 = local_18;
    } while (local_14 < (int)uVar7);
  }
  g_currentExceptionFrame = local_78.previous;
  return local_c;
}

// 005AACB0 HoloTy::Init
#line 4 "decomp/ST.exe/functions/005AACB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::Init

   [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/HoloTy_Init_param_1Enum. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4

   [STSwitchEnumApplier] Switch target field_0001 uses
   /SubmarineTitans/Recovered/Enums/HoloTy_field_0001State. Cases:
   CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4
   [STAbiConsistencyApplier] stack_parameter_width target=parameter:6: parameter=/byte Evidence:
   entry-use width=/byte; unmasked_dword_reads=0; evidence=005AAD6A MOV ECX,dword ptr [EBP + 0x1c];
   first-use mask */

uint __thiscall
st::fn_005AACB0(HoloTy *this,HoloTy_Init_param_1Enum param_1,int param_2,int param_3,int param_4,
            int param_5,byte param_6,char param_7,uint param_8)

{
  undefined1 *puVar1;
  HoloTy *this_00;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  InternalExceptionFrame local_58;
  HoloTy *local_14;
  uint local_10;
  uint local_c;
  uint local_8;

  local_10 = 0;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_14 = this;
  iVar3 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  this_00 = local_14;
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_58.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\hologram.cpp"),0x9a,0,iVar3,st::mutable_c_string("%s"),
                               "HoloTy::Init");
    if (iVar3 == 0) {
      this_00->field_0000 = (char)local_10;
      return local_10 & 0xff;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  local_14->field_0007 = (void *)param_4;
  if (param_4 != 0) {
    local_14->field_0023 = param_2;
    local_14->field_0027 = param_3;
    local_14->field_0001 = param_1;
    local_14->field_002B = *(undefined4 *)(param_4 + 4);
    uVar5 = *(uint *)(param_4 + 8);
    local_14->field_002F = uVar5;
    switch(param_1) {
    case CASE_1:
      local_c = local_14->field_002B;
      local_8 = DAT_00806734 - param_3;
      break;
    case CASE_2:
      local_8 = g_nWidth_00806730 - param_2;
      local_c = uVar5;
      break;
    case CASE_3:
      local_8 = uVar5 + param_3;
      local_c = local_14->field_002B;
      break;
    case CASE_4:
      local_8 = st::machine_word_boundary_cast<uint>(local_14->field_002B + param_2);
      local_c = uVar5;
    }
    local_14->field_0013 = (uint)param_6;
    *(uint *)&local_14->field_0x1f = local_8;
    /* ST_CALLSITE[005AAD8D]: CALL 0x00403422; direct=00403422 HoloTy::CalcHologram */
    puVar4 = st::fn_00403422(local_14,&local_14->field_000F,local_8,local_c,param_5,param_6,
                          (byte)param_8);
    this_00->field_000B = puVar4;
    if (puVar4 != nullptr) {
      puVar1 = &this_00->field_0x3;
      st::fn_006B2330(g_ddxContext_008075A8,(uint *)puVar1,10,0x402842,0,0,(ushort *)this_00);
      uVar5 = *(uint *)puVar1;
      if (-1 < (int)uVar5) {
        switch(this_00->field_0001) {
        case CASE_1:
        case CASE_3:
          st::fn_006B2800(g_ddxContext_008075A8,uVar5,this_00->field_002B,DAT_00806734);
          uVar5 = this_00->field_0023;
          uVar6 = 0;
          break;
        case CASE_2:
        case CASE_4:
          st::fn_006B2800(g_ddxContext_008075A8,uVar5,g_nWidth_00806730,this_00->field_002F);
          uVar6 = this_00->field_0027;
          uVar5 = 0;
          break;
        default:
          goto switchD_005aadcd_default;
        }
        st::fn_006B3640
                  ((int *)g_ddxContext_008075A8,*(uint *)puVar1,0xffffffff,uVar5,uVar6);
switchD_005aadcd_default:
        st::fn_006B3AF0((int *)g_ddxContext_008075A8,*(uint *)puVar1);
        this_00->field_0002 = param_7;
        if (param_7 == '\0') {
          this_00->field_0017 = -1;
          g_currentExceptionFrame = local_58.previous;
          this_00->field_0000 = 1;
          return 1;
        }
        this_00->field_0017 = this_00->field_0013;
        g_currentExceptionFrame = local_58.previous;
        this_00->field_0000 = 1;
        return 1;
      }
    }
    /* ST_CALLSITE[005AAE8B]: CALL 0x0040128a; direct=0040128A HoloTy::Done */
    st::fn_0040128A(this_00);
  }
  g_currentExceptionFrame = local_58.previous;
  this_00->field_0000 = (char)local_10;
  return local_10 & 0xff;
}

// 005AAFB0 HoloTy::Done
#line 4 "decomp/ST.exe/functions/005AAFB0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::Done

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=70, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_005AAFB0(HoloTy *this)

{
  HoloTy *pHVar2;
  int errorCode;
  int iVar3;
  InternalExceptionFrame local_4c;
  HoloTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pHVar2 = local_8;
  if (errorCode == 0) {
    if (-1 < (int)*(uint *)&local_8->field_0x3) {
      st::fn_006B3BB0((int *)g_ddxContext_008075A8,*(uint *)&local_8->field_0x3);
    }
    *(undefined4 *)&pHVar2->field_0x3 = 0xffffffff;
    if (pHVar2->field_000B != nullptr) {
      st::fn_006AB060(&pHVar2->field_000B);
    }
    if (pHVar2->field_0007 != nullptr) {
      st::fn_006AB060(&pHVar2->field_0007);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\hologram.cpp"),0xaa,0,errorCode,
                             st::mutable_c_string("%s"),"HoloTy::Done");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Start\\hologram.cpp"),0xaa);
  return;
}

// 005AB0A0 HoloTy::NextFas
#line 4 "decomp/ST.exe/functions/005AB0A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Start\hologram.cpp
   HoloTy::NextFas */

undefined4 __thiscall st::fn_005AB0A0(HoloTy *this)

{
  uint uVar1;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  InternalExceptionFrame local_50;
  HoloTy *local_c;
  undefined4 local_8;

  local_8 = 0;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (iVar3 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Start\\hologram.cpp"),0xc1,0,iVar3,st::mutable_c_string("%s"),
                               "HoloTy::NextFas");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Start\\hologram.cpp"),0xc1);
    return local_8;
  }
  uVar1 = *(uint *)&local_c->field_0x3;
  if (-1 < (int)uVar1) {
    iVar3 = local_c->field_0017;
    if (local_c->field_0002 == '\0') {
      if (iVar3 < local_c->field_0013 + -2) {
        local_c->field_0017 = iVar3 + 1;
        local_8 = 1;
        st::fn_006B35D0((int *)g_ddxContext_008075A8,uVar1);
      }
    }
    else if (0 < iVar3) {
      local_c->field_0017 = iVar3 + -1;
      local_8 = 1;
      st::fn_006B35D0((int *)g_ddxContext_008075A8,uVar1);
      g_currentExceptionFrame = local_50.previous;
      return local_8;
    }
  }
  g_currentExceptionFrame = local_50.previous;
  return local_8;
}


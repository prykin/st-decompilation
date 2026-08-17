#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/tplaysys.cpp

// 0054C740 CreatePlaySystem
#line 4 "decomp/ST.exe/functions/0054C740/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\tplaysys.cpp
   Diagnostic line evidence: 125 | 176 | 177 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

void st::fn_0054C740(void)

{
  int errorCode;
  STPlaySystemC *this;
  int iVar2;
  byte bVar3;
  /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
  int unaff_ESI;
  InternalExceptionFrame local_50;
  uint *local_c;
  uint local_8;

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  errorCode = st::fn_0072D7F0(local_50.jumpBuffer,0);
  if (errorCode == 0) {
    this = (STPlaySystemC *)st::fn_0072E530(0xf8);
    if (this == nullptr) {
      g_playSystem_00802A38 = nullptr;
    }
    else {
      /* ST_CALLSITE[0054C78B]: CALL 0x00401ffa; direct=00401FFA STPlaySystemC::STPlaySystemC */
      g_playSystem_00802A38 = st::fn_00401FFA(this,g_app_00806728);
    }
    if (g_playSystem_00802A38 == nullptr) {
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x7d);
    }
    g_playSystem_00802A38->field_00E0 = 0;
    /* ST_CALLSITE[0054C7C9]: CALL dword ptr [EAX] */
    /* ST_PSEUDO[unresolved_register_input]: candidate live-in register: verify boundary, SEH/setjmp ABI, or convention */
    g_playSystem_00802A38->InitSystem(unaff_ESI);
    /* ST_CALLSITE[0054C7E3]: CALL dword ptr [EDX + 0x8] */
    g_playSystem_00802A38->vfunc_08(0x1100,0,0xa174,0,0);
    /* ST_CALLSITE[0054C7FB]: CALL dword ptr [EAX + 0x8] */
    g_playSystem_00802A38->vfunc_08(0x109,0,0,0,0);
    /* ST_CALLSITE[0054C813]: CALL dword ptr [EDX + 0x8] */
    g_playSystem_00802A38->vfunc_08(0x121,0,0,0,0);
    /* ST_CALLSITE[0054C82E]: CALL dword ptr [EAX + 0x8] */
    g_playSystem_00802A38->vfunc_08(0x143,0x1794,0,0,0);
    /* ST_CALLSITE[0054C849]: CALL dword ptr [EDX + 0x8] */
    g_playSystem_00802A38->vfunc_08(0x145,0x17a0,0,0,0);
    /* ST_CALLSITE[0054C864]: CALL dword ptr [EAX + 0x8] */
    g_playSystem_00802A38->vfunc_08(0x146,0x17ac,0,0,0);
    /* ST_CALLSITE[0054C87F]: CALL dword ptr [EDX + 0x8] */
    g_playSystem_00802A38->vfunc_08(0x15b,0x1780,0,0,0);
    st::fn_0040346D();
    if (DAT_0080879c == 0) {
      bVar3 = 0;
      local_8 = local_8 & 0xffffff00;
      do {
        st::fn_00401E97((char)local_8,1,nullptr);
        bVar3 = bVar3 + 1;
        local_8 = STReplaceLowByte((uint32_t)(local_8), (uint8_t)(bVar3));
      } while (bVar3 < 8);
    }
    /* ST_CALLSITE[0054C8B2]: CALL 0x004051c8; direct=004051C8 CreateAi */
    st::fn_004051C8();
    if (g_cMf32_00806754 != nullptr) {
      local_c = &local_8;
      local_8 = 0x32;
      st::fn_006F1CE0(g_cMf32_00806754,0xc,PTR_s_LAST_NAME_0079ae2c,(int *)&local_c,0);
      if (g_playSystem_00802A38->field_0020 < local_8) {
        g_playSystem_00802A38->field_0020 = local_8;
      }
    }
    st::fn_006E4960
              ((AppClassTy *)&DAT_00807620,(SystemClassTy *)g_parentSystem_0081163C,
               (SystemClassTy *)g_playSystem_00802A38,0);
    g_playSystem_00802A38->field_00E0 = 1;
    if (DAT_008067a0 != '\0') {
      DAT_00802a99 = 1;
    }
    g_currentExceptionFrame = local_50.previous;
    return;
  }
  g_currentExceptionFrame = local_50.previous;
  iVar2 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0xb0,0,errorCode,
                             st::mutable_c_string("%s"),"CreatePlaySystem");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0xb1);
  return;
}

// 0054CC20 STPlaySystemC::CreateGameObject
#line 4 "decomp/ST.exe/functions/0054CC20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::CreateGameObject */

int __thiscall
st::fn_0054CC20
          (STPlaySystemC *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5)

{
  STPlaySystemC *this_00;
  int iVar2;
  int iVar4;
  int local_EAX_203;
  int iVar3;
  InternalExceptionFrame local_50;
  STPlaySystemC *local_c;
  undefined2 local_8 [2];

  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = this;
  iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  this_00 = local_c;
  if (iVar2 == 0) {
    iVar4 = st::fn_0040513C(param_1,(undefined4 *)local_8);
    if (iVar4 != 0) {
      st::fn_006A5E40
                (-4,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0xef);
    }
    /* ST_CALLSITE[0054CC95]: CALL dword ptr [EAX + 0x8] */
    iVar4 = this_00->vfunc_08(local_8[0],(undefined2)param_2,(undefined2)param_3,
                       (undefined2)param_4,(undefined2)param_5);
    if (iVar4 != 0) {
      st::fn_006A5E40
                (iVar4,g_overwriteContext_007ED77C,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0xf0);
    }
    g_currentExceptionFrame = local_50.previous;
    return iVar4;
  }
  g_currentExceptionFrame = local_50.previous;
  if (iVar2 == -4) {
    local_EAX_203 =
         st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0xf3,0,0,
                            st::mutable_c_string("Not found system type for game type %d"),param_1);
    if (local_EAX_203 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  else {
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0xf5,0,0,st::mutable_c_string("%s"),
                               "STPlaySystemC::CreateGameObject error !");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0xf7);
  return iVar2;
}

// 0054CDD0 FUN_0054cdd0
#line 4 "decomp/ST.exe/functions/0054CDD0/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Andrey\tplaysys.cpp
   Diagnostic line evidence: 296 | 297 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0054CA10 -> 0054CDD0 @ 0054CAB2 */

int st::fn_0054CDD0(undefined4 *param_1,int param_2,undefined4 *param_3,int *param_4,int *param_5,
                undefined4 param_6)

{
  int iVar2;
  int iVar4;
  int iVar3;
  InternalExceptionFrame local_58;
  void *local_14;
  int local_10;
  int local_c;
  int local_8;

  local_10 = -4;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  iVar2 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  if (iVar2 == 0) {
    iVar4 = st::fn_0040513C(param_2,(undefined4 *)&local_8);
    if (iVar4 == 0) {
      local_10 = st::fn_006E6200
                           (local_14,local_8,param_1,param_3,&local_c,st::machine_word_boundary_cast<undefined4>(param_5),param_6);
    }
    iVar4 = local_10;
    if (param_4 != nullptr) {
      *param_4 = local_c;
    }
    if (local_10 == 0) {
      st::fn_0040129E();
    }
    g_currentExceptionFrame = local_58.previous;
    return iVar4;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x128,0,0,
                             st::mutable_c_string("Not found system type for game type %d"),param_2);
  if (iVar3 == 0) {
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x129);
    return local_10;
  }
  STDebugBreak(); /* noreturn in standalone pseudocode */
}

// 0054CFC0 STPlaySystemC::InitSystem
#line 4 "decomp/ST.exe/functions/0054CFC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::InitSystem
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=undefined4
   __thiscall InitSystem(STPlaySystemC * this) Evidence: every machine RET purges exactly 0 explicit
   stack bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0054D0CD RET | 0054D116 RET */

undefined4 __thiscall st::fn_0054CFC0(STPlaySystemC *this)

{
  uint *puVar1;
  STPlaySystemC *pSVar3;
  int errorCode;
  AnonPointee_STPlaySystemC_003D *pAVar4;
  void *pvVar5;
  int iVar6;
  undefined4 uVar7;
  InternalExceptionFrame local_54;
  uint local_10;
  uint *local_c;
  STPlaySystemC *local_8;

  this->field_0030 = 0;
  local_10 = 1;
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_8 = this;
  errorCode = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pSVar3 = local_8;
  if (errorCode == 0) {
    st::fn_006E51F0((SystemClassTy *)local_8);
    pSVar3->field_0039 = nullptr;
    pSVar3->field_0045 = 7;
    pAVar4 = st::pointer_boundary_cast<AnonPointee_STPlaySystemC_003D *>(st::fn_006AAC70(7));
    pSVar3->field_003D = pAVar4;
    pSVar3->field_0053 = 0x1400;
    pvVar5 = st::fn_006AAC70(0x1400);
    pSVar3->field_004F = pvVar5;
    pSVar3->field_0041 = 0;
    pSVar3->field_0049 = 0;
    puVar1 = &pSVar3->field_00E4;
    pSVar3->field_004D = 0;
    pSVar3->field_004E = 0;
    pSVar3->field_0059 = 0;
    pSVar3->field_00E8 = 0;
    pSVar3->field_00EC = 0;
    pSVar3->field_0057 = 0;
    pSVar3->field_0028 = 0;
    pSVar3->field_002C = 0;
    *puVar1 = 0;
    if (g_cMf32_00806754 != nullptr) {
      local_c = puVar1;
      st::fn_006F1CE0(g_cMf32_00806754,0xc,st::pointer_boundary_cast<char *>(PTR_DAT_0079ae30),(int *)&local_c,0);
    }
    pSVar3->field_0034 = *puVar1;
    pSVar3->field_0020 = local_10;
    pSVar3->field_0038 = 0;
    pSVar3->field_0065 = 0;
    pSVar3->field_0069 = 0;
    pSVar3->field_006D = 0;
    pSVar3->field_0071 = 0;
    pSVar3->field_0075 = 0;
    pSVar3->field_0079 = 0;
    pSVar3->field_00BB = 0;
    pSVar3->field_00A7 = 0;
    pSVar3->field_00AB = 0;
    pSVar3->field_00AF = 0;
    pSVar3->field_00B3 = 0;
    pSVar3->field_00B7 = 0;
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar6 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x18c,0,errorCode,
                             st::mutable_c_string("%s"),"STPlaySystemC::InitSystem");
  if (iVar6 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(errorCode,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x18e);
  return 0xfffffffc;
}

// 0054D180 STPlaySystemC::DoneSystem
#line 4 "decomp/ST.exe/functions/0054D180/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::DoneSystem */

void __thiscall st::fn_0054D180(STPlaySystemC *this)

{
  STPlaySystemC *pSVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  STPlaySystemC *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pSVar2 = local_8;
  if (iVar3 == 0) {
    memset(&local_8->field_0xc0, 0, 0x20); /* compiler bulk-zero initialization */
    local_8->field_00CC = 0xf;
    local_8->field_00D0 = 0x7106;
    /* ST_CALLSITE[0054D1E3]: CALL dword ptr [EAX + 0x18] */
    (*local_8->vtable->SendMessage)((SystemWithNamedObjClassTy *)local_8,(int)&local_8->field_0xc0);
    if (pSVar2->field_0039 != nullptr) {
      st::fn_006B9890((int *)&pSVar2->field_0039);
    }
    if (pSVar2->field_004F != nullptr) {
      st::fn_006AB060(&pSVar2->field_004F);
    }
    if (pSVar2->field_003D != nullptr) {
      st::fn_006AB060(&pSVar2->field_003D);
    }
    pSVar2->field_0041 = 0;
    pSVar2->field_0045 = 0;
    pSVar2->field_0053 = 0;
    if (pSVar2->field_0065 != 0) {
      st::fn_006B9890(st::pointer_boundary_cast<int *>(&pSVar2->field_0065));
    }
    pSVar2->field_0069 = 0;
    pSVar2->field_006D = 0;
    pSVar2->field_0071 = 0;
    pSVar2->field_0075 = 0;
    st::fn_006E52D0((AnonShape_006E52D0_AF06BCD2 *)pSVar2);
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x1b1,0,iVar3,st::mutable_c_string("%s"),
                             "STPlaySystemC::DoneSystem");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x1b3);
  return;
}

// 0054D2F0 STPlaySystemC::Save
#line 4 "decomp/ST.exe/functions/0054D2F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::Save

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 0054D2F0 parameter used as this of cMf32::RecPut @ 0054D347 | 0054D2F0 parameter used
   as this of cMf32::RecPut @ 0054D363 */

int __thiscall st::fn_0054D2F0(STPlaySystemC *this,cMf32 *param_1)

{
  STPlaySystemC *pSVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  InternalExceptionFrame local_74;
  undefined1 local_30 [12];
  undefined4 local_24;
  undefined4 local_20;
  STPlaySystemC *local_10;
  uint local_c;
  uint local_8;

  local_c = this->field_00E4;
  local_8 = this->field_0020;
  local_74.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_74;
  local_10 = this;
  iVar3 = st::fn_0072D7F0(local_74.jumpBuffer,0);
  if (iVar3 == 0) {
    st::fn_006F13F0(param_1,0xc,st::pointer_boundary_cast<char *>(PTR_DAT_0079ae30),(byte *)&local_c,4,nullptr,'\0',nullptr
                 );
    st::fn_006F13F0(param_1,0xc,PTR_s_LAST_NAME_0079ae2c,(byte *)&local_8,4,nullptr,'\0',
                  nullptr);
    pSVar2 = local_10;
    local_10->field_0024 = param_1;
    local_24 = 0xf;
    local_20 = 0x10f;
    st::fn_006E3DB0((int)local_30);
    pSVar2->field_0024 = nullptr;
    g_currentExceptionFrame = local_74.previous;
    return 0;
  }
  g_currentExceptionFrame = local_74.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x1fb,0,iVar3,st::mutable_c_string("%s"),
                             "STPlaySystemC::Save");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x1fb);
  return iVar3;
}

// 0054D430 STPlaySystemC::SaveObjData
#line 4 "decomp/ST.exe/functions/0054D430/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SaveObjData

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 005F5F20 -> 0054D430 @ 005F62C9; /STColl3C+0x18 | 00621B50 -> 0054D430 @ 00622246;
   /STMineSetC+0x18

   [STPrototypeRepairApplier] Propagated parameter 3.
   Evidence: 0054D430 -> 006F13F0 @ 0054D4A7 | 0060EA30 -> 0054D430 @ 0060EB81; 0060EB66 definite
   output through FUN_00614950 parameter 1 */

int __thiscall
st::fn_0054D430(STPlaySystemC *this,int *param_1,byte *param_2,uint param_3)

{
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_6c;
  CHAR local_28 [32];
  STPlaySystemC *local_8;

  if (this->field_0024 == nullptr) {
    return -4;
  }
  local_6c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_6c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_6c.jumpBuffer,0);
  if (iVar2 == 0) {
    /* ST_CALLSITE[0054D486]: CALL dword ptr [0x0085bde8] */
    st::external_00000080(local_28,st::mutable_c_string("%s%08ld"),PTR_DAT_007c83b0,param_1);
    st::fn_006F13F0(local_8->field_0024,0xc,local_28,param_2,param_3,nullptr,'\x02',
                  nullptr);
    g_currentExceptionFrame = local_6c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_6c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x218,0,iVar2,st::mutable_c_string("%s"),
                             "STPlaySystemC::SaveObjData");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x218);
  return iVar2;
}

// 0054D550 STPlaySystemC::SaveObjData
#line 4 "decomp/ST.exe/functions/0054D550/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SaveObjData

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00430A90 -> 0054D550 @ 00431261 | 004A8920 -> 0054D550 @ 004A8B9F */

int __thiscall
st::fn_0054D550(STPlaySystemC *this,char *text,byte *param_2,uint param_3,byte param_4)

{
  int iVar2;
  int iVar3;
  int iVar4;
  InternalExceptionFrame local_4c;
  STPlaySystemC *local_8;

  if (this->field_0024 == nullptr) {
    return -4;
  }
  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar2 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  if (iVar2 == 0) {
    st::fn_006F13F0(local_8->field_0024,param_4,text,param_2,param_3,nullptr,'\x02',
                  nullptr);
    g_currentExceptionFrame = local_4c.previous;
    return 0;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x232,0,iVar2,st::mutable_c_string("%s"),
                             "STPlaySystemC::SaveObjData");
  if (iVar3 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x232);
  return iVar2;
}

// 0054D640 STPlaySystemC::Life
#line 4 "decomp/ST.exe/functions/0054D640/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::Life */

undefined4 __thiscall st::fn_0054D640(STPlaySystemC *this)

{
  STPlaySystemC *this_00;
  int local_EAX_74;
  char *pcVar2;
  char *pcVar3;
  char *local_EAX_889;
  char *local_EAX_959;
  int local_EAX_1108;
  int local_EAX_1151;
  int local_EAX_1204;
  int iVar2;
  int iVar4;
  DWORD DVar5_mg1;
  char *pcVar4;
  int iVar5;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  DWORD *pDVar8;
  int *piVar9;
  DWORD DVar10;
  bool bVar12;
  uint uVar13;
  InternalExceptionFrame local_a8;
  undefined4 local_64 [8];
  undefined4 local_44 [8];
  STPlaySystemC *local_24;
  int local_20;
  DWORD local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int *local_8;

  local_24 = this;
  /* ST_CALLSITE[0054D64F]: CALL dword ptr [0x0085bedc] */
  local_1c = st::external_000000DA();
  if (DAT_0080c512 != 0) {
    return 0;
  }
  local_a8.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_a8;
  local_EAX_74 = st::fn_0072D7F0(local_a8.jumpBuffer,0);
  DVar10 = local_1c;
  this_00 = local_24;
  if (local_EAX_74 != 0) {
    g_currentExceptionFrame = local_a8.previous;
    iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x411,0,local_EAX_74,
                               st::mutable_c_string("%s"),"STPlaySystemC::Life");
    if (iVar5 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(local_EAX_74,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x412);
    return 0xffffffff;
  }
  if ((DAT_00808783 == '\x03') && (499 < local_1c - local_24->field_007F)) {
    local_24->field_007F = local_1c;
    st::fn_006B6500(g_int_00811764,0);
    st::fn_00715360(g_int_00811764,(uint)(DAT_0080877e == '\0'),'5',nullptr,0,0,0xffffffff);
    st::fn_006B6500(g_int_00811764,DAT_0080733c);
  }
  if (DAT_008067a0 != '\0') {
    /* ST_CALLSITE[0054D711]: CALL dword ptr [0x0085c05c] */
    st::external_00000105((CFsgsConnection *)&DAT_00802a90);
  }
  if (DAT_00808784 == 0) {
    if (DAT_0080877e == '\0') {
      /* ST_CALLSITE[0054DFD4]: CALL 0x00401e51; direct=00401E51 STPlaySystemC::PrepareMail */
      st::fn_00401E51(this_00);
      /* ST_CALLSITE[0054DFDB]: CALL 0x0040174e; direct=0040174E STPlaySystemC::SendMail */
      st::fn_0040174E(this_00);
      if (((this_00->field_0038 != '\0') && (g_popUp_008016D8 != nullptr)) &&
         (g_popUp_008016D8->field_009C == '\0')) {
        uVar13 = 8;
        pcVar4 = st::fn_006B0140(0x4275,g_hINSTANCE_00807618);
        st::fn_004014D8(g_popUp_008016D8,pcVar4,uVar13);
      }
      if (this_00->field_0028 != 0) {
        st::fn_006E5D90((SystemClassTy *)this_00);
        /* ST_CALLSITE[0054E027]: CALL 0x00405420; direct=00405420 PlaySystemTy::SendClientMail */
        st::fn_00405420((PlaySystemTy *)this_00);
      }
      goto LAB_0054e02c;
    }
    if (this_00->field_0038 == '\0') {
      if ((this_00->field_0059 == 0) && (DAT_00808788 == 0)) {
        if (this_00->field_00E8 == 0) {
          if ((this_00->field_00EC != 0) && (1000 < (int)(DVar10 - this_00->field_0030))) {
            iVar2 = st::fn_006B7140(g_int_00811764);
            if (iVar2 < 2) {
              this_00->field_00E8 = 1;
            }
            this_00->field_0030 = DVar10;
          }
          iVar7 = st::machine_word_boundary_cast<int>(this_00->field_002C + -1);
          this_00->field_002C = iVar7;
          if (iVar7 < 1) {
            this_00->field_002C =
                 *(int *)("FrmPanelTy::GetMessage" + (uint)DAT_0080733b * 0x18 + 4);
            /* ST_CALLSITE[0054DB8B]: CALL 0x00404b15; direct=00404B15 STPlaySystemC::sub_00550190 */
            st::fn_00404B15(this_00);
            /* ST_CALLSITE[0054DB92]: CALL 0x00401e51; direct=00401E51 STPlaySystemC::PrepareMail */
            st::fn_00401E51(this_00);
            /* ST_CALLSITE[0054DB99]: CALL 0x0040174e; direct=0040174E STPlaySystemC::SendMail */
            st::fn_0040174E(this_00);
            st::fn_006E5D90((SystemClassTy *)this_00);
            this_00->field_0028 = 0;
          }
        }
        else if (this_00->field_004D == '\0') {
          if ((30000 < (int)(DVar10 - this_00->field_0030)) ||
             (local_EAX_1204 = st::fn_006B7140(g_int_00811764), local_EAX_1204 < 2)) {
            memset(local_64, 0, 0x20); /* compiler bulk-zero initialization */
            local_64[3] = 1;
            local_64[4] = DAT_0080c526;
            st::fn_006E3AB0((AppClassTy *)&DAT_00807620,local_64);
          }
        }
        else {
          if (this_00->field_003D != nullptr) {
            this_00->field_003D->field_0004 = this_00->field_004D;
            this_00->field_003D->field_0005 = 0;
            /* ST_CALLSITE[0054DA94]: CALL 0x00405443; direct=00405443 STPlaySystemC::sub_0054EBB0 */
            local_EAX_1108 = st::fn_00405443(this_00,(char *)this_00->field_003D,7);
            if (local_EAX_1108 != 0) {
              st::fn_004059ED(1);
              goto LAB_0054e052;
            }
          }
          this_00->field_004D = 0;
          local_EAX_1151 = st::fn_00715360(g_int_00811764,0,'4',nullptr,0,0,0xffffffff);
          if (local_EAX_1151 != 0) {
            st::fn_004059ED(2);
            goto LAB_0054e052;
          }
          this_00->field_0030 = DVar10;
        }
      }
      else {
        st::fn_006B7510(g_int_00811764,0x42,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = st::fn_00715630
                              (g_int_00811764,0x42,&local_14,&local_10,(undefined4 *)&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar4 == 1) && (local_8 != nullptr)) {
              st::fn_006AB060(&local_8);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        st::fn_006B7510(g_int_00811764,0x43,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = st::fn_00715630
                              (g_int_00811764,0x43,&local_14,&local_10,(undefined4 *)&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar4 == 1) {
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != nullptr) {
                st::fn_006AB060(&local_8);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        st::fn_006B7510(g_int_00811764,0x33,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = st::fn_00715630
                              (g_int_00811764,0x33,&local_14,&local_10,(undefined4 *)&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar4 == 1) && (local_8 != nullptr)) {
              st::fn_004045E3((int)local_8);
              st::fn_006AB060(&local_8);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        st::fn_006B7510(g_int_00811764,0x35,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = st::fn_00715630
                              (g_int_00811764,0x35,&local_14,&local_10,(undefined4 *)&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if ((iVar4 == 1) && (st::fn_00401384(this_00,local_10,1), local_8 != nullptr)) {
              st::fn_006AB060(&local_8);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        st::fn_006B7510(g_int_00811764,0x36,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = st::fn_00715630
                              (g_int_00811764,0x36,&local_14,&local_10,(undefined4 *)&local_8,nullptr,-1,0);
            /* ST_CALLSITE[0054DDA8]: CALL 0x00401456; direct=00401456 STPlaySystemC::sub_005505D0 */
            if ((iVar4 == 1) && (st::fn_00401456(this_00,local_10,local_8), local_8 != nullptr)) {
              st::fn_006AB060(&local_8);
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        st::fn_006B7510(g_int_00811764,0x11,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = st::fn_00715630
                              (g_int_00811764,0x11,&local_14,&local_10,(undefined4 *)&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar4 == 1) {
              st::fn_00401F87(this_00,local_10,0x426f,1);
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != nullptr) {
                st::fn_006AB060(&local_8);
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        st::fn_006B7510(g_int_00811764,0x13,&local_c,-1,0);
        iVar7 = 0;
        if (0 < local_c) {
          do {
            iVar4 = st::fn_00715630
                              (g_int_00811764,0x13,&local_14,&local_10,(undefined4 *)&local_8,nullptr,-1,0);
            if (iVar4 == -0x4d) goto cf_common_join_0054DFAD;
            if (iVar4 == 1) {
              if (local_10 == this_00->field_0061) {
                this_00->field_0059 = 0;
              }
              if (local_8 != nullptr) {
                st::fn_006AB060(&local_8);
              }
              if (this_00->field_00EC != 0) {
                st::fn_00401F87(this_00,local_10,0x4274,0);
                this_00->field_00E8 = 1;
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < local_c);
        }
        if ((this_00->field_0059 != 0) &&
           (uVar13 = st::machine_word_boundary_cast<uint>(this_00->field_005D + 1), this_00->field_005D = uVar13, 2000 < uVar13)) {
          st::fn_00715360(g_int_00811764,0,'D',nullptr,0,0,0xffffffff);
          this_00->field_0059 = 0;
        }
      }
    }
    else {
      st::fn_006B7510(g_int_00811764,-1,&local_20,-1,0);
      local_10 = 0;
      if (0 < local_20) {
        do {
          iVar7 = st::fn_00715630
                            (g_int_00811764,-1,&local_14,&local_18,(undefined4 *)&local_8,nullptr,-1,0);
          if (iVar7 == 1) {
            switch(local_14) {
            case 0x11:
              iVar7 = 0;
              if (DAT_00808aaf != 0) {
                pcVar3 = st::pointer_boundary_cast<char *>(&DAT_00808af6);
                do {
                  if ((*(int *)(pcVar3 + -6) == local_18) && (*pcVar3 != '\0')) {
                    pcVar2 = st::fn_006B0140(0x426f,g_hINSTANCE_00807618);
                    /* ST_CALLSITE[0054D904]: CALL dword ptr [0x0085bde8] */
                    st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %s"),pcVar3 + -0x46,pcVar2);
                    if (g_popUp_008016D8 != nullptr) {
                      st::fn_004014D8(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
                    }
                    st::fn_00401370(this_00,local_18);
                    break;
                  }
                  iVar7 = iVar7 + 1;
                  pcVar3 = pcVar3 + 0x9c;
                } while (iVar7 < (int)(uint)DAT_00808aaf);
              }
              uVar6 = 0;
              uVar13 = g_array_0080C4FE->count;
              if (0 < (int)uVar13) {
                bVar12 = uVar13 != 0;
                do {
                  if (bVar12) {
                    piVar9 = DArrayAt<int>(g_array_0080C4FE, uVar6);
                  }
                  else {
                    piVar9 = nullptr;
                  }
                  if ((piVar9 != nullptr) && (*piVar9 == local_18)) {
                    st::fn_006B0C70(g_array_0080C4FE,uVar6);
                    break;
                  }
                  uVar6 = uVar6 + 1;
                  bVar12 = uVar6 < uVar13;
                } while ((int)uVar6 < (int)uVar13);
              }
              break;
            case 0x33:
              st::fn_004045E3((int)local_8);
              break;
            case 0x35:
              uVar6 = 0;
              uVar13 = g_array_0080C4FE->count;
              if (0 < (int)uVar13) {
                bVar12 = uVar13 != 0;
                do {
                  if (bVar12) {
                    piVar9 = DArrayAt<int>(g_array_0080C4FE, uVar6);
                  }
                  else {
                    piVar9 = nullptr;
                  }
                  if ((piVar9 != nullptr) && (*piVar9 == local_18)) {
                    st::fn_006B0C70(g_array_0080C4FE,uVar6);
                    iVar7 = 0;
                    if (DAT_00808aaf != 0) {
                      pcVar3 = st::pointer_boundary_cast<char *>(&DAT_00808af6);
                      do {
                        if ((*(int *)(pcVar3 + -6) == local_18) && (*pcVar3 != '\0')) {
                          pcVar2 = st::fn_006B0140(0x426e,g_hINSTANCE_00807618);
                          /* ST_CALLSITE[0054D847]: CALL dword ptr [0x0085bde8] */
                          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%s %s"),pcVar3 + -0x46,pcVar2);
                          if (g_popUp_008016D8 != nullptr) {
                            st::fn_004014D8(g_popUp_008016D8,(char *)&DAT_0080f33a,8);
                          }
                        }
                        iVar7 = iVar7 + 1;
                        pcVar3 = pcVar3 + 0x9c;
                      } while (iVar7 < (int)(uint)DAT_00808aaf);
                    }
                    break;
                  }
                  uVar6 = uVar6 + 1;
                  bVar12 = uVar6 < uVar13;
                } while ((int)uVar6 < (int)uVar13);
              }
            case 0x1a:
              iVar7 = 0;
              if (DAT_00808aaf != 0) {
                pcVar3 = st::pointer_boundary_cast<char *>(&DAT_00808af6);
                do {
                  if ((*(int *)(pcVar3 + -6) == local_18) && (*pcVar3 != '\0')) {
                    *(DWORD *)(pcVar3 + 2) = local_1c;
                  }
                  iVar7 = iVar7 + 1;
                  pcVar3 = pcVar3 + 0x9c;
                } while (iVar7 < (int)(uint)DAT_00808aaf);
              }
            }
            if (local_8 != nullptr) {
              st::fn_006AB060(&local_8);
            }
          }
          local_10 = local_10 + 1;
          DVar10 = local_1c;
        } while (local_10 < local_20);
      }
      if ((g_popUp_008016D8 != nullptr) && (g_popUp_008016D8->field_009C == '\0')) {
        uVar13 = 8;
        local_EAX_889 = st::fn_006B0140(0x426a,g_hINSTANCE_00807618);
        st::fn_004014D8(g_popUp_008016D8,local_EAX_889,uVar13);
      }
      if ((g_array_0080C4FE->count == 0) || (59999 < (int)(DVar10 - this_00->field_00BC))) {
        if (g_popUp_008016D8 != nullptr) {
          uVar13 = 8;
          local_EAX_959 = st::fn_006B0140(0x4269,g_hINSTANCE_00807618);
          st::fn_004014D8(g_popUp_008016D8,local_EAX_959,uVar13);
        }
        this_00->field_0038 = 0;
      }
      if ((this_00->field_0038 == '\0') && (iVar7 = 0, DAT_00808aaf != 0)) {
        pDVar8 = &DAT_00808af8;
        do {
          *pDVar8 = DVar10;
          iVar7 = iVar7 + 1;
          pDVar8 = pDVar8 + 0x27;
          DVar10 = local_1c;
        } while (iVar7 < (int)(uint)DAT_00808aaf);
      }
    }
    if (((((DAT_00808783 == '\x03') && (DAT_00808788 == 0)) && (this_00->field_00E8 == 0)) &&
        ((this_00->field_0038 == '\0' && (this_00->field_0059 == 0)))) &&
       (iVar7 = 0, DAT_00808aaf != 0)) {
      piVar9 = st::pointer_boundary_cast<int *>(&DAT_00808af0);
      do {
        if (((piVar9 != (int *)0x40) && (*piVar9 != 0)) &&
           ((*piVar9 != DAT_0080877f &&
            (((STField<char>(piVar9,6) != '\0' &&
              ((&DAT_00809950)[((byte *)piVar9)[1]] == '\0')) &&
             (DVar5_mg1 = st::fn_006E51B0((STAppC *)&DAT_00807620),
             30000 < (int)(DVar5_mg1 - piVar9[2]))))))) {
          if (*piVar9 != this_00->field_00F4) {
            st::fn_00401F32(this_00,*piVar9);
          }
          break;
        }
        iVar7 = iVar7 + 1;
        piVar9 = piVar9 + 0x27;
      } while (iVar7 < (int)(uint)DAT_00808aaf);
    }
  }
  else {
    /* ST_CALLSITE[0054D721]: CALL 0x00401e51; direct=00401E51 STPlaySystemC::PrepareMail */
    st::fn_00401E51(this_00);
    /* ST_CALLSITE[0054D728]: CALL 0x0040174e; direct=0040174E STPlaySystemC::SendMail */
    st::fn_0040174E(this_00);
    if (this_00->field_0028 != 0) {
      st::fn_006E5D90((SystemClassTy *)this_00);
    }
LAB_0054e02c:
    this_00->field_0028 = 0;
  }
  if (DAT_00808794 != 0) {
    st::fn_00403A76(&DAT_00807620,'\0',0,nullptr);
    DAT_00808794 = 0;
  }
LAB_0054e052:
  if ((DAT_0080874d < 8) && ((&DAT_00809950)[DAT_0080874d] != '\0')) {
    memset(local_44, 0, 0x20); /* compiler bulk-zero initialization */
    local_44[3] = 1;
    DAT_0080c526 = 0x6108;
    local_44[4] = 0x6108;
    switch(DAT_008087a0 & 0xff) {
    case 1:
    case 2:
    case 3:
    case 6:
    case 8:
      break;
    case 4:
    case 5:
    case 7:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x13:
      if (DAT_0080877e != '\0') {
        if ((this_00->field_00E8 == 0) && (this_00->field_00EC == 0)) {
          this_00->field_0030 = local_1c;
        }
        if (DAT_0080c522 != 0) {
          this_00->field_00E8 = 1;
          g_currentExceptionFrame = local_a8.previous;
          return 0;
        }
        this_00->field_00EC = 1;
        g_currentExceptionFrame = local_a8.previous;
        return 0;
      }
      if (DAT_0080c522 == 0) {
        DAT_0080c50a = 1;
      }
      else {
        DAT_0080c50e = 1;
      }
      break;
    default:
      goto switchD_0054e0ae_caseD_9;
    }
    st::fn_006E3AB0((AppClassTy *)&DAT_00807620,local_44);
  }
switchD_0054e0ae_caseD_9:
  g_currentExceptionFrame = local_a8.previous;
  return 0;
cf_common_join_0054DFAD:
  st::fn_004059ED(3);
  goto LAB_0054e052;
}

// 0054E4F0 STPlaySystemC::GetMessage
#line 4 "decomp/ST.exe/functions/0054E4F0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401244|0054E4F0; family_names=STPlaySystemC::GetMessage; ret4=3;
   direct_offsets={10:1,14:0,18:1,1c:0} */

int __thiscall st::fn_0054E4F0(STPlaySystemC *this,STMessage *message)

{
  char cVar1;
  STPlaySystemCVTable *pSVar2;
  cMf32 *this_00;
  int *piVar4;
  int local_EAX_19;
  int iVar5;
  int local_EAX_308;
  undefined4 *puVar5;
  char *pcVar11;
  char *local_EAX_530;
  DWORD DVar7;
  DWORD DVar6;
  int local_EAX_854;
  uint uVar7;
  int iVar8;
  uint uVar9;
  STPlaySystemC *pSVar10;
  char *pcVar12;
  char *pcVar13;
  DWORD *pDVar14;
  undefined1 local_2b8;
  char local_2b7 [515];
  InternalExceptionFrame local_b4;
  InternalExceptionFrame local_70;
  undefined4 local_2c [8];
  STPlaySystemC *local_c;
  int local_8;

  local_c = this;
  local_EAX_19 = st::fn_006E5F00((SystemClassTy *)this,message);
  if (local_EAX_19 != 0xffff) {
    local_70.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_70;
    iVar5 = st::fn_0072D7F0(local_70.jumpBuffer,0);
    pSVar10 = local_c;
    if (iVar5 == 0) {
      if (message->id == MESS_SHARED_0008) {
        local_b4.previous = g_currentExceptionFrame;
        g_currentExceptionFrame = &local_b4;
        local_EAX_308 = st::fn_0072D7F0(local_b4.jumpBuffer,0);
        this_00 = g_cMf32_00806754;
        if (local_EAX_308 == 0) {
          if (g_cLoading_00802A58 != nullptr) {
            uVar9 = 0xffffffff;
            pcVar12 = st::pointer_boundary_cast<char *>(PTR_DAT_007c83b0);
            do {
              pcVar13 = pcVar12;
              if (uVar9 == 0) break;
              uVar9 = uVar9 - 1;
              pcVar13 = pcVar12 + 1;
              cVar1 = *pcVar12;
              pcVar12 = pcVar13;
            } while (cVar1 != '\0');
            uVar9 = ~uVar9;
            local_2b8 = 0xc;
            pcVar12 = pcVar13 + -uVar9;
            pcVar13 = local_2b7;
            for (uVar7 = uVar9 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
              *(undefined4 *)pcVar13 = *(undefined4 *)pcVar12;
              pcVar12 = pcVar12 + 4;
              pcVar13 = pcVar13 + 4;
            }
            local_8 = 0;
            for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
              *pcVar13 = *pcVar12;
              pcVar12 = pcVar12 + 1;
              pcVar13 = pcVar13 + 1;
            }
            st::fn_006F12B0(g_cMf32_00806754,st::machine_word_boundary_cast<undefined4>(st::fn_006F2D10),st::machine_word_boundary_cast<undefined4>(&local_2b8));
            puVar5 = st::fn_006F2790(this_00);
            iVar8 = local_8;
            while (puVar5 != nullptr) {
              local_8 = iVar8 + 1;
              puVar5 = st::fn_006F2790(this_00);
              iVar8 = local_8;
            }
            local_8 = iVar8;
            pcVar11 = st::fn_006B0140(19000,g_hINSTANCE_00807618);
            /* ST_CALLSITE[0054E6CA]: CALL 0x00404d8b; direct=00404D8B cLoadingTy::SetProcess */
            st::fn_00404D8B(g_cLoading_00802A58,0,pcVar11,iVar8);
          }
          pSVar10 = local_c;
          DAT_00802a3c = 0;
          st::fn_006F2E40
                    (g_cMf32_00806754,st::pointer_boundary_cast<char *>(PTR_DAT_007c83b0),(undefined *)st::fn_0054CA10,local_c,0);
          local_EAX_530 = st::fn_006B0140(0x4a39,g_hINSTANCE_00807618);
          /* ST_CALLSITE[0054E719]: CALL dword ptr [0x0085bde8] */
          st::external_00000080((LPSTR)&DAT_0080f33a,st::mutable_c_string("%d %s"),DAT_00802a3c,local_EAX_530);
          if (g_cLoading_00802A58 != nullptr) {
            /* ST_CALLSITE[0054E734]: CALL 0x00403472; direct=00403472 cLoadingTy::SetState */
            st::fn_00403472(g_cLoading_00802A58,CASE_2,0,(char *)&DAT_0080f33a);
          }
          g_currentExceptionFrame = local_b4.previous;
        }
        else {
          g_currentExceptionFrame = local_b4.previous;
          st::fn_006A5E40(local_EAX_308,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x42f);
          pSVar10 = local_c;
        }
        uVar9 = 0;
        pSVar2 = pSVar10->vtable;
        memset(local_2c, 0, 0x20); /* compiler bulk-zero initialization */
        local_2c[3] = 0xf;
        local_2c[4] = 0x111;
        /* ST_CALLSITE[0054E789]: CALL dword ptr [EDX + 0x18] */
        (*pSVar2->SendMessage)((SystemWithNamedObjClassTy *)pSVar10,(int)local_2c);
        if (DAT_00808783 == '\x03') {
          pSVar10->field_0038 = 1;
          if (g_int_00811764 != nullptr) {
            st::fn_006B6500(g_int_00811764,DAT_0080733c);
          }
          if (DAT_0080877e == '\0') {
            st::fn_00715360(g_int_00811764,1,'.',nullptr,0,0,0xffffffff);
          }
          else if (DAT_00808aaf != 0) {
            pDVar14 = &DAT_00808af8;
            do {
              DVar7 = st::fn_006E51B0((STAppC *)&DAT_00807620);
              *pDVar14 = DVar7;
              uVar9 = uVar9 + 1;
              pDVar14 = pDVar14 + 0x27;
            } while (uVar9 < DAT_00808aaf);
          }
        }
        /* ST_CALLSITE[0054E7FF]: CALL dword ptr [0x0085bedc] */
        DVar6 = st::external_000000DA();
        pSVar10->field_00BC = DVar6;
        pSVar10->field_007F = DVar6;
        pSVar10->field_0083 = DVar6;
      }
      else if (message->id == MESS_STPLAYSYSTEMC_44FF) {
        uVar9 = 0;
        DAT_00808788 = 0;
        if (DAT_00808aaf != 0) {
          pcVar12 = st::pointer_boundary_cast<char *>(&DAT_00808af6);
          do {
            piVar4 = g_int_00811764;
            if ((*(int *)(pcVar12 + -6) == pSVar10->field_00F4) && (*pcVar12 != '\0')) {
              *pcVar12 = '\0';
              st::fn_006B6500(piVar4,1);
              st::fn_00715360(g_int_00811764,pSVar10->field_00F4,'7',nullptr,0,0,0xffffffff);
              st::fn_006B6500(g_int_00811764,DAT_0080733c);
              st::fn_00401370(pSVar10,pSVar10->field_00F4);
              pSVar10->field_00F4 = 0;
            }
            uVar9 = uVar9 + 1;
            pcVar12 = pcVar12 + 0x9c;
          } while (uVar9 < DAT_00808aaf);
          g_currentExceptionFrame = local_70.previous;
          return 0;
        }
      }
      g_currentExceptionFrame = local_70.previous;
      return 0;
    }
    g_currentExceptionFrame = local_70.previous;
    local_EAX_854 =
         st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x463,0,iVar5,st::mutable_c_string("%s"),
                            "STPlaySystemC::GetMessage error !");
    if (local_EAX_854 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
  }
  return 0xffff;
}

// 0054E950 STPlaySystemC::AddToRep
#line 4 "decomp/ST.exe/functions/0054E950/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::AddToRep

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_0054E950(STPlaySystemC *this,undefined4 *param_1,uint param_2)

{
  STPlaySystemC *pSVar2;
  int iVar3;
  void *pvVar3;
  int iVar5;
  int iVar4;
  uint uVar6;
  byte *puVar7;
  InternalExceptionFrame local_50;
  STPlaySystemC *local_c;
  int *local_8;

  if ((param_1 != nullptr) && (param_2 != 0)) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar3 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    if (iVar3 == 0) {
      pvVar3 = st::fn_006AAC10(param_2 + 8);
      pSVar2 = local_c;
      STField<uint>(pvVar3,4) = param_2;
      puVar7 = (byte *)((int)pvVar3 + 8);
      memmove(puVar7, param_1, param_2); /* compiler REP MOVS byte copy */
      puVar7 = (byte *)(&local_c->field_0065);
      st::fn_006B9910(st::pointer_boundary_cast<undefined4 *>(puVar7),(int)pvVar3);
      uVar6 = st::machine_word_boundary_cast<uint>(pSVar2->field_0069 + 1);
      pSVar2->field_0069 = uVar6;
      if (0xd2 < uVar6) {
        local_8 = (int *)*puVar7;
        iVar5 = st::fn_006B98C0(st::pointer_boundary_cast<int *>(puVar7),local_8);
        if (iVar5 != 0) {
          if (local_8 != nullptr) {
            st::fn_006AB060(&local_8);
          }
          pSVar2->field_0069 = st::machine_word_boundary_cast<uint>(pSVar2->field_0069 - 1);
        }
      }
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x482,0,iVar3,
                               st::mutable_c_string("%s"),"STPlaySystemC::AddToRep");
    if (iVar4 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x484);
  }
  return;
}

// 0054EC20 PlaySystemTy::SendClientMail
#line 4 "decomp/ST.exe/functions/0054EC20/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   PlaySystemTy::SendClientMail

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=void __thiscall
   SendClientMail(PlaySystemTy * this) Evidence: every machine RET purges exactly 0 explicit stack
   bytes; current signature describes 4; removed trailing parameter slots have no listing
   references; ret_sites=0054ED48 RET | 0054ED8E RET */

void __thiscall st::fn_0054EC20(PlaySystemTy *this)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  AnonPointee_PlaySystemTy_0039 *pAVar9;
  PlaySystemTy *pPVar10;
  char *pcVar11;
  InternalExceptionFrame local_58;
  uint local_14;
  PlaySystemTy *local_10;
  AnonPointee_PlaySystemTy_0039 *local_c;
  uint local_8;

  local_c = this->field_0039;
  local_8 = 4;
  local_58.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_58;
  local_10 = this;
  iVar5 = st::fn_0072D7F0(local_58.jumpBuffer,0);
  pPVar10 = local_10;
  if (iVar5 == 0) {
    pcVar6 = local_10->field_004F;
    pcVar6[0] = '\0';
    pcVar6[1] = '\0';
    pcVar6[2] = '\0';
    pcVar6[3] = '\0';
    if (local_c != nullptr) {
      do {
        puVar1 = &local_c->field_0013;
        puVar2 = &local_c->field_000F;
        local_c = (AnonPointee_PlaySystemTy_0039 *)local_c->field_0000;
        local_8 = local_8 + 0x1b + *puVar1 + *puVar2;
      } while (local_c != nullptr);
      local_c = nullptr;
    }
    uVar4 = local_8;
    if (local_10->field_0053 < local_8) {
      pcVar6 = st::pointer_boundary_cast<char *>(st::fn_006ACF50(local_10->field_004F,local_8));
      pPVar10->field_004F = pcVar6;
      pPVar10->field_0053 = uVar4;
    }
    local_c = pPVar10->field_0039;
    pcVar6 = pPVar10->field_004F + 4;
    if (local_c != nullptr) {
      do {
        local_8 = local_c->field_0013 + 0x1b + local_c->field_000F;
        pAVar9 = local_c;
        pcVar11 = pcVar6;
        for (uVar8 = local_8 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar11 = pAVar9->field_0000;
          pAVar9 = (AnonPointee_PlaySystemTy_0039 *)&pAVar9->field_0x4;
          pcVar11 = pcVar11 + 4;
        }
        for (uVar8 = local_8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
          *pcVar11 = *(char *)&pAVar9->field_0000;
          pAVar9 = (AnonPointee_PlaySystemTy_0039 *)((int)&pAVar9->field_0000 + 1);
          pcVar11 = pcVar11 + 1;
        }
        pcVar6 = pcVar6 + local_8;
        *(int *)local_10->field_004F = *(int *)local_10->field_004F + 1;
        local_c = (AnonPointee_PlaySystemTy_0039 *)local_c->field_0000;
      } while (local_c != nullptr);
      local_c = nullptr;
      pPVar10 = local_10;
    }
    local_14 = uVar4;
    if (pPVar10->field_0039 != nullptr) {
      st::fn_006B9890((int *)&pPVar10->field_0039);
    }
    if ((*(int *)pPVar10->field_004F != 0) && (DAT_0080c512 == 0)) {
      iVar5 = st::fn_00715360(g_int_00811764,1,'8',pPVar10->field_004F,local_14,1,0xffffffff);
      if (iVar5 != 0) {
        st::fn_004059ED(4);
      }
    }
    g_currentExceptionFrame = local_58.previous;
    return;
  }
  g_currentExceptionFrame = local_58.previous;
  iVar7 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x4e6,0,iVar5,st::mutable_c_string("%s"),
                             "PlaySystemTy::SendClientMail");
  if (iVar7 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar5,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x4e8);
  return;
}

// 0054EEE0 STPlaySystemC::SetCtrlCmd
#line 4 "decomp/ST.exe/functions/0054EEE0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SetCtrlCmd

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0054EDF0 -> 0054EEE0 @ 0054EE87

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 0054EDF0 -> 0054EEE0 @ 0054EE42; FUN_0054edf0 parameter param_2 | 0054EDF0 -> 0054EEE0
   @ 0054EE87; FUN_0054edf0 parameter param_2 */

void __thiscall
st::fn_0054EEE0
          (STPlaySystemC *this,undefined1 param_1,uint param_2,char param_3,uint *param_4,
          uint param_5,undefined4 *param_6,uint param_7)

{
  int iVar1;
  bool bVar3;
  int iVar3;
  void *pvVar4;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  byte *puVar8;
  InternalExceptionFrame local_54;
  int local_10;
  uint local_c;
  STPlaySystemC *local_8;

  if ((int)param_5 < 0) {
    param_5 = 0;
    switch(param_3) {
    case '\x05':
    case '\x14':
    case '\x19':
      param_5 = 0xc;
      break;
    case '\b':
    case '\t':
    case '\x15':
    case '\"':
    case '(':
    case ')':
    case '*':
      param_5 = 1;
      break;
    case '\x16':
      param_5 = 0x18;
      break;
    case '\x17':
      param_5 = 0x21;
      break;
    case '\x18':
      param_5 = 0x12;
      break;
    case '\x1a':
      param_5 = 0xd;
      break;
    case '\x1e':
      param_5 = 0xb;
      break;
    case '\x1f':
      param_5 = 7;
      break;
    case ' ':
      param_5 = 9;
      break;
    case '!':
      param_5 = 5;
      break;
    case '#':
      param_5 = 0x10;
      break;
    case '\'':
      param_5 = 2;
    }
  }
  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_c = param_5;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  uVar6 = local_c;
  if (iVar3 == 0) {
    iVar1 = local_c + param_7;
    local_10 = iVar1;
    pvVar4 = st::fn_006AAC10(iVar1 + 0x1b);
    STField<uint>(pvVar4,4) = local_8->field_00E4;
    STField<undefined1>(pvVar4,8) = param_1;
    STField<char>(pvVar4,9) = (char)g_cursorClass_00802A30->field_04AE;
    STField<uint>(pvVar4,10) = param_2;
    STField<char>(pvVar4,0xe) = param_3;
    STField<uint>(pvVar4,0xf) = uVar6;
    STField<uint>(pvVar4,0x13) = param_7;
    local_c = iVar1;
    if (param_4 != nullptr) {
      uVar5 = uVar6 >> 2;
      STField<uint *>(pvVar4,0x17) = (uint *)((int)pvVar4 + 0x1b);
      puVar7 = (uint *)((int)pvVar4 + 0x1b);
      for (; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *param_4;
        param_4 = param_4 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar6 = uVar6 & 3; local_c = local_10, uVar6 != 0; uVar6 = uVar6 - 1) {
        *(char *)puVar7 = (char)*param_4;
        param_4 = (uint *)((int)param_4 + 1);
        puVar7 = (uint *)((int)puVar7 + 1);
      }
    }
    if ((param_6 != nullptr) && (param_7 != 0)) {
      puVar8 = (byte *)(STField<int>(pvVar4,0x17) + STField<int>(pvVar4,0xf));
      memmove(puVar8, param_6, param_7); /* compiler REP MOVS byte copy */
    }
    if (DAT_0080877e == '\0') {
      bVar3 = true;
      if ((param_3 != '\x05') && (param_3 != '2')) {
        bVar3 = false;
      }
      if (bVar3) {
        st::fn_006B9910((undefined4 *)&local_8->field_0039,(int)pvVar4);
        /* ST_CALLSITE[0054F058]: CALL 0x00405420; direct=00405420 PlaySystemTy::SendClientMail */
        st::fn_00405420((PlaySystemTy *)local_8);
        g_currentExceptionFrame = local_54.previous;
        return;
      }
    }
    st::fn_006B9910((undefined4 *)&local_8->field_0039,(int)pvVar4);
    g_currentExceptionFrame = local_54.previous;
    return;
  }
  g_currentExceptionFrame = local_54.previous;
  iVar4 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x55b,0,iVar3,st::mutable_c_string("%s"),
                             "STPlaySystemC::SetCtrlCmd");
  if (iVar4 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x55d);
  return;
}

// 0054F1D0 STPlaySystemC::PrepareMail
#line 4 "decomp/ST.exe/functions/0054F1D0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::PrepareMail */

undefined4 * __thiscall st::fn_0054F1D0(STPlaySystemC *this)

{
  AnonPointee_STPlaySystemC_0039 **ppAVar1;
  undefined2 *puVar2;
  char cVar3;
  AnonPointee_STPlaySystemC_0039 *pAVar4;
  STPlaySystemC *pSVar6;
  byte bVar7;
  int local_EAX_49;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  char *pcVar13;
  char *pcVar14;
  AnonPointee_STPlaySystemC_003D *pAVar15;
  undefined3 uVar17;
  int local_EAX_1257;
  int iVar8;
  DWORD DVar16;
  int local_EAX_1662;
  char *local_EAX_1830;
  char *local_EAX_1962;
  int local_EAX_2157;
  int local_EAX_2233;
  int iVar9;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined4 *extraout_EAX;
  int *piVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint *puVar21;
  uint *puVar22;
  STPlaySystemC *pSVar23;
  AnonPointee_STPlaySystemC_0039 *pAVar24;
  uint *puVar25;
  char *pcVar26;
  undefined4 *puVar27;
  bool bVar28;
  char local_17c [260];
  InternalExceptionFrame local_78;
  uint local_34;
  int local_30;
  AnonPointee_STPlaySystemC_0039 **local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  char local_19;
  uint local_18;
  uint local_14;
  int local_10;
  STPlaySystemC *local_c;
  uint *local_8;

  local_34 = 7;
  local_8 = nullptr;
  local_78.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_78;
  local_c = this;
  local_EAX_49 = st::fn_0072D7F0(local_78.jumpBuffer,0);
  pSVar23 = local_c;
  if (local_EAX_49 != 0) {
    g_currentExceptionFrame = local_78.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x742,0,local_EAX_49,
                               st::mutable_c_string("%s"),"STPlaySystemC::PrepareMail");
    if (iVar9 == 0) {
      st::fn_006A5E40(local_EAX_49,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x744);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      return extraout_EAX;
    }
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  if (DAT_0080877e != '\0') {
    if (DAT_00808783 == '\x03') {
      st::fn_006B7510(g_int_00811764,-1,&local_20,-1,0);
      local_18 = 0;
      if (0 < local_20) {
        do {
          iVar10 = st::fn_00715630
                             (g_int_00811764,-1,&local_14,&local_30,(undefined4 *)&local_8,nullptr,-1,0);
          pSVar23 = local_c;
          if (iVar10 == -0x4d) {
            puVar20 = (undefined4 *)st::fn_004059ED(6);
            g_currentExceptionFrame = local_78.previous;
            return puVar20;
          }
          if (iVar10 != 1) goto LAB_0054f531;
          uVar11 = (uint)DAT_00808aaf;
          bVar28 = true;
          if (uVar11 != 0) {
            piVar18 = st::pointer_boundary_cast<int *>(&DAT_00808af0);
            do {
              if (*piVar18 == local_30) {
                bVar28 = false;
              }
              piVar18 = piVar18 + 0x27;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          if (bVar28) goto joined_r0x0054f3c5;
          switch(local_14) {
          case 0x11:
            st::fn_00401F87(local_c,local_30,0x426f,1);
            if (local_30 == pSVar23->field_0061) {
              pSVar23->field_0059 = 0;
            }
            goto joined_r0x0054f526;
          default:
joined_r0x0054f526:
            if (local_8 == nullptr) break;
            goto LAB_0054f52c;
          case 0x13:
            if (local_30 == local_c->field_0061) {
              local_c->field_0059 = 0;
            }
            if (local_8 != nullptr) {
              st::fn_006AB060(&local_8);
            }
            pSVar6 = local_c;
            if (pSVar23->field_00EC != 0) {
              st::fn_00401F87(local_c,local_30,0x4274,0);
              pSVar6->field_00E8 = 1;
            }
            break;
          case 0x1a:
          case 0x35:
            st::fn_00401384(local_c,local_30,0);
            goto joined_r0x0054f3c5;
          case 0x30:
            if (local_c->field_00E8 == 0) {
              st::fn_006B9910((undefined4 *)&local_c->field_0039,(int)local_8);
            }
            break;
          case 0x33:
            st::fn_004045E3((int)local_8);
            goto joined_r0x0054f3c5;
          case 0x36:
            /* ST_CALLSITE[0054F2E6]: CALL 0x00401456; direct=00401456 STPlaySystemC::sub_005505D0 */
            st::fn_00401456(local_c,local_30,(int *)local_8);
joined_r0x0054f3c5:
            if (local_8 != nullptr) {
LAB_0054f52c:
              st::fn_006AB060(&local_8);
            }
            break;
          case 0x38:
            if (((local_c->field_00E8 != 0) || (local_8 == nullptr)) || (*local_8 == 0)) break;
            puVar21 = local_8 + 1;
            local_24 = 0;
            if (*local_8 != 0) {
              do {
                local_2c = (AnonPointee_STPlaySystemC_0039 **)
                           (STField<int>(puVar21,0x13) + STField<int>(puVar21,0xf));
                uVar11 = (int)local_2c + 0x1b;
                puVar12 = st::pointer_boundary_cast<uint *>(st::fn_006AAC10(uVar11));
                puVar22 = puVar21;
                puVar25 = puVar12;
                memmove(puVar25, puVar22, uVar11); /* compiler REP MOVS byte copy */
                uVar19 = 0;
                st::fn_006B9910((undefined4 *)&local_c->field_0039,(int)puVar12);
                puVar21 = (uint *)((int)puVar21 + (int)local_2c + 0x1b);
                local_24 = local_24 + 1;
              } while (local_24 < *local_8);
            }
            goto LAB_0054f52c;
          case 0x42:
            pcVar13 = st::fn_006B0140(0x426a,g_hINSTANCE_00807618);
            uVar11 = 0xffffffff;
            do {
              pcVar14 = pcVar13;
              if (uVar11 == 0) break;
              uVar11 = uVar11 - 1;
              pcVar14 = pcVar13 + 1;
              cVar3 = *pcVar13;
              pcVar13 = pcVar14;
            } while (cVar3 != '\0');
            uVar11 = ~uVar11;
            pcVar14 = pcVar14 + -uVar11;
            pcVar26 = local_17c;
            for (uVar19 = uVar11 >> 2; puVar21 = local_8, uVar19 != 0; uVar19 = uVar19 - 1) {
              *(undefined4 *)pcVar26 = *(undefined4 *)pcVar14;
              pcVar14 = pcVar14 + 4;
              pcVar26 = pcVar26 + 4;
            }
            bVar28 = local_8 != nullptr;
            for (uVar11 = uVar11 & 3; pSVar23 = local_c, uVar11 != 0; uVar11 = uVar11 - 1) {
              *pcVar26 = *pcVar14;
              pcVar14 = pcVar14 + 1;
              pcVar26 = pcVar26 + 1;
            }
            if ((bVar28) && ((local_c->field_00F0 != 0 || ((char)*puVar21 != '\0')))) {
              st::fn_006AB060(&local_8);
              pSVar23->field_0059 = 1;
              pSVar23->field_005D = 0;
              pSVar23->field_0061 = local_30;
              uVar11 = 0;
              if (DAT_00808aaf != 0) {
                pcVar14 = st::pointer_boundary_cast<char *>(&DAT_00808af6);
                do {
                  if ((*(int *)(pcVar14 + -6) == local_30) && (*pcVar14 != '\0')) {
                    /* ST_CALLSITE[0054F500]: CALL dword ptr [0x0085bde8] */
                    st::external_00000080(local_17c,st::mutable_c_string("%s (%s)"),local_17c,pcVar14 + -0x46);
                    break;
                  }
                  uVar11 = uVar11 + 1;
                  pcVar14 = pcVar14 + 0x9c;
                } while (uVar11 < DAT_00808aaf);
              }
              if (g_popUp_008016D8 != nullptr) {
                st::fn_004014D8(g_popUp_008016D8,local_17c,9);
              }
            }
          }
LAB_0054f531:
          local_18 = local_18 + 1;
          pSVar23 = local_c;
        } while ((int)local_18 < local_20);
      }
    }
    pAVar4 = pSVar23->field_0039;
    ppAVar1 = &pSVar23->field_0039;
    if ((pAVar4 == nullptr) && (pSVar23->field_0028 == 0)) {
      pSVar23->field_003D->field_0005 = 0;
      g_currentExceptionFrame = local_78.previous;
      return &pAVar4->field_0000;
    }
    pSVar23->field_003D->field_0004 = 0;
    pSVar23->field_003D->field_0005 = 0;
    uVar11 = local_34;
    if (((int)(uint)(byte)pSVar23->field_004D < *(int *)(&DAT_007c2af8 + (uint)DAT_0080733b * 0x18))
       && (DAT_00808784 == 0)) {
      pSVar23->field_004D = pSVar23->field_004D + 1;
      g_currentExceptionFrame = local_78.previous;
      return &pAVar4->field_0000;
    }
    for (; pAVar4 != nullptr;
        pAVar4 = (AnonPointee_STPlaySystemC_0039 *)pAVar4->field_0000) {
      puVar20 = &pAVar4->field_0013;
      puVar27 = &pAVar4->field_000F;
      uVar11 = uVar11 + 0x1b + *puVar20 + *puVar27;
    }
    local_34 = uVar11;
    local_2c = ppAVar1;
    if ((uint)pSVar23->field_0045 < uVar11) {
      pAVar15 = st::pointer_boundary_cast<AnonPointee_STPlaySystemC_003D *>(st::fn_006ACF50(pSVar23->field_003D,uVar11));
      pSVar23->field_003D = pAVar15;
      pSVar23->field_0045 = uVar11;
    }
    puVar20 = (undefined4 *)&pSVar23->field_003D->field_0x7;
    pAVar4 = *ppAVar1;
    for (; pAVar4 != nullptr;
        pAVar4 = (AnonPointee_STPlaySystemC_0039 *)pAVar4->field_0000) {
      local_34 = pAVar4->field_0013 + 0x1b + pAVar4->field_000F;
      pAVar24 = pAVar4;
      puVar27 = puVar20;
      for (uVar19 = local_34 >> 2; uVar19 != 0; uVar19 = uVar19 - 1) {
        *puVar27 = pAVar24->field_0000;
        pAVar24 = (AnonPointee_STPlaySystemC_0039 *)&pAVar24->field_0x4;
        puVar27 = puVar27 + 1;
      }
      for (uVar19 = local_34 & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
        *(undefined1 *)puVar27 = *(undefined1 *)&pAVar24->field_0000;
        pAVar24 = (AnonPointee_STPlaySystemC_0039 *)((int)&pAVar24->field_0000 + 1);
        puVar27 = (undefined4 *)((int)puVar27 + 1);
      }
      puVar20 = (undefined4 *)((int)puVar20 + local_34);
      puVar2 = &local_c->field_003D->field_0005;
      *puVar2 = *puVar2 + 1;
      ppAVar1 = local_2c;
    }
    puVar20 = nullptr;
    local_28 = uVar11;
    if (*ppAVar1 != nullptr) {
      puVar20 = (undefined4 *)st::fn_006B9890((int *)ppAVar1);
    }
    pSVar23 = local_c;
    if (DAT_00808783 != '\x03') {
      g_currentExceptionFrame = local_78.previous;
      return puVar20;
    }
    pAVar15 = local_c->field_003D;
    cVar3 = local_c->field_004D;
    uVar17 = (undefined3)((uint)puVar20 >> 8);
    /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
    puVar20 = (undefined4 *)CONCAT31(uVar17,cVar3);
    if (pAVar15->field_0005 == 0) {
      bVar7 = cVar3 + 1;
      /* ST_PSEUDO[packed_or_unaligned_piece]: expected named packed member, bit extract/compose, or unaligned load */
      puVar20 = (undefined4 *)CONCAT31(uVar17,bVar7);
      local_c->field_004D = bVar7;
      if ((int)(uint)bVar7 <
          *(int *)("FrmPanelTy::GetMessage" + (uint)DAT_0080733b * 0x18 + 0xc)) {
        g_currentExceptionFrame = local_78.previous;
        return puVar20;
      }
      if (DAT_00808783 == '\x03') {
        pAVar15->field_0004 = bVar7;
        local_c->field_003D->field_0005 = 0;
        /* ST_CALLSITE[0054F6B9]: CALL 0x00405443; direct=00405443 STPlaySystemC::sub_0054EBB0 */
        local_EAX_1257 = st::fn_00405443(local_c,(char *)local_c->field_003D,7);
        puVar20 = nullptr;
        if (local_EAX_1257 != 0) {
          bVar7 = 7;
LAB_0054f6c6:
          puVar20 = (undefined4 *)st::fn_004059ED(bVar7);
          g_currentExceptionFrame = local_78.previous;
          return puVar20;
        }
      }
    }
    else {
      if (cVar3 != '\0') {
        pAVar15->field_0004 = cVar3;
      }
      if (DAT_00808783 == '\x03') {
        /* ST_CALLSITE[0054F70B]: CALL 0x00405443; direct=00405443 STPlaySystemC::sub_0054EBB0 */
        iVar8 = st::fn_00405443(local_c,(char *)local_c->field_003D,local_28);
        puVar20 = nullptr;
        if (iVar8 != 0) {
          bVar7 = 8;
          goto LAB_0054f6c6;
        }
      }
    }
    pSVar23->field_004D = 0;
    g_currentExceptionFrame = local_78.previous;
    return puVar20;
  }
  local_10 = 0;
  /* ST_CALLSITE[0054F71F]: CALL dword ptr [0x0085bedc] */
  local_2c = (AnonPointee_STPlaySystemC_0039 **)st::external_000000DA();
  st::fn_006B7510(g_int_00811764,-1,&local_20,-1,0);
  pSVar23 = local_c;
  if (local_c->field_006D == 0) {
    puVar20 = (undefined4 *)st::fn_00403C83(local_c);
    if (puVar20 != nullptr) {
      g_currentExceptionFrame = local_78.previous;
      return puVar20;
    }
    if (local_20 < 3) {
      if (pSVar23->field_0059 == 0) {
        if (DAT_00807654 <
            *(int *)("FrmPanelTy::GetMessage" + (uint)DAT_0080733b * 0x18 + 0x14)) {
          DAT_00807654 = DAT_00807654 + 1;
        }
      }
      else {
        st::fn_006B6500(g_int_00811764,1);
        local_EAX_2233 = st::fn_00715360(g_int_00811764,1,'C',nullptr,0,0,0xffffffff);
        if (local_EAX_2233 != 0) {
          bVar7 = 0xc;
          goto cf_common_exit_0054F76E;
        }
        st::fn_006B6500(g_int_00811764,DAT_0080733c);
        pSVar23->field_0059 = 0;
      }
    }
    else {
      if ((5 < DAT_00807654) && (0 < DAT_00807654)) {
        DAT_00807654 = DAT_00807654 + -1;
      }
      if ((pSVar23->field_0038 == '\0') &&
         (((0x32 < local_20 && (pSVar23->field_0059 == 0)) || (100 < local_20)))) {
        st::fn_006B6500(g_int_00811764,1);
        local_19 = '\x01';
        local_EAX_2157 = st::fn_00715360(g_int_00811764,1,'B',&local_19,1,0,0xffffffff);
        if (local_EAX_2157 != 0) {
          bVar7 = 0xb;
          goto cf_common_exit_0054F76E;
        }
        st::fn_006B6500(g_int_00811764,DAT_0080733c);
        pSVar23->field_0059 = 1;
      }
    }
    local_10 = 1;
    goto cf_common_join_0054FAD8;
  }
  if (local_c->field_0071 != 0) {
    puVar20 = (undefined4 *)st::fn_00403C83(local_c);
    if (puVar20 != nullptr) {
      g_currentExceptionFrame = local_78.previous;
      return puVar20;
    }
    iVar10 = st::fn_004025EF(pSVar23,&local_28);
    if (iVar10 == 0) goto switchD_0054fb75_caseD_37;
    pSVar23->field_0071 = 0;
    pSVar23->field_006D = 0;
    pSVar23->field_0079 = 0;
    local_14 = 0x31;
    goto LAB_0054fbb7;
  }
  DVar16 = st::fn_006E51B0((STAppC *)&DAT_00807620);
  if (30000 < (int)(DVar16 - pSVar23->field_0079)) {
    bVar7 = 10;
cf_common_exit_0054F76E:
    puVar20 = (undefined4 *)st::fn_004059ED(bVar7);
    g_currentExceptionFrame = local_78.previous;
    return puVar20;
  }
  DVar16 = st::fn_006E51B0((STAppC *)&DAT_00807620);
  if (pSVar23->field_007D * 4000 < (int)(DVar16 - pSVar23->field_0079)) {
    st::fn_006B6500(g_int_00811764,1);
    st::fn_00715360(g_int_00811764,1,'6',(char *)&pSVar23->field_0041,4,0,0xffffffff);
    st::fn_006B6500(g_int_00811764,DAT_0080733c);
    pSVar23->field_007D = pSVar23->field_007D + 1;
  }
  iVar10 = st::fn_00715630
                     (g_int_00811764,0x31,&local_14,(int *)&local_24,(undefined4 *)&local_8,&local_18,
                      pSVar23->field_0041,0);
  if (pSVar23->field_0075 == 0) {
    if (iVar10 != 1) goto LAB_0054f98b;
  }
  else {
    pSVar23->field_0075 = 0;
    if (iVar10 != 1) {
      st::fn_006B6500(g_int_00811764,1);
      local_EAX_1662 =
           st::fn_00715360(g_int_00811764,1,'6',(char *)&pSVar23->field_0041,4,0,0xffffffff);
      if (local_EAX_1662 == 0) {
        st::fn_006B6500(g_int_00811764,DAT_0080733c);
        if (pSVar23->field_00BB < 5) {
          DVar16 = st::fn_006E51B0((STAppC *)&DAT_00807620);
          (&pSVar23->field_00A7)[pSVar23->field_00BB] = DVar16;
          bVar7 = pSVar23->field_00BB + 1;
          pSVar23->field_00BB = bVar7;
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)STReplaceLowByte((uint32_t)(DVar16), (uint8_t)(bVar7));
        }
        pSVar23->field_00A7 = pSVar23->field_00AB;
        pSVar23->field_00AB = pSVar23->field_00AF;
        pSVar23->field_00AF = pSVar23->field_00B3;
        pSVar23->field_00B3 = pSVar23->field_00B7;
        DVar16 = st::fn_006E51B0((STAppC *)&DAT_00807620);
        pSVar23->field_00B7 = DVar16;
        if (DAT_0080735e == '\0') {
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)STReplaceLowByte((uint32_t)(DVar16), (uint8_t)(DAT_0080735e));
        }
        uVar11 = DVar16 - pSVar23->field_00A7;
        if (3000 < uVar11 / 5) {
          g_currentExceptionFrame = local_78.previous;
          return (undefined4 *)(uVar11 * -0x33333333);
        }
        puVar20 = nullptr;
        if (g_popUp_008016D8 != nullptr) {
          uVar11 = 9;
          local_EAX_1830 = st::fn_006B0140(17000,g_hINSTANCE_00807618);
          puVar20 = (undefined4 *)st::fn_004014D8(g_popUp_008016D8,local_EAX_1830,uVar11);
        }
        pSVar23->field_00BB = 0;
        g_currentExceptionFrame = local_78.previous;
        return puVar20;
      }
      bVar7 = 0x10;
      goto cf_common_exit_0054F76E;
    }
  }
  if ((DAT_0080735e != '\0') && (g_popUp_008016D8 != nullptr)) {
    uVar11 = 8;
    local_EAX_1962 = st::fn_006B0140(0x426c,g_hINSTANCE_00807618);
    st::fn_004014D8(g_popUp_008016D8,local_EAX_1962,uVar11);
  }
LAB_0054f98b:
  local_10 = 1;
  do {
    if (iVar10 == -0x4d) {
      st::fn_004059ED(0xe);
      goto cf_common_join_0054FAD8;
    }
    if (iVar10 == 0) {
      if (60000 < (int)((int)local_2c - pSVar23->field_0083)) {
        st::fn_004059ED(0xd);
      }
      goto cf_common_join_0054FAD8;
    }
    if (iVar10 != 1) goto cf_common_join_0054FAD8;
    pSVar23->field_0083 = (DWORD)local_2c;
    if (local_14 == 0x31) {
      pSVar23->field_0038 = 0;
    }
    switch(local_14) {
    case 0x10:
      DAT_0080c50a = 0;
      DAT_0080c512 = 1;
      if (g_optPanel_008016DC != nullptr) {
        /* ST_CALLSITE[0054FCA4]: CALL 0x00405ef7; direct=00405EF7 OptPanelTy::Notification */
        st::fn_00405EF7(g_optPanel_008016DC,'\v',0);
      }
      break;
    case 0x11:
      st::fn_00401F87(pSVar23,local_24,0x426f,1);
    default:
      goto switchD_0054fb75_caseD_12;
    case 0x31:
      if ((int)pSVar23->field_0045 < (int)local_18) {
        pAVar15 = st::pointer_boundary_cast<AnonPointee_STPlaySystemC_003D *>(st::fn_006ACF50(pSVar23->field_003D,local_18));
        pSVar23->field_003D = pAVar15;
        pSVar23->field_0045 = local_18;
      }
      local_28 = local_18;
      puVar21 = local_8;
      pAVar15 = pSVar23->field_003D;
      memmove(pAVar15, puVar21, local_18); /* compiler REP MOVS byte copy */
LAB_0054fbb7:
      pAVar15 = pSVar23->field_003D;
      uVar11 = pSVar23->field_0041;
      if (*(uint *)pAVar15 < uVar11) {
        pAVar15->field_0005 = 0;
      }
      else if (uVar11 < *(uint *)pAVar15) {
        if (pSVar23->field_006D == 0) {
          /* ST_CALLSITE[0054FBE9]: CALL 0x004045fc; direct=004045FC STPlaySystemC::AddToRep */
          st::fn_004045FC(pSVar23,(undefined4 *)pAVar15,local_28);
          pSVar23->field_003D->field_0005 = 0;
          pSVar23->field_006D = 1;
          pSVar23->field_0071 = 0;
          pSVar23->field_0075 = 1;
          DVar16 = st::fn_006E51B0((STAppC *)&DAT_00807620);
          pSVar23->field_0079 = DVar16;
          pSVar23->field_007D = 1;
        }
        else {
          st::fn_004059ED(0xf);
        }
      }
      else {
        if (pSVar23->field_006D != 0) {
          pSVar23->field_0071 = 1;
        }
        pSVar23->field_0041 = uVar11 + 1;
        if (pAVar15->field_0004 != '\0') {
          pSVar23->field_0057 = pAVar15->field_0005;
          pAVar15->field_0005 = 0;
          pSVar23->field_0049 = *(undefined4 *)pSVar23->field_003D;
          pSVar23->field_004D = pSVar23->field_003D->field_0004;
          pSVar23->field_004E = 0;
          st::fn_00403C83(pSVar23);
        }
      }
      break;
    case 0x33:
      st::fn_004045E3((int)local_8);
      goto switchD_0054fb75_caseD_12;
    case 0x34:
      break;
    case 0x37:
switchD_0054fb75_caseD_37:
      st::fn_004059ED(0x11);
      break;
    case 0x44:
      pSVar23->field_0059 = 0;
switchD_0054fb75_caseD_12:
      local_10 = 1;
    }
    if (local_8 != nullptr) {
      st::fn_006AB060(&local_8);
    }
cf_common_join_0054FAD8:
    if (local_10 == 0) {
      g_currentExceptionFrame = local_78.previous;
      return nullptr;
    }
    local_10 = 0;
    bVar28 = pSVar23->field_006D == 0;
    if (bVar28) {
      iVar10 = -1;
    }
    else {
      iVar10 = 0x31;
    }
    iVar10 = st::fn_00715630
                       (g_int_00811764,iVar10,&local_14,(int *)&local_24,(undefined4 *)&local_8,&local_18,-1,
                        (uint)!bVar28);
  } while( true );
}

// 00550250 STPlaySystemC::SendMail
#line 4 "decomp/ST.exe/functions/00550250/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\tplaysys.cpp
   STPlaySystemC::SendMail

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return
   [STAbiConsistencyApplier] machine_thiscall_arity target=function:-1: prototype=void __thiscall
   SendMail(STPlaySystemC * this) Evidence: every machine RET purges exactly 0 explicit stack bytes;
   current signature describes 4; removed trailing parameter slots have no listing references;
   ret_sites=005502EE RET | 00550334 RET */

void __thiscall st::fn_00550250(STPlaySystemC *this)

{
  int iVar1;
  int iVar4;
  STPlaySystemC *this_00;
  int iVar2;
  int iVar3;
  void *command;
  InternalExceptionFrame local_50;
  STPlaySystemC *local_c;
  uint local_8;

  if ((this->field_003D != nullptr) &&
     (this->field_003D->field_0005 != 0)) {
    local_50.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_50;
    local_c = this;
    iVar2 = st::fn_0072D7F0(local_50.jumpBuffer,0);
    this_00 = local_c;
    if (iVar2 == 0) {
      local_8 = 0;
      command = &local_c->field_003D->field_0x7;
      if (local_c->field_003D->field_0005 != 0) {
        do {
          iVar1 = STField<int>(command,0x13);
          iVar4 = STField<int>(command,0xf);
          st::fn_004043DB(this_00,command);
          local_8 = local_8 + 1;
          command = (void *)((int)command + iVar1 + iVar4 + 0x1b);
        } while (local_8 < (ushort)this_00->field_003D->field_0005);
      }
      this_00->field_003D->field_0005 = 0;
      g_currentExceptionFrame = local_50.previous;
      return;
    }
    g_currentExceptionFrame = local_50.previous;
    iVar3 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x819,0,iVar2,
                               st::mutable_c_string("%s"),"STPlaySystemC::SendMail");
    if (iVar3 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar2,0,st::mutable_c_string("E:\\__titans\\Andrey\\tplaysys.cpp"),0x81a);
  }
  return;
}


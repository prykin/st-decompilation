#include "st/generated.hpp"
// Generated translation unit: source/original/Igor/to_jell_m.cpp

// 00581AC0 STJellyManC::Error
#line 1 "decomp/ST.exe/functions/00581AC0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jell_m.cpp
   STJellyManC::Error

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004C4550 -> 00581AC0 @ 004C4728 */

undefined4 __thiscall
st::fn_00581AC0(STJellyManC *this,undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar2;
  undefined4 uVar3;

  if (this->field_020F < this->field_01FD) {
    uVar3 = st::fn_004022E3(param_1,param_2,param_3,this->field_01ED,this->field_01F1,
                               this->field_01F5,this->field_01F9,this->field_0018,this->field_0024,
                               this->field_0201,(uint)(ushort)this->field_0205,0xffff);
    return uVar3;
  }
  iVar2 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jell_m.cpp",0xda,0,0,"%s",
                             "STJellyManC::Error:Max jellies reached");
  if (iVar2 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  return 0;
}

// 00581BF0 STJellyManC::GetMessage
#line 1 "decomp/ST.exe/functions/00581BF0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Igor\to_jell_m.cpp
   STJellyManC::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00402F4F|00581BF0; family_names=STJellyManC::GetMessage; ret4=8;
   direct_offsets={10:1,14:5,18:1,1c:0} */

int __thiscall st::fn_00581BF0(STJellyManC *this,STMessage *message)

{
  STMessageId SVar1;
  dword dVar2;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  STGameObjC *pSVar7;
  int iVar8;
  void *pvVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  byte *puVar13;
  byte *puVar14;
  byte *puVar15;
  byte *pbVar16;
  InternalExceptionFrame local_54;
  STGameObjC *local_10;
  int local_c;
  byte *local_8;

  local_54.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_54;
  local_10 = (STGameObjC *)this;
  iVar8 = st::fn_0072D7F0(local_54.jumpBuffer,0);
  pSVar7 = local_10;
  if (iVar8 != 0) {
    g_currentExceptionFrame = local_54.previous;
    iVar11 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jell_m.cpp",0x191,0,iVar8,
                                "%s","STJellyManC::GetMessage");
    if (iVar11 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar8,0,"E:\\__titans\\Igor\\to_jell_m.cpp",0x192);
    return 0xffff;
  }
  st::fn_00403EBD(local_10,message);
  SVar1 = message->id;
  if (MESS_SHARED_010F < SVar1) {
    if (SVar1 == MESS_STJELLYMANC_0124) {
      iVar8 = *(int *)&pSVar7->field_0x1fd + -1;
      if (iVar8 < 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      while ((iVar11 = *(int *)(*(int *)&pSVar7->field_0x207 + iVar8 * 4), iVar11 == 0 ||
             (*(dword *)(iVar11 + 8) != (message->arg0).u32))) {
        if ((iVar8 < 0) &&
           (iVar11 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jell_m.cpp",0x128,0,0,
                                        "%s","Jell_m:Small finding jelly"),
           iVar11 != 0)) {
          STDebugBreak(); /* noreturn in standalone pseudocode */
        }
        iVar8 = iVar8 + -1;
        if (iVar8 < 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
      }
      *(undefined4 *)(*(int *)&pSVar7->field_0x207 + iVar8 * 4) = 0;
      iVar8 = *(int *)&pSVar7->field_0x20f + -1;
      *(int *)&pSVar7->field_0x20f = iVar8;
      if ((pSVar7->field_0x1d5 & 1) == 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
      if (iVar8 != 0) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    else {
      if (SVar1 == MESS_STJELLYMANC_0125) {
        iVar8 = *(int *)&pSVar7->field_0x1fd + -1;
        if (-1 < iVar8) {
          piVar10 = (int *)(*(int *)&pSVar7->field_0x207 + iVar8 * 4);
          do {
            if (*piVar10 == 0) break;
            iVar8 = iVar8 + -1;
            piVar10 = piVar10 + -1;
          } while (-1 < iVar8);
        }
        if (iVar8 < 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar11 = st::fn_006E5380(g_playSystem_00802A38,(message->arg0).i32,&local_c);
        if (iVar11 != 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar11 = *(int *)&pSVar7->field_0x1fd + -1;
        if (-1 < iVar11) {
          piVar10 = (int *)(*(int *)&pSVar7->field_0x207 + iVar11 * 4);
          do {
            if (*piVar10 == local_c) break;
            iVar11 = iVar11 + -1;
            piVar10 = piVar10 + -1;
          } while (-1 < iVar11);
        }
        if (iVar11 < 0) {
          *(int *)(*(int *)&pSVar7->field_0x207 + iVar8 * 4) = local_c;
          *(int *)&pSVar7->field_0x20f = *(int *)&pSVar7->field_0x20f + 1;
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        iVar8 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jell_m.cpp",0x110,0,0,"%s"
                                   ,"STJellyManC::max jellies error");
        if (iVar8 == 0) {
          g_currentExceptionFrame = local_54.previous;
          return 0;
        }
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      if (SVar1 != MESS_HITKILL) {
        g_currentExceptionFrame = local_54.previous;
        return 0;
      }
    }
    st::fn_00405038(pSVar7);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar1 == MESS_SHARED_010F) {
    local_8 = st::fn_006AAC70(0x3a);
    if (local_8 == nullptr) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    puVar14 = (byte *)&pSVar7->field_0x1d9;
    pbVar16 = local_8;
    memmove(pbVar16, puVar14, 0x2e); /* compiler REP MOVS byte copy */
    local_8[0xc] = 2;
    local_8[0xd] = 0;
    local_8[0xe] = 0;
    local_8[0xf] = 0;
    uVar4 = pSVar7->field_0x210;
    uVar5 = pSVar7->field_0x211;
    uVar6 = pSVar7->field_0x212;
    local_8[0x32] = pSVar7->field_0x20f;
    local_8[0x33] = uVar4;
    local_8[0x34] = uVar5;
    local_8[0x35] = uVar6;
    uVar4 = pSVar7->field_0x1d6;
    uVar5 = pSVar7->field_0x1d7;
    uVar6 = pSVar7->field_0x1d8;
    local_8[0x2e] = pSVar7->field_0x1d5;
    local_8[0x2f] = uVar4;
    local_8[0x30] = uVar5;
    local_8[0x31] = uVar6;
    local_8[0x36] = 0;
    local_8[0x37] = 0;
    local_8[0x38] = 0;
    local_8[0x39] = 0;
    st::fn_004025F9
              (g_playSystem_00802A38,(int *)pSVar7->field_0018,local_8,
               (AnonShape_0060EA30_DCEB68AD *)0x3a);
    st::fn_006AB060(&local_8);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar1 == MESS_ID_NONE) {
    st::fn_0040549D((int)pSVar7);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  if (SVar1 != MESS_ID_CREATE) {
    if (SVar1 != MESS_SHARED_0003) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    if (*(int *)&pSVar7->field_0x207 != 0) {
      st::fn_006AB060((void **)&pSVar7->field_0x207);
    }
    if (*(int *)&pSVar7->field_0x20b == 0) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    st::fn_006AB060((void **)&pSVar7->field_0x20b);
    g_currentExceptionFrame = local_54.previous;
    return 0;
  }
  dVar2 = (message->arg0).u32;
  *(undefined4 *)&pSVar7->field_0x207 = 0;
  *(undefined4 *)&pSVar7->field_0x20b = 0;
  uVar12 = *(uint *)(dVar2 + 0xc);
  if (uVar12 < 2) {
    *(undefined4 *)&pSVar7->field_0x1d5 = 0;
    *(undefined4 *)&pSVar7->field_0x20f = 0;
    puVar14 = (byte *)((message->arg0).ptr);
    puVar13 = (byte *)&pSVar7->field_0x1d9;
    memmove(puVar13, puVar14, 0x2e); /* compiler REP MOVS byte copy */
    if (((((int)pSVar7->field_01ED < 0) || (*(int *)&pSVar7->field_0x1f1 < 0)) ||
        ((int)g_worldGrid.sizeX < *(int *)&pSVar7->field_0x1f5)) ||
       ((int)g_worldGrid.sizeY < *(int *)&pSVar7->field_0x1f9)) {
      iVar8 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jell_m.cpp",0x13d,0,0,"%s",
                                 "Bad init coordinates");
      if (iVar8 != 0) {
        STDebugBreak(); /* noreturn in standalone pseudocode */
      }
      st::fn_006A5E40
                (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jell_m.cpp",0x13e);
    }
    pvVar9 = st::fn_006AAC70(*(int *)&pSVar7->field_0x1fd << 2);
    *(void **)&pSVar7->field_0x207 = pvVar9;
    pvVar9 = st::fn_006AAC70(*(int *)&pSVar7->field_0x1fd << 2);
    *(void **)&pSVar7->field_0x20b = pvVar9;
    if ((*(int *)&pSVar7->field_0x207 != 0) && (pvVar9 != nullptr))
    goto cf_common_exit_00581D62;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jell_m.cpp",0x143,0,0,"%s",
                               "Not enough memory");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar8 = 0x144;
  }
  else {
    if (uVar12 != 2) {
      g_currentExceptionFrame = local_54.previous;
      return 0;
    }
    puVar14 = (byte *)((message->arg0).ptr);
    puVar13 = (byte *)(puVar14);
    puVar15 = (byte *)&pSVar7->field_0x1d9;
    memmove(puVar15, puVar13, 0x2e); /* compiler REP MOVS byte copy */
    *(undefined4 *)&pSVar7->field_0x1d5 = STField<undefined4>(puVar14,0x2e);
    *(undefined4 *)&pSVar7->field_0x20f = 0;
    pvVar9 = st::fn_006AAC70(*(int *)&pSVar7->field_0x1fd << 2);
    *(void **)&pSVar7->field_0x207 = pvVar9;
    pvVar9 = st::fn_006AAC70(*(int *)&pSVar7->field_0x1fd << 2);
    *(void **)&pSVar7->field_0x20b = pvVar9;
    if ((*(int *)&pSVar7->field_0x207 != 0) && (pvVar9 != nullptr))
    goto cf_common_exit_00581D62;
    iVar8 = st::fn_006AD4D0("E:\\__titans\\Igor\\to_jell_m.cpp",0x15a,0,0,"%s",
                               "Not enough memory");
    if (iVar8 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    iVar8 = 0x15b;
  }
  st::fn_006A5E40
            (-1,g_overwriteContext_007ED77C,"E:\\__titans\\Igor\\to_jell_m.cpp",iVar8);
cf_common_exit_00581D62:
  puVar14 = (byte *)(*(undefined4 **)&pSVar7->field_0x207);
  for (uVar12 = *(uint *)&pSVar7->field_0x1fd & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar14 = 0;
    puVar14 = (byte *)(puVar14 + 1);
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (byte *)((int)puVar14 + 1);
  }
  puVar14 = (byte *)(*(undefined4 **)&pSVar7->field_0x20b);
  for (uVar12 = *(uint *)&pSVar7->field_0x1fd & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar14 = 0;
    puVar14 = (byte *)(puVar14 + 1);
  }
  for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
    *(undefined1 *)puVar14 = 0;
    puVar14 = (byte *)((int)puVar14 + 1);
  }
  g_currentExceptionFrame = local_54.previous;
  return 0;
}


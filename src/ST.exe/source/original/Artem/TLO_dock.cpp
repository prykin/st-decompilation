#include "st/generated.hpp"
// Generated translation unit: source/original/Artem/TLO_dock.cpp

// 004D01F0 FUN_004d01f0
#line 4 "decomp/ST.exe/functions/004D01F0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 651 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __fastcall st::fn_004D01F0(void *param_1)

{
  AnonShape_004AB810_8E5693D5 *pAVar1;
  STT3DSprC *this;
  int exceptionCode;
  int local_10;
  int local_c;
  int local_8;

  if (STField<int>(param_1,0x5ff) == 0) {
    pAVar1 = (AnonShape_004AB810_8E5693D5 *)st::fn_0072E530(0x40);
    if (pAVar1 == nullptr) {
      this = nullptr;
    }
    else {
      this = (STT3DSprC *)st::fn_00401316(pAVar1);
    }
    STField<STT3DSprC *>(param_1,0x5ff) = this;
    exceptionCode = st::fn_0040537B(this,PTR_008073cc,0x5a,0x45,nullptr,0xb4,0x8c,0x11);
    if (exceptionCode != 0) {
      st::fn_006A5E40
                (exceptionCode,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp"
                 ,0x28b);
    }
    st::fn_00405795(param_1,&local_10,&local_c,&local_8);
    st::fn_004045D9
              (STField<STT3DSprC *>(param_1,0x5ff),(float)local_10 * _DAT_007904f8 * _DAT_007904f0
               ,(float)local_c * _DAT_007904f8 * _DAT_007904f0,
               (float)local_8 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    st::fn_00402A90(STField<STT3DSprC *>(param_1,0x5ff));
  }
  return 0;
}

// 004D0310 FUN_004d0310
#line 4 "decomp/ST.exe/functions/004D0310/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 664 | 666 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004CEB00 -> 004D0310 @ 004CEE37; TLOBaseTy::sub_004CEB00 this; stable alias EBX */

undefined4 __fastcall st::fn_004D0310(TLOBaseTy *param_1)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  CHAR *pCVar6;
  char *pcVar7;
  char *pcVar8;
  uint uVar9;
  CHAR local_48 [64];
  uint local_8;

  pCVar6 = local_48;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    pCVar6[0] = '\0';
    pCVar6[1] = '\0';
    pCVar6[2] = '\0';
    pCVar6[3] = '\0';
    pCVar6 = pCVar6 + 4;
  }
  uVar5 = 0;
  local_8 = 0;
  iVar4 = st::fn_00404183
                    ((STT3DSprC *)param_1->field_05FF,0xe,PTR_0080677c,
                     &DAT_007a9342 + *(int *)&param_1->field_0x369 * 6,0x1d);
  if (iVar4 != 0) {
    st::fn_006A5E40
              (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp",0x298);
  }
  pbVar2 = (byte *)param_1->field_0379;
  if (pbVar2 == (byte *)0xff) {
    pbVar2 = param_1->field_0024;
  }
  st::external_00000080(local_48,"%s%1i",&DAT_007a9342 + *(int *)&param_1->field_0x369 * 6,pbVar2);
  iVar4 = st::fn_00404183((STT3DSprC *)param_1->field_05FF,0xc,PTR_0080677c,local_48,0x1d);
  if (iVar4 != 0) {
    st::fn_006A5E40
              (iVar4,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp",0x29a);
  }
  iVar4 = -1;
  pcVar8 = (char *)((int)&DAT_007a9440 + *(int *)&param_1->field_0x369 * 6 + 2);
  pcVar7 = pcVar8;
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  if (iVar4 == -2) {
    st::fn_00404264((STT3DSprC *)param_1->field_05FF,0xd);
  }
  else {
    iVar4 = st::fn_00404183((STT3DSprC *)param_1->field_05FF,0xd,PTR_0080677c,pcVar8,0x1d);
    if (iVar4 != 0) {
      return 0xffff;
    }
  }
  uVar9 = 10;
  iVar4 = st::fn_004052CC((STT3DSprC *)&param_1->field_01D5);
  uVar3 = st::fn_004052CC((STT3DSprC *)param_1->field_05FF);
  st::fn_006EA340((void *)param_1->field_0211,uVar3,iVar4,uVar9);
  iVar4 = st::fn_0040581C();
  switch(iVar4) {
  case 0:
    uVar5 = *(uint *)(&DAT_007a90b8 + *(int *)&param_1->field_0x369 * 0x10);
    local_8 = DAT_007a9438;
    break;
  case 1:
    local_8 = DAT_007a943c;
    uVar5 = *(uint *)(&DAT_007a90bc + *(int *)&param_1->field_0x369 * 0x10);
    break;
  case 2:
    local_8 = DAT_007a9440;
    uVar5 = *(uint *)(&DAT_007a90c0 + *(int *)&param_1->field_0x369 * 0x10);
    break;
  case 3:
    uVar5 = *(uint *)(&DAT_007a90c4 + *(int *)&param_1->field_0x369 * 0x10);
    local_8 = DAT_007a9444;
  }
  st::fn_00402982(param_1->field_05FF,0);
  st::fn_00401EBA(param_1->field_05FF,0xe,uVar5,uVar5,'\0');
  st::fn_00401EBA(param_1->field_05FF,0xc,uVar5,uVar5,'\0');
  st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\x0e',uVar5);
  st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\f',uVar5);
  st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xe,g_playSystem_00802A38->field_00E4);
  st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xc,g_playSystem_00802A38->field_00E4);
  uVar5 = local_8;
  iVar4 = -1;
  pcVar8 = (char *)((int)&DAT_007a9440 + *(int *)&param_1->field_0x369 * 6 + 2);
  do {
    if (iVar4 == 0) break;
    iVar4 = iVar4 + -1;
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  if (iVar4 != -2) {
    st::fn_00401EBA(param_1->field_05FF,0xd,local_8,local_8,'\0');
    st::fn_00401064((STT3DSprC *)param_1->field_05FF,'\r',uVar5);
    st::fn_00405240((STT3DSprC *)param_1->field_05FF,0xd,g_playSystem_00802A38->field_00E4);
  }
  return 0;
}

// 004D0970 FUN_004d0970
#line 4 "decomp/ST.exe/functions/004D0970/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 761 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end]

   [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A469 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4C7 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 2.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A466 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4C0 establishes signed source width 2

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 00479600 -> 004D0970 @ 0047A479; MOVSX at 0047A463 establishes signed source width 2 |
   00479600 -> 004D0970 @ 0047B4D3; MOVSX at 0047B4BD establishes signed source width 2 */

undefined4 __thiscall st::fn_004D0970(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  void *pvVar2;

  if (STField<int>(this,0x249) <= STField<int>(this,0x245) + 1) {
    iVar1 = STField<int>(this,0x249) + 10;
    STField<int>(this,0x249) = iVar1;
    pvVar2 = st::fn_006ACF50(STField<void *>(this,0x24d),iVar1 * 0xc);
    STField<void *>(this,0x24d) = pvVar2;
  }
  *(int *)(STField<int>(this,0x24d) + STField<int>(this,0x245) * 0xc) = param_1;
  *(int *)(STField<int>(this,0x24d) + 4 + STField<int>(this,0x245) * 0xc) = param_2;
  *(int *)(STField<int>(this,0x24d) + 8 + STField<int>(this,0x245) * 0xc) = param_3;
  iVar1 = st::fn_00401325((short)param_1,(short)param_2,(short)param_3,0,this);
  if (iVar1 != 0) {
    st::fn_006A5E40
              (iVar1,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp",0x2f9);
  }
  STField<int>(this,0x245) = STField<int>(this,0x245) + 1;
  return 0;
}

// 004D0A80 FUN_004d0a80
#line 4 "decomp/ST.exe/functions/004D0A80/decomp.c"
/* [STSourceProvenanceApplier begin]
   Recovered source file: E:\__titans\Artem\TLO_dock.cpp
   Diagnostic line evidence: 773 (metadata/report site, not the function definition)
   [STSourceProvenanceApplier end] */

undefined4 __thiscall st::fn_004D0A80(void *this,int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int exceptionCode;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;

  iVar4 = 0;
  if (0 < STField<int>(this,0x245)) {
    piVar1 = STField<int *>(this,0x24d);
    piVar2 = piVar1;
    while (((*piVar2 != param_1 || (piVar2[1] != param_2)) || (piVar2[2] != param_3))) {
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 3;
      if (STField<int>(this,0x245) <= iVar4) {
        return 0;
      }
    }
    exceptionCode =
         st::fn_00404EC1((short)piVar1[iVar4 * 3],(short)piVar1[iVar4 * 3 + 1],
                            (short)piVar1[iVar4 * 3 + 2],0,this);
    if (exceptionCode != 0) {
      st::fn_006A5E40
                (exceptionCode,g_overwriteContext_007ED77C,"E:\\__titans\\Artem\\TLO_dock.cpp"
                 ,0x305);
    }
    if (iVar4 < STField<int>(this,0x245) + -1) {
      puVar5 = (undefined4 *)(STField<int>(this,0x24d) + (iVar4 * 3 + 3) * 4);
      puVar6 = (undefined4 *)(iVar4 * 0xc + STField<int>(this,0x24d));
      for (uVar3 = ((STField<int>(this,0x245) - iVar4) + -1) * 3 & 0x3fffffff; uVar3 != 0;
          uVar3 = uVar3 - 1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
    }
    STField<int>(this,0x245) = STField<int>(this,0x245) + -1;
  }
  return 0;
}

// 004D0B90 TLOFakeTy::GetMessage
#line 4 "decomp/ST.exe/functions/004D0B90/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Artem\TLO_dock.cpp
   TLOFakeTy::GetMessage

   [STMessageHandlerApplier] Recovered common GetMessage envelope/signature.
   Evidence: family_entries=00401C62|004D0B90; family_names=TLOFakeTy::GetMessage; ret4=4;
   direct_offsets={10:1,14:1,18:2,1c:4} */

int __thiscall st::fn_004D0B90(TLOFakeTy *this,STMessage *message)

{
  short *psVar1;
  STMessageId SVar2;
  STSprGameObjC *pSVar4;
  int iVar5;
  void *pvVar6;
  int exceptionCode;
  uint uVar7;
  STSprGameObjC_field_0231State *pSVar8;
  int iVar9;
  STSprGameObjC_field_0231State *pSVar10;
  InternalExceptionFrame local_50;
  STSprGameObjC *local_c;
  STSprGameObjC_field_0231State *local_8;

  pSVar10 = nullptr;
  local_50.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_50;
  local_c = (STSprGameObjC *)this;
  iVar5 = st::fn_0072D7F0(local_50.jumpBuffer,0);
  pSVar4 = local_c;
  if (iVar5 != 0) {
    g_currentExceptionFrame = local_50.previous;
    iVar9 = st::fn_006AD4D0("E:\\__titans\\Artem\\TLO_dock.cpp",0x341,0,iVar5,"%s"
                               ,"TLOFakeTy::GetMessage error");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar5,0,"E:\\__titans\\Artem\\TLO_dock.cpp",0x342);
    return iVar5;
  }
  st::fn_00404F07(local_c,message);
  SVar2 = message->id;
  if (SVar2 == MESS_ID_CREATE) {
    DAT_00800bcc = pSVar4;
    pSVar4->field_0020 = 0x3ea;
    *(undefined4 *)&pSVar4->field_0x28 = 2;
    local_8 = (message->arg0).ptr;
    if (pSVar4 != nullptr) {
      pSVar10 = &pSVar4->field_0231;
    }
    pSVar8 = local_8;
    memmove(pSVar10, pSVar8, 0x1c); /* compiler REP MOVS byte copy */
    if (*(int *)&pSVar4->field_0x23d == 2) {
      if (*(int *)&pSVar4->field_0x249 != 0) {
        pvVar6 = st::fn_006AAC70(*(int *)&pSVar4->field_0x249 * 0xc);
        *(void **)&pSVar4->field_0x24d = pvVar6;
      }
      iVar5 = *(int *)((int)&pSVar4->field_0244 + 1);
      if (iVar5 != 0) {
        pSVar10 = local_8 + 7;
        pSVar8 = *(STSprGameObjC_field_0231State **)&pSVar4->field_0x24d;
        for (uVar7 = iVar5 * 3 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
          *pSVar8 = *pSVar10;
          pSVar10 = pSVar10 + 1;
          pSVar8 = pSVar8 + 1;
        }
        for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
          *(char *)pSVar8 = (char)*pSVar10;
          pSVar10 = (STSprGameObjC_field_0231State *)((int)pSVar10 + 1);
          pSVar8 = (STSprGameObjC_field_0231State *)((int)pSVar8 + 1);
        }
        iVar5 = 0;
        if (0 < *(int *)((int)&pSVar4->field_0244 + 1)) {
          iVar9 = 0;
          do {
            psVar1 = (short *)(*(int *)&pSVar4->field_0x24d + iVar9);
            exceptionCode =
                 st::fn_00401325
                           (*psVar1,*(short *)(*(int *)&pSVar4->field_0x24d + 4 + iVar9),psVar1[4],0
                            ,(RecoveredRecord_DumpClassC_00495EC0 *)pSVar4);
            if (exceptionCode != 0) {
              st::fn_006A5E40
                        (exceptionCode,g_overwriteContext_007ED77C,
                         "E:\\__titans\\Artem\\TLO_dock.cpp",0x326);
            }
            iVar5 = iVar5 + 1;
            iVar9 = iVar9 + 0xc;
          } while (iVar5 < *(int *)((int)&pSVar4->field_0244 + 1));
        }
      }
    }
  }
  else if (SVar2 == MESS_SHARED_0003) {
    DAT_00800bcc = nullptr;
    st::fn_004021D5((STT3DSprC *)&pSVar4->field_01D5);
    if (*(int *)&pSVar4->field_0x24d != 0) {
      st::fn_006AB060((void **)&pSVar4->field_0x24d);
      g_currentExceptionFrame = local_50.previous;
      return 0;
    }
  }
  else if (SVar2 == MESS_SHARED_010F) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    local_8 = st::fn_006AAC70(*(int *)((int)&pSVar4->field_0244 + 1) * 0xc + 0x1c);
    if (pSVar4 == nullptr) {
      pSVar10 = nullptr;
    }
    else {
      pSVar10 = &pSVar4->field_0231;
    }
    pSVar8 = local_8;
    memmove(pSVar8, pSVar10, 0x1c); /* compiler REP MOVS byte copy */
    local_8[3] = CASE_2;
    iVar5 = *(int *)((int)&pSVar4->field_0244 + 1);
    if (iVar5 != 0) {
      pSVar10 = *(STSprGameObjC_field_0231State **)&pSVar4->field_0x24d;
      pSVar8 = local_8 + 7;
      for (uVar7 = iVar5 * 3 & 0x3fffffff; uVar7 != 0; uVar7 = uVar7 - 1) {
        *pSVar8 = *pSVar10;
        pSVar10 = pSVar10 + 1;
        pSVar8 = pSVar8 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(char *)pSVar8 = (char)*pSVar10;
        pSVar10 = (STSprGameObjC_field_0231State *)((int)pSVar10 + 1);
        pSVar8 = (STSprGameObjC_field_0231State *)((int)pSVar8 + 1);
      }
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_004025F9
              (g_playSystem_00802A38,(int *)pSVar4->field_0018,(byte *)local_8,
               (AnonShape_0060EA30_DCEB68AD *)(*(int *)((int)&pSVar4->field_0244 + 1) * 0xc + 0x1c));
    st::fn_006AB060(&local_8);
    g_currentExceptionFrame = local_50.previous;
    return 0;
  }
  g_currentExceptionFrame = local_50.previous;
  return 0;
}


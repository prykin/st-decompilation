#include "st/generated.hpp"
// Generated translation unit: source/original/Andrey/cpanel3.cpp

// 005040A0 CPanelTy::PaintMap
#line 4 "decomp/ST.exe/functions/005040A0/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel3.cpp
   CPanelTy::PaintMap */

void __thiscall st::fn_005040A0(CPanelTy *this)

{
  CPanelTy *pCVar2;
  int iVar3;
  uint uVar4;
  char *resourceString;
  int iVar5;
  int iVar6;
  int iVar7;
  InternalExceptionFrame local_4c;
  CPanelTy *local_8;

  local_4c.previous = g_currentExceptionFrame;
  g_currentExceptionFrame = &local_4c;
  local_8 = this;
  iVar3 = st::fn_0072D7F0(local_4c.jumpBuffer,0);
  pCVar2 = local_8;
  if (iVar3 == 0) {
    st::fn_00403229((RecoveredSourceFamily_dibcopy *)local_8->field_0190,0,0,'\x01',
           (byte *)local_8->field_0994);
    st::fn_00710A90(pCVar2->field_01B8,pCVar2->field_0190,0,5,6,0x2a,10);
    iVar7 = -1;
    iVar6 = -1;
    uVar4 = (-(uint)(DAT_0080874e != '\x03') & 0xfffffffc) + 5;
    iVar5 = -1;
    iVar3 = -2;
    resourceString = st::fn_006B0140(0x2712,g_hINSTANCE_00807618);
    st::fn_00711B70(pCVar2->field_01B8,resourceString,iVar3,iVar5,uVar4,iVar6,iVar7);
    if (-1 < (int)pCVar2->field_0148[4]) {
      st::fn_006B3640
                ((int *)g_ddxContext_008075A8,(uint)pCVar2->field_0148[4],0xffffffff,
                 pCVar2->field_004C,pCVar2->field_00A4);
    }
    g_currentExceptionFrame = local_4c.previous;
    return;
  }
  g_currentExceptionFrame = local_4c.previous;
  iVar5 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel3.cpp"),0x13,0,iVar3,st::mutable_c_string("%s"),
                             "CPanelTy::PaintMap");
  if (iVar5 != 0) {
    STDebugBreak(); /* noreturn in standalone pseudocode */
  }
  st::fn_006A5E40(iVar3,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel3.cpp"),0x13);
  return;
}

// 00504210 CPanelTy::UpdateStackPanel
#line 4 "decomp/ST.exe/functions/00504210/decomp.c"
/* Recovered from embedded debug metadata:
   E:\__titans\Andrey\cpanel3.cpp
   CPanelTy::UpdateStackPanel */

void __thiscall st::fn_00504210(CPanelTy *this,uint param_1)

{
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  CPanelTy *this_00;
  byte bVar5;
  int iVar6;
  char *pcVar6;
  ushort *puVar7;
  int iVar9;
  byte bVar8;
  int iVar10;
  AnonShape_0043BEB0_1C00EC12 *pAVar11;
  AnonShape_0043BEB0_1C00EC12 *pAVar12;
  bool bVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  char local_ac [68];
  InternalExceptionFrame local_68;
  CPanelTy *local_24;
  char *local_20;
  uint local_1c;
  AnonShape_0043BEB0_1C00EC12 *local_18;
  uint *local_14;
  undefined1 *local_10;
  AnonShape_0043BEB0_1C00EC12 *local_c;
  byte local_5;

  if (0x3ff < g_nWidth_00806730) {
    local_68.previous = g_currentExceptionFrame;
    g_currentExceptionFrame = &local_68;
    local_24 = this;
    iVar6 = st::fn_0072D7F0(local_68.jumpBuffer,0);
    this_00 = local_24;
    if (iVar6 == 0) {
      local_c = (AnonShape_0043BEB0_1C00EC12 *)(param_1 & 0xff);
      pAVar12 = (AnonShape_0043BEB0_1C00EC12 *)(&local_24->field_0xc87 + (int)local_c * 0x42);
      pAVar11 = pAVar12;
      pcVar6 = local_ac;
      for (iVar10 = 0x10; iVar10 != 0; iVar10 = iVar10 + -1) {
        uVar2 = pAVar11->field_0001;
        uVar3 = pAVar11->field_0002;
        uVar4 = pAVar11->field_0003;
        pcVar6[0] = pAVar11->field_0x0;
        pcVar6[1] = uVar2;
        pcVar6[2] = uVar3;
        pcVar6[3] = uVar4;
        pAVar11 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar11->field_0004;
        pcVar6 = pcVar6 + 4;
      }
      uVar2 = pAVar11->field_0001;
      local_18 = pAVar12;
      pcVar6[0] = pAVar11->field_0x0;
      pcVar6[1] = uVar2;
      st::fn_004035BC
                (g_allPlayers_007FA174,STReplaceLowByte((uint32_t)(param_1), (uint8_t)((char)param_1 + '\x0e')),pAVar12
                );
      pAVar12 = local_c;
      local_1c = local_1c & 0xffffff00;
      bVar5 = ((g_nWidth_00806730 != 0x400) - 1U & 0xfc) + 6;
      local_5 = bVar5;
      if (bVar5 != 0) {
        local_20 = local_ac;
        local_c = local_18;
        local_10 = &this_00->field_0D3B + (int)pAVar12 * 6;
        local_14 = this_00->field_0DBF + (int)pAVar12 * 6 + -0x1b;
        do {
          iVar10 = 0xb;
          bVar13 = true;
          pcVar6 = local_20;
          pAVar12 = local_c;
          do {
            if (iVar10 == 0) break;
            iVar10 = iVar10 + -1;
            bVar13 = *pcVar6 == *(char *)pAVar12;
            pcVar6 = pcVar6 + 1;
            pAVar12 = (AnonShape_0043BEB0_1C00EC12 *)&pAVar12->field_0001;
          } while (bVar13);
          if ((!bVar13) && (local_10[0xc] == '\x01')) {
            puVar16 = nullptr;
            iVar15 = 0;
            iVar10 = 1;
            bVar5 = 0;
            uVar14 = 6;
            pcVar6 = (char *)st::fn_004023B5((undefined1 *)local_c);
            puVar7 = st::fn_00709AF0
                               (PTR_00806794,CASE_1F,pcVar6,uVar14,bVar5,iVar10,iVar15,puVar16);
            local_14[-0x12] = (uint)puVar7;
            *local_10 = 0;
            *local_14 = this_00->field_0038;
            st::fn_00403B57(this_00,param_1,local_1c);
            bVar8 = ((char)param_1 == '\0') + 9;
            local_18 = (AnonShape_0043BEB0_1C00EC12 *)STReplaceLowByte((uint32_t)(local_18), (uint8_t)(bVar8));
            bVar5 = local_5;
            if (bVar8 < 0xb) {
              if (-1 < (int)this_00->field_0148[bVar8]) {
                st::fn_006B3640
                          ((int *)g_ddxContext_008075A8,(uint)this_00->field_0148[bVar8],0xffffffff,
                           (&this_00->field_003C)[bVar8],(&this_00->field_0094)[bVar8]);
                bVar5 = local_5;
              }
            }
          }
          bVar8 = (char)local_1c + 1;
          local_14 = local_14 + 1;
          local_20 = local_20 + 0xb;
          local_c = (AnonShape_0043BEB0_1C00EC12 *)&local_c->field_000B;
          local_1c = STReplaceLowByte((uint32_t)(local_1c), (uint8_t)(bVar8));
          local_10 = local_10 + 1;
        } while (bVar8 < bVar5);
      }
      g_currentExceptionFrame = local_68.previous;
      return;
    }
    g_currentExceptionFrame = local_68.previous;
    iVar9 = st::fn_006AD4D0(st::mutable_c_string("E:\\__titans\\Andrey\\cpanel3.cpp"),0x2a,0,iVar6,st::mutable_c_string("%s"),
                               "CPanelTy::UpdateStackPanel");
    if (iVar9 != 0) {
      STDebugBreak(); /* noreturn in standalone pseudocode */
    }
    st::fn_006A5E40(iVar6,0,st::mutable_c_string("E:\\__titans\\Andrey\\cpanel3.cpp"),0x2a);
  }
  return;
}


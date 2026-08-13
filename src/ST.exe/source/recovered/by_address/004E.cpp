#include "st/generated.hpp"
// Generated translation unit: source/recovered/by_address/004E.cpp

// 004E0040 FUN_004e0040
#line 4 "decomp/ST.exe/functions/004E0040/decomp.c"
undefined4 __fastcall st::fn_004E0040(AnonShape_004E0040_648F9827 *param_1)

{
  uint *this;
  int iVar1;

  param_1->field_04D0 = 0;
  param_1->field_04D4 = 0;
  param_1->field_04D8 = 0xffffffff;
  param_1->field_04E0 = 0;
  param_1->field_04E4 = 0;
  param_1->field_04E8 = 0;
  this = st::fn_00405E48(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
  if (this == nullptr) goto LAB_004e0119;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*this + 0x2c))();
  param_1->field_04DC = iVar1;
  switch(param_1->field_05AC) {
  case 0x38:
    if (iVar1 != 0xdc) break;
    goto LAB_004e00e5;
  case 0x39:
  case 0x5e:
    if (iVar1 == 0xdd) goto LAB_004e00e5;
    break;
  case 0x4f:
    goto joined_r0x004e00e3;
  case 0x61:
joined_r0x004e00e3:
    if (iVar1 == 0xde) {
LAB_004e00e5:
      param_1->field_04D4 = 1;
    }
  }
  if (param_1->field_04D4 != 0) {
    param_1->field_04E0 = STField<undefined4>(this,0x259);
    st::fn_0040519B(this,param_1->field_0018,(ushort)param_1->field_0024,param_1->field_0032);
  }
LAB_004e0119:
  if (param_1->field_05AC == 0x61) {
    param_1->field_0518 = 0;
    param_1->field_0520 = param_1->field_04E0;
    param_1->field_051C = 0;
    param_1->field_0524 = g_playSystem_00802A38->field_00E4;
    if (param_1->field_04E0 != 0) {
      param_1->field_0528 = 6;
    }
    st::fn_00403094(param_1->field_0024);
  }
  return 0;
}

// 004E0220 FUN_004e0220
#line 4 "decomp/ST.exe/functions/004E0220/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004E0220 returns zeroed full register at 004E022F @ 004E0231 */

uint __fastcall st::fn_004E0220(AnonShape_004E0250_5A3B9236 *param_1)

{
  if (*(int *)&param_1->field_0x231 == 0) {
    st::fn_00405EE8(param_1);
  }
  return 0;
}

// 004E0250 FUN_004e0250
#line 4 "decomp/ST.exe/functions/004E0250/decomp.c"
void __fastcall st::fn_004E0250(AnonShape_004E0250_5A3B9236 *param_1)

{
  uint *this;
  int iVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined2 extraout_var;

  if (param_1->field_04D4 != 0) {
    return;
  }
  this = st::fn_00405E48(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
  if (this == nullptr) {
    return;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar1 = (**(code **)(*this + 0x2c))();
  param_1->field_04DC = iVar1;
  switch(param_1->field_05AC) {
  case 0x38:
    if (iVar1 != 0xdc) goto cf_common_exit_004E02E4;
    break;
  case 0x39:
  case 0x5e:
    if (iVar1 != 0xdd) goto cf_common_exit_004E02E4;
    break;
  default:
    goto cf_common_exit_004E02E4;
  case 0x4f:
    goto joined_r0x004e02dc;
  case 0x61:
joined_r0x004e02dc:
    if (iVar1 != 0xde) goto cf_common_exit_004E02E4;
  }
  param_1->field_04D4 = 1;
cf_common_exit_004E02E4:
  if (param_1->field_04D4 != 0) {
    param_1->field_04E0 = STField<undefined4>(this,0x259);
    st::fn_0040519B(this,param_1->field_0018,(ushort)param_1->field_0024,param_1->field_0032);
    if (param_1->field_05AC == 0x61) {
      param_1->field_0520 = param_1->field_04E0;
      if (param_1->field_04E0 != 0) {
        param_1->field_0528 = 6;
        return;
      }
    }
    else {
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      st::fn_0040494E
                (g_allPlayers_007FA174,1,(int *)param_1->field_0024,
                 CONCAT22(extraout_var,param_1->field_0032));
    }
  }
  return;
}

// 004E03E0 FUN_004e03e0
#line 4 "decomp/ST.exe/functions/004E03E0/decomp.c"
undefined4 __fastcall st::fn_004E03E0(AnonShape_004E03E0_57EF73A1 *param_1)

{
  AnonShape_00580570_1EF0F1E6 *this;

  if (((param_1->field_0245 == 1) || (param_1->field_0245 == 6)) && (param_1->field_04D4 != 0)) {
    this = (AnonShape_00580570_1EF0F1E6 *)
           st::fn_00405E48(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
    if (this != nullptr) {
      st::fn_00402973((STResourceC *)this,param_1->field_04E0,1);
      param_1->field_04E0 = 0;
      st::fn_00402C34(this);
      param_1->field_04D4 = 0;
    }
  }
  if (param_1->field_05AC == 0x61) {
    st::fn_004013F7(param_1->field_0024);
  }
  return 0;
}

// 004E0830 FUN_004e0830
#line 4 "decomp/ST.exe/functions/004E0830/decomp.c"
/* [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_39=57;CASE_3B=59;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_69=105;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_36=54;CASE_39=57;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_45=69;CASE_49=73;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_70=112;CASE_72=114

   [STSwitchEnumApplier] Switch target field_04D0 uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_04D0State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_4=4;CASE_5=5;CASE_6=6;CASE_32=50;CASE_40=64;CASE_49=73;CASE_5C=92

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3D=61;CASE_40=64;CASE_41=65;CASE_43=67;CASE_45=69;CASE_48=72;CASE_49=73;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_52=82;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_63=99;CASE_64=100;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6C=108;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_72=114;CASE_73=115

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190

   [STSwitchEnumApplier] Switch target field_05AC uses
   /SubmarineTitans/Recovered/Enums/TLOBaseTy_field_05ACState. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_3=3;CASE_32=50;CASE_33=51;CASE_34=52;CASE_35=53;CASE_36=54;CASE_37=55;CASE_38=56;CASE_39=57;CASE_3A=58;CASE_3B=59;CASE_3C=60;CASE_3D=61;CASE_3E=62;CASE_3F=63;CASE_40=64;CASE_41=65;CASE_42=66;CASE_43=67;CASE_44=68;CASE_45=69;CASE_46=70;CASE_47=71;CASE_48=72;CASE_49=73;CASE_4A=74;CASE_4B=75;CASE_4C=76;CASE_4D=77;CASE_4E=78;CASE_4F=79;CASE_50=80;CASE_51=81;CASE_52=82;CASE_53=83;CASE_54=84;CASE_55=85;CASE_56=86;CASE_57=87;CASE_58=88;CASE_59=89;CASE_5A=90;CASE_5B=91;CASE_5C=92;CASE_5D=93;CASE_5E=94;CASE_5F=95;CASE_60=96;CASE_61=97;CASE_62=98;CASE_63=99;CASE_64=100;CASE_65=101;CASE_66=102;CASE_67=103;CASE_68=104;CASE_69=105;CASE_6A=106;CASE_6B=107;CASE_6C=108;CASE_6D=109;CASE_6E=110;CASE_6F=111;CASE_70=112;CASE_71=113;CASE_72=114;CASE_73=115;CASE_96=150;CASE_97=151;CASE_98=152;CASE_99=153;CASE_9A=154;CASE_A6=166;CASE_A7=167;CASE_A9=169;CASE_AB=171;CASE_AC=172;CASE_AD=173;CASE_AE=174;CASE_B3=179;CASE_B5=181;CASE_B8=184;CASE_BC=188;CASE_BD=189;CASE_BE=190
    */

undefined4 __fastcall st::fn_004E0830(TLOBaseTy *param_1)

{
  TLOBaseTy_field_05ACState TVar1;
  int iVar2;
  STAppC *pSVar3;
  byte *pbVar4;
  byte bVar5;
  short sVar6;
  int iVar8;
  uint uVar9;
  int uVar10;
  TLOBaseTyVTable *pTVar10;
  int iVar7;
  uint uVar11;
  uint uVar12;
  STResourceC *this;
  short sVar13;
  short sVar14;
  uint uVar15;
  uint uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  char *pcVar21;
  int *piVar22;
  char cVar23;
  undefined2 uVar24;
  undefined4 uVar25;

  if (param_1->field_04D0 == CASE_1) {
    if (*(int *)&param_1->field_01F5->field_0x1a4 == *(int *)&param_1->field_01F5->field_0x1a0) {
      uVar12 = param_1->field_04E0[2];
      if (uVar12 == 1) {
        if (param_1->field_04E0[1] == 0) {
          param_1->field_04E0[2] = 3;
          st::fn_00402ED7((AnonShape_004E04A0_3A5B2D2E *)param_1);
          switch(param_1->field_05AC) {
          case CASE_39:
switchD_004e08b2_caseD_39:
            pTVar10 = param_1->vtable;
            bVar5 = st::fn_004049B7(*(char *)&param_1->field_023D);
            (*pTVar10->vfunc_90)(param_1,3,(-(ushort)(bVar5 != 2) & 0xff3a) + 0x2e9);
            break;
          case CASE_3B:
switchD_004e08b2_caseD_3b:
            pTVar10 = param_1->vtable;
            bVar5 = st::fn_004049B7(*(char *)&param_1->field_023D);
            (*pTVar10->vfunc_90)(param_1,3,(-(ushort)(bVar5 != 2) & 0xff3a) + 0x2f6);
            break;
          case CASE_4F:
switchD_004e08b2_caseD_4f:
            pTVar10 = param_1->vtable;
            bVar5 = st::fn_004049B7(*(char *)&param_1->field_023D);
            (*pTVar10->vfunc_90)(param_1,3,(-(ushort)(bVar5 != 2) & 0xff32) + 0x34f);
            break;
          case CASE_5E:
switchD_004e08b2_caseD_5e:
            param_1->vfunc_90(3,0x3aa);
            break;
          case CASE_60:
            param_1->vfunc_90(3,0x3b9);
          }
        }
        else {
          param_1->field_04E0[2] = 2;
LAB_004e0a1f:
          st::fn_00402ED7((AnonShape_004E04A0_3A5B2D2E *)param_1);
        }
      }
      else if (uVar12 == 2) {
        if (param_1->field_04E0[1] == 0) {
          param_1->field_04E0[2] = 3;
          st::fn_00402ED7((AnonShape_004E04A0_3A5B2D2E *)param_1);
          switch(param_1->field_05AC) {
          case CASE_39:
            goto switchD_004e08b2_caseD_39;
          case CASE_3B:
            goto switchD_004e08b2_caseD_3b;
          case CASE_4F:
            goto switchD_004e08b2_caseD_4f;
          case CASE_52:
            pTVar10 = param_1->vtable;
            bVar5 = st::fn_004049B7(*(char *)&param_1->field_023D);
            (*pTVar10->vfunc_90)(param_1,3,(-(ushort)(bVar5 != 2) & 0xff3b) + 0x35c);
            break;
          case CASE_5E:
            goto switchD_004e08b2_caseD_5e;
          case CASE_60:
            param_1->vfunc_90(3,0x3b9);
          }
        }
        else {
          TVar1 = param_1->field_05AC;
          if (((TVar1 == CASE_3B) || (TVar1 == CASE_60)) || (TVar1 == CASE_52)) goto LAB_004e0a1f;
        }
      }
      else if (uVar12 == 3) {
        param_1->field_04E0[2] = 0;
        goto LAB_004e0a1f;
      }
    }
    if (param_1->field_04E0[1] == 0) {
      if (param_1->field_05AC == CASE_4F) {
        bVar5 = st::fn_004049B7(*(char *)&param_1->field_0024);
        iVar8 = 0xe;
        if (bVar5 != 2) goto LAB_004e0a4f;
      }
      else {
LAB_004e0a4f:
        iVar8 = 0xc;
      }
      if ((*(int *)(&param_1->field_01F5->field_0x18 + iVar8 * 0x24) ==
           *(int *)(&param_1->field_01F5->field_0x14 + iVar8 * 0x24)) &&
         (param_1->field_04E0[2] == 0)) {
        param_1->field_04D0 = CASE_0;
        st::fn_00402CF7(param_1,1);
      }
    }
  }
  if ((param_1->field_05AC != CASE_52) && (param_1->field_05AC != CASE_5F))
  goto switchD_004e0aad_default;
  switch(param_1->field_04D0) {
  case CASE_2:
    uVar12 = param_1->field_05B4;
    iVar8 = uVar12 + 2;
    if ((int)uVar12 < iVar8) {
      uVar20 = param_1->field_05B0;
      do {
        if ((int)uVar20 < (int)(uVar20 + 2)) {
          sVar14 = (short)param_1->field_05B8 + 1;
          uVar9 = uVar20;
          do {
            sVar6 = (short)uVar9;
            if (((sVar6 < 0) || (g_worldGrid.sizeX <= sVar6)) ||
               ((sVar13 = (short)uVar12, sVar13 < 0 ||
                ((((g_worldGrid.sizeY <= sVar13 || (sVar14 < 0)) || (g_worldGrid.sizeZ <= sVar14))
                 || (STGridAt3D(g_worldGrid, sVar6, sVar13, sVar14).objects[0] ==
                     nullptr)))))) {
              param_1->field_04E0[4] = uVar9;
              iVar8 = param_1->field_05B8;
              param_1->field_04E0[3] = 1;
              param_1->field_04E0[5] = uVar12;
              param_1->field_04E0[6] = iVar8 + 1;
              if (DAT_00800bcc == nullptr) {
                st::fn_004032B5();
              }
              st::fn_00401582(st::pointer_boundary_cast<void *>(DAT_00800bcc),param_1->field_04E0[4],param_1->field_04E0[5],
                                 param_1->field_04E0[6]);
              param_1->field_04D0 = CASE_3;
              iVar8 = param_1->field_05B4;
              param_1->field_04E0[7] = st::machine_word_boundary_cast<uint>(param_1->field_05B0 * 0xc9 + 0xdc);
              iVar2 = param_1->field_05B8;
              param_1->field_04E0[8] = iVar8 * 0xc9 + 100;
              param_1->field_04E0[9] = iVar2 * 0xc9 - 0x28;
              st::fn_00401F0F((AnonShape_004EC0F0_C371FA68 *)param_1);
              st::fn_00402CF7(param_1,0);
              if (param_1->field_05AC == CASE_52) {
                pTVar10 = param_1->vtable;
                bVar5 = st::fn_004049B7(*(char *)&param_1->field_023D);
                (*pTVar10->vfunc_90)(param_1,3,(-(ushort)(bVar5 != 2) & 0xff3b) + 0x35e);
                goto switchD_004e0aad_default;
              }
              if (param_1->field_05AC != CASE_5F) goto switchD_004e0aad_default;
              pTVar10 = param_1->vtable;
              uVar24 = 0x3b1;
              goto LAB_004e0f14;
            }
            uVar9 = uVar9 + 1;
          } while ((int)uVar9 < (int)(uVar20 + 2));
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < iVar8);
    }
    break;
  case CASE_3:
    iVar8 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
    if (((int)param_1->field_01F5->field_020C <= iVar8) && (param_1->field_04DC != 0)) {
      pSVar3 = param_1->field_0010;
      pbVar4 = param_1->field_0024;
      param_1->field_04E0[10] = 0;
      if (pbVar4 == (byte *)(uint)(byte)pSVar3->field_112D) {
        st::fn_00402D5B(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
      }
      param_1->field_04D0 = CASE_4;
      param_1->field_04E0[0xc] = 0;
      param_1->field_04E0[0xd] = g_playSystem_00802A38->field_00E4;
      st::fn_00402CF7(param_1,0);
    }
    break;
  case CASE_4:
    if ((int)param_1->field_04E0[0xc] < 0x1e) break;
    st::fn_00401DD4(st::pointer_boundary_cast<void *>(DAT_00800bcc),param_1->field_04E0[4],param_1->field_04E0[5],
                       param_1->field_04E0[6]);
    piVar22 = param_1->field_0018;
    uVar12 = param_1->field_04E0[6];
    uVar20 = param_1->field_04E0[5];
    uVar25 = 0x5a;
    uVar9 = param_1->field_04E0[4];
    pcVar21 = nullptr;
    uVar19 = (ushort)param_1->field_04E0[9];
    uVar18 = (ushort)param_1->field_04E0[8];
    uVar17 = (ushort)param_1->field_04E0[7];
    uVar16 = param_1->field_04E0[0];
    uVar15 = param_1->field_04DC;
    cVar23 = *(char *)&param_1->field_0024;
    param_1->field_04E0[3] = 0;
    bVar5 = st::fn_004049B7(cVar23);
    st::fn_0040588F(st::machine_word_boundary_cast<undefined4>(param_1->field_0024),(uint)bVar5,uVar15,uVar16,uVar17,uVar18,uVar19,uVar9,
                       uVar20,uVar12,pcVar21,st::machine_word_boundary_cast<undefined4>(piVar22),uVar25);
    if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
      st::fn_00402D5B(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
      uVar10 = st::fn_004049B7(*(char *)&param_1->field_0024);
      uVar10 = (int)(byte)uVar10;
      if (uVar10 == 1) {
        pTVar10 = param_1->vtable;
        uVar24 = 0x6b;
LAB_004e0de2:
        (*pTVar10->vfunc_90)(param_1,6,uVar24);
      }
      else if (uVar10 == 2) {
        param_1->vfunc_90(6,0x6c);
      }
      else if (uVar10 == 3) {
        pTVar10 = param_1->vtable;
        uVar24 = 0x6d;
        goto LAB_004e0de2;
      }
    }
    param_1->field_04D0 = CASE_5;
    st::fn_00403616(param_1);
    st::fn_00402CF7(param_1,0);
    TVar1 = param_1->field_05AC;
    if (TVar1 != CASE_52) {
joined_r0x004e0f0b:
      if (TVar1 == CASE_5F) {
        pTVar10 = param_1->vtable;
        uVar24 = 0x3b2;
LAB_004e0f14:
        (*pTVar10->vfunc_90)(param_1,3,uVar24);
      }
      break;
    }
    cVar23 = *(char *)&param_1->field_023D;
    pTVar10 = param_1->vtable;
    goto LAB_004e0e15;
  case CASE_5:
    iVar8 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
    if (iVar8 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_0;
      param_1->field_04DC = 0;
      param_1->field_04E0[10] = 0;
      st::fn_00403616(param_1);
      st::fn_00402CF7(param_1,0);
    }
    break;
  case CASE_6:
    if (((param_1->field_04E0[7] != param_1->field_05B0 * 0xc9 + 0xdcU) ||
        (param_1->field_04E0[8] != param_1->field_05B4 * 0xc9 + 100U)) ||
       (param_1->field_04E0[9] != param_1->field_05B8 * 0xc9 - 0x28U)) break;
    param_1->field_04D0 = CASE_5;
    st::fn_00402CF7(param_1,0);
    TVar1 = param_1->field_05AC;
    if (TVar1 != CASE_52) goto joined_r0x004e0f0b;
    cVar23 = *(char *)&param_1->field_023D;
    pTVar10 = param_1->vtable;
LAB_004e0e15:
    bVar5 = st::fn_004049B7(cVar23);
    (*pTVar10->vfunc_90)(param_1,3,(-(ushort)(bVar5 != 2) & 0xff3b) + 0x35f);
  }
switchD_004e0aad_default:
  if ((param_1->field_05AC == CASE_61) && (param_1->field_04E0[0] != 0)) {
    iVar7 = st::fn_00405D80((int)param_1->field_0024);
    uVar11 = st::fn_004036A7((int)param_1->field_0024);
    if (((int)uVar11 < iVar7) &&
       (param_1->field_04E0[0x12] + param_1->field_04E0[0x11] <= g_playSystem_00802A38->field_00E4))
    {
      param_1->field_04E0[0x11] = g_playSystem_00802A38->field_00E4;
      if ((int)DAT_007be8c4 <= (int)param_1->field_04E0[0xe]) {
        st::fn_00401690((AnonShape_004E1310_4FD56DAE *)param_1);
      }
      uVar12 = st::machine_word_boundary_cast<uint>(param_1->field_04E0[0] - 5);
      param_1->field_04E0[0] = uVar12;
      if ((int)uVar12 < 0) {
        param_1->field_04E0[0] = 0;
      }
      uVar12 = st::machine_word_boundary_cast<uint>(param_1->field_04E0[0xe] + 5);
      param_1->field_04E0[0xe] = uVar12;
      if ((int)DAT_007be8c4 < (int)uVar12) {
        param_1->field_04E0[0xe] = DAT_007be8c4;
      }
      this = (STResourceC *)
             st::fn_00405E48(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
      if (this != nullptr) {
        st::fn_00402973(this,param_1->field_04E0[0],1);
      }
      if ((param_1->field_04E0[0] == 0) &&
         (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D)) {
        param_1->vfunc_90(4,0x3bd);
      }
    }
  }
  return 0;
}

// 004E1310 FUN_004e1310
#line 4 "decomp/ST.exe/functions/004E1310/decomp.c"
undefined4 __fastcall st::fn_004E1310(AnonShape_004E1310_4FD56DAE *param_1)

{
  uint uVar1;

  st::fn_004053F3(param_1->field_0024,param_1->field_0518);
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1->field_051C = param_1->field_051C + param_1->field_0518;
  param_1->field_0524 = uVar1;
  param_1->field_0518 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (param_1->field_0024 == (uint)*(byte *)(param_1->field_0010 + 0x112d)) {
    st::fn_00404B8D((char)param_1->field_0024);
  }
  return 0;
}

// 004E13A0 FUN_004e13a0
#line 4 "decomp/ST.exe/functions/004E13A0/decomp.c"
undefined4 __fastcall st::fn_004E13A0(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;

  uVar4 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x24) != *(int *)(param_1 + 0x23d)) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    bVar2 = st::fn_004049B7((char)*(int *)(param_1 + 0x23d));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar1 = *(int *)(param_1 + 0x235);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    bVar3 = st::fn_004049B7(*(char *)(param_1 + 0x24));
    if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
      return 0;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  switch(*(undefined4 *)(param_1 + 0x5ac)) {
  case 0x38:
  case 0x39:
  case 0x3b:
  case 0x4f:
  case 0x52:
  case 0x5e:
  case 0x5f:
  case 0x60:
    uVar4 = 1;
  }
  return uVar4;
}

// 004E1490 FUN_004e1490
#line 4 "decomp/ST.exe/functions/004E1490/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 0047C050 -> 004E1490 @ 0047C1D3 | 0047C050 -> 004E1490 @ 0047C420 */

undefined4 __fastcall st::fn_004E1490(STBoatC *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;

  uVar4 = 0;
  if (param_1->field_0024 != param_1->field_023D) {
    bVar2 = st::fn_004049B7((char)param_1->field_023D);
    iVar1 = *(int *)&param_1->field_0x235;
    bVar3 = st::fn_004049B7(*(char *)&param_1->field_0024);
    if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
      return 0;
    }
  }
  switch(*(undefined4 *)&param_1->field_0x5ac) {
  case 0x38:
  case 0x39:
  case 0x4f:
  case 0x5e:
    if (((*(int *)&param_1->field_0x245 == 0) && (*(int *)&param_1->field_0x4d8 == -1)) &&
       ((*(int *)&param_1->field_0x4d4 != 0 && (*(int *)&param_1->field_0x4d0 == 0)))) {
      uVar4 = 1;
    }
    break;
  case 0x3b:
  case 0x52:
  case 0x5f:
  case 0x60:
    if (((*(int *)&param_1->field_0x245 == 0) && (*(int *)&param_1->field_0x4d8 == -1)) &&
       (*(int *)&param_1->field_0x4d0 == 0)) {
      return 1;
    }
  }
  return uVar4;
}

// 004E15F0 FUN_004e15f0
#line 4 "decomp/ST.exe/functions/004E15F0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00465C60 -> 004E15F0 @ 004667FA; /STBoatC+0x18 | 00465C60 -> 004E15F0 @ 0046695D;
   /STBoatC+0x18 | 00465C60 -> 004E15F0 @ 0046813F; /STBoatC+0x18 | 00465C60 -> 004E15F0 @ 004682F0;
   /STBoatC+0x18 | 0046D450 -> 004E15F0 @ 0046D97D; /STBoatC+0x18 | 0046D450 -> 004E15F0 @ 0046DAFF;
   /STBoatC+0x18 */

undefined4 __thiscall st::fn_004E15F0(void *this,uint param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;

  if (STField<int>(this,0x24) != STField<int>(this,0x23d)) {
    bVar2 = st::fn_004049B7((char)STField<int>(this,0x23d));
    iVar1 = STField<int>(this,0x235);
    bVar3 = st::fn_004049B7(STField<char>(this,0x24));
    if ((&DAT_007e1984)[(uint)bVar3 + (iVar1 * 3 + (uint)bVar2) * 3] == '\0') {
      return 0;
    }
  }
  if (STField<int>(this,0x4d8) != -1) {
    return 0;
  }
  STField<uint>(this,0x4d8) = param_1;
  return 1;
}

// 004E1690 FUN_004e1690
#line 4 "decomp/ST.exe/functions/004E1690/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=00465C60 @ 00468890
   -> XOR XOR EAX,EAX | 0046D450 @ 0046DCB4 -> XOR XOR EAX,EAX */

int __thiscall st::fn_004E1690(void *this,int param_1)

{
  bool bVar1;

  bVar1 = STField<int>(this,0x4d8) == param_1;
  if (bVar1) {
    STField<undefined4>(this,0x4d8) = 0xffffffff;
  }
  return (uint)bVar1;
}

// 004E16D0 FUN_004e16d0
#line 4 "decomp/ST.exe/functions/004E16D0/decomp.c"
undefined4 __thiscall st::fn_004E16D0(void *this,int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;

  if ((STField<int>(this,0x4d8) != param_1) || (STField<int>(this,0x4d0) != 0)) {
    return 0;
  }
  STField<undefined4>(this,0x4d0) = 1;
  STField<undefined4>(this,0x4e4) = 1;
  st::fn_00402CF7(st::pointer_boundary_cast<TLOBaseTy *>(this),1);
  STField<undefined4>(this,0x4e8) = 1;
  switch(STField<undefined4>(this,0x5ac)) {
  case 0x39:
    iVar3 = *(int *)this;
    bVar1 = st::fn_004049B7(STField<char>(this,0x23d));
    iVar2 = (-(uint)(bVar1 != 2) & 0xffffff3a) + 0x2e8;
    break;
  default:
    goto switchD_004e172f_caseD_3a;
  case 0x3b:
    iVar3 = *(int *)this;
    bVar1 = st::fn_004049B7(STField<char>(this,0x23d));
    iVar2 = (-(uint)(bVar1 != 2) & 0xffffff3a) + 0x2f5;
    break;
  case 0x4f:
    iVar3 = *(int *)this;
    bVar1 = st::fn_004049B7(STField<char>(this,0x23d));
    iVar2 = (-(uint)(bVar1 != 2) & 0xffffff32) + 0x34e;
    break;
  case 0x52:
    iVar3 = *(int *)this;
    bVar1 = st::fn_004049B7(STField<char>(this,0x23d));
    iVar2 = (-(uint)(bVar1 != 2) & 0xffffff3b) + 0x35b;
    break;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  case 0x5e:
    (**(code **)(*(int *)this + 0x90))(3,0x3a9);
    st::fn_00402ED7(st::pointer_boundary_cast<AnonShape_004E04A0_3A5B2D2E *>(this));
    return 0;
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  case 0x60:
    (**(code **)(*(int *)this + 0x90))(3,0x3b8);
    st::fn_00402ED7(st::pointer_boundary_cast<AnonShape_004E04A0_3A5B2D2E *>(this));
    return 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  (**(code **)(iVar3 + 0x90))(3,iVar2);
switchD_004e172f_caseD_3a:
  st::fn_00402ED7(st::pointer_boundary_cast<AnonShape_004E04A0_3A5B2D2E *>(this));
  return 0;
}

// 004E18E0 FUN_004e18e0
#line 4 "decomp/ST.exe/functions/004E18E0/decomp.c"
undefined4 __thiscall st::fn_004E18E0(void *this,int param_1)

{
  if (((STField<int>(this,0x4d8) == param_1) && (STField<int>(this,0x4d0) == 1)) &&
     (STField<int>(this,0x4e4) != 0)) {
    STField<undefined4>(this,0x4e4) = 0;
  }
  return 0;
}

// 004E1930 FUN_004e1930
#line 4 "decomp/ST.exe/functions/004E1930/decomp.c"
int __thiscall st::fn_004E1930(void *this,int *param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  STResourceC *this_00;
  STGroupBoatC *pSVar3;
  int local_EAX_269;
  int uVar3;
  undefined1 local_24 [16];
  undefined4 local_14;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;

  if (STField<int>(this,0x4d4) == 0) {
    param_2 = 0;
    *param_1 = 0;
  }
  else {
    *param_1 = STField<int>(this,0x4dc);
    iVar1 = STField<int>(this,0x4e0);
    if (iVar1 < param_2) {
      param_2 = iVar1;
    }
    STField<int>(this,0x4e0) = iVar1 - param_2;
    this_00 = (STResourceC *)
              st::fn_00405E48(STField<int>(this,0x5b0),STField<int>(this,0x5b4),
                                 STField<int>(this,0x5b8));
    if (this_00 != nullptr) {
      st::fn_00402973(this_00,STField<int>(this,0x4e0),1);
    }
    if ((STField<int>(this,0x4e0) == 0) && (param_2 != 0)) {
      STField<undefined4>(this,0x4d4) = 0;
      pSVar3 = st::fn_00405CF9(STField<char>(this,0x24),STField<ushort>(this,0x30));
      if ((pSVar3 != nullptr) && ((undefined4 *)pSVar3->field_001C != nullptr)
         ) {
        local_c = STField<undefined4>(this,0x18);
        local_e = STField<undefined2>(this,0x32);
        local_14 = 0x5d99;
        local_10 = 1;
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (*(code *)**(undefined4 **)pSVar3->field_001C)(local_24);
      }
      if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
        iVar1 = STField<int>(this,0x5ac);
        if ((iVar1 == 0x39) || (iVar1 == 0x5e)) {
          uVar3 = st::fn_004049B7(STField<char>(this,0x23d));
          uVar3 = (int)(byte)uVar3;
          if (uVar3 == 1) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x21e);
            return param_2;
          }
          if (uVar3 == 2) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x2e4);
            return param_2;
          }
          if (uVar3 == 3) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x3a5);
            return param_2;
          }
        }
        else if (iVar1 == 0x4f) {
          local_EAX_269 = st::fn_004049B7(STField<char>(this,0x23d));
          local_EAX_269 = (int)(byte)local_EAX_269;
          if (local_EAX_269 == 1) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x27c);
            return param_2;
          }
          if (local_EAX_269 == 2) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x34b);
            return param_2;
          }
        }
      }
    }
    else {
      switch(STField<undefined4>(this,0x5ac)) {
      case 0x39:
        iVar1 = *(int *)this;
        bVar2 = st::fn_004049B7(STField<char>(this,0x23d));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff3a) + 0x2ea);
        return param_2;
      case 0x3b:
        iVar1 = *(int *)this;
        bVar2 = st::fn_004049B7(STField<char>(this,0x23d));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff3a) + 0x2f7);
        return param_2;
      case 0x4f:
        iVar1 = *(int *)this;
        bVar2 = st::fn_004049B7(STField<char>(this,0x23d));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff32) + 0x350);
        return param_2;
      case 0x52:
        iVar1 = *(int *)this;
        bVar2 = st::fn_004049B7(STField<char>(this,0x23d));
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff3b) + 0x35d);
        return param_2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      case 0x5e:
        (**(code **)(*(int *)this + 0x90))(3,0x3ab);
        return param_2;
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      case 0x60:
        (**(code **)(*(int *)this + 0x90))(3,0x3ba);
        return param_2;
      }
    }
  }
  return param_2;
}

// 004E1D70 FUN_004e1d70
#line 4 "decomp/ST.exe/functions/004E1D70/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=6, used=0), and
   decompilation contains no value return */

void __thiscall st::fn_004E1D70(void *this,int param_1,int param_2)

{
  STField<int>(this,0x4dc) = param_1;
  if (param_1 == 0xdc) {
    st::fn_00404336(STField<char>(this,0x24),param_2);
  }
  else if (param_1 == 0xdd) {
    st::fn_00404412(STField<char>(this,0x24),param_2);
  }
  else if (param_1 == 0xde) {
    st::fn_004055E7(STField<char>(this,0x24),param_2);
  }
  st::fn_004028F6(STField<char>(this,0x24));
  if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
    st::fn_00404B8D((char)STField<uint>(this,0x24));
  }
  return;
}

// 004E1E30 FUN_004e1e30
#line 4 "decomp/ST.exe/functions/004E1E30/decomp.c"
undefined4 __fastcall st::fn_004E1E30(int param_1)

{

  memset((void *)(param_1 + 0x4d0), 0, 0x50); /* compiler bulk-zero initialization */
  *(undefined4 *)(param_1 + 0x520) = 0;
  *(uint *)(param_1 + 0x524) = g_playSystem_00802A38->field_00E4;
  return 0;
}

// 004E1EB0 FUN_004e1eb0
#line 4 "decomp/ST.exe/functions/004E1EB0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004E1EB0 returns stored into /STBoatC+0x568 @ 0046F71D | 004E1EB0 returns stored into
   /STBoatC+0x568 @ 0046FB36 | 004E1EB0 returns stored into /STBoatC+0x568 @ 0046FCCD */

int __thiscall st::fn_004E1EB0(void *this,int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar2 = -1;
  iVar3 = -1;
  if (STField<int>(this,0x4d0) == 0) {
    iVar2 = 0;
    iVar3 = st::fn_006AADD0(param_1,param_2,param_3,(int)STField<short>(this,0x41),
                         STField<short>(this,0x43) + -100,(int)STField<short>(this,0x45));
  }
  if (STField<int>(this,0x4f8) != 0) {
    return iVar2;
  }
  if ((-1 < iVar3) &&
     (iVar1 = st::fn_006AADD0(param_1,param_2,param_3,(int)STField<short>(this,0x41),
                           STField<short>(this,0x43) + 100,(int)STField<short>(this,0x45)),
     iVar3 <= iVar1)) {
    return iVar2;
  }
  return 1;
}

// 004E1F70 FUN_004e1f70
#line 4 "decomp/ST.exe/functions/004E1F70/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (2), none consume AL/AX, and every RET path defines full EAX; sites=004E1FB0 @ 004E1FC9
   -> TEST TEST EAX,EAX | 004E22F0 @ 004E22FB -> TEST TEST EAX,EAX */

int __thiscall st::fn_004E1F70(void *this,int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  return (uint)(*(int *)((int)this + param_1 * 0x28 + 0x4d0) == 0);
}

// 004E1FB0 FUN_004e1fb0
#line 4 "decomp/ST.exe/functions/004E1FB0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 0046F5C0 -> 004E1FB0 @ 0046FB71; /STBoatC+0x18 | 0046F5C0 -> 004E1FB0 @ 0046FD01;
   /STBoatC+0x18 */

int __thiscall st::fn_004E1FB0(void *this,int param_1,uint param_2)

{
  int iVar1;

  iVar1 = 0;
  if (STField<int>(this,0x245) == 0) {
    iVar1 = st::fn_00404DFE(this,param_1);
    if (iVar1 != 0) {
      *(uint *)((int)this + param_1 * 0x28 + 0x4d0) = param_2;
    }
  }
  return iVar1;
}

// 004E2000 FUN_004e2000
#line 4 "decomp/ST.exe/functions/004E2000/decomp.c"
/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (1), none consume AL/AX, and every RET path defines full EAX; sites=0046F5C0 @ 0046FEDC
   -> XOR XOR EAX,EAX */

int __thiscall st::fn_004E2000(void *this,int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;

  piVar1 = (int *)((int)this + param_1 * 0x28 + 0x4d0);
  bVar2 = *piVar1 == param_2;
  if (bVar2) {
    *piVar1 = 0;
  }
  return (uint)bVar2;
}

// 004E2040 FUN_004e2040
#line 4 "decomp/ST.exe/functions/004E2040/decomp.c"
undefined4 __fastcall st::fn_004E2040(void *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int local_8;

  iVar3 = 0;
  local_8 = 0;
  piVar2 = (int *)((int)param_1 + 0x4e4);
  do {
    uVar1 = st::fn_00404A9D(param_1,iVar3);
    if (uVar1 != 0) {
      local_8 = local_8 + ((*piVar2 - piVar2[-1]) * *(int *)(&DAT_007e085c + piVar2[-3] * 4)) /
                          *piVar2;
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 10;
  } while (iVar3 < 2);
  st::fn_0040497B(STField<char>(param_1,0x24),4,STField<int *>(param_1,0x18),0,0,local_8,0);
  return 0;
}

// 004E20D0 FUN_004e20d0
#line 4 "decomp/ST.exe/functions/004E20D0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 0046F5C0 -> 004E20D0 @ 004706A7; /STBoatC+0x6f7 */

undefined4 __thiscall
st::fn_004E20D0(void *this,int param_1,int param_2,STBoatC_field_06F7State param_3,undefined4 param_4)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + param_1 * 0x28 + 0x4d0) == param_2) &&
     (*(int *)((int)this + param_1 * 0x28 + 0x4d4) == 0)) {
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4d4) = 1;
    *(STBoatC_field_06F7State *)((int)this + (param_1 * 5 + 0x9b) * 8) = param_3;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4e4) =
         *(undefined4 *)(&DAT_007dfbac + param_3 * 4);
    st::fn_004056D7(this,param_1,param_2,param_4);
    if (STField<int>(this,0x520) == 0) {
      STField<undefined4>(this,0x520) = 1;
      st::fn_00402CF7(st::pointer_boundary_cast<TLOBaseTy *>(this),0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

// 004E2190 FUN_004e2190
#line 4 "decomp/ST.exe/functions/004E2190/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 004E2190 -> 00490CA0 @ 004E21C7 | 004E2190 -> 006E62D0 @ 004E21BB */

undefined4 __thiscall st::fn_004E2190(void *this,int *param_1)

{
  AnonShape_005EFAE0_B406B78B *pAVar1;
  int iVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  pAVar1 = *(AnonShape_005EFAE0_B406B78B **)((int)this + (int)param_1 * 0x28 + 0x4d0);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((pAVar1 != nullptr) &&
     (*(int *)((int)this + (int)param_1 * 0x28 + 0x4d4) != 0)) {
    iVar2 = st::fn_006E62D0(g_playSystem_00802A38,pAVar1,(int *)&param_1);
    if (iVar2 == 0) {
      st::fn_0040424B((STBoatC *)param_1);
    }
  }
  return 0;
}

// 004E2200 FUN_004e2200
#line 4 "decomp/ST.exe/functions/004E2200/decomp.c"
undefined4 __thiscall st::fn_004E2200(void *this,int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + param_1 * 0x28 + 0x4d0) == param_2) &&
     (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4e0) = param_3;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4dc) = param_3;
    *(uint *)((int)this + param_1 * 0x28 + 0x4e8) = g_playSystem_00802A38->field_00E4;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4ec) = 0;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4f0) = 0;
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4f4) = 0;
    st::fn_0040498F(this);
    uVar1 = 1;
  }
  return uVar1;
}

// 004E22A0 FUN_004e22a0
#line 4 "decomp/ST.exe/functions/004E22A0/decomp.c"
undefined4 __thiscall st::fn_004E22A0(void *this,int param_1,int param_2)

{
  undefined4 uVar1;

  uVar1 = 0;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + param_1 * 0x28 + 0x4d0) == param_2) &&
     (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    *(undefined4 *)((int)this + param_1 * 0x28 + 0x4d4) = 0;
    uVar1 = 1;
  }
  return uVar1;
}

// 004E22F0 FUN_004e22f0
#line 4 "decomp/ST.exe/functions/004E22F0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004E22F0 returns zeroed full register at 004E231E @ 004E2322 */

uint __thiscall st::fn_004E22F0(void *this,int param_1)

{
  int iVar1;

  iVar1 = st::fn_00404DFE(this,param_1);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar1 == 0) && (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    return 1;
  }
  return 0;
}

// 004E2340 FUN_004e2340
#line 4 "decomp/ST.exe/functions/004E2340/decomp.c"
int __thiscall st::fn_004E2340(void *this,uint param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  bool bVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int local_c;
  int local_8;

  uVar3 = param_1;
  iVar5 = -1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((*(int *)((int)this + param_1 * 0x28 + 0x4d0) == param_2) &&
     (*(int *)((int)this + param_1 * 0x28 + 0x4d4) != 0)) {
    iVar5 = param_1 * 5 + 0x9b;
    piVar1 = (int *)((int)this + iVar5 * 8);
    iVar5 = *(int *)(&DAT_007e091c + *(int *)((int)this + iVar5 * 8) * 4) / 100;
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar6 = (**(code **)(*(int *)this + 0x2c))();
    iVar6 = st::fn_00402897(STField<char>(this,0x24),iVar6);
    if ((iVar6 != 0) &&
       ((iVar6 = st::fn_00402C98(STField<char>(this,0x24),STField<int>(this,0x18)),
        iVar6 == 0 && (iVar5 = iVar5 * 4, DAT_00811798 != nullptr)))) {
      st::fn_00402AF4(st::pointer_boundary_cast<void *>(DAT_00811798),STField<byte *>(this,0x24),5);
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    iVar6 = *(int *)((int)this + param_1 * 0x28 + 0x4e8);
    if ((uint)(iVar6 + iVar5) <= g_playSystem_00802A38->field_00E4) {
      /* ST_PSEUDO[stack_slot_reuse,raw_pointer_offset]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable; candidate structure field after proof; otherwise retain buffer arithmetic */
      param_1 = ((g_playSystem_00802A38->field_00E4 - iVar6) *
                *(int *)((int)this + param_1 * 0x28 + 0x4e4)) /
                *(uint *)(&DAT_007e091c + *piVar1 * 4);
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar5 = (**(code **)(*(int *)this + 0x2c))();
      iVar5 = st::fn_00402897(STField<char>(this,0x24),iVar5);
      if ((iVar5 != 0) &&
         (iVar5 = st::fn_00402C98(STField<char>(this,0x24),STField<int>(this,0x18)),
         iVar5 == 0)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (int)(param_1 + ((int)param_1 >> 0x1f & 3U)) >> 2;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if (param_1 == 0) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = 1;
        }
        if (DAT_00811798 != nullptr) {
          st::fn_00402AF4(st::pointer_boundary_cast<void *>(DAT_00811798),STField<byte *>(this,0x24),5);
        }
      }
      iVar5 = *(int *)((int)this + uVar3 * 0x28 + 0x4e0);
      iVar6 = *(int *)((int)this + uVar3 * 0x28 + 0x4e4);
      if (iVar6 < (int)(iVar5 + param_1)) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = iVar6 - iVar5;
      }
      do {
        local_8 = 0;
        local_c = 0;
        iVar5 = *(int *)(&DAT_007e085c + *piVar1 * 4);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (int)(iVar5 * param_1) / iVar6;
        iVar5 = iVar5 - (iVar5 * *(int *)((int)this + uVar3 * 0x28 + 0x4dc)) / iVar6;
        iVar6 = *(int *)((int)this + uVar3 * 0x28 + 0x4ec);
        if ((0 < iVar6) && (local_8 = -iVar6, local_8 < 0)) {
          local_8 = 0;
        }
        iVar6 = *(int *)((int)this + uVar3 * 0x28 + 0x4f0);
        if ((0 < iVar6) && (local_c = -iVar6, local_c < 0)) {
          local_c = 0;
        }
        iVar6 = *(int *)((int)this + uVar3 * 0x28 + 0x4f4);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((iVar5 < iVar6 + param_2) && (param_2 = iVar5 - iVar6, param_2 < 0)) {
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = 0;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        if ((((local_8 == 0) ||
             (iVar5 = st::fn_00405DFD(STField<char>(this,0x24),4), local_8 <= iVar5)) &&
            ((local_c == 0 ||
             (iVar5 = st::fn_00405E5C(STField<char>(this,0x24),4), local_c <= iVar5)))) &&
           ((param_2 == 0 ||
            (iVar5 = st::fn_004023AB(STField<char>(this,0x24),4), param_2 <= iVar5)))) {
          if (local_8 != 0) {
            *(int *)((int)this + uVar3 * 0x28 + 0x4ec) =
                 *(int *)((int)this + uVar3 * 0x28 + 0x4ec) + local_8;
            st::fn_00402AF9(STField<char>(this,0x24),4,STField<int>(this,0x18),local_8);
          }
          if (local_c != 0) {
            *(int *)((int)this + uVar3 * 0x28 + 0x4f0) =
                 *(int *)((int)this + uVar3 * 0x28 + 0x4f0) + local_c;
            st::fn_00402C0C(STField<char>(this,0x24),4,STField<int>(this,0x18),local_c);
          }
          if (param_2 != 0) {
            *(int *)((int)this + uVar3 * 0x28 + 0x4f4) =
                 *(int *)((int)this + uVar3 * 0x28 + 0x4f4) + param_2;
            st::fn_00402793(STField<char>(this,0x24),4,STField<int>(this,0x18),param_2);
          }
          *(uint *)((int)this + uVar3 * 0x28 + 0x4e0) =
               *(int *)((int)this + uVar3 * 0x28 + 0x4e0) + param_1;
          if ((param_3 != nullptr) &&
             (*param_3 = 0,
             *(int *)((int)this + uVar3 * 0x28 + 0x4e4) <=
             *(int *)((int)this + uVar3 * 0x28 + 0x4e0))) {
            *param_3 = 1;
          }
          if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
            st::fn_00404B8D((char)STField<uint>(this,0x24));
          }
          break;
        }
        iVar6 = *(int *)((int)this + uVar3 * 0x28 + 0x4e4);
        bVar2 = iVar6 / 100 < (int)param_1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = iVar6 / 100;
      } while (bVar2);
      *(uint *)((int)this + uVar3 * 0x28 + 0x4e8) = g_playSystem_00802A38->field_00E4;
      if (STField<int>(this,0x524) + 0x19U < g_playSystem_00802A38->field_00E4) {
        STField<uint>(this,0x524) = g_playSystem_00802A38->field_00E4;
        bVar4 = st::fn_004049B7(STField<char>(this,0x23d));
        if (bVar4 == 2) {
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (**(code **)(*(int *)this + 0x90))(3,0x2c8);
          return *(int *)((int)this + uVar3 * 0x28 + 0x4e0);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x90))(3,0x200);
      }
    }
    iVar5 = *(int *)((int)this + uVar3 * 0x28 + 0x4e0);
  }
  return iVar5;
}

// 004E27E0 FUN_004e27e0
#line 4 "decomp/ST.exe/functions/004E27E0/decomp.c"
undefined4 __fastcall st::fn_004E27E0(TLOBaseTy *param_1)

{
  int iVar1;
  int iVar2;
  TLOBaseTy_field_04D0State *pTVar3;
  STGameObjC *local_8;

  local_8 = (STGameObjC *)param_1;
  if (g_playSystem_00802A38->field_00E4 % 0x4b == 0) {
    pTVar3 = &param_1->field_04D0;
    iVar2 = 2;
    do {
      if (((AnonShape_005EFAE0_B406B78B *)*pTVar3 != nullptr) &&
         ((iVar1 = st::fn_006E62D0
                             (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)*pTVar3,
                              (int *)&local_8), iVar1 != 0 ||
          (iVar1 = st::fn_00402EDC(local_8), iVar1 != 4)))) {
        *pTVar3 = CASE_0;
      }
      pTVar3 = pTVar3 + 10;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if ((((param_1->field_04E0[0x10] != 0) &&
       (iVar2 = st::fn_004042AF(&param_1->field_01D5,'\f'),
       iVar2 == param_1->field_01F5->field_01C4)) && (param_1->field_04D0 == CASE_0)) &&
     (param_1->field_04E0[6] == 0)) {
    param_1->field_04E0[0x10] = 0;
    st::fn_00402CF7(param_1,0);
  }
  return 0;
}

// 004E28D0 FUN_004e28d0
#line 4 "decomp/ST.exe/functions/004E28D0/decomp.c"
undefined4 __fastcall st::fn_004E28D0(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1969_0x9da == nullptr) {
    local_8 = param_1;
    pDVar1 = st::fn_006AE290(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1969_0x9da = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1969_0x9da,&local_8);
  return 0;
}

// 004E2970 FUN_004e2970
#line 4 "decomp/ST.exe/functions/004E2970/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004E2970 @ 004B9AD0; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall st::fn_004E2970(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)param_1->field_0024].field1969_0x9da;
  local_8 = param_1;
  if (array != nullptr) {
    index = 0;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1969_0x9da,index);
          break;
        }
        index = index + 1;
        array = g_packedRecords_A62x8[(int)param_1->field_0024].field1969_0x9da;
      } while ((int)index < (int)array->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1969_0x9da)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1969_0x9da);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1969_0x9da = nullptr;
    }
  }
  st::fn_00404390((int)param_1->field_0024);
  return 0;
}

// 004E2A90 FUN_004e2a90
#line 4 "decomp/ST.exe/functions/004E2A90/decomp.c"
undefined4 __fastcall st::fn_004E2A90(int param_1)

{
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  return 0;
}

// 004E2AB0 FUN_004e2ab0
#line 4 "decomp/ST.exe/functions/004E2AB0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004E2AB0 returns zeroed full register at 004E2AB5 @ 004E2AB7 */

uint __fastcall st::fn_004E2AB0(int param_1)

{
  st::fn_00403481((TLOBaseTy *)param_1);
  return 0;
}

// 004E3200 FUN_004e3200
#line 4 "decomp/ST.exe/functions/004E3200/decomp.c"
void __thiscall st::fn_004E3200(void *this,int *param_1)

{
  uint index;
  undefined1 uVar1;
  DArrayTy *pDVar4;
  int local_EAX_178;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar6;
  int local_EAX_275;
  bool bVar2;
  byte bVar3;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int iVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_01;
  int local_EAX_707;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_02;
  undefined1 *puVar8;
  uint *puVar9;
  int *piVar10;
  uint index_00;
  uint *puVar11;
  undefined4 *puVar12;
  undefined1 local_78 [8];
  char local_70;
  uint local_48 [2];
  char local_40;
  byte local_3f;
  undefined2 local_3e;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_36 [7];
  int local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;

  puVar8 = nullptr;
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  if (*param_1 == 0) {
    pDVar4 = st::fn_006AE290(nullptr,5,0x30,5);
    *param_1 = (int)pDVar4;
  }
  if (param_1[1] == 0) {
    pDVar4 = st::fn_006AE290(nullptr,5,0x30,5);
    param_1[1] = (int)pDVar4;
  }
  *(undefined4 *)(*param_1 + 0xc) = 0;
  *(undefined4 *)(param_1[1] + 0xc) = 0;
  iVar6 = STField<int>(this,0x5ac);
  if (iVar6 == 0x35) {
    do {
      if (puVar8[(int)(&PTR_DAT_007bfc04)[STField<int>(this,0x239)]] == '\0') {
        iVar6 = st::fn_0040186B(STField<int>(this,0x24),(int)puVar8);
        iVar5 = st::fn_00402342(STField<int>(this,0x24),(int)puVar8,iVar6 + 1);
      }
      else {
        iVar5 = st::fn_0040524F(STField<int>(this,0x24),(uint)puVar8);
      }
      if (iVar5 != 0) {
        uVar1 = st::fn_0040530D(STField<int>(this,0x24),(int)puVar8);
        iVar6 = st::fn_0040186B(STField<int>(this,0x24),(int)puVar8);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if ((iVar6 < CONCAT31(extraout_var_01,uVar1)) &&
           (((STField<int>(this,0x361) != 2 || (STField<undefined1 *>(this,0x369) != puVar8))
            && (local_EAX_707 = st::fn_00401E1F(STField<int>(this,0x24),(uint)puVar8),
               local_EAX_707 == 0)))) {
          memset(local_48, 0, 0x30); /* compiler bulk-zero initialization */
          iVar6 = st::fn_0040186B(STField<int>(this,0x24),(int)puVar8);
          local_48[0] = (iVar6 + 1) * 0x10000 | (uint)puVar8 & 0xffff;
          if (puVar8[(int)(&PTR_DAT_007bfc04)[STField<int>(this,0x239)]] == '\0') {
LAB_004e3526:
            local_40 = '\x01';
          }
          else {
            bVar2 = st::fn_00403396(STField<byte *>(this,0x24),(uint)puVar8);
            local_40 = '\0';
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var_02,bVar2) != 0) goto LAB_004e3526;
          }
          st::fn_004035DF(this,CASE_2,(int)puVar8,&local_8,&local_c,&local_10,&local_14);
          local_3a = (undefined2)local_8;
          local_3e = (undefined2)local_c;
          bVar3 = st::fn_004049B7(STField<char>(this,0x24));
          if (bVar3 == 3) {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          local_3f = st::fn_004049B7(STField<char>(this,0x24));
          puVar12 = local_36;
          iVar6 = st::fn_0040186B(STField<int>(this,0x24),(int)puVar8);
          st::fn_00402888(STField<byte *>(this,0x24),puVar8,iVar6 + 1,puVar12);
          if (puVar8[(int)(&PTR_DAT_007bfc04)[STField<int>(this,0x239)]] == '\0') {
            pDVar4 = (DArrayTy *)param_1[1];
          }
          else {
            pDVar4 = (DArrayTy *)*param_1;
          }
          st::fn_006AE1C0(pDVar4,local_48);
        }
      }
      puVar8 = puVar8 + 1;
    } while ((int)puVar8 < 0x9b);
  }
  else if (((0x53 < iVar6) && (iVar6 < 0x5b)) &&
          (local_18 = 0, (&DAT_0079a3fc)[(iVar6 * 3 + -0xfc) * 5] != 0)) {
    puVar9 = st::pointer_boundary_cast<uint *>(&DAT_0079a3fc + (iVar6 * 3 + -0xfc) * 5);
    do {
      if (0xe < local_18) break;
      local_EAX_178 = st::fn_0040524F(STField<int>(this,0x24),*puVar9);
      if (local_EAX_178 != 0) {
        uVar1 = st::fn_0040530D(STField<int>(this,0x24),*puVar9);
        iVar6 = st::fn_0040186B(STField<int>(this,0x24),*puVar9);
        /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
        if (((iVar6 < CONCAT31(extraout_var,uVar1)) &&
            ((STField<int>(this,0x361) != 2 || (STField<uint>(this,0x369) != *puVar9)))) &&
           (local_EAX_275 = st::fn_00401E1F(STField<int>(this,0x24),*puVar9),
           local_EAX_275 == 0)) {
          iVar6 = STField<int>(this,0x24);
          memset(local_48, 0, 0x30); /* compiler bulk-zero initialization */
          iVar6 = st::fn_0040186B(iVar6,*puVar9);
          local_48[0] = (iVar6 + 1) * 0x10000 | (uint)(ushort)*puVar9;
          if (STField<int>(this,0x4d4) == 0) {
LAB_004e336e:
            local_40 = '\0';
          }
          else {
            bVar2 = st::fn_00403396(STField<byte *>(this,0x24),*puVar9);
            local_40 = '\x01';
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if (CONCAT31(extraout_var_00,bVar2) == 0) goto LAB_004e336e;
          }
          st::fn_004035DF(this,CASE_2,*puVar9,&local_8,&local_c,&local_10,&local_14);
          local_3e = (undefined2)local_c;
          local_3a = (undefined2)local_8;
          bVar3 = st::fn_004049B7(STField<char>(this,0x24));
          if (bVar3 == 3) {
            local_3c = (undefined2)local_14;
          }
          else {
            local_3c = (undefined2)local_10;
          }
          local_3f = st::fn_004049B7(STField<char>(this,0x24));
          puVar12 = local_36;
          iVar6 = st::fn_0040186B(STField<int>(this,0x24),*puVar9);
          st::fn_00402888(STField<byte *>(this,0x24),(undefined1 *)*puVar9,iVar6 + 1,puVar12);
          st::fn_006AE1C0((DArrayTy *)*param_1,local_48);
        }
      }
      puVar11 = puVar9 + 1;
      puVar9 = puVar9 + 1;
      local_18 = local_18 + 1;
    } while (*puVar11 != 0);
  }
  local_18 = 2;
  piVar10 = param_1;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = *(int **)(*piVar10 + 0xc);
    while (param_1 != nullptr) {
      pDVar4 = (DArrayTy *)*piVar10;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = nullptr;
      index_00 = 0;
      if ((int)(pDVar4->count - 2) < 0) break;
      do {
        st::fn_006ACC70(pDVar4,index_00,local_48);
        index = index_00 + 1;
        st::fn_006ACC70((DArrayTy *)*piVar10,index,local_78);
        if ((local_40 == '\0') && (local_70 != '\0')) {
          st::fn_006B0CD0((AnonShape_00413AF0_B6B4EE9A *)*piVar10,index_00,index);
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_1 = (int *)0x1;
        }
        pDVar4 = (DArrayTy *)*piVar10;
        index_00 = index;
      } while ((int)index <= (int)(pDVar4->count - 2));
    }
    piVar10 = piVar10 + 1;
    local_18 = local_18 + -1;
    if (local_18 == 0) {
      return;
    }
  } while( true );
}

// 004E3790 FUN_004e3790
#line 4 "decomp/ST.exe/functions/004E3790/decomp.c"
int __thiscall st::fn_004E3790(void *this,uint param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = st::fn_00405ACE(st::pointer_boundary_cast<TLOBaseTy *>(this),2,param_1,1,param_3,1);
  if (iVar1 != 0) {
    iVar2 = st::fn_0040186B(STField<int>(this,0x24),param_1);
    if (iVar2 != param_2 + -1) {
      return 0;
    }
  }
  return iVar1;
}

// 004E3800 FUN_004e3800
#line 4 "decomp/ST.exe/functions/004E3800/decomp.c"
int __thiscall st::fn_004E3800(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = st::fn_00401B59(st::pointer_boundary_cast<TLOBaseTy *>(this),2,param_1,-1);
  if (iVar1 == 0) {
    if (STField<int>(this,0x361) != 2) {
      return 0;
    }
    if (STField<int>(this,0x369) != param_1) {
      return 0;
    }
    iVar1 = 1;
  }
  iVar2 = st::fn_0040186B(STField<int>(this,0x24),param_1);
  if (iVar2 == param_2 + -1) {
    return iVar1;
  }
  return 0;
}

// 004E3910 FUN_004e3910
#line 4 "decomp/ST.exe/functions/004E3910/decomp.c"
undefined4 __fastcall st::fn_004E3910(int *param_1)

{
  STT3DSprC *this;
  short sVar1;
  short sVar2;
  int iVar4;
  int iVar5;
  int iVar3;
  int local_EAX_930;
  uint uVar6;
  int iVar7;
  short sVar8;
  undefined4 uVar9;
  int iVar10;
  STSharkC *pSVar11;
  char cVar12;
  short sVar13;
  STSharkC *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  DArrayTy *local_8;

  if ((uint)param_1[0x13a] <= g_playSystem_00802A38->field_00E4) {
    uVar6 = st::machine_word_boundary_cast<uint>(param_1[7] * 0x41c64e6d + 0x3039);
    param_1[7] = uVar6;
    local_10 = 0;
    local_c = 0;
    param_1[0x13a] = (uVar6 >> 0x10) % 0x9e + 0x1d4 + g_playSystem_00802A38->field_00E4;
    local_14 = param_1;
    if (0 < param_1[0x139]) {
      do {
        iVar10 = local_c;
        if ((AnonShape_005EFAE0_B406B78B *)param_1[local_c + 0x134] ==
            nullptr) {
          local_c = iVar10;
          if (local_10 == 0) {
            local_10 = 1;
            local_8 = st::fn_006AE290(nullptr,10000,0xc,10);
            iVar10 = 0;
            uVar9 = STPiece<0,4>(g_worldGrid);
            if (0 < g_worldGrid.sizeY) {
              do {
                iVar4 = 0;
                if (0 < g_worldGrid.sizeZ) {
                  do {
                    sVar1 = (short)iVar10;
                    sVar13 = (short)iVar4;
                    iVar5 = st::fn_00404D3B(0,sVar1,sVar13);
                    if ((iVar5 != 0) &&
                       (((sVar2 = g_worldGrid.sizeX, sVar2 < 1 || (sVar1 < 0)) ||
                        (((g_worldGrid.sizeY <= sVar1 ||
                          (((sVar13 < 0 || (g_worldGrid.sizeZ <= sVar13)) ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar13 * (int)g_worldGrid.planeStride].
                            objects[0] == nullptr)))) &&
                         ((((sVar1 < 0 || (g_worldGrid.sizeY <= sVar1)) || (sVar13 < 0)) ||
                          ((g_worldGrid.sizeZ <= sVar13 ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar13 * (int)g_worldGrid.planeStride].
                            objects[1] == nullptr)))))))))) {
                      local_20 = nullptr;
                      local_1c = iVar10;
                      local_18 = iVar4;
                      st::fn_006AE1C0(local_8,&local_20);
                    }
                    iVar5 = st::fn_00404D3B(g_worldGrid.sizeX + -1,sVar1,sVar13);
                    if (iVar5 != 0) {
                      sVar2 = g_worldGrid.sizeX;
                      if (((short)(sVar2 + -1) < 0) ||
                         ((((((sVar2 <= (short)(sVar2 + -1) || (sVar1 < 0)) ||
                             (g_worldGrid.sizeY <= sVar1)) ||
                            ((sVar13 < 0 || (g_worldGrid.sizeZ <= sVar13)))) ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar13 * (int)g_worldGrid.planeStride +
                             (int)(short)(sVar2 + -1)].objects[0] == nullptr)) &&
                          (((((short)(sVar2 + -1) < 0 || (sVar2 <= (short)(sVar2 + -1))) ||
                            ((sVar1 < 0 ||
                             (((g_worldGrid.sizeY <= sVar1 || (sVar13 < 0)) ||
                              (g_worldGrid.sizeZ <= sVar13)))))) ||
                           (g_worldGrid.cells
                            [(int)sVar1 * (int)sVar2 + (int)sVar13 * (int)g_worldGrid.planeStride +
                             (int)(short)(sVar2 + -1)].objects[1] == nullptr)))))) {
                        local_20 = (STSharkC *)(sVar2 + -1);
                        local_1c = iVar10;
                        local_18 = iVar4;
                        st::fn_006AE1C0(local_8,&local_20);
                      }
                    }
                    iVar4 = iVar4 + 1;
                    uVar9 = STPiece<0,4>(g_worldGrid);
                    param_1 = local_14;
                  } while (iVar4 < g_worldGrid.sizeZ);
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < g_worldGrid.sizeY);
            }
            pSVar11 = nullptr;
            sVar1 = g_worldGrid.sizeZ;
            if (0 < (short)uVar9) {
              do {
                iVar10 = 0;
                if (0 < sVar1) {
                  do {
                    sVar1 = (short)pSVar11;
                    sVar13 = (short)iVar10;
                    iVar3 = st::fn_00404D3B(sVar1,0,sVar13);
                    if (iVar3 != 0) {
                      if (((((sVar1 < 0) || (g_worldGrid.sizeX <= sVar1)) ||
                           ((g_worldGrid.sizeY < 1 ||
                            ((sVar13 < 0 || (g_worldGrid.sizeZ <= sVar13)))))) ||
                          (g_worldGrid.cells
                           [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar1].objects[0] ==
                           nullptr)) &&
                         (((((sVar1 < 0 || (g_worldGrid.sizeX <= sVar1)) || (g_worldGrid.sizeY < 1))
                           || ((sVar13 < 0 || (g_worldGrid.sizeZ <= sVar13)))) ||
                          (g_worldGrid.cells
                           [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar1].objects[1] ==
                           nullptr)))) {
                        local_1c = 0;
                        local_20 = pSVar11;
                        local_18 = iVar10;
                        st::fn_006AE1C0(local_8,&local_20);
                      }
                    }
                    local_EAX_930 = st::fn_00404D3B(sVar1,g_worldGrid.sizeY + -1,sVar13);
                    if (local_EAX_930 != 0) {
                      sVar2 = g_worldGrid.sizeY + -1;
                      sVar8 = g_worldGrid.sizeX;
                      if ((((sVar1 < 0) || (sVar8 <= sVar1)) ||
                          ((sVar2 < 0 ||
                           ((((g_worldGrid.sizeY <= sVar2 || (sVar13 < 0)) ||
                             (g_worldGrid.sizeZ <= sVar13)) ||
                            (g_worldGrid.cells
                             [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar8 * (int)sVar2 +
                              (int)sVar1].objects[0] == nullptr)))))) &&
                         (((sVar1 < 0 || (sVar8 <= sVar1)) ||
                          ((sVar2 < 0 ||
                           (((g_worldGrid.sizeY <= sVar2 || (sVar13 < 0)) ||
                            ((g_worldGrid.sizeZ <= sVar13 ||
                             (g_worldGrid.cells
                              [(int)sVar13 * (int)g_worldGrid.planeStride + (int)sVar2 * (int)sVar8
                               + (int)sVar1].objects[1] == nullptr)))))))))) {
                        local_1c = g_worldGrid.sizeY + -1;
                        local_20 = pSVar11;
                        local_18 = iVar10;
                        st::fn_006AE1C0(local_8,&local_20);
                      }
                    }
                    iVar10 = iVar10 + 1;
                    uVar9 = STPiece<0,4>(g_worldGrid);
                    param_1 = local_14;
                    sVar1 = g_worldGrid.sizeZ;
                  } while (iVar10 < g_worldGrid.sizeZ);
                }
                pSVar11 = (STSharkC *)((int)&pSVar11->vtable + 1);
              } while ((int)pSVar11 < (int)(short)uVar9);
            }
            if (local_8->count != 0) {
              uVar6 = st::machine_word_boundary_cast<uint>(param_1[7] * 0x41c64e6d + 0x3039);
              param_1[7] = uVar6;
              st::fn_006ACC70(local_8,(uVar6 >> 0x10) % local_8->count,&local_20);
              iVar10 = st::machine_word_boundary_cast<int>(param_1[0x16c] + -8);
              if (iVar10 < 0) {
                iVar10 = 0;
              }
              iVar4 = st::machine_word_boundary_cast<int>(param_1[0x16c] + 8);
              if (g_worldGrid.sizeX <= iVar4) {
                iVar4 = g_worldGrid.sizeX + -1;
              }
              iVar5 = st::machine_word_boundary_cast<int>(param_1[0x16d] + -8);
              if (iVar5 < 0) {
                iVar5 = 0;
              }
              iVar7 = st::machine_word_boundary_cast<int>(param_1[0x16d] + 8);
              if (g_worldGrid.sizeY <= iVar7) {
                iVar7 = g_worldGrid.sizeY + -1;
              }
              iVar10 = st::fn_00401FD7
                                 (local_20,(int)local_20,local_1c,local_18,iVar10,iVar5,iVar4,iVar7,
                                  0,param_1[9]);
              this = (STT3DSprC *)((int)param_1 + 0x1d5);
              param_1[local_c + 0x134] = *(int *)(iVar10 + 0x18);
              cVar12 = '\0';
              iVar10 = st::fn_004022AC(this,'\v');
              st::fn_00401EBA(this,0xb,0,iVar10,cVar12);
              st::fn_00401064(this,'\v',0);
              st::fn_004022D4(this,'\v');
              st::fn_00405240(this,0xb,g_playSystem_00802A38->field_00E4);
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              (**(code **)(*param_1 + 0x90))(3,0x25d);
            }
            st::fn_006AE110(local_8);
          }
        }
        else {
          iVar4 = st::fn_006E62D0
                            (g_playSystem_00802A38,
                             (AnonShape_005EFAE0_B406B78B *)param_1[local_c + 0x134],nullptr);
          local_c = iVar10;
          if (iVar4 != 0) {
            param_1[iVar10 + 0x134] = 0;
          }
        }
        local_c = local_c + 1;
      } while (local_c < param_1[0x139]);
      return 0;
    }
  }
  return 0;
}

// 004E4070 FUN_004e4070
#line 4 "decomp/ST.exe/functions/004E4070/decomp.c"
undefined4 st::fn_004E4070(void)

{
  return 0;
}

// 004E4090 FUN_004e4090
#line 4 "decomp/ST.exe/functions/004E4090/decomp.c"
undefined4 st::fn_004E4090(int param_1)

{
  return g_packedRecords_A62x8[param_1].field1950_0x99a;
}

// 004E40C0 FUN_004e40c0
#line 1 "decomp/ST.exe/functions/004E40C0/decomp.c"

int st::fn_004E40C0(int param_1)

{
  int iVar1;

  iVar1 = g_packedRecords_A62x8[param_1].field1950_0x99a + 1;
  g_packedRecords_A62x8[param_1].field1950_0x99a = iVar1;
  return iVar1;
}

// 004E4100 FUN_004e4100
#line 1 "decomp/ST.exe/functions/004E4100/decomp.c"

int st::fn_004E4100(int param_1)

{
  int iVar1;

  iVar1 = g_packedRecords_A62x8[param_1].field1950_0x99a + -1;
  g_packedRecords_A62x8[param_1].field1950_0x99a = iVar1;
  return iVar1;
}

// 004E4140 FUN_004e4140
#line 1 "decomp/ST.exe/functions/004E4140/decomp.c"

dword st::fn_004E4140(int param_1)

{
  if (g_packedRecords_A62x8[param_1].field1969_0x9da != nullptr) {
    return (g_packedRecords_A62x8[param_1].field1969_0x9da)->count;
  }
  return 0;
}

// 004E4180 FUN_004e4180
#line 1 "decomp/ST.exe/functions/004E4180/decomp.c"

int st::fn_004E4180(int param_1)

{
  int iVar1;

  iVar1 = st::fn_00405330(param_1);
  return iVar1 * 2000 + 1000;
}

// 004E41C0 FUN_004e41c0
#line 1 "decomp/ST.exe/functions/004E41C0/decomp.c"

/* [STPrototypeApplier] Propagated return.
   Evidence: 004E41C0 returns used as parameter 1 of MoneyTy::sub_0052BC30 @ 004D8C18 */

uint st::fn_004E41C0(int param_1)

{
  return g_packedRecords_A62x8[param_1].field1949_0x996;
}

// 004E41F0 FUN_004e41f0
#line 4 "decomp/ST.exe/functions/004E41F0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0, unknown=0),
   and decompilation contains no value return */

void st::fn_004E41F0(int param_1,undefined4 param_2)

{
  g_packedRecords_A62x8[param_1].field1949_0x996 = param_2;
  return;
}

// 004E4230 FUN_004e4230
#line 1 "decomp/ST.exe/functions/004E4230/decomp.c"

int st::fn_004E4230(int param_1,int param_2)

{
  int iVar1;

  iVar1 = g_packedRecords_A62x8[param_1].field1949_0x996 + param_2;
  g_packedRecords_A62x8[param_1].field1949_0x996 = iVar1;
  return iVar1;
}

// 004E4270 FUN_004e4270
#line 1 "decomp/ST.exe/functions/004E4270/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_004E4270(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;

  iVar1 = st::fn_00405D80(param_1);
  uVar2 = st::fn_004036A7(param_1);
  if (iVar1 < (int)(uVar2 + param_2)) {
    uVar2 = st::fn_004036A7(param_1);
    param_2 = iVar1 - uVar2;
  }
  if (0 < param_2) {
    st::fn_00403332(param_1,param_2);
  }
  st::fn_004036A7(param_1);
  return;
}

// 004E42E0 FUN_004e42e0
#line 1 "decomp/ST.exe/functions/004E42E0/decomp.c"

void st::fn_004E42E0(int param_1)

{
  int iVar1;
  uint uVar2;

  iVar1 = st::fn_00405D80(param_1);
  uVar2 = st::fn_004036A7(param_1);
  if (iVar1 < (int)uVar2) {
    st::fn_00405024(param_1,iVar1);
  }
  st::fn_004036A7(param_1);
  return;
}

// 004E4330 FUN_004e4330
#line 4 "decomp/ST.exe/functions/004E4330/decomp.c"
int st::fn_004E4330(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = &g_packedRecords_A62x8[param_1].field1949_0x996;
  iVar2 = g_packedRecords_A62x8[param_1].field1949_0x996 - param_2;
  *puVar1 = iVar2;
  if (iVar2 < 0) {
    *puVar1 = 0;
  }
  return *puVar1;
}

// 004E4380 FUN_004e4380
#line 1 "decomp/ST.exe/functions/004E4380/decomp.c"

int st::fn_004E4380(int param_1,int param_2)

{
  int iVar1;

  iVar1 = g_packedRecords_A62x8[param_1].field1951_0x99e + param_2;
  g_packedRecords_A62x8[param_1].field1951_0x99e = iVar1;
  return iVar1;
}

// 004E43C0 FUN_004e43c0
#line 4 "decomp/ST.exe/functions/004E43C0/decomp.c"
int st::fn_004E43C0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;

  puVar1 = &g_packedRecords_A62x8[param_1].field1951_0x99e;
  iVar2 = g_packedRecords_A62x8[param_1].field1951_0x99e - param_2;
  *puVar1 = iVar2;
  if (iVar2 < 0) {
    *puVar1 = 0;
  }
  return *puVar1;
}

// 004E4410 FUN_004e4410
#line 4 "decomp/ST.exe/functions/004E4410/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004DA390 -> 004E4410 @ 004DA59B; FUN_004da390 parameter param_2 | 004DA390 -> 004E4410
   @ 004DA786; FUN_004da390 parameter param_1 | 00677700 -> 004E4410 @ 0067774B; FUN_00677700
   parameter param_1 */

undefined4 st::fn_004E4410(byte *param_1)

{
  return g_packedRecords_A62x8[(int)param_1].field1951_0x99e;
}

// 004E4440 FUN_004e4440
#line 4 "decomp/ST.exe/functions/004E4440/decomp.c"
void st::fn_004E4440(int param_1,undefined4 param_2)

{
  g_packedRecords_A62x8[param_1].field1951_0x99e = param_2;
  return;
}

// 004E4480 FUN_004e4480
#line 4 "decomp/ST.exe/functions/004E4480/decomp.c"
undefined4 __fastcall st::fn_004E4480(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1968_0x9d6 == nullptr) {
    local_8 = param_1;
    pDVar1 = st::fn_006AE290(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1968_0x9d6 = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1968_0x9d6,&local_8);
  return 0;
}

// 004E4520 FUN_004e4520
#line 4 "decomp/ST.exe/functions/004E4520/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004E4520 @ 004B9AC0; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall st::fn_004E4520(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6;
  if (array != nullptr) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6,index);
          break;
        }
        index = index + 1;
        array = g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6;
      } while ((int)index < (int)array->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1968_0x9d6 = nullptr;
    }
  }
  return 0;
}

// 004E4630 FUN_004e4630
#line 4 "decomp/ST.exe/functions/004E4630/decomp.c"
void __fastcall st::fn_004E4630(AnonShape_004E4630_7FABCC3F *param_1)

{
  param_1->field_04D4 = g_playSystem_00802A38->field_00E4;
  param_1->field_04D0 = 0;
  param_1->field_04D8 = 0;
  param_1->field_04DC = 0;
  return;
}

// 004E4670 FUN_004e4670
#line 4 "decomp/ST.exe/functions/004E4670/decomp.c"
undefined4 __fastcall st::fn_004E4670(int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x4d0) != 0) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00405E6B(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x4d0));
    *(undefined4 *)(param_1 + 0x4d0) = 0;
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_004028F6(*(char *)(param_1 + 0x24));
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(uint *)(param_1 + 0x24) == (uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x112d)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      st::fn_00404B8D((char)*(uint *)(param_1 + 0x24));
    }
  }
  return 0;
}

// 004E46F0 FUN_004e46f0
#line 4 "decomp/ST.exe/functions/004E46F0/decomp.c"
undefined4 __fastcall st::fn_004E46F0(int *param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  STGroupBoatC *pSVar4;
  uint uVar5;
  int iVar6;
  undefined1 local_28 [16];
  undefined4 local_18;
  undefined2 local_14;
  undefined2 local_12;
  int local_10;
  int local_8;

  if (param_1[0x135] + 0x19U <= g_playSystem_00802A38->field_00E4) {
    iVar6 = param_1[0x136];
    param_1[0x135] = g_playSystem_00802A38->field_00E4;
    local_8 = 0;
    do {
      iVar1 = iVar6 % 0x1d + -0xf + param_1[0x16c];
      iVar3 = iVar6 / 0x1d + -0xf + param_1[0x16d];
      if ((((-1 < iVar1) && (iVar1 < g_worldGrid.sizeX)) && (-1 < iVar3)) &&
         (iVar3 < g_worldGrid.sizeY)) {
        iVar3 = g_worldGrid.sizeX * iVar3 + DAT_007fa168;
        bVar2 = *(byte *)(iVar3 + iVar1);
        uVar5 = (uint)bVar2;
        if (uVar5 != 0) {
          if (9 < uVar5) {
            uVar5 = 10;
          }
          *(byte *)(iVar3 + iVar1) = bVar2 - (char)uVar5;
          iVar1 = param_1[0x134];
          local_8 = local_8 + uVar5;
          param_1[0x134] = iVar1 + uVar5;
          if (99 < (int)(iVar1 + uVar5)) {
            st::fn_00402C07((int)param_1);
          }
        }
      }
      iVar6 = iVar6 + 1;
      if (0x348 < iVar6) {
        iVar6 = 0;
      }
    } while ((iVar6 != param_1[0x136]) && (local_8 < 10));
    param_1[0x136] = iVar6;
    if ((local_8 == 0) && (param_1[0x137] == 0)) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (param_1[9] == (uint)*(byte *)(param_1[4] + 0x112d)) {
        param_1[0x137] = 1;
        /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
        pSVar4 = st::fn_00405CF9((char)param_1[9],*(ushort *)(param_1 + 0xc));
        if ((pSVar4 != nullptr) &&
           ((undefined4 *)pSVar4->field_001C != nullptr)) {
          local_10 = param_1[6];
          local_12 = STField<undefined2>(param_1,0x32);
          local_18 = 0x5d99;
          local_14 = 1;
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          (*(code *)**(undefined4 **)pSVar4->field_001C)(local_28);
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*param_1 + 0x90))(4,0x3cf);
      }
    }
  }
  return 0;
}

// 004E48D0 FUN_004e48d0
#line 4 "decomp/ST.exe/functions/004E48D0/decomp.c"
undefined4 st::fn_004E48D0(void)

{
  return 0;
}

// 004E48F0 FUN_004e48f0
#line 4 "decomp/ST.exe/functions/004E48F0/decomp.c"
undefined4 __fastcall st::fn_004E48F0(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1972_0x9e6 == nullptr) {
    local_8 = param_1;
    pDVar1 = st::fn_006AE290(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1972_0x9e6 = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1972_0x9e6,&local_8);
  return 0;
}

// 004E4990 FUN_004e4990
#line 4 "decomp/ST.exe/functions/004E4990/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004E4990 @ 004B9B30; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall st::fn_004E4990(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6;
  if (array != nullptr) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6,index);
          break;
        }
        index = index + 1;
        array = g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6;
      } while ((int)index < (int)array->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1972_0x9e6 = nullptr;
    }
  }
  return 0;
}

// 004E4AA0 FUN_004e4aa0
#line 4 "decomp/ST.exe/functions/004E4AA0/decomp.c"
undefined4 __fastcall st::fn_004E4AA0(int *param_1)

{
  uint uVar1;

  param_1[0x134] = -1;
  param_1[0x135] = 0;
  uVar1 = g_playSystem_00802A38->field_00E4;
  param_1[0x137] = 0;
  param_1[0x139] = 0;
  param_1[0x138] = 0;
  param_1[0x136] = uVar1;
  if ((param_1[0x16b] == 0x3d) || (param_1[0x16b] == 0x5d)) {
    st::fn_00401B18((STMineSetC *)param_1);
  }
  return 0;
}

// 004E4B10 FUN_004e4b10
#line 4 "decomp/ST.exe/functions/004E4B10/decomp.c"
undefined4 __fastcall st::fn_004E4B10(AnonShape_004E4B10_C52B4B94 *param_1)

{
  if ((param_1->field_0245 == 0) && (param_1->field_04D4 < 0x28)) {
    if (param_1->field_04D8 + 0x1c <= g_playSystem_00802A38->field_00E4) {
      param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
      param_1->field_04D4 = st::machine_word_boundary_cast<int>(param_1->field_04D4 + 1);
    }
  }
  return 0;
}

// 004E4B60 FUN_004e4b60
#line 4 "decomp/ST.exe/functions/004E4B60/decomp.c"
/* [STSwitchEnumApplier] Switch target field_0245 uses
   /SubmarineTitans/Recovered/Enums/STMineSetC_field_0245State. Cases:
   CASE_0=0;CASE_1=1;CASE_2=2;CASE_6=6 */

undefined4 __fastcall st::fn_004E4B60(STMineSetC *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;

  switch(param_1->field_0245) {
  case CASE_0:
    if ((param_1->field_05AC == 0x36) || (param_1->field_05AC == 0x5d)) {
      if (param_1->field_0024 != param_1->field_023D) {
        bVar1 = st::fn_004049B7((char)param_1->field_023D);
        iVar3 = param_1->field_0235;
        bVar2 = st::fn_004049B7(*(char *)&param_1->field_0024);
        if ((&DAT_007e1984)[(uint)bVar2 + (iVar3 * 3 + (uint)bVar1) * 3] == '\0') {
          return 0;
        }
      }
      if (param_1->field_04DC == 0) {
        iVar3 = st::fn_0040186B(param_1->field_0024,
                                   *(int *)(&DAT_00798fb0 + param_1->field_0239 * 4));
        iVar3 = *(int *)(&DAT_00798f98 + (iVar3 + param_1->field_0239 * 2) * 4);
        param_1->field_04D0 = iVar3;
        st::fn_00405835(param_1,iVar3);
        param_1->field_04DC = 1;
        return 0;
      }
    }
    break;
  case CASE_1:
  case CASE_2:
  case CASE_6:
    if ((((param_1->field_05AC == 0x36) || (param_1->field_05AC == 0x5d)) &&
        (0 < param_1->field_04D0)) && (param_1->field_04DC != 0)) {
      st::fn_00401776((AnonShape_0041CF50_01071190 *)param_1);
      param_1->field_04DC = 0;
    }
    if ((param_1->field_05AC == 0x3d) || (param_1->field_05AC == 0x5d)) {
      if (param_1->field_04E0 != 0) {
        st::fn_00401F3C((AnonShape_0041D100_A90F7B7E *)param_1);
        param_1->field_04E0 = 0;
      }
      if (param_1->field_04E4 != 0) {
        st::fn_0040216C(param_1);
        param_1->field_04E4 = 0;
      }
    }
  }
  return 0;
}

// 004E4D60 FUN_004e4d60
#line 4 "decomp/ST.exe/functions/004E4D60/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E51B0 -> 004E4D60 @ 004E5702 */

undefined4 __fastcall st::fn_004E4D60(AnonShape_004E4D60_C16F78E8 *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;

  if ((param_1->field_0245 == 0) && ((param_1->field_05AC == 0x36 || (param_1->field_05AC == 0x5d)))
     ) {
    if (param_1->field_04DC != 0) {
      st::fn_00401776((AnonShape_0041CF50_01071190 *)param_1);
      param_1->field_04DC = 0;
    }
    if (*(int *)&param_1->field_0x24 != param_1->field_023D) {
      bVar1 = st::fn_004049B7((char)param_1->field_023D);
      iVar3 = param_1->field_0235;
      bVar2 = st::fn_004049B7(param_1->field_0x24);
      if ((&DAT_007e1984)[(uint)bVar2 + ((uint)bVar1 + iVar3 * 3) * 3] == '\0') {
        return 0;
      }
    }
    iVar3 = st::fn_0040186B(*(int *)&param_1->field_0x24,
                               *(int *)(&DAT_00798fb0 + param_1->field_0239 * 4));
    iVar3 = *(int *)(&DAT_00798f98 + (iVar3 + param_1->field_0239 * 2) * 4);
    param_1->field_04D0 = iVar3;
    st::fn_00405835(param_1,iVar3);
    param_1->field_04DC = 1;
  }
  return 0;
}

// 004E4E90 FUN_004e4e90
#line 4 "decomp/ST.exe/functions/004E4E90/decomp.c"
undefined4 __thiscall st::fn_004E4E90(void *this,int param_1,int param_2)

{
  int iVar1;

  if ((g_visibleClass_00802A88 != nullptr) && (0x27 < STField<int>(this,0x4d4))) {
    iVar1 = st::fn_004040A7
                      (g_visibleClass_00802A88,param_1,param_2,2,STField<uint>(this,0x24),7);
    if (iVar1 == 0) {
      st::fn_00401FD2
                (g_visibleClass_00802A88,param_1,param_2,(undefined *)0x2,
                 STField<uint>(this,0x24),(undefined *)0x7,500);
      STField<undefined4>(this,0x4d4) = 0;
      STField<uint>(this,0x4d8) = g_playSystem_00802A38->field_00E4;
    }
  }
  return 0;
}

// 004E4F30 FUN_004e4f30
#line 4 "decomp/ST.exe/functions/004E4F30/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E51B0 -> 004E4F30 @ 004E5728 */

undefined4 __fastcall st::fn_004E4F30(STMineSetC *param_1)

{
  int iVar1;
  byte bVar2;
  int local_EAX_85;
  int local_EAX_124;
  int iVar3;
  int uVar2;
  int uVar3;

  if ((param_1->field_05AC != 0x5d) && (param_1->field_05AC != 0x3d)) {
    return 0;
  }
  if (param_1->field_04E0 != 0) {
    st::fn_00401F3C((AnonShape_0041D100_A90F7B7E *)param_1);
    param_1->field_04E0 = 0;
  }
  if (param_1->field_0024 != param_1->field_023D) {
    local_EAX_85 = st::fn_004049B7((char)param_1->field_023D);
    iVar3 = param_1->field_0235;
    local_EAX_124 = st::fn_004049B7(*(char *)&param_1->field_0024);
    local_EAX_124 = (int)(byte)local_EAX_124;
    if ((&DAT_007e1984)[local_EAX_124 + ((uint)(byte)local_EAX_85 + iVar3 * 3) * 3] == '\0')
    goto LAB_004e4ffe;
  }
  if ((param_1->field_05AC != 0x5d) ||
     (iVar3 = st::fn_0040186B(param_1->field_0024,0x46), iVar3 != 0)) {
    st::fn_0040281A(param_1,*(int *)(&DAT_00798fbc + param_1->field_0239 * 4));
    param_1->field_04E0 = 1;
  }
LAB_004e4ffe:
  if (param_1->field_05AC == 0x5d) {
    iVar3 = 0x4a;
  }
  else if ((param_1->field_05AC == 0x3d) &&
          (bVar2 = st::fn_004049B7(*(char *)&param_1->field_0024), bVar2 == 1)) {
    iVar3 = 0x12;
  }
  else {
    iVar3 = 0;
  }
  if (param_1->field_04E4 != 0) {
    st::fn_0040216C(param_1);
    param_1->field_04E4 = 0;
  }
  if (param_1->field_0024 != param_1->field_023D) {
    uVar2 = st::fn_004049B7((char)param_1->field_023D);
    iVar1 = param_1->field_0235;
    uVar3 = st::fn_004049B7(*(char *)&param_1->field_0024);
    uVar3 = (int)(byte)uVar3;
    if ((&DAT_007e1984)[uVar3 + ((uint)(byte)uVar2 + iVar1 * 3) * 3] == '\0') {
      return 0;
    }
  }
  if ((iVar3 != 0) && (iVar3 = st::fn_0040186B(param_1->field_0024,iVar3), iVar3 == 0)) {
    return 0;
  }
  st::fn_00402B3F(param_1,10);
  param_1->field_04E4 = 1;
  return 0;
}

// 004E5140 FUN_004e5140
#line 4 "decomp/ST.exe/functions/004E5140/decomp.c"
void __cdecl st::fn_004E5140(int param_1)

{
  if ((-1 < param_1) && (param_1 < 8)) {
    g_packedRecords_A62x8[param_1].field393_0x313 = 0;
    *(undefined4 *)&g_packedRecords_A62x8[param_1].field_0x317 = 0;
    *(undefined4 *)&g_packedRecords_A62x8[param_1].field_0x31b = 0;
    *(undefined4 *)&g_packedRecords_A62x8[param_1].field_0x31f = 0;
    *(undefined4 *)&g_packedRecords_A62x8[param_1].field_0x323 = 0;
    g_packedRecords_A62x8[param_1].field1600_0x7d6 = 0;
  }
  return;
}

// 004E51B0 FUN_004e51b0
#line 4 "decomp/ST.exe/functions/004E51B0/decomp.c"
undefined4 st::fn_004E51B0(int *param_1,uint *param_2,uint *param_3)

{
  int *piVar1;
  char cVar2;
  uint uVar3;
  byte *pbVar4;
  int *piVar5;
  int *piVar6;
  int iVar9;
  int local_EAX_1316;
  int iVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  undefined4 *puVar12;
  int *piVar13;
  undefined1 *puVar14;
  undefined4 *puVar15;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint local_24;
  int local_20;
  undefined **local_1c;
  int local_18;
  uint *local_14;
  int local_10;
  int local_c;
  uint local_8;
  uint *puVar11;

  piVar5 = param_1;
  if (((int)param_1 < 0) || (7 < (int)param_1)) {
    return 0;
  }
  if ((int)param_3 < (int)param_2) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = param_2;
  }
  /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
  iVar10 = (int)param_1 * 0xa62;
  local_c = (byte)g_packedRecords_A62x8[(int)param_1].field0_0x0 - 1;
  *(undefined4 *)&g_packedRecords_A62x8[(int)param_1].field_0x2eb = 0;
  *(undefined4 *)&g_packedRecords_A62x8[(int)param_1].field_0x2ef = 0;
  *(undefined4 *)&g_packedRecords_A62x8[(int)param_1].field_0x2f3 = 0;
  *(undefined4 *)&g_packedRecords_A62x8[(int)param_1].field_0x2f7 = 0;
  *(undefined4 *)&g_packedRecords_A62x8[(int)param_1].field_0x2fb = 0;
  g_packedRecords_A62x8[(int)param_1].field376_0x2ff = 0;
  *(undefined4 *)&g_packedRecords_A62x8[(int)param_1].field_0x303 = 0;
  *(undefined4 *)&g_packedRecords_A62x8[(int)param_1].field_0x307 = 0;
  *(undefined4 *)&g_packedRecords_A62x8[(int)param_1].field_0x30b = 0;
  *(undefined4 *)&g_packedRecords_A62x8[(int)param_1].field_0x30f = 0;
  memset(&g_packedRecords_A62x8[(int)param_1].field410_0x327, 0, 0x26c); /* compiler bulk-zero initialization */
  iVar7 = 0;
  puVar12 = &DAT_00798fd8;
  puVar15 = (undefined4 *)&g_packedRecords_A62x8[(int)param_1].field1445_0x73b;
  memmove(puVar15, puVar12, 0x9a); /* compiler REP MOVS byte copy */
  puVar15 = puVar15 + 0x26;
  puVar12 = puVar12 + 0x26;
  iVar7 = local_c * 0x10;
  STField<undefined1>(puVar15,2) = STField<undefined1>(puVar12,2);
  local_30 = (&DAT_00800f30)[local_c * 4] | *(uint *)(&DAT_00800fb0 + iVar7);
  local_2c = (&DAT_00800f34)[local_c * 4] | *(uint *)(&DAT_00800fb4 + iVar7);
  local_28 = (&DAT_00800f38)[local_c * 4] | *(uint *)(&DAT_00800fb8 + iVar7);
  local_24 = (&DAT_00800f3c)[local_c * 4] | *(uint *)(&DAT_00800fbc + iVar7);
  local_8 = 1;
  local_1c = st::pointer_boundary_cast<undefined **>(&PTR_DAT_007bfc04 + local_c);
  do {
    if ((*local_1c)[local_8] != '\0') {
      local_18 = iVar10 + 0x7f510b;
      pbVar4 = (byte *)(local_18 + ((int)(local_8 ^ 7) >> 3));
      *pbVar4 = *pbVar4 | '\x01' << ((local_8 ^ 7) & 7);
    }
    local_8 = local_8 + 1;
  } while ((int)local_8 < 0x9b);
  if (0 < (int)param_2) {
    local_14 = param_2;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (uint *)(&DAT_00799074 + local_c * 0x1c2);
    do {
      iVar7 = 0;
      puVar11 = param_2;
      do {
        uVar3 = *puVar11;
        if (uVar3 == 0) break;
        if (*(int *)(iVar10 + 0x7f5147 + uVar3 * 4) < (int)(uint)(byte)puVar11[1]) {
          *(uint *)(iVar10 + 0x7f5147 + uVar3 * 4) = (uint)(byte)puVar11[1];
        }
        iVar7 = iVar7 + 1;
        puVar11 = (uint *)((int)puVar11 + 5);
      } while (iVar7 < 0x1e);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (uint *)((int)param_2 + 0x96);
      local_14 = (uint *)((int)local_14 + -1);
    } while (local_14 != nullptr);
  }
  iVar7 = (int)param_3 + 1;
  if (iVar7 < 3) {
    local_14 = (uint *)(&DAT_00799074 + (iVar7 + local_c * 3) * 0x96);
    local_18 = 3 - iVar7;
    do {
      local_8 = 0;
      puVar9 = local_14;
      do {
        uVar3 = *puVar9;
        if (uVar3 == 0) break;
        if (*(char *)((int)&DAT_00798fd8 + uVar3) == '\x01') {
          pbVar4 = (byte *)(iVar10 + 0x7f510b + ((int)(uVar3 ^ 7) >> 3));
          *pbVar4 = *pbVar4 & ~('\x01' << ((uVar3 ^ 7) & 7));
          local_20 = iVar10 + 0x7f511f;
          pbVar4 = (byte *)(local_20 + ((int)(uVar3 ^ 7) >> 3));
          *pbVar4 = *pbVar4 & ~('\x01' << ((uVar3 ^ 7) & 7));
        }
        else {
          iVar7 = (byte)puVar9[1] - 1;
          if ((-1 < iVar7) && (iVar7 < (int)(uint)*(byte *)(iVar10 + 0x7f555b + uVar3))) {
            *(byte *)(iVar10 + 0x7f555b + uVar3) = (byte)puVar9[1] - 1;
          }
        }
        local_8 = local_8 + 1;
        puVar9 = (uint *)((int)puVar9 + 5);
      } while ((int)local_8 < 0x1e);
      local_14 = (uint *)((int)local_14 + 0x96);
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_3 = (uint *)0x1;
LAB_004e5403:
  if (((*local_1c)[(int)param_3] != '\0') &&
     ((*(byte *)(iVar10 + 0x7f510b + ((int)((uint)param_3 ^ 7) >> 3)) >> (((uint)param_3 ^ 7) & 7) &
      1) != 0)) {
    iVar7 = *(int *)(iVar10 + 0x7f5147 + (int)param_3 * 4);
    if (iVar7 < (int)(uint)*(byte *)(iVar10 + 0x7f555b + (int)param_3)) {
      iVar8 = 0;
      piVar6 = (int *)(&PTR_DAT_007c0dc8)[local_c];
      puVar9 = (uint *)*piVar6;
      piVar13 = piVar6;
      while (puVar9 != nullptr) {
        if ((puVar9 == param_3) && ((uint)*(byte *)(piVar13 + 1) == iVar7 + 1U)) {
          iVar7 = 0;
          if (*(int *)(iVar8 * 0x19 + 5 + (int)piVar6) == 0) goto LAB_004e54d9;
          piVar6 = (int *)(iVar8 * 0x19 + 5 + (int)piVar6);
          goto LAB_004e54b9;
        }
        piVar1 = (int *)((int)piVar13 + 0x19);
        piVar13 = (int *)((int)piVar13 + 0x19);
        iVar8 = iVar8 + 1;
        puVar9 = (uint *)*piVar1;
      }
    }
    else {
      pbVar4 = (byte *)(iVar10 + 0x7f511f + ((int)((uint)param_3 ^ 7) >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (((uint)param_3 ^ 7) & 7));
    }
  }
  goto cf_continue_loop_004E5505;
  while( true ) {
    if (*(int *)(iVar10 + 0x7f5147 + *piVar6 * 4) < (int)(uint)*(byte *)(piVar6 + 1)) {
      pbVar4 = (byte *)(iVar10 + 0x7f511f + ((int)((uint)param_3 ^ 7) >> 3));
      *pbVar4 = *pbVar4 & ~('\x01' << (((uint)param_3 ^ 7) & 7));
      goto cf_continue_loop_004E5505;
    }
    piVar13 = (int *)((int)piVar6 + 5);
    piVar6 = (int *)((int)piVar6 + 5);
    iVar7 = iVar7 + 1;
    if (*piVar13 == 0) break;
LAB_004e54b9:
    if (3 < iVar7) break;
  }
LAB_004e54d9:
  pbVar4 = (byte *)(iVar10 + 0x7f511f + ((int)((uint)param_3 ^ 7) >> 3));
  *pbVar4 = *pbVar4 | '\x01' << (((uint)param_3 ^ 7) & 7);
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
cf_continue_loop_004E5505:
  param_3 = (uint *)((int)param_3 + 1);
  if (0x9a < (int)param_3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (uint *)&g_packedRecords_A62x8[(int)param_1].field_0x69b;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (uint *)0x1;
    puVar14 = &DAT_007c0dd4;
    local_10 = iVar10;
    do {
      iVar7 = st::fn_006B0FD0((int)&local_30);
      if (iVar7 != 0) {
        iVar7 = 1;
        *param_3 = 1;
        cVar2 = puVar14[1];
        while( true ) {
          if ((cVar2 == '\0') || (2 < iVar7)) goto LAB_004e5598;
          local_20 = iVar10 + 0x7f510b;
          local_1c = (undefined **)(uint)(byte)puVar14[iVar7];
          if ((*(byte *)(local_20 + ((int)((uint)local_1c ^ 7) >> 3)) >> (((uint)local_1c ^ 7) & 7)
              & 1) == 0) break;
          cVar2 = puVar14[iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        *param_3 = 0;
      }
LAB_004e5598:
      puVar14 = puVar14 + 3;
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (uint *)((int)param_2 + 1);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = param_3 + 1;
    } while ((int)puVar14 < 0x7c0e4c);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = st::pointer_boundary_cast<uint *>(&g_packedRecords_A62x8[(int)piVar5].field1024_0x593);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_3 = (uint *)0x32;
    do {
      iVar10 = st::fn_006B0FD0((int)&local_30);
      iVar7 = local_10;
      if (iVar10 != 0) {
        *param_2 = 1;
        iVar10 = 1;
        cVar2 = (&DAT_007c0e4d)[(local_c * 0x42 + -0x32 + (int)param_3) * 3];
        while( true ) {
          if ((cVar2 == '\0') || (2 < iVar10)) goto LAB_004e5655;
          iVar8 = (local_c * 0x42 + -0x32 + (int)param_3) * 3;
          local_1c = (undefined **)(uint)(byte)(&DAT_007c0e4c)[iVar10 + iVar8];
          local_20 = local_10 + 0x7f510b;
          if ((*(byte *)(local_20 + ((int)((uint)local_1c ^ 7) >> 3)) >> (((uint)local_1c ^ 7) & 7)
              & 1) == 0) break;
          cVar2 = (&DAT_007c0e4d)[iVar10 + iVar8];
          iVar10 = iVar10 + 1;
        }
        *param_2 = 0;
      }
/* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
LAB_004e5655:
      param_3 = (uint *)((int)param_3 + 1);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = param_2 + 1;
      if (0x73 < (int)param_3) {
        iVar10 = *(int *)((int)&g_packedRecords_A62x8[0].field1966_0x9ce + local_10);
        if (iVar10 != 0) {
          *(undefined4 *)(iVar10 + 4) = 0;
          iVar9 = st::fn_006B1190(*(DArrayTy **)
                                 ((int)&g_packedRecords_A62x8[0].field1966_0x9ce + local_10),
                                (byte *)&param_1);
          while (-1 < iVar9) {
            st::fn_004031AC((AnonShape_004DDCC0_33DEB43E *)param_1);
            iVar9 = st::fn_006B1190(*(DArrayTy **)
                                   ((int)&g_packedRecords_A62x8[0].field1966_0x9ce + iVar7),
                                  (byte *)&param_1);
          }
        }
        iVar10 = *(int *)((int)&g_packedRecords_A62x8[0].field3_0x9 + iVar7);
        if (iVar10 != 0) {
          *(undefined4 *)(iVar10 + 4) = 0;
          local_EAX_1316 =
               st::fn_006B1190(*(DArrayTy **)((int)&g_packedRecords_A62x8[0].field3_0x9 + iVar7),
                             (byte *)&param_1);
          while (-1 < local_EAX_1316) {
            if (param_1 != nullptr) {
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              iVar10 = (**(code **)(*param_1 + 0x2c))();
              /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
              if ((iVar10 == 0x36) || (iVar10 = (**(code **)(*param_1 + 0x2c))(), iVar10 == 0x5d)) {
                st::fn_00402D6F((AnonShape_004E4D60_C16F78E8 *)param_1);
              }
              if (param_1 != nullptr) {
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                iVar10 = (**(code **)(*param_1 + 0x2c))();
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                if ((iVar10 == 0x5d) || (iVar10 = (**(code **)(*param_1 + 0x2c))(), iVar10 == 0x3d))
                {
                  st::fn_00401B18((STMineSetC *)param_1);
                }
                /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
                if ((param_1 != nullptr) &&
                   (((iVar10 = (**(code **)(*param_1 + 0x2c))(), iVar10 == 5 ||
                     (iVar10 = (**(code **)(*param_1 + 0x2c))(), iVar10 == 0x21)) ||
                    (iVar10 = (**(code **)(*param_1 + 0x2c))(), iVar10 == 0x11)))) {
                  st::fn_004025EA((AnonShape_00494AE0_7F188308 *)param_1);
                }
              }
            }
            local_EAX_1316 =
                 st::fn_006B1190(*(DArrayTy **)((int)&g_packedRecords_A62x8[0].field3_0x9 + iVar7),
                               (byte *)&param_1);
          }
        }
        return 0;
      }
    } while( true );
  }
  goto LAB_004e5403;
}

// 004E5910 FUN_004e5910
#line 1 "decomp/ST.exe/functions/004E5910/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (12), none consume AL/AX, and every RET path defines full EAX; sites=004C7860 @ 004C78CF
   -> TEST TEST EAX,EAX | 004E3200 @ 004E32B2 -> TEST TEST EAX,EAX | 004E5990 @ 004E59BF -> MOV MOV
   ESI,EAX | 004E6280 @ 004E62AE -> TEST TEST EAX,EAX | 004E6FE0 @ 004E7057 -> TEST TEST EAX,EAX |
   004E70F0 @ 004E7190 -> TEST TEST EAX,EAX | 004E7230 @ 004E72E5 -> TEST TEST EAX,EAX | 004E75F0 @
   004E7663 -> TEST TEST EAX,EAX | 00516480 @ 00516726 -> TEST TEST EAX,EAX | 00516480 @ 005167BC ->
   TEST TEST EAX,EAX | 00516A40 @ 00516C3A -> TEST TEST EAX,EAX | 0067B520 @ 0067B64C -> TEST TEST
   EAX,EAX */

int st::fn_004E5910(int param_1,uint param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    return (uint)((*(byte *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x2EB) + ((int)(param_2 ^ 7) >> 3)) >>
                   ((param_2 ^ 7) & 7) & 1) != 0);
  }
  return 0;
}

// 004E5990 FUN_004e5990
#line 4 "decomp/ST.exe/functions/004E5990/decomp.c"
int st::fn_004E5990(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) &&
     (((int)param_2 < 0x9b && (-1 < param_3)))) {
    iVar2 = st::fn_0040524F(param_1,param_2);
    if (iVar2 != 0) {
      uVar1 = st::fn_0040530D(param_1,param_2);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,uVar1) < param_3) {
        iVar2 = 0;
      }
    }
    return iVar2;
  }
  return 0;
}

// 004E5A10 FUN_004e5a10
#line 1 "decomp/ST.exe/functions/004E5A10/decomp.c"

void st::fn_004E5A10(int param_1,uint param_2)

{
  byte *pbVar1;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    pbVar1 = (byte *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x2EB) + ((int)(param_2 ^ 7) >> 3));
    *pbVar1 = *pbVar1 | '\x01' << ((param_2 ^ 7) & 7);
  }
  return;
}

// 004E5A80 FUN_004e5a80
#line 1 "decomp/ST.exe/functions/004E5A80/decomp.c"

void st::fn_004E5A80(int param_1,uint param_2)

{
  byte *pbVar1;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    pbVar1 = (byte *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x2EB) + ((int)(param_2 ^ 7) >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << ((param_2 ^ 7) & 7));
  }
  return;
}

// 004E5AF0 FUN_004e5af0
#line 4 "decomp/ST.exe/functions/004E5AF0/decomp.c"
void st::fn_004E5AF0(int param_1,uint param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    iVar2 = st::fn_00401E1F(param_1,param_2);
    if (iVar2 == 0) {
      st::fn_004011BD(param_1,param_2);
      uVar1 = st::fn_0040530D(param_1,param_2);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,uVar1) < param_3) {
        *(char *)(param_2 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x73B)) = (char)param_3;
      }
    }
  }
  return;
}

// 004E5B80 FUN_004e5b80
#line 1 "decomp/ST.exe/functions/004E5B80/decomp.c"

void st::fn_004E5B80(int param_1,uint param_2,int param_3)

{
  int iVar1;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    iVar1 = st::fn_00401E1F(param_1,param_2);
    if (iVar1 == 0) {
      if ((*(char *)((int)&DAT_00798fd8 + param_2) == '\x01') || (param_3 < 2)) {
        st::fn_004053F8(param_1,param_2);
        st::fn_00403BB6(param_1,param_2);
      }
      else if (param_3 + -1 < (int)(uint)*(byte *)(param_2 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x73B))) {
        *(char *)(param_2 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x73B)) = (char)param_3 + -1;
        return;
      }
    }
  }
  return;
}

// 004E5C40 FUN_004e5c40
#line 1 "decomp/ST.exe/functions/004E5C40/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C7860 -> 004E5C40 @ 004C7A3B; /TLOBaseTy+0x24 | 004E68A0 -> 004E5C40 @ 004E69AF;
   FUN_004e68a0 parameter param_1 | 004E6B40 -> 004E5C40 @ 004E6BC4; FUN_004e6b40 parameter param_1
   | 004E6D00 -> 004E5C40 @ 004E6DAA; FUN_004e6d00 parameter param_1 */

bool st::fn_004E5C40(byte *param_1,uint param_2)

{
  if ((((-1 < (int)param_1) && ((int)param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b))
  {
    return (*(byte *)(STRecordByteAddress(g_packedRecords_A62x8, (int)param_1, 0x2FF) + ((int)(param_2 ^ 7) >> 3)) >>
            ((param_2 ^ 7) & 7) & 1) != 0;
  }
  return false;
}

// 004E5CC0 FUN_004e5cc0
#line 4 "decomp/ST.exe/functions/004E5CC0/decomp.c"
int st::fn_004E5CC0(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar2;
  int iVar3;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) &&
     (((int)param_2 < 0x9b && (-1 < param_3)))) {
    bVar1 = st::fn_00403396((byte *)param_1,param_2);
    /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
    iVar3 = CONCAT31(extraout_var,bVar1);
    if (iVar3 != 0) {
      iVar2 = st::fn_0040186B(param_1,param_2);
      if (param_3 != iVar2 + 1) {
        iVar3 = 0;
      }
    }
    return iVar3;
  }
  return 0;
}

// 004E5D50 FUN_004e5d50
#line 1 "decomp/ST.exe/functions/004E5D50/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_004E5D50(int param_1,uint param_2)

{
  byte *pbVar1;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    pbVar1 = (byte *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x2FF) + ((int)(param_2 ^ 7) >> 3));
    *pbVar1 = *pbVar1 | '\x01' << ((param_2 ^ 7) & 7);
  }
  return;
}

// 004E5DC0 FUN_004e5dc0
#line 1 "decomp/ST.exe/functions/004E5DC0/decomp.c"

void st::fn_004E5DC0(int param_1,uint param_2)

{
  byte *pbVar1;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    pbVar1 = (byte *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x2FF) + ((int)(param_2 ^ 7) >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << ((param_2 ^ 7) & 7));
  }
  return;
}

// 004E5E30 FUN_004e5e30
#line 4 "decomp/ST.exe/functions/004E5E30/decomp.c"
int st::fn_004E5E30(int param_1,uint *param_2)

{
  bool bVar1;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar2;
  uint uVar3;

  iVar2 = 0;
  if ((-1 < param_1) && (param_1 < 8)) {
    uVar3 = 0;
    do {
      bVar1 = st::fn_00403396((byte *)param_1,uVar3);
      /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
      if (CONCAT31(extraout_var,bVar1) != 0) {
        *param_2 = uVar3;
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 0x9b);
    return iVar2;
  }
  return 0;
}

// 004E5EB0 FUN_004e5eb0
#line 1 "decomp/ST.exe/functions/004E5EB0/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E2AD0 -> 004E5EB0 @ 004E2B05; /TLOBaseTy+0x24 */

void st::fn_004E5EB0(byte *param_1,uint param_2)

{
  byte *pbVar1;

  if ((((-1 < (int)param_1) && ((int)param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b))
  {
    pbVar1 = (byte *)(STRecordByteAddress(g_packedRecords_A62x8, (int)param_1, 0x313) + ((int)(param_2 ^ 7) >> 3));
    *pbVar1 = *pbVar1 | '\x01' << ((param_2 ^ 7) & 7);
  }
  return;
}

// 004E5F20 FUN_004e5f20
#line 1 "decomp/ST.exe/functions/004E5F20/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E2C30 -> 004E5F20 @ 004E2CED; /TLOBaseTy+0x24 | 004E3120 -> 004E5F20 @ 004E3147;
   /TLOBaseTy+0x24

   [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_004E5F20(byte *param_1,uint param_2)

{
  byte *pbVar1;

  if ((((-1 < (int)param_1) && ((int)param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b))
  {
    pbVar1 = (byte *)(STRecordByteAddress(g_packedRecords_A62x8, (int)param_1, 0x313) + ((int)(param_2 ^ 7) >> 3));
    *pbVar1 = *pbVar1 & ~('\x01' << ((param_2 ^ 7) & 7));
  }
  return;
}

// 004E5F90 FUN_004e5f90
#line 1 "decomp/ST.exe/functions/004E5F90/decomp.c"

/* [STAbiConsistencyApplier] full_eax_return: return=/int Evidence: all observed callers consume
   full EAX (15), none consume AL/AX, and every RET path defines full EAX; sites=004BEA70 @ 004C0484
   -> TEST TEST EAX,EAX | 004BEA70 @ 004C0557 -> TEST TEST EAX,EAX | 004C7860 @ 004C7A0C -> TEST
   TEST EAX,EAX | 004E3200 @ 004E3313 -> TEST TEST EAX,EAX | 004E3200 @ 004E34C3 -> TEST TEST
   EAX,EAX | 004E5AF0 @ 004E5B16 -> TEST TEST EAX,EAX | 004E5B80 @ 004E5BA6 -> TEST TEST EAX,EAX |
   004E70F0 @ 004E71A0 -> TEST TEST EAX,EAX | 004E7230 @ 004E72F5 -> TEST TEST EAX,EAX | 004E75F0 @
   004E7672 -> TEST TEST EAX,EAX | 00516A40 @ 00516CB0 -> TEST TEST EAX,EAX | 00516A40 @ 00516E79 ->
   TEST TEST EAX,EAX | 0066ACC0 @ 0066F35F -> MOV MOV ESI,EAX | 0067B520 @ 0067B623 -> TEST TEST
   EAX,EAX | 0067B520 @ 0067B6CB -> TEST TEST EAX,EAX */

int st::fn_004E5F90(int param_1,uint param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    return (uint)((*(byte *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x313) + ((int)(param_2 ^ 7) >> 3)) >>
                   ((param_2 ^ 7) & 7) & 1) != 0);
  }
  return 0;
}

// 004E6010 FUN_004e6010
#line 4 "decomp/ST.exe/functions/004E6010/decomp.c"
undefined4 st::fn_004E6010(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 0x6a)) {
    return *(undefined4 *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593));
  }
  return 0;
}

// 004E6080 FUN_004e6080
#line 4 "decomp/ST.exe/functions/004E6080/decomp.c"
void st::fn_004E6080(int param_1,int param_2,undefined4 param_3)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 0x6a)) {
    *(undefined4 *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593)) = param_3;
  }
  return;
}

// 004E60D0 FUN_004e60d0
#line 4 "decomp/ST.exe/functions/004E60D0/decomp.c"
undefined4 st::fn_004E60D0(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < param_2)) && (param_2 < 0x9b)) {
    return *(undefined4 *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x327));
  }
  return 0;
}

// 004E6140 FUN_004e6140
#line 4 "decomp/ST.exe/functions/004E6140/decomp.c"
undefined1 st::fn_004E6140(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < param_2)) && (param_2 < 0x9b)) {
    return *(undefined1 *)(param_2 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x73B));
  }
  return 0;
}

// 004E6190 FUN_004e6190
#line 1 "decomp/ST.exe/functions/004E6190/decomp.c"

void st::fn_004E6190(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    puVar1 = (uint *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x327));
    uVar2 = *puVar1 + 1;
    *puVar1 = uVar2;
    st::fn_00402130((byte *)param_1,param_2,uVar2);
  }
  return;
}

// 004E6210 FUN_004e6210
#line 1 "decomp/ST.exe/functions/004E6210/decomp.c"

void st::fn_004E6210(int param_1,int param_2)

{
  if ((((-1 < param_1) && (param_1 < 8)) && (0 < param_2)) && (param_2 < 0x9b)) {
    *(int *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x327)) =
         *(int *)(param_2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x327)) + -1;
  }
  return;
}

// 004E6280 FUN_004e6280
#line 4 "decomp/ST.exe/functions/004E6280/decomp.c"
undefined4 st::fn_004E6280(int param_1,uint param_2)

{
  int iVar1;

  if ((((-1 < param_1) && (param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b)) {
    iVar1 = st::fn_0040524F(param_1,param_2);
    if (iVar1 != 0) {
      st::fn_0040419C(param_1,param_2);
      return 1;
    }
    return 0;
  }
  return 0;
}

// 004E6310 FUN_004e6310
#line 4 "decomp/ST.exe/functions/004E6310/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E2C30 -> 004E6310 @ 004E2CDD; /TLOBaseTy+0x24 | 004E7390 -> 004E6310 @ 004E755C;
   FUN_004e7390 parameter param_1 */

void st::fn_004E6310(byte *param_1,uint param_2,uint param_3)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  uint *puVar5;
  int iVar11;
  uint *puVar6;
  DArrayTy *pDVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar12;
  int local_10;
  AnonShape_004DDCC0_33DEB43E *local_c;
  AnonShape_00494AE0_7F188308 *local_8;

  if ((((-1 < (int)param_1) && ((int)param_1 < 8)) && (0 < (int)param_2)) && ((int)param_2 < 0x9b))
  {
    /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
    iVar12 = (int)param_1 * 0xa62;
    *(uint *)(iVar12 + 0x7f5147 + param_2 * 4) = param_3;
    pbVar2 = (byte *)(iVar12 + 0x7f511f + ((int)(param_2 ^ 7) >> 3));
    *pbVar2 = *pbVar2 & ~('\x01' << ((param_2 ^ 7) & 7));
    if (*(int *)(iVar12 + 0x7f5147 + param_2 * 4) != 0) {
      iVar3 = (byte)g_packedRecords_A62x8[(int)param_1].field0_0x0 - 1;
      piVar4 = (int *)(&PTR_DAT_007c0dc8)[iVar3];
      if (*piVar4 != 0) {
        iVar9 = 0;
        local_10 = 5;
LAB_004e63ab:
        if ((*(int *)(iVar12 + 0x7f5147 + *(uint *)(iVar9 + (int)piVar4) * 4) ==
             *(byte *)(iVar9 + 4 + (int)piVar4) - 1) &&
           (iVar8 = 0, *(int *)(local_10 + (int)piVar4) != 0)) {
          puVar5 = (uint *)(iVar9 + 5 + (int)piVar4);
          puVar6 = puVar5;
          do {
            if (3 < iVar8) break;
            if ((*puVar6 == param_2) && ((byte)puVar6[1] == param_3)) {
              iVar8 = 0;
              goto LAB_004e63fe;
            }
            piVar1 = (int *)((int)puVar6 + 5);
            puVar6 = (uint *)((int)puVar6 + 5);
            iVar8 = iVar8 + 1;
          } while (*piVar1 != 0);
        }
        goto cf_continue_loop_004E643C;
      }
LAB_004e645f:
      if (g_packedRecords_A62x8[(int)param_1].field1966_0x9ce != nullptr) {
        (g_packedRecords_A62x8[(int)param_1].field1966_0x9ce)->iteratorIndex = 0;
        iVar11 = st::fn_006B1190(g_packedRecords_A62x8[(int)param_1].field1966_0x9ce,(byte *)&local_c);
        while (-1 < iVar11) {
          st::fn_004031AC(local_c);
          iVar11 = st::fn_006B1190(g_packedRecords_A62x8[(int)param_1].field1966_0x9ce,
                                 (byte *)&local_c);
        }
      }
      if (((((param_2 == 0x1d) || (param_2 == 0x89)) || (param_2 == 0x46)) ||
          ((param_2 == 0x4a || (param_2 == 0x12)))) &&
         ((pDVar7 = (DArrayTy *)g_packedRecords_A62x8[(int)param_1].field3_0x9,
          pDVar7 != nullptr && (uVar10 = 0, pDVar7->count != 0)))) {
        do {
          st::fn_006ACC70(pDVar7,uVar10,&local_8);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((local_8 != nullptr) &&
             (((iVar12 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar12 == 0x36 ||
               (iVar12 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar12 == 0x5d)) ||
              (iVar12 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar12 == 0x3d)))) {
            st::fn_00402D6F((AnonShape_004E4D60_C16F78E8 *)local_8);
            st::fn_00401B18((STMineSetC *)local_8);
          }
          pDVar7 = (DArrayTy *)g_packedRecords_A62x8[(int)param_1].field3_0x9;
          uVar10 = uVar10 + 1;
        } while (uVar10 < pDVar7->count);
      }
      if ((((((param_2 == 0x3c) || (param_2 == 0x91)) || (param_2 == 0x9a)) ||
           ((param_2 == 0x4b || (param_2 == 0x4c)))) || (param_2 == 0x41)) &&
         ((pDVar7 = (DArrayTy *)g_packedRecords_A62x8[(int)param_1].field3_0x9,
          pDVar7 != nullptr && (uVar10 = 0, pDVar7->count != 0)))) {
        do {
          st::fn_006ACC70(pDVar7,uVar10,&local_8);
          /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
          if ((local_8 != nullptr) &&
             (((iVar12 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar12 == 5 ||
               (iVar12 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar12 == 0x21)) ||
              (iVar12 = (**(code **)(*(int *)local_8 + 0x2c))(), iVar12 == 0x11)))) {
            st::fn_004025EA(local_8);
          }
          pDVar7 = (DArrayTy *)g_packedRecords_A62x8[(int)param_1].field3_0x9;
          uVar10 = uVar10 + 1;
        } while (uVar10 < pDVar7->count);
      }
    }
    st::fn_00405B73((int)param_1);
    st::fn_00404C55(CASE_13,0);
  }
  return;
  while( true ) {
    if (*(int *)(iVar12 + 0x7f5147 + *puVar5 * 4) < (int)(uint)(byte)puVar5[1])
    goto cf_continue_loop_004E643C;
    piVar1 = (int *)((int)puVar5 + 5);
    puVar5 = (uint *)((int)puVar5 + 5);
    iVar8 = iVar8 + 1;
    if (*piVar1 == 0) break;
LAB_004e63fe:
    if (3 < iVar8) break;
  }
  uVar10 = *(uint *)(iVar9 + (int)piVar4) ^ 7;
  pbVar2 = (byte *)(iVar12 + 0x7f511f + ((int)uVar10 >> 3));
  *pbVar2 = *pbVar2 | '\x01' << (uVar10 & 7);
cf_continue_loop_004E643C:
  local_10 = local_10 + 0x19;
  iVar9 = iVar9 + 0x19;
  piVar4 = (int *)(&PTR_DAT_007c0dc8)[iVar3];
  if (*(int *)(iVar9 + (int)piVar4) == 0) goto LAB_004e645f;
  goto LAB_004e63ab;
}

// 004E6680 FUN_004e6680
#line 4 "decomp/ST.exe/functions/004E6680/decomp.c"
void st::fn_004E6680(int param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int local_8;

  bVar2 = st::fn_004049B7((char)param_1);
  local_8 = 0x42;
  pbVar7 = st::pointer_boundary_cast<byte *>(&DAT_007c0dd4);
  iVar6 = (bVar2 - 1) * 0x10;
  do {
    iVar3 = st::fn_006B0FD0((int)(&DAT_008013f0 + iVar6));
    if (((iVar3 != 0) || (iVar3 = st::fn_006B0FD0((int)(&DAT_008013b0 + iVar6)), iVar3 != 0)) &&
       (iVar3 = 1, pbVar7[1] != 0)) {
      do {
        if (2 < iVar3) break;
        iVar4 = st::fn_0040186B(param_1,(uint)pbVar7[iVar3]);
        if (iVar4 == 0) goto LAB_004e6740;
        iVar4 = iVar3 + 1;
        iVar3 = iVar3 + 1;
      } while (pbVar7[iVar4] != 0);
      if (pbVar7[1] != 0) {
        *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593) + (uint)*pbVar7 * 4) = 1;
      }
    }
LAB_004e6740:
    pbVar7 = pbVar7 + 3;
    iVar3 = local_8 + -0x40;
    local_8 = local_8 + 1;
  } while (iVar3 < 0x29);
  local_8 = 0x32;
  do {
    iVar3 = st::fn_006B0FD0((int)(&DAT_00801380 + iVar6));
    if (iVar3 != 0) {
      iVar8 = (bVar2 - 1) * 0x42;
      iVar4 = 1;
      iVar3 = iVar8 + -0x32 + local_8;
      if ((&DAT_007c0e4d)[iVar3 * 3] != '\0') {
        do {
          if (2 < iVar4) break;
          iVar1 = (iVar8 + -0x32 + local_8) * 3;
          iVar5 = st::fn_0040186B(param_1,(uint)(byte)(&DAT_007c0e4c)[iVar4 + iVar1]);
          if (iVar5 == 0) goto LAB_004e680d;
          iVar1 = iVar4 + iVar1;
          iVar4 = iVar4 + 1;
        } while ((&DAT_007c0e4d)[iVar1] != '\0');
        if ((&DAT_007c0e4d)[iVar3 * 3] != '\0') {
          *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593) + (uint)(byte)(&DAT_007c0e4c)[iVar3 * 3] * 4) =
               1;
        }
      }
    }
LAB_004e680d:
    local_8 = local_8 + 1;
    if (0x73 < local_8) {
      return;
    }
  } while( true );
}

// 004E68A0 FUN_004e68a0
#line 4 "decomp/ST.exe/functions/004E68A0/decomp.c"
/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return

   [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E68A0 -> 004E5C40 @ 004E69AF */

void st::fn_004E68A0(byte *param_1,undefined1 *param_2,uint param_3,undefined4 *param_4)

{
  int *piVar1;
  undefined *puVar2;
  byte bVar3;
  bool bVar4;
  undefined1 uVar5;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var;
  int iVar6;
  int iVar7;
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  undefined3 extraout_var_00;
  int iVar8;
  undefined1 *puVar9;
  int *piVar10;

  memset(param_4, 0, 0x1e); /* compiler bulk-zero initialization */
  bVar3 = st::fn_004049B7((char)param_1);
  iVar8 = bVar3 - 1;
  bVar4 = st::fn_00403396(param_1,(uint)param_2);
  /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
  if (CONCAT31(extraout_var,bVar4) == 0) {
    piVar1 = (int *)(&PTR_DAT_007c0dc8)[iVar8];
    puVar9 = (undefined1 *)*piVar1;
    if (puVar9 != nullptr) {
      iVar6 = 0;
      piVar10 = piVar1;
      while ((puVar9 != param_2 || (*(byte *)(piVar10 + 1) != param_3))) {
        puVar9 = STField<undefined1 *>(piVar10,0x19);
        piVar10 = (int *)((int)piVar10 + 0x19);
        iVar6 = iVar6 + 1;
        if (puVar9 == nullptr) {
          return;
        }
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_3 = 0;
      if (*(int *)(iVar6 * 0x19 + 5 + (int)piVar1) != 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = (undefined1 *)((int)param_4 + 5);
        iVar6 = iVar6 * 0x19 + 5;
        do {
          if (3 < (int)param_3) {
            return;
          }
          puVar2 = st::pointer_boundary_cast<undefined *>((&PTR_DAT_007c0dc8)[iVar8]);
          bVar3 = puVar2[iVar6 + 4];
          iVar7 = st::fn_0040186B((int)param_1,*(int *)(puVar2 + iVar6));
          if (iVar7 < (int)(uint)bVar3) {
            *(uint *)(param_2 + -5) = (uint)CONCAT12(bVar3,*(undefined2 *)(puVar2 + iVar6));
            bVar3 = st::fn_004049B7((char)param_1);
            param_2[-1] = bVar3;
            bVar4 = st::fn_00403396(param_1,*(uint *)((&PTR_DAT_007c0dc8)[iVar8] + iVar6));
            /* ST_PSEUDO[return_width_artifact]: candidate call-output artifact: verify return width, clobbers, or x87 state */
            if ((CONCAT31(extraout_var_00,bVar4) == 0) ||
               (iVar7 = st::fn_0040186B((int)param_1,*(int *)((&PTR_DAT_007c0dc8)[iVar8] + iVar6)
                                          ),
               iVar7 != (byte)(&PTR_DAT_007c0dc8)[iVar8][iVar6 + 4] - 1)) {
              uVar5 = 0;
            }
            else {
              uVar5 = 1;
            }
            *param_2 = uVar5;
            /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
            param_2 = param_2 + 6;
          }
          iVar6 = iVar6 + 5;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_3 = param_3 + 1;
        } while (*(int *)((&PTR_DAT_007c0dc8)[iVar8] + iVar6) != 0);
      }
    }
  }
  return;
}

// 004E6A80 FUN_004e6a80
#line 1 "decomp/ST.exe/functions/004E6A80/decomp.c"

/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004C7860 -> 004E6A80 @ 004C7894; /TLOBaseTy+0x24 */

int st::fn_004E6A80(byte *param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (((((int)param_1 < 0) || (7 < (int)param_1)) || (param_2 < 1)) || (0x28 < param_2)) {
    return 0;
  }
  pbVar1 = st::pointer_boundary_cast<byte *>(&DAT_007c0dd1 + param_2 * 3);
  iVar4 = 0;
  iVar3 = 1;
  if (*pbVar1 != 0) {
    while (iVar4 < 3) {
      if (iVar4 == 0) {
        iVar3 = st::fn_0040571D((int)param_1,(uint)*pbVar1);
      }
      else {
        iVar3 = st::fn_0040186B((int)param_1,(uint)pbVar1[iVar4]);
      }
      if (iVar3 == 0) {
        return 0;
      }
      iVar2 = iVar4 + param_2 * 3;
      iVar4 = iVar4 + 1;
      if ((&DAT_007c0dd2)[iVar2] == '\0') {
        return iVar3;
      }
    }
  }
  return iVar3;
}

// 004E6B40 FUN_004e6b40
#line 4 "decomp/ST.exe/functions/004E6B40/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E6B40 -> 004E5C40 @ 004E6BC4 */

void st::fn_004E6B40(byte *param_1,int param_2,uint *param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  bool bVar4;
  int iVar6;
  int iVar5;
  int iVar7;

  memset(param_3, 0, 0x1e); /* compiler bulk-zero initialization */
  iVar7 = 0;
  iVar6 = st::fn_0040413D(param_1,param_2);
  if (iVar6 == 0) {
    cVar1 = (&DAT_007c0dd2)[param_2 * 3];
    for (iVar7 = 1; (cVar1 != '\0' && (iVar7 < 3)); iVar7 = iVar7 + 1) {
      iVar2 = param_2 * 3;
      iVar5 = st::fn_0040186B((int)param_1,(uint)(byte)(&DAT_007c0dd1)[iVar7 + iVar2]);
      if (iVar5 == 0) {
        *param_3 = (uint)(byte)(&DAT_007c0dd1)[iVar7 + iVar2];
        bVar3 = st::fn_004049B7((char)param_1);
        *(byte *)(param_3 + 1) = bVar3;
        bVar4 = st::fn_00403396(param_1,*param_3);
        STField<bool>(param_3,5) = bVar4;
        param_3 = (uint *)((int)param_3 + 6);
      }
      cVar1 = (&DAT_007c0dd2)[iVar7 + iVar2];
    }
  }
  return;
}

// 004E6C20 FUN_004e6c20
#line 1 "decomp/ST.exe/functions/004E6C20/decomp.c"

int st::fn_004E6C20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;

  if ((((param_1 < 0) || (7 < param_1)) || (param_2 < 0x32)) || (0x73 < param_2)) {
    return 0;
  }
  iVar4 = 1;
  bVar3 = st::fn_004049B7((char)param_1);
  iVar5 = 0;
  iVar1 = param_2 + -0x32 + (bVar3 - 1) * 0x42;
  iVar2 = iVar1 * 3;
  if ((&DAT_007c0e4c)[iVar1 * 3] != '\0') {
    while (iVar5 < 3) {
      if (iVar5 == 0) {
        iVar4 = st::fn_0040571D(param_1,(uint)(byte)(&DAT_007c0e4c)[iVar2]);
      }
      else {
        iVar4 = st::fn_0040186B(param_1,(uint)(byte)(&DAT_007c0e4c + iVar2)[iVar5]);
      }
      if (iVar4 == 0) {
        return 0;
      }
      iVar1 = iVar5 + iVar2;
      iVar5 = iVar5 + 1;
      if ((&DAT_007c0e4d)[iVar1] == '\0') {
        return iVar4;
      }
    }
  }
  return iVar4;
}

// 004E6D00 FUN_004e6d00
#line 4 "decomp/ST.exe/functions/004E6D00/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E6D00 -> 004E5C40 @ 004E6DAA */

void st::fn_004E6D00(byte *param_1,int param_2,uint *param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  int iVar5;
  int iVar4;
  int iVar6;
  int iVar8;

  memset(param_3, 0, 0x1e); /* compiler bulk-zero initialization */
  bVar2 = st::fn_004049B7((char)param_1);
  iVar5 = st::fn_0040469C((int)param_1,param_2);
  if (iVar5 == 0) {
    iVar8 = 1;
    iVar6 = param_2 + -0x32 + (bVar2 - 1) * 0x42;
    cVar1 = (&DAT_007c0e4d)[iVar6 * 3];
    while ((cVar1 != '\0' && (iVar8 < 3))) {
      iVar4 = st::fn_0040186B((int)param_1,(uint)(byte)(&DAT_007c0e4c)[iVar8 + iVar6 * 3]);
      if (iVar4 == 0) {
        *param_3 = (uint)(byte)(&DAT_007c0e4c)[iVar8 + iVar6 * 3];
        bVar2 = st::fn_004049B7((char)param_1);
        *(byte *)(param_3 + 1) = bVar2;
        bVar3 = st::fn_00403396(param_1,*param_3);
        STField<bool>(param_3,5) = bVar3;
        param_3 = (uint *)((int)param_3 + 6);
      }
      iVar8 = iVar8 + 1;
      cVar1 = (&DAT_007c0e4c)[iVar8 + iVar6 * 3];
    }
  }
  return;
}

// 004E6E10 FUN_004e6e10
#line 4 "decomp/ST.exe/functions/004E6E10/decomp.c"
void st::fn_004E6E10(int param_1,uint param_2,undefined4 *param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;

  *param_3 = 0;
  *param_4 = 0;
  iVar4 = 0;
  iVar6 = 0;
  puVar3 = st::pointer_boundary_cast<undefined *>(&DAT_007c0e4c + (param_1 + -1) * 0xc6);
  do {
    iVar2 = 1;
    if (puVar3[1] != '\0') {
      piVar5 = st::pointer_boundary_cast<int *>(param_3 + iVar4);
      do {
        if (2 < iVar2) break;
        if ((byte)puVar3[iVar2] == param_2) {
          iVar4 = iVar4 + 1;
          *piVar5 = iVar6 + 0x32;
          piVar5 = piVar5 + 1;
        }
        iVar1 = iVar2 + 1;
        iVar2 = iVar2 + 1;
      } while (puVar3[iVar1] != '\0');
    }
    iVar6 = iVar6 + 1;
    puVar3 = puVar3 + 3;
  } while (iVar6 < 0x42);
  iVar6 = 0;
  iVar4 = 0;
  do {
    iVar2 = 1;
    if ((&DAT_007c0dd5)[iVar4 * 3] != '\0') {
      piVar5 = st::pointer_boundary_cast<int *>(param_4 + iVar6);
      do {
        if (2 < iVar2) break;
        if ((byte)(&DAT_007c0dd4)[iVar2 + iVar4 * 3] == param_2) {
          iVar6 = iVar6 + 1;
          *piVar5 = iVar4 + 1;
          piVar5 = piVar5 + 1;
        }
        iVar1 = iVar2 + iVar4 * 3;
        iVar2 = iVar2 + 1;
      } while ((&DAT_007c0dd5)[iVar1] != '\0');
    }
    iVar4 = iVar4 + 1;
    if (0x27 < iVar4) {
      return;
    }
  } while( true );
}

// 004E6F00 FUN_004e6f00
#line 1 "decomp/ST.exe/functions/004E6F00/decomp.c"

int st::fn_004E6F00(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_10;
  int local_c;
  int local_8;

  iVar3 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((-1 < param_1) && (param_1 < 8)) {
    bVar1 = st::fn_004049B7((char)param_1);
    uVar4 = 0;
    do {
      if ((&PTR_DAT_007bfc04)[bVar1 - 1] + uVar4 != nullptr) {
        iVar2 = st::fn_0040186B(param_1,iVar3);
        if ((int)(uint)*(byte *)((int)&DAT_00798fd8 + iVar3) <= iVar2) {
          local_c = local_c + 1;
        }
        local_8 = local_8 + 1;
      }
      uVar4 = uVar4 + 0x9b;
      iVar3 = iVar3 + 1;
    } while (uVar4 < 0x5dd9);
    if (local_8 != 0) {
      local_8 = (local_c * 100) / local_8;
      if (local_8 < 0x65) {
        return local_8;
      }
      local_10 = 100;
    }
    return local_10;
  }
  return 0;
}

// 004E6FE0 FUN_004e6fe0
#line 1 "decomp/ST.exe/functions/004E6FE0/decomp.c"

int st::fn_004E6FE0(int param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int local_10;
  int local_c;
  int local_8;

  uVar4 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  if ((-1 < param_1) && (param_1 < 8)) {
    bVar1 = st::fn_004049B7((char)param_1);
    uVar3 = 0;
    do {
      if ((&PTR_DAT_007bfc04)[bVar1 - 1] + uVar3 != nullptr) {
        iVar2 = st::fn_0040186B(param_1,uVar4);
        if ((int)(uint)*(byte *)(uVar4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x73B)) <= iVar2) {
          local_c = local_c + 1;
        }
        iVar2 = st::fn_0040524F(param_1,uVar4);
        if (iVar2 != 0) {
          local_8 = local_8 + 1;
        }
      }
      uVar3 = uVar3 + 0x9b;
      uVar4 = uVar4 + 1;
    } while (uVar3 < 0x5dd9);
    if (local_8 != 0) {
      local_8 = (local_c * 100) / local_8;
      if (local_8 < 0x65) {
        return local_8;
      }
      local_10 = 100;
    }
    return local_10;
  }
  return 0;
}

// 004E70F0 FUN_004e70f0
#line 4 "decomp/ST.exe/functions/004E70F0/decomp.c"
/* [STAbiConsistencyApplier] stack_parameter_scalar_role target=parameter:2: parameter=/int
   Evidence: generic pointer has a scalar-only incoming lifetime before its first slot overwrite:
   frame_offset=0xc, direct_reads=1, scalar_operations=2, signed_comparisons=2, unsigned_bounds=0,
   pointer_dereferences=0, slot_reused=false; sites=004E710E incoming load: MOV ESI,dword ptr [EBP +
   0xc] | 004E7147 scalar operation: LEA ECX,[ESI + EAX*0x2] | 004E7164 scalar operation: LEA
   ESI,[EAX + EAX*0x8] */

void st::fn_004E70F0(int param_1,int param_2,int param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint *puVar6;

  iVar3 = param_1;
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 3)) {
    *param_4 = 0xffffffff;
    *(undefined4 *)param_3 = 0xffffffff;
    bVar4 = st::fn_004049B7((char)param_1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    iVar2 = param_2 + (bVar4 - 1) * 3;
    if (0 < *(int *)(&DAT_007995bc + iVar2 * 0x195)) {
      puVar6 = (uint *)(&DAT_007995bc + iVar2 * 0x195);
      while (param_1 < 0x51) {
        iVar5 = st::fn_0040186B(iVar3,*puVar6);
        if (((iVar5 < (int)(uint)(byte)puVar6[1]) &&
            (iVar5 = st::fn_0040524F(iVar3,*puVar6), iVar5 != 0)) &&
           (iVar5 = st::fn_00401E1F(iVar3,*puVar6), iVar5 == 0)) {
          iVar3 = iVar2 * 0x51 + param_1;
          *(undefined4 *)param_3 = *(undefined4 *)(&DAT_007995bc + iVar3 * 5);
          *param_4 = (uint)(byte)(&DAT_007995c0)[iVar3 * 5];
          return;
        }
        piVar1 = (int *)((int)puVar6 + 5);
        puVar6 = (uint *)((int)puVar6 + 5);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
        if (*piVar1 < 1) {
          return;
        }
      }
    }
  }
  return;
}

// 004E7230 FUN_004e7230
#line 4 "decomp/ST.exe/functions/004E7230/decomp.c"
void st::fn_004E7230(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int local_EAX_197;
  int iVar6;
  uint *puVar7;

  iVar4 = param_2;
  iVar2 = param_1;
  memset(param_3, 0, 0x1c); /* compiler bulk-zero initialization */
  iVar6 = 0;
  memset(param_4, 0, 0x1c); /* compiler bulk-zero initialization */
  if ((((-1 < param_1) && (param_1 < 8)) && (-1 < param_2)) && (param_2 < 3)) {
    bVar3 = st::fn_004049B7((char)param_1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = 0;
    iVar4 = iVar4 + (bVar3 - 1) * 3;
    if (0 < *(int *)(&DAT_007995bc + iVar4 * 0x195)) {
      puVar7 = (uint *)(&DAT_007995bc + iVar4 * 0x195);
      iVar4 = (int)param_3 - (int)param_4;
      do {
        if (0x50 < param_1) {
          return;
        }
        iVar6 = st::fn_0040186B(iVar2,*puVar7);
        if (((iVar6 < (int)(uint)(byte)puVar7[1]) &&
            (iVar5 = st::fn_0040524F(iVar2,*puVar7), iVar5 != 0)) &&
           (local_EAX_197 = st::fn_00401E1F(iVar2,*puVar7), local_EAX_197 == 0)) {
          *(uint *)(iVar4 + (int)param_4) = *puVar7;
          *param_4 = (uint)(byte)puVar7[1];
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + 1;
          param_4 = param_4 + 1;
          if (6 < param_2) {
            return;
          }
        }
        piVar1 = (int *)((int)puVar7 + 5);
        puVar7 = (uint *)((int)puVar7 + 5);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

// 004E7390 FUN_004e7390
#line 4 "decomp/ST.exe/functions/004E7390/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004E7390 -> 004E6310 @ 004E755C */

void st::fn_004E7390(byte *param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  int iVar14;
  int local_20;
  int local_1c;
  int local_14;
  int *local_10;
  int local_c;
  char *local_8;

  if ((-1 < (int)param_1) && ((int)param_1 < 8)) {
    bVar3 = st::fn_004049B7((char)param_1);
    memset(&DAT_00801020, 0, 0x30c); /* compiler bulk-zero initialization */
    iVar5 = 0;
    memset(&DAT_00800bd0, 0, 0x30c); /* compiler bulk-zero initialization */
    STPiece<0,1>(DAT_00800bd4) = (undefined1)param_3;
    iVar5 = 0;
    DAT_00800bd0 = param_2;
    iVar10 = 1;
    local_20 = 0;
    local_1c = 0;
    iVar9 = 0;
    do {
      iVar14 = iVar9;
      if (iVar10 != 0) {
        iVar14 = iVar9 + iVar10;
        if (0x9a < iVar14) {
          return;
        }
        puVar11 = &DAT_00800bd0;
        puVar13 = (undefined4 *)((int)&DAT_00801020 + iVar9 * 5);
        for (uVar6 = (uint)(iVar10 * 5) >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
          *puVar13 = *puVar11;
          puVar11 = puVar11 + 1;
          puVar13 = puVar13 + 1;
        }
        for (uVar6 = iVar10 * 5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
          *(undefined1 *)puVar13 = *(undefined1 *)puVar11;
          puVar11 = (undefined4 *)((int)puVar11 + 1);
          puVar13 = (undefined4 *)((int)puVar13 + 1);
        }
        iVar10 = 0;
        iVar5 = iVar9;
        local_20 = iVar14;
        local_1c = iVar9;
      }
      bVar2 = false;
      if (iVar14 <= iVar5) break;
      local_8 = st::pointer_boundary_cast<char *>(&DAT_00801024 + iVar5 * 5);
      piVar1 = (int *)(&PTR_DAT_007c0dc8)[bVar3 - 1];
      local_14 = iVar5;
      do {
        if (*piVar1 != 0) {
          local_10 = (int *)((int)piVar1 + 5);
          iVar9 = *(int *)(local_8 + -4);
          piVar8 = piVar1;
          do {
            if (((*piVar8 == iVar9) &&
                (piVar7 = (int *)((int)piVar8 + 5), (char)piVar8[1] == *local_8)) &&
               (local_c = 0, *local_10 != 0)) {
              piVar4 = (int *)((int)&DAT_00800bd0 + iVar10 * 5);
              do {
                if (3 < local_c) break;
                iVar10 = iVar10 + 1;
                *piVar4 = *piVar7;
                *(char *)(piVar4 + 1) = (char)piVar7[1];
                bVar2 = true;
                if (0x800ed6 < (int)piVar4 + 5) {
                  return;
                }
                piVar7 = (int *)((int)piVar7 + 5);
                local_c = local_c + 1;
                piVar4 = (int *)((int)piVar4 + 5);
              } while (*piVar7 != 0);
            }
            piVar8 = (int *)((int)piVar8 + 0x19);
            local_10 = (int *)((int)local_10 + 0x19);
            iVar5 = local_1c;
            iVar14 = local_20;
          } while (*piVar8 != 0);
        }
        local_14 = local_14 + 1;
        local_8 = local_8 + 5;
      } while (local_14 < iVar14);
      iVar9 = iVar14;
    } while (bVar2);
    if (-1 < iVar14 + -1) {
      puVar12 = (uint *)((int)&DAT_00801020 + (iVar14 + -1) * 5);
      do {
        if (((param_4 != 0) || (*puVar12 != param_2)) || ((byte)puVar12[1] != param_3)) {
          st::fn_00402130(param_1,*puVar12,(uint)(byte)puVar12[1]);
        }
        puVar12 = (uint *)((int)puVar12 + -5);
        iVar14 = iVar14 + -1;
      } while (iVar14 != 0);
    }
  }
  return;
}

// 004E75F0 FUN_004e75f0
#line 1 "decomp/ST.exe/functions/004E75F0/decomp.c"

/* [STReturnSemanticsApplier] ignored_eax_void.
   Evidence: all observed direct callers ignore the return register (ignored=2, used=0), and
   decompilation contains no value return */

void st::fn_004E75F0(int param_1)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;

  iVar2 = param_1;
  if ((-1 < param_1) && (param_1 < 8)) {
    bVar3 = st::fn_004049B7((char)param_1);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = 0;
    if (0 < *(int *)(&DAT_007995bc + (bVar3 - 1) * 0x4bf)) {
      puVar5 = (uint *)(&DAT_007995bc + (bVar3 - 1) * 0x4bf);
      do {
        if (0x50 < param_1) {
          return;
        }
        iVar4 = st::fn_0040186B(iVar2,*puVar5);
        if (((iVar4 < (int)(uint)(byte)puVar5[1]) &&
            (iVar4 = st::fn_0040524F(iVar2,*puVar5), iVar4 != 0)) &&
           (iVar4 = st::fn_00401E1F(iVar2,*puVar5), iVar4 == 0)) {
          st::fn_00402130((byte *)iVar2,*puVar5,(uint)(byte)puVar5[1]);
        }
        piVar1 = (int *)((int)puVar5 + 5);
        puVar5 = (uint *)((int)puVar5 + 5);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
      } while (0 < *piVar1);
    }
  }
  return;
}

// 004E76E0 FUN_004e76e0
#line 4 "decomp/ST.exe/functions/004E76E0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004E7D70 -> 004E76E0 @ 004E7DB9; zero-filled partial register load at 004E7DAF */

undefined4 st::fn_004E76E0(int param_1,uint *param_2,byte param_3)

{
  int *piVar1;
  byte bVar2;
  uint *puVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  byte *puVar9;
  int *piVar10;
  byte *puVar11;
  uint *local_c;

  if ((param_1 < 0) || (7 < param_1)) {
    return 0;
  }
  bVar4 = st::fn_004049B7((char)param_1);
  memset(&DAT_00801020, 0, 0x30c); /* compiler bulk-zero initialization */
  iVar7 = 0;
  DAT_00801020 = st::machine_word_boundary_cast<undefined4>(param_2);
  DAT_00801024 = param_3;
  do {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    auto _param_3 = 0;
    memset(&DAT_00800bd0, 0, 0x30c); /* compiler bulk-zero initialization */
    if (DAT_00801020 == nullptr) {
      return 0;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_2 = (uint *)&DAT_00801020;
    do {
      st::fn_00402F27(param_1,*param_2,(uint)(byte)param_2[1]);
      pbVar5 = st::pointer_boundary_cast<byte *>(&DAT_007c0dd4);
      do {
        bVar2 = pbVar5[1];
        iVar7 = 1;
        while( true ) {
          if ((bVar2 == 0) || (2 < iVar7)) goto LAB_004e77b8;
          if ((uint)pbVar5[iVar7] == *param_2) break;
          bVar2 = pbVar5[iVar7 + 1];
          iVar7 = iVar7 + 1;
        }
        *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593) + (uint)*pbVar5 * 4) = 0;
LAB_004e77b8:
        pbVar5 = pbVar5 + 3;
      } while ((int)pbVar5 < 0x7c0e4c);
      iVar7 = 0x42;
      pbVar5 = st::pointer_boundary_cast<byte *>(&DAT_007c0e4c + (bVar4 - 1) * 0xc6);
      do {
        bVar2 = pbVar5[1];
        iVar6 = 1;
        while( true ) {
          if ((bVar2 == 0) || (2 < iVar6)) goto LAB_004e7823;
          if ((uint)pbVar5[iVar6] == *param_2) break;
          bVar2 = pbVar5[iVar6 + 1];
          iVar6 = iVar6 + 1;
        }
        *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, param_1, 0x593) + (uint)*pbVar5 * 4) = 0;
LAB_004e7823:
        pbVar5 = pbVar5 + 3;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      puVar8 = (uint *)(&PTR_DAT_007c0dc8)[bVar4 - 1];
      if (*puVar8 != 0) {
        piVar10 = (int *)((int)puVar8 + 5);
        local_c = (uint *)((int)&DAT_00800bd0 + _param_3 * 5);
        do {
          iVar7 = *piVar10;
          iVar6 = 0;
          puVar3 = puVar8;
          while( true ) {
            if ((iVar7 == 0) || (3 < iVar6)) goto LAB_004e789c;
            if ((STField<uint>(puVar3,5) == *param_2) &&
               (STField<char>(puVar3,9) == (char)param_2[1])) break;
            iVar7 = STField<int>(puVar3,10);
            iVar6 = iVar6 + 1;
            puVar3 = (uint *)((int)puVar3 + 5);
          }
          *local_c = *puVar8;
          *(char *)(local_c + 1) = (char)puVar8[1];
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_3 = _param_3 + 1;
          local_c = (uint *)((int)local_c + 5);
LAB_004e789c:
          piVar1 = (int *)((int)puVar8 + 0x19);
          puVar8 = (uint *)((int)puVar8 + 0x19);
          piVar10 = (int *)((int)piVar10 + 0x19);
        } while (*piVar1 != 0);
      }
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = (uint *)((int)param_2 + 5);
    } while (*param_2 != 0);
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (_param_3 == 0) {
      return 0;
    }
    puVar9 = (byte *)(&DAT_00800bd0);
    puVar11 = (byte *)(&DAT_00801020);
    memmove(puVar11, puVar9, 0x30c); /* compiler REP MOVS byte copy */
  } while( true );
}

// 004E7980 FUN_004e7980
#line 4 "decomp/ST.exe/functions/004E7980/decomp.c"
/* [STPrototypeApplier] Propagated parameter 2.
   Evidence: 004E7E10 -> 004E7980 @ 004E7E63; zero-filled partial register load at 004E7E59 */

undefined4 st::fn_004E7980(uint *param_1,int param_2,byte param_3)

{
  int *piVar1;
  byte bVar2;
  undefined *puVar3;
  bool bVar4;
  uint *puVar5;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  byte *puVar10;
  byte *pbVar11;
  int *piVar12;
  byte *puVar13;
  undefined4 *local_1c;
  int local_10;
  int local_c;

  puVar5 = param_1;
  if (((int)param_1 < 0) || (7 < (int)param_1)) {
    return 0;
  }
  bVar5 = st::fn_004049B7((char)param_1);
  iVar6 = bVar5 - 1;
  memset(&DAT_00801020, 0, 0x30c); /* compiler bulk-zero initialization */
  iVar9 = 0;
  DAT_00801020 = param_2;
  DAT_00801024 = param_3;
  do {
    local_c = 0;
    memset(&DAT_00800bd0, 0, 0x30c); /* compiler bulk-zero initialization */
    iVar9 = 0;
    if (DAT_00801020 == 0) {
      return 0;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    param_1 = (uint *)&DAT_00801020;
    do {
      st::fn_0040421E((int)puVar5,*param_1,(uint)(byte)param_1[1]);
      pbVar11 = st::pointer_boundary_cast<byte *>(&DAT_007c0dd4);
      do {
        bVar2 = pbVar11[1];
        for (iVar9 = 1; (bVar2 != 0 && (iVar9 < 3)); iVar9 = iVar9 + 1) {
          if ((*(byte *)(STRecordByteAddress(g_packedRecords_A62x8, (int)puVar5, 0x2EB) + ((int)(pbVar11[iVar9] ^ 7) >> 3)) >>
               ((pbVar11[iVar9] ^ 7) & 7) & 1) == 0) goto LAB_004e7a7f;
          bVar2 = pbVar11[iVar9 + 1];
        }
        *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, (int)puVar5, 0x593) + (uint)*pbVar11 * 4) = 1;
LAB_004e7a7f:
        pbVar11 = pbVar11 + 3;
      } while ((int)pbVar11 < 0x7c0e4c);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_2 = 0x42;
      pbVar11 = st::pointer_boundary_cast<byte *>(&DAT_007c0e4c + iVar6 * 0xc6);
      do {
        bVar2 = pbVar11[1];
        for (iVar9 = 1; (bVar2 != 0 && (iVar9 < 3)); iVar9 = iVar9 + 1) {
          if ((*(byte *)(STRecordByteAddress(g_packedRecords_A62x8, (int)puVar5, 0x2EB) + ((int)(pbVar11[iVar9] ^ 7) >> 3)) >>
               ((pbVar11[iVar9] ^ 7) & 7) & 1) == 0) goto LAB_004e7b13;
          bVar2 = pbVar11[iVar9 + 1];
        }
        *(undefined4 *)(STRecordByteAddress(g_packedRecords_A62x8, (int)puVar5, 0x593) + (uint)*pbVar11 * 4) = 1;
LAB_004e7b13:
        pbVar11 = pbVar11 + 3;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      piVar12 = (int *)(&PTR_DAT_007c0dc8)[iVar6];
      if (*piVar12 != 0) {
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        auto _param_3 = 0;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_2 = 5;
        local_1c = (undefined4 *)((int)&DAT_00800bd0 + local_c * 5);
        do {
          if ((*(uint *)((int)piVar12 + _param_3) == *param_1) &&
             (*(char *)((int)piVar12 + _param_3 + 4) == (char)param_1[1])) {
            bVar4 = true;
            local_10 = 0;
            iVar9 = _param_3;
            if (*(int *)((int)piVar12 + param_2) != 0) {
              do {
                if (3 < local_10) break;
                puVar3 = st::pointer_boundary_cast<undefined *>((&PTR_DAT_007c0dc8)[iVar6]);
                iVar7 = st::fn_0040186B((int)puVar5,*(int *)(puVar3 + iVar9 + 5));
                if (iVar7 < (int)(uint)(byte)puVar3[iVar9 + 9]) {
                  bVar4 = false;
                }
                iVar7 = iVar9 + 10;
                local_10 = local_10 + 1;
                iVar9 = iVar9 + 5;
              } while (*(int *)(puVar3 + iVar7) != 0);
              if (!bVar4) goto LAB_004e7bd3;
            }
            st::fn_0040419C((int)puVar5,*param_1);
          }
LAB_004e7bd3:
          iVar9 = 0;
          piVar12 = (int *)(&PTR_DAT_007c0dc8)[iVar6];
          if (*(int *)((int)piVar12 + param_2) != 0) {
            puVar8 = (uint *)((int)piVar12 + _param_3 + 5);
            do {
              if (3 < iVar9) break;
              if ((*puVar8 == *param_1) && ((char)puVar8[1] == (char)param_1[1])) {
                *local_1c = *(undefined4 *)((int)piVar12 + _param_3);
                *(undefined1 *)(local_1c + 1) = *(undefined1 *)((int)piVar12 + _param_3 + 4);
                local_c = local_c + 1;
                local_1c = (undefined4 *)((int)local_1c + 5);
                break;
              }
              piVar1 = (int *)((int)puVar8 + 5);
              puVar8 = (uint *)((int)puVar8 + 5);
              iVar9 = iVar9 + 1;
            } while (*piVar1 != 0);
          }
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          param_2 = param_2 + 0x19;
          /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
          _param_3 = _param_3 + 0x19;
        } while (*(int *)((int)piVar12 + _param_3) != 0);
      }
      piVar12 = (int *)((int)param_1 + 5);
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (uint *)((int)param_1 + 5);
    } while (*piVar12 != 0);
    if (local_c == 0) {
      return 0;
    }
    puVar10 = (byte *)(&DAT_00800bd0);
    puVar13 = (byte *)(&DAT_00801020);
    memmove(puVar13, puVar10, 0x30c); /* compiler REP MOVS byte copy */
  } while( true );
}

// 004E7D70 FUN_004e7d70
#line 4 "decomp/ST.exe/functions/004E7D70/decomp.c"
undefined4 st::fn_004E7D70(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;

  if ((-1 < param_1) && (param_1 < 8)) {
    bVar1 = st::fn_004049B7((char)param_1);
    piVar2 = (int *)(&PTR_DAT_007c0dc8)[bVar1 - 1];
    if (*piVar2 != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + 5 + (int)piVar2) == 0) {
          st::fn_00402AAE(param_1,*(uint **)(iVar3 + (int)piVar2),
                             *(byte *)(iVar3 + 4 + (int)piVar2));
        }
        piVar2 = (int *)(&PTR_DAT_007c0dc8)[bVar1 - 1];
        iVar3 = iVar3 + 0x19;
      } while (*(int *)(iVar3 + (int)piVar2) != 0);
    }
    return 0;
  }
  return 0;
}

// 004E7E10 FUN_004e7e10
#line 4 "decomp/ST.exe/functions/004E7E10/decomp.c"
undefined4 st::fn_004E7E10(uint *param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;

  if ((-1 < (int)param_1) && ((int)param_1 < 8)) {
    st::fn_00405349((int)param_1);
    bVar1 = st::fn_004049B7((char)param_1);
    piVar2 = (int *)(&PTR_DAT_007c0dc8)[bVar1 - 1];
    if (*piVar2 != 0) {
      iVar3 = 0;
      do {
        if (*(int *)(iVar3 + 5 + (int)piVar2) == 0) {
          st::fn_0040534E(param_1,*(int *)(iVar3 + (int)piVar2),
                             *(byte *)(iVar3 + 4 + (int)piVar2));
        }
        piVar2 = (int *)(&PTR_DAT_007c0dc8)[bVar1 - 1];
        iVar3 = iVar3 + 0x19;
      } while (*(int *)(iVar3 + (int)piVar2) != 0);
    }
    return 0;
  }
  return 0;
}

// 004E7EB0 FUN_004e7eb0
#line 1 "decomp/ST.exe/functions/004E7EB0/decomp.c"

void st::fn_004E7EB0(int param_1,int param_2,int param_3)

{
  uint uVar1;

  uVar1 = st::machine_word_boundary_cast<uint>(g_playSystem_00802A38->field_00E4 + param_3);
  if ((uint)(&g_packedRecords_A62x8[param_1].field1987_0xa22)[param_2] < uVar1) {
    (&g_packedRecords_A62x8[param_1].field1987_0xa22)[param_2] = uVar1;
    (&g_packedRecords_A62x8[param_1].field2013_0xa42)[param_2] = 0;
  }
  return;
}

// 004E7F20 FUN_004e7f20
#line 4 "decomp/ST.exe/functions/004E7F20/decomp.c"
undefined4 st::fn_004E7F20(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  if ((&DAT_007e53bc)[param_2] == '\0') {
    return 0;
  }
  iVar2 = 0;
  while (((iVar2 == param_1 ||
          (*(uint *)(iVar2 * 4 + STRecordByteAddress(g_packedRecords_A62x8, param_1, 0xA22)) < g_playSystem_00802A38->field_00E4))
         || (iVar1 = st::fn_0040186B(iVar2,param_2), iVar1 < param_3))) {
    iVar2 = iVar2 + 1;
    if (7 < iVar2) {
      return 0;
    }
  }
  return 1;
}

// 004E7FC0 FUN_004e7fc0
#line 1 "decomp/ST.exe/functions/004E7FC0/decomp.c"

int st::fn_004E7FC0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;

  piVar6 = st::pointer_boundary_cast<int *>(&DAT_0079a3fc);
  iVar2 = 0x54;
  piVar5 = st::pointer_boundary_cast<int *>(&DAT_0079a3fc);
  do {
    iVar1 = *piVar5;
    piVar3 = piVar6;
    for (iVar4 = 0; (iVar1 != 0 && (iVar4 < 0xf)); iVar4 = iVar4 + 1) {
      if (*piVar3 == param_1) {
        return iVar2;
      }
      piVar3 = piVar3 + 1;
      iVar1 = *piVar3;
    }
    piVar5 = piVar5 + 0xf;
    iVar2 = iVar2 + 1;
    piVar6 = piVar6 + 0xf;
  } while ((int)piVar5 < 0x79a565);
  return iVar2;
}

// 004E8030 FUN_004e8030
#line 4 "decomp/ST.exe/functions/004E8030/decomp.c"
int st::fn_004E8030(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  int iVar4;

  if ((param_1 < 1) || (0x28 < param_1)) {
    if ((param_1 < 0x32) || (0x73 < param_1)) {
      return 0;
    }
    iVar4 = 0;
    puVar3 = st::pointer_boundary_cast<undefined *>(&DAT_00800fb0);
    while( true ) {
      iVar1 = st::fn_006B0FD0((int)puVar3);
      if (iVar1 != 0) break;
      puVar3 = puVar3 + 0x10;
      iVar4 = iVar4 + 1;
      if (0x800fdf < (int)puVar3) {
        return 0;
      }
    }
  }
  else {
    iVar4 = 0;
    puVar2 = &DAT_00800f30;
    while( true ) {
      iVar1 = st::fn_006B0FD0((int)puVar2);
      if (iVar1 != 0) break;
      puVar2 = puVar2 + 4;
      iVar4 = iVar4 + 1;
      if (0x800f5f < (int)puVar2) {
        return 0;
      }
    }
  }
  return iVar4 + 1;
}

// 004E80F0 FUN_004e80f0
#line 4 "decomp/ST.exe/functions/004E80F0/decomp.c"
/* [STSwitchEnumApplier] Switch target param_2 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004E80F0_param_2Enum. Cases:
   CASE_A3=163;CASE_A8=168;CASE_B2=178;CASE_BE=190 */

undefined4 st::fn_004E80F0(int param_1,Global_sub_004E80F0_param_2Enum param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  uVar3 = 0;
  switch(param_2) {
  case CASE_A3:
  case CASE_A8:
  case CASE_B2:
  case CASE_BE:
    iVar1 = param_2 * 3 + -0x1c2;
    iVar2 = (&DAT_007bf67c)[iVar1];
    if (((iVar2 < 0) || (iVar2 == 0)) ||
       (iVar2 = st::fn_0040186B(param_1,iVar2), (int)(&DAT_007bf680)[iVar1] <= iVar2)) {
      uVar3 = 1;
    }
  }
  return uVar3;
}

// 004E81B0 FUN_004e81b0
#line 4 "decomp/ST.exe/functions/004E81B0/decomp.c"
undefined4 __cdecl st::fn_004E81B0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = param_3 + param_2 * 2;
  if (*(int *)(&DAT_00792568 + iVar1 * 4) == 0) {
    return *(undefined4 *)(&DAT_00792148 + iVar1 * 8);
  }
  iVar2 = st::fn_0040186B(param_1,*(int *)(&DAT_00792568 + iVar1 * 4));
  if (1 < iVar2) {
    return *(undefined4 *)(&DAT_00792148 + (iVar1 * 2 + 1) * 4);
  }
  return *(undefined4 *)(&DAT_00792148 + (iVar2 + iVar1 * 2) * 4);
}

// 004E8230 FUN_004e8230
#line 4 "decomp/ST.exe/functions/004E8230/decomp.c"
undefined4 __cdecl st::fn_004E8230(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = param_3 + param_2 * 2;
  if (*(int *)(&DAT_007e0224 + iVar1 * 4) == 0) {
    return *(undefined4 *)(&DAT_007dfd30 + iVar1 * 8);
  }
  iVar2 = st::fn_0040186B(param_1,*(int *)(&DAT_007e0224 + iVar1 * 4));
  if (1 < iVar2) {
    return *(undefined4 *)(&DAT_007dfd30 + (iVar1 * 2 + 1) * 4);
  }
  return *(undefined4 *)(&DAT_007dfd30 + (iVar2 + iVar1 * 2) * 4);
}

// 004E82B0 FUN_004e82b0
#line 4 "decomp/ST.exe/functions/004E82B0/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void st::fn_004E82B0(void)

{
  st::fn_006B0D60(&DAT_00800f30);
  st::fn_006B0D60(&DAT_00800f40);
  st::fn_006B0D60(&DAT_00800f50);
  _DAT_0080133c = DAT_00800f3c & 0xffffff7f;
  _DAT_00801330 = DAT_00800f30;
  _DAT_00801334 = DAT_00800f34;
  _DAT_0080134c = DAT_00800f4c & 0xfffffeff;
  _DAT_00801338 = DAT_00800f38;
  _DAT_00801340 = DAT_00800f40;
  _DAT_00801344 = DAT_00800f44;
  _DAT_00801348 = DAT_00800f48;
  _DAT_0080135c = DAT_00800f5c & 0xfffffdff;
  _DAT_00801350 = DAT_00800f50;
  _DAT_00801354 = DAT_00800f54;
  _DAT_00801358 = DAT_00800f58;
  st::fn_006B0D60((undefined4 *)&DAT_008013f0);
  st::fn_006B0D60((undefined4 *)&DAT_00801400);
  st::fn_006B0D60((undefined4 *)&DAT_00801410);
  st::fn_006B0D60((undefined4 *)&DAT_008013b0);
  st::fn_006B0D60((undefined4 *)&DAT_008013c0);
  st::fn_006B0D60((undefined4 *)&DAT_008013d0);
  st::fn_006B0D60((undefined4 *)&DAT_00800fb0);
  st::fn_006B0D60((undefined4 *)&DAT_00800fc0);
  st::fn_006B0D60((undefined4 *)&DAT_00800fd0);
  st::fn_006B0D60((undefined4 *)&DAT_00801380);
  st::fn_006B0D60((undefined4 *)&DAT_00801390);
  st::fn_006B0D60((undefined4 *)&DAT_008013a0);
  st::fn_006B0D60(&DAT_00801420);
  st::fn_006B0D60(&DAT_008013e0);
  st::fn_006B0D60(&DAT_00800ee0);
  st::fn_006B0D60(&DAT_00801490);
  st::fn_006B0D60(&DAT_00800f20);
  st::fn_006B0D60(&DAT_00800ef0);
  st::fn_006B0D60(&DAT_00801430);
  st::fn_006B0D60(&DAT_00801440);
  st::fn_006B0D60(&DAT_00800f60);
  st::fn_006B0D60(&DAT_00801000);
  st::fn_006B0D60(&DAT_00801010);
  st::fn_006B0D60(&DAT_00800f00);
  st::fn_006B0D60(&DAT_00801370);
  st::fn_006B0D60(&DAT_00800fa0);
  st::fn_006B0D60(&DAT_00800ff0);
  st::fn_006B0D60((undefined4 *)&DAT_00801460);
  st::fn_006B0D60(&DAT_00800fe0);
  _DAT_00801450 = DAT_00801010 | DAT_00801000 | DAT_00800fa0;
  _DAT_00801458 = DAT_00800fa8 | DAT_00801018 | DAT_00801008;
  _DAT_00801454 = DAT_00800fa4 | DAT_00801014 | DAT_00801004;
  _DAT_0080145c = DAT_00800fac | DAT_0080101c | DAT_0080100c;
  _DAT_00800f10 = DAT_00800ff0 | DAT_00801370 | DAT_00800fe0;
  _DAT_00800f18 = DAT_00800fe8 | DAT_00800ff8 | DAT_00801378;
  _DAT_00801480 = DAT_00800f00;
  _DAT_00800f1c = DAT_00800fec | DAT_00800ffc | DAT_0080137c;
  _DAT_00801484 = DAT_00800f04;
  _DAT_0080148c = DAT_00800f0c;
  _DAT_00800f14 = DAT_00800fe4 | DAT_00800ff4 | DAT_00801374;
  _DAT_00801488 = DAT_00800f08;
  _DAT_008014a0 = DAT_00800f20 | DAT_00801490 | DAT_00800f60;
  _DAT_008014a8 = DAT_00800f68 | DAT_00800f28 | DAT_00801498;
  _DAT_008014a4 = DAT_00800f64 | DAT_00800f24 | DAT_00801494;
  _DAT_008014ac = DAT_00800f6c | DAT_00800f2c | DAT_0080149c;
  _DAT_00800f80 = DAT_00801430 | DAT_00800ef0;
  _DAT_00800f84 = DAT_00801434 | DAT_00800ef4;
  _DAT_00800f88 = DAT_00801438 | DAT_00800ef8;
  _DAT_00800f8c = DAT_0080143c | DAT_00800efc;
  _DAT_00800f90 = DAT_008013e0 | DAT_00801420;
  _DAT_00800f94 = DAT_008013e4 | DAT_00801424;
  _DAT_00800f98 = DAT_008013e8 | DAT_00801428;
  _DAT_00800f9c = DAT_008013ec | DAT_0080142c;
  _DAT_0080136c = DAT_0080144c | DAT_00800eec;
  _DAT_00801360 = DAT_00801440 | DAT_00800ee0;
  _DAT_00801364 = DAT_00801444 | DAT_00800ee4;
  _DAT_00801368 = DAT_00801448 | DAT_00800ee8;
  return;
}

// 004E8B10 FUN_004e8b10
#line 4 "decomp/ST.exe/functions/004E8B10/decomp.c"
undefined4 __thiscall st::fn_004E8B10(void *this,uint param_1)

{
  byte bVar1;
  int iVar3;
  int iVar2;
  uint uVar4;
  bool bVar5;

  uVar4 = param_1;
  if ((7 < param_1) ||
     ((g_playSystem_00802A38 != nullptr &&
      (7 < g_bulkInitializedRecords_008087C7[param_1].field_0022)))) {
    return 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar3 = (**(code **)(*(int *)this + 0x2c))();
  if (iVar3 == 0x37) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_1 == STField<uint>(this,0x24)) {
      return 1;
    }
    return 0;
  }
  /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
  iVar3 = (**(code **)(*(int *)this + 0x2c))();
  if (iVar3 != 0x6c) {
    return 0;
  }
  iVar2 = st::fn_00404160((int)this);
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = st::fn_0040186B(STField<int>(this,0x24),0x62);
  if (iVar3 == 0) {
    return 1;
  }
  /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
  param_1 = (uint)STField<byte>(this,0x24);
  if (DAT_00808a8f != '\0') {
    bVar5 = g_bulkInitializedRecords_008087C7[param_1].field_0023 !=
            g_bulkInitializedRecords_008087C7[uVar4 & 0xff].field_0023;
    goto LAB_004e8c3b;
  }
  if ((byte)uVar4 == STField<byte>(this,0x24)) {
LAB_004e8c30:
    iVar3 = 0;
  }
  else {
    uVar4 = uVar4 & 0xff;
    bVar1 = g_playerRelationMatrix[uVar4][param_1];
    if ((bVar1 == 0) && (g_playerRelationMatrix[param_1][uVar4] == 0)) {
      iVar3 = -2;
    }
    else if ((bVar1 == 1) && (g_playerRelationMatrix[param_1][uVar4] == 0)) {
      iVar3 = -1;
    }
    else if ((bVar1 == 0) && (g_playerRelationMatrix[param_1][uVar4] == 1)) {
      iVar3 = 1;
    }
    else {
      if ((bVar1 != 1) || (g_playerRelationMatrix[param_1][uVar4] != 1)) goto LAB_004e8c30;
      iVar3 = 2;
    }
  }
  bVar5 = iVar3 < 0;
LAB_004e8c3b:
  if (!bVar5) {
    return 1;
  }
  return 0;
}

// 004E8CC0 FUN_004e8cc0
#line 4 "decomp/ST.exe/functions/004E8CC0/decomp.c"
undefined4 __fastcall st::fn_004E8CC0(AnonShape_004E8DC0_1D60A929 *param_1)

{
  uint uVar1;

  *(undefined4 *)&param_1->field_0x4d0 = 0;
  uVar1 = g_playSystem_00802A38->field_00E4;
  *(undefined4 *)&param_1->field_0x4e0 = 0;
  *(undefined4 *)&param_1->field_0x4f4 = 0;
  *(undefined4 *)&param_1->field_0x4f8 = 0;
  *(undefined4 *)&param_1->field_0x4fc = 0;
  *(uint *)&param_1->field_0x4d4 = uVar1;
  *(undefined4 *)&param_1->field_0x4d8 = 0xffff;
  if (((*(int *)&param_1->field_0x231 == 1) || (*(int *)&param_1->field_0x231 == 3)) &&
     (*(int *)&param_1->field_0x5ac == 0x6c)) {
    st::fn_0040107D(param_1);
  }
  return 0;
}

// 004E8D40 FUN_004e8d40
#line 4 "decomp/ST.exe/functions/004E8D40/decomp.c"
void __fastcall st::fn_004E8D40(AnonShape_004E8D40_DAF7916C *param_1)

{
  int iVar1;
  AnonShape_004E8D40_DAF7916C *local_8;

  if (*(int *)&param_1->field_0x5ac == 0x6c) {
    local_8 = param_1;
    if ((*(int *)&param_1->field_0x4f8 == 0) && (param_1->field_05D3 != 0)) {
      st::fn_0040107D((AnonShape_004E8DC0_1D60A929 *)param_1);
    }
    if ((*(AnonShape_005EFAE0_B406B78B **)&param_1->field_0x4f8 !=
         nullptr) && (param_1->field_061B == 0)) {
      iVar1 = st::fn_006E62D0
                        (g_playSystem_00802A38,
                         *(AnonShape_005EFAE0_B406B78B **)&param_1->field_0x4f8,(int *)&local_8);
      if (iVar1 == 0) {
        param_1->field_061B = st::machine_word_boundary_cast<undefined4>(local_8);
      }
    }
  }
  return;
}

// 004E8DC0 FUN_004e8dc0
#line 4 "decomp/ST.exe/functions/004E8DC0/decomp.c"
undefined4 __fastcall st::fn_004E8DC0(AnonShape_004E8DC0_1D60A929 *param_1)

{
  int iVar1;
  AnonShape_004E8DC0_1D60A929 *local_8;

  if ((*(int *)&param_1->field_0x4f8 == 0) &&
     ((AnonShape_005EFAE0_B406B78B *)param_1->field_05D3 != nullptr)) {
    local_8 = param_1;
    iVar1 = st::fn_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_05D3,
                       (int *)&local_8);
    if (iVar1 == 0) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*(int *)local_8 + 0x2c))();
      if (iVar1 == 0x6c) {
        iVar1 = st::fn_00401BF9(local_8,(int)param_1);
        if (iVar1 != 0) {
          *(int *)&param_1->field_0x4f8 = param_1->field_05D3;
          *(undefined4 *)&param_1->field_0x4fc = 1;
          param_1->field_061B = (int *)local_8;
        }
      }
    }
  }
  return 0;
}

// 004E8E50 FUN_004e8e50
#line 4 "decomp/ST.exe/functions/004E8E50/decomp.c"
/* [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004E8E50 @ 004CB180

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004E8E50 @ 004CB180

   [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 004CAFC0 -> 004E8E50 @ 004CB180 */

void __thiscall
st::fn_004E8E50(void *this,TLOBaseTy_sub_004CAFC0_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  uint uVar3;
  int uVar2;
  int iVar4;

  uVar2 = st::fn_004049B7(STField<char>(this,0x23d));
  uVar2 = (int)(byte)uVar2;
  iVar1 = STField<int>(this,0x245);
  iVar4 = uVar2 + -1;
  if (param_1 == CASE_C) {
    if (STField<int>(this,0x4f4) != 0) {
      *param_3 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                          (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_4 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                          (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
      return;
    }
    uVar3 = *(uint *)((&PTR_DAT_007b8310)[iVar1] +
                     (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
    *param_4 = uVar3;
    *param_3 = uVar3;
  }
  else if ((0xc < (int)param_1) && ((int)param_1 < 0xf)) {
    *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                        (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8);
    *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                        (param_2 + (iVar4 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
    return;
  }
  return;
}

// 004E8F90 FUN_004e8f90
#line 4 "decomp/ST.exe/functions/004E8F90/decomp.c"
undefined4 __fastcall st::fn_004E8F90(AnonShape_004E8F90_6386CD4A *param_1)

{
  if ((param_1->field_04D8 != 0xffff) && (param_1->field_04D8 = 0xffff, param_1->field_04E0 != 0)) {
    st::fn_00401DD4(st::pointer_boundary_cast<void *>(DAT_00800bcc),param_1->field_04E4,param_1->field_04E8,param_1->field_04EC);
    param_1->field_04E0 = 0;
  }
  if (((param_1->field_04F8 != 0) && (param_1->field_04FC != 0)) &&
     (param_1->field_061B != nullptr)) {
    st::fn_00401F50(param_1->field_061B,(int)param_1);
    param_1->field_04F8 = 0;
    param_1->field_04FC = 0;
  }
  return 0;
}

// 004E9050 FUN_004e9050
#line 4 "decomp/ST.exe/functions/004E9050/decomp.c"
undefined4 __fastcall st::fn_004E9050(TLOBaseTy *param_1)

{
  TLOBaseTy_field_04D0State TVar1;
  int uVar2;
  int iVar2;
  uint uVar3;
  byte *pbVar4;

  if (param_1->field_05AC != CASE_37) goto LAB_004e914a;
  uVar2 = st::fn_004049B7(*(char *)&param_1->field_0024);
  uVar2 = (int)(byte)uVar2;
  if (uVar2 == 1) {
    pbVar4 = param_1->field_0024;
    iVar2 = 0x21;
LAB_004e9090:
    iVar2 = st::fn_0040186B((int)pbVar4,iVar2);
    uVar3 = (uint)(iVar2 != 0);
  }
  else {
    if (uVar2 == 2) {
      pbVar4 = param_1->field_0024;
      iVar2 = 0x8c;
      goto LAB_004e9090;
    }
    uVar3 = 0;
  }
  if (((int)param_1->field_04D0 < 100) &&
     ((uint)(&DAT_0079a9fc)[uVar3] / 100 + param_1->field_04D4 <= g_playSystem_00802A38->field_00E4)
     ) {
    TVar1 = st::machine_word_boundary_cast<TLOBaseTy_field_04D0State>(param_1->field_04D0 + CASE_1);
    param_1->field_04D4 = g_playSystem_00802A38->field_00E4;
    param_1->field_04D0 = TVar1;
    if ((99 < (int)TVar1) && (param_1->field_04E0[5] == 0)) {
      param_1->field_04E0[5] = 1;
      st::fn_00402CF7(param_1,1);
    }
  }
  if (((int)param_1->field_04D0 < 100) && (param_1->field_04E0[5] != 0)) {
    iVar2 = st::fn_004042AF(&param_1->field_01D5,'\f');
    if (iVar2 == param_1->field_01F5->field_01C4) {
      param_1->field_04E0[5] = 0;
      st::fn_00402CF7(param_1,1);
    }
  }
LAB_004e914a:
  if (((param_1->field_05AC == CASE_6C) &&
      (param_1->field_061B != nullptr)) && (param_1->field_04E0[7] == 0))
  {
    iVar2 = st::fn_006E62D0
                      (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_04E0[6],
                       nullptr);
    if (iVar2 != 0) {
      param_1->field_04E0[6] = 0;
      param_1->field_061B = nullptr;
    }
  }
  return 0;
}

// 004E91E0 FUN_004e91e0
#line 4 "decomp/ST.exe/functions/004E91E0/decomp.c"
/* [STPrototypeRepairApplier] Propagated parameter 1.
   Evidence: 00479600 -> 004E91E0 @ 004797EC */

undefined4 __thiscall st::fn_004E91E0(void *this,STBoatC *param_1)

{
  int iVar1;
  bool bVar2;
  short sVar3;
  int iVar4;
  int uVar6;
  int iVar5;
  uint uVar7;
  STBoatC_field_06F7State SVar8;
  dword dVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *piVar18;

  if (STField<int>(this,0x5ac) == 0x6c) {
    iVar4 = st::fn_00404160((int)this);
    if ((((iVar4 == 0) || (iVar13 = STField<int>(this,0x61b), iVar13 == 0)) ||
        (*(int *)(iVar13 + 0x20) != 1000)) ||
       ((*(int *)(iVar13 + 0x4d8) != 0xffff || (g_worldGrid.sizeZ + -1 <= *(int *)(iVar13 + 0x5b8)))
       )) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  else {
    dVar9 = param_1->slot_2C();
    if (((int)dVar9 < 1) || (dVar9 = param_1->slot_2C(), 0x28 < (int)dVar9)) {
      dVar9 = param_1->slot_2C();
      if (((int)dVar9 < 0x32) || (dVar9 = param_1->slot_2C(), 0x73 < (int)dVar9))
      {
        iVar13 = 100;
      }
      else {
        uVar6 = st::fn_004049B7(*(char *)&param_1->field_0024);
        dVar9 = param_1->slot_2C();
        iVar13 = *(int *)(&DAT_007e37b0 + ((uint)(byte)uVar6 + dVar9 * 3) * 4);
      }
    }
    else {
      dVar9 = param_1->slot_2C();
      iVar13 = *(int *)(&DAT_007e0d9c + dVar9 * 4);
    }
    if (((STField<int>(this,0x4d0) * 100) / 100 < iVar13) || (STField<int>(this,0x42c) == 0))
    {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
  }
  if (((STField<int>(this,0x4d8) == 0xffff) && (bVar2)) && (STField<int>(this,0x245) == 0)) {
    if (STField<int>(this,0x5ac) == 0x6c) {
      iVar14 = STField<int>(this,0x61b);
      STField<undefined4>(this,0x4e4) = 0xffffffff;
      STField<undefined4>(this,0x4e8) = 0xffffffff;
      STField<undefined4>(this,0x4ec) = 0xffffffff;
      iVar11 = *(int *)(iVar14 + 0x5b4);
      iVar13 = iVar11 + 1;
      if (iVar11 <= iVar13) {
        iVar1 = *(int *)(iVar14 + 0x5b0);
        do {
          if (iVar1 <= iVar1 + 1) {
            sVar12 = *(short *)(iVar14 + 0x5b8) + 1;
            iVar5 = iVar1;
            do {
              sVar3 = (short)iVar5;
              if (((((sVar3 < 0) || (g_worldGrid.sizeX <= sVar3)) ||
                   (sVar10 = (short)iVar11, sVar10 < 0)) ||
                  ((g_worldGrid.sizeY <= sVar10 || (sVar12 < 0)))) ||
                 ((g_worldGrid.sizeZ <= sVar12 ||
                  (STGridAt3D(g_worldGrid, sVar3, sVar10, sVar12).objects[0] ==
                   nullptr)))) {
                STField<int>(this,0x4e4) = iVar5;
                STField<int>(this,0x4e8) = iVar11;
                STField<int>(this,0x4ec) = *(int *)(iVar14 + 0x5b8) + 1;
                goto LAB_004e946f;
              }
              iVar5 = iVar5 + 1;
            } while (iVar5 <= iVar1 + 1);
          }
          iVar11 = iVar11 + 1;
        } while (iVar11 <= iVar13);
      }
    }
    else {
      piVar18 = (int *)((int)this + 0x4f0);
      puVar17 = (undefined4 *)((int)this + 0x4ec);
      uVar7 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
      puVar16 = (undefined4 *)((int)this + 0x4e8);
      STField<uint>(this,0x1c) = uVar7;
      puVar15 = (undefined4 *)((int)this + 0x4e4);
      uVar7 = uVar7 >> 0x10;
      iVar13 = STField<int>(this,0x438);
      iVar14 = STField<int>(this,0x434);
      iVar11 = STField<int>(this,0x430);
      SVar8 = param_1->slot_2C();
      st::fn_004012B2(STField<uint>(this,0x24),SVar8,iVar11,iVar14,iVar13,puVar15,puVar16,
                         puVar17,uVar7,piVar18);
    }
LAB_004e946f:
    if (((-1 < STField<int>(this,0x4e4)) && (-1 < STField<int>(this,0x4e8))) &&
       (-1 < STField<int>(this,0x4ec))) {
      STField<int>(this,0x4d8) = param_1->field_0018;
      dVar9 = param_1->slot_2C();
      STField<dword>(this,0x4dc) = dVar9;
      if (DAT_00800bcc == nullptr) {
        st::fn_00404395();
      }
      st::fn_00401582(st::pointer_boundary_cast<void *>(DAT_00800bcc),STField<int>(this,0x4e4),STField<int>(this,0x4e8),
                         STField<int>(this,0x4ec));
      STField<undefined4>(this,0x4e0) = 1;
      return 1;
    }
  }
  return 0;
}

// 004E95C0 FUN_004e95c0
#line 4 "decomp/ST.exe/functions/004E95C0/decomp.c"
/* [STPrototypeApplier] Propagated parameter 1.
   Evidence: 00479600 -> 004E95C0 @ 00479D52; STBoatC::Teleport this; stable alias ESI | 00479600 ->
   004E95C0 @ 00479E34; STBoatC::Teleport this; stable alias ESI | 00479600 -> 004E95C0 @ 0047ACBD;
   STBoatC::Teleport this; stable alias ESI | 00479600 -> 004E95C0 @ 0047B0A2; STBoatC::Teleport
   this; stable alias ESI */

undefined4 __thiscall st::fn_004E95C0(void *this,STBoatC *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (STField<int>(this,0x4d8) == param_1->field_0018) {
    STField<undefined4>(this,0x4d8) = 0xffff;
    if (STField<int>(this,0x4e0) != 0) {
      st::fn_00401DD4(st::pointer_boundary_cast<void *>(DAT_00800bcc),STField<int>(this,0x4e4),STField<int>(this,0x4e8),
                         STField<int>(this,0x4ec));
      STField<undefined4>(this,0x4e0) = 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

// 004E9650 FUN_004e9650
#line 4 "decomp/ST.exe/functions/004E9650/decomp.c"
undefined4 __thiscall
st::fn_004E9650(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_3 = 0xffffffff;
  *param_2 = 0xffffffff;
  *param_1 = 0xffffffff;
  if (STField<int>(this,0x4d8) != 0xffff) {
    *param_1 = STField<undefined4>(this,0x4e4);
    *param_2 = STField<undefined4>(this,0x4e8);
    *param_3 = STField<undefined4>(this,0x4ec);
  }
  return 0;
}

// 004E96C0 FUN_004e96c0
#line 4 "decomp/ST.exe/functions/004E96C0/decomp.c"
undefined4 __thiscall st::fn_004E96C0(void *this,int *param_1)

{
  int iVar1;
  int uVar2;
  int local_EAX_378;
  undefined4 uVar3;

  if (STField<int *>(this,0x4d8) != param_1) {
    return 0;
  }
  if (STField<int>(this,0x4e0) == 0) {
    return 0;
  }
  st::fn_00401DD4(st::pointer_boundary_cast<void *>(DAT_00800bcc),STField<int>(this,0x4e4),STField<int>(this,0x4e8),
                     STField<int>(this,0x4ec));
  STField<undefined4>(this,0x4e0) = 0;
  iVar1 = st::fn_006E62D0
                    (g_playSystem_00802A38,STField<AnonShape_005EFAE0_B406B78B *>(this,0x4d8),
                     (int *)&param_1);
  if (iVar1 == 0) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*param_1 + 0x2c))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((iVar1 < 1) || (iVar1 = (**(code **)(*param_1 + 0x2c))(), 0x28 < iVar1)) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 0x2c))();
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      if ((iVar1 < 0x32) || (iVar1 = (**(code **)(*param_1 + 0x2c))(), 0x73 < iVar1)) {
        iVar1 = 100;
      }
      else {
        uVar2 = st::fn_004049B7((char)param_1[9]);
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        iVar1 = (**(code **)(*param_1 + 0x2c))();
        iVar1 = *(int *)(&DAT_007e37b0 + ((uint)(byte)uVar2 + iVar1 * 3) * 4);
      }
    }
    else {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      iVar1 = (**(code **)(*param_1 + 0x2c))();
      iVar1 = *(int *)(&DAT_007e0d9c + iVar1 * 4);
    }
    iVar1 = STField<int>(this,0x4d0) + (iVar1 * -100) / 100;
    STField<int>(this,0x4d0) = iVar1;
    if (iVar1 < 0) {
      STField<undefined4>(this,0x4d0) = 0;
    }
  }
  if (STField<int>(this,0x4f0) != 0) {
    if (DAT_00811798 == nullptr) {
      if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
        local_EAX_378 = st::fn_004049B7(STField<char>(this,0x23d));
        local_EAX_378 = (int)(byte)local_EAX_378;
        if (local_EAX_378 == 1) {
          iVar1 = *(int *)this;
          uVar3 = 0x218;
        }
        else {
          if (local_EAX_378 == 2) {
            /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
            (**(code **)(*(int *)this + 0x90))(4,0x2de);
            goto cf_common_exit_004E987A;
          }
          if (local_EAX_378 != 3) goto cf_common_exit_004E987A;
          iVar1 = *(int *)this;
          uVar3 = 0x405;
        }
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(iVar1 + 0x90))(4,uVar3);
      }
    }
    else {
      st::fn_0040321A(st::pointer_boundary_cast<void *>(DAT_00811798),STField<int>(this,0x5b0),STField<int>(this,0x5b4),
                         STField<uint>(this,0x24));
    }
  }
cf_common_exit_004E987A:
  st::fn_004029D7(STField<uint>(this,0x24),STField<int>(this,0x4e4),
                     STField<int>(this,0x4e8),STField<undefined4>(this,0x4ec));
  return 0;
}

// 004E9930 FUN_004e9930
#line 4 "decomp/ST.exe/functions/004E9930/decomp.c"
int __fastcall st::fn_004E9930(int param_1)

{
  int iVar1;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x4f8);
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((iVar1 == 0) || (*(int *)(param_1 + 0x4fc) == 0)) {
    iVar1 = 0;
  }
  return iVar1;
}

// 004E9960 FUN_004e9960
#line 4 "decomp/ST.exe/functions/004E9960/decomp.c"
undefined4 __thiscall
st::fn_004E9960(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (((STField<int>(this,0x4f8) != 0) && (STField<int>(this,0x4fc) != 0)) &&
     (STField<int>(this,0x61b) != 0)) {
    *param_1 = *(undefined4 *)(STField<int>(this,0x61b) + 0x5b0);
    *param_2 = *(undefined4 *)(STField<int>(this,0x61b) + 0x5b4);
    *param_3 = *(undefined4 *)(STField<int>(this,0x61b) + 0x5b8);
    return 1;
  }
  return 0;
}

// 004E99E0 FUN_004e99e0
#line 4 "decomp/ST.exe/functions/004E99E0/decomp.c"
undefined4 __thiscall
st::fn_004E99E0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar3;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_25;
  undefined4 local_21;
  undefined4 local_1d;
  undefined4 local_9;

  if (STField<int>(this,0x4f8) == 0) {
    puVar3 = &local_74;
    memset(puVar3, 0, 0x6f); /* compiler bulk-zero initialization */
    puVar3 = (undefined4 *)((byte *)puVar3 + 0x6c);
    local_70 = STField<undefined4>(this,0x24);
    local_48 = param_1;
    local_3c = (uint)STField<ushort>(this,0x30);
    local_64 = DAT_00791f18;
    local_50 = DAT_00791f18;
    local_21 = 100;
    local_1d = 100;
    local_68 = 1;
    local_6c = 1;
    local_58 = 1;
    local_44 = param_2;
    local_38 = STField<undefined4>(this,0x5c0);
    local_40 = param_3;
    local_25 = STField<undefined4>(this,0x18);
    local_74 = 0x3e9;
    local_9 = 0;
    local_54 = 3;
    local_60 = 1000;
    local_4c = 0x6c;
    local_5c = local_70;
    st::fn_00401BC2
              (g_playSystem_00802A38,0x3e9,0,st::machine_word_boundary_cast<undefined4>((int *)((int)this + 0x61b)),st::machine_word_boundary_cast<undefined4>(&local_74),0);
    uVar1 = *(undefined4 *)(STField<int>(this,0x61b) + 0x18);
    STField<undefined4>(this,0x4fc) = 0;
    STField<undefined4>(this,0x4f8) = uVar1;
    return 0;
  }
  return 0;
}

// 004E9B10 FUN_004e9b10
#line 4 "decomp/ST.exe/functions/004E9B10/decomp.c"
undefined4 __thiscall st::fn_004E9B10(void *this,int param_1)

{
  undefined4 uVar1;

  if (STField<int>(this,0x4f8) != 0) {
    if (STField<int>(this,0x4fc) == 0) {
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      uVar1 = *(undefined4 *)(param_1 + 0x18);
      STField<int>(this,0x61b) = param_1;
      STField<undefined4>(this,0x4f8) = uVar1;
      STField<undefined4>(this,0x4fc) = 1;
      return 1;
    }
    if (STField<int>(this,0x4f8) != 0) {
      return 0;
    }
  }
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (*(int *)(param_1 + 0x18) != STField<int>(this,0x5d3)) {
    return 0;
  }
  STField<int>(this,0x4f8) = STField<int>(this,0x5d3);
  STField<undefined4>(this,0x4fc) = 1;
  STField<int>(this,0x61b) = param_1;
  return 1;
}

// 004E9BB0 FUN_004e9bb0
#line 4 "decomp/ST.exe/functions/004E9BB0/decomp.c"
undefined4 __thiscall st::fn_004E9BB0(void *this,int param_1)

{
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if ((STField<int>(this,0x4f8) == *(int *)(param_1 + 0x18)) &&
     (STField<int>(this,0x4fc) != 0)) {
    STField<undefined4>(this,0x4f8) = 0;
    STField<undefined4>(this,0x4fc) = 0;
    STField<undefined4>(this,0x61b) = 0;
  }
  return 0;
}

// 004E9C00 FUN_004e9c00
#line 4 "decomp/ST.exe/functions/004E9C00/decomp.c"
void __fastcall st::fn_004E9C00(int param_1)

{
  *(undefined4 *)(param_1 + 0x46c) = 0;
  *(undefined4 *)(param_1 + 0x470) = 0;
  return;
}

// 004E9C20 FUN_004e9c20
#line 4 "decomp/ST.exe/functions/004E9C20/decomp.c"
undefined4 __fastcall st::fn_004E9C20(AnonShape_004E9C20_50FC91C6 *param_1)

{
  int iVar1;
  AnonShape_004E9C20_50FC91C6 *local_8;

  if (param_1->field_046C != 0) {
    local_8 = param_1;
    if (param_1->field_048C != 0) {
      iVar1 = st::fn_006E62D0
                        (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1->field_0470,
                         (int *)&local_8);
      if (iVar1 == 0) {
        st::fn_00404971(local_8,(STBoatC *)param_1);
        param_1->field_048C = 0;
      }
    }
    if (param_1->field_0494 != 0) {
      st::fn_00401DD4(st::pointer_boundary_cast<void *>(DAT_00800bcc),param_1->field_0480,param_1->field_0484,param_1->field_0488);
      param_1->field_0494 = 0;
    }
  }
  return 0;
}

// 004EA460 FUN_004ea460
#line 4 "decomp/ST.exe/functions/004EA460/decomp.c"
undefined4 __thiscall st::fn_004EA460(void *this,int param_1,AnonShape_004EA460_7CF77153 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;

  if (((STField<int>(this,0x245) == 4) && (STField<int>(this,0x46c) == 0)) &&
     ((param_2 != nullptr ||
      (iVar3 = st::fn_006E62D0
                         (g_playSystem_00802A38,(AnonShape_005EFAE0_B406B78B *)param_1,
                          (int *)&param_2), iVar3 == 0)))) {
    STField<undefined4>(this,0x46c) = 1;
    STField<int>(this,0x470) = param_1;
    STField<undefined4>(this,0x48c) = 0;
    STField<undefined4>(this,0x494) = 0;
    uVar1 = param_2->field_05B0;
    STField<undefined4>(this,0x474) = uVar1;
    uVar2 = param_2->field_05B4;
    STField<undefined4>(this,0x478) = uVar2;
    iVar3 = param_2->field_05B8;
    STField<int>(this,0x47c) = iVar3;
    st::fn_0040542A(st::pointer_boundary_cast<TLOBaseTy *>(this),uVar1,uVar2,iVar3 + 1);
  }
  return 0;
}

// 004EA530 FUN_004ea530
#line 4 "decomp/ST.exe/functions/004EA530/decomp.c"
undefined4 __thiscall st::fn_004EA530(void *this,short param_1,short param_2,short param_3)

{
  AnonShape_004EA460_7CF77153 *this_00;
  int iVar1;

  if (((((-1 < param_1) && (param_1 < g_worldGrid.sizeX)) && (-1 < param_2)) &&
      ((param_2 < g_worldGrid.sizeY && (-1 < param_3)))) &&
     ((param_3 < g_worldGrid.sizeZ &&
      (this_00 = (AnonShape_004EA460_7CF77153 *)
                 STGridAt3D(g_worldGrid, param_1, param_2, param_3).objects[0],
      this_00 != nullptr)))) {
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    iVar1 = (**(code **)(*(int *)this_00 + 0x2c))();
    /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
    if ((iVar1 != 0x37) && (iVar1 = (**(code **)(*(int *)this_00 + 0x2c))(), iVar1 != 0x6c)) {
      return 0;
    }
    iVar1 = st::fn_00401EAB(this_00,STField<uint>(this,0x24));
    if (iVar1 != 0) {
      st::fn_004058E4(this,*(int *)&this_00->field_0x18,this_00);
    }
  }
  return 0;
}

// 004EA6C0 FUN_004ea6c0
#line 4 "decomp/ST.exe/functions/004EA6C0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004EA6C0 returns zeroed full register at 004EA6C5 @ 004EA6C7 */

uint __fastcall st::fn_004EA6C0(int param_1)

{
  st::fn_00404E9E((TLOBaseTy *)param_1);
  return 0;
}

// 004EA6E0 FUN_004ea6e0
#line 4 "decomp/ST.exe/functions/004EA6E0/decomp.c"
void st::fn_004EA6E0(uint param_1,int param_2,int param_3,undefined4 param_4)

{
  int uVar1;
  int iVar1;

  uVar1 = st::fn_004049B7(DAT_0080874d);
  uVar1 = (int)(byte)uVar1;
  if (uVar1 == 1) {
    iVar1 = st::fn_0040186B((uint)DAT_0080874d,0x40);
  }
  else if (uVar1 == 2) {
    iVar1 = st::fn_0040186B((uint)DAT_0080874d,0x8f);
  }
  else {
    if (uVar1 != 3) {
      return;
    }
    iVar1 = st::fn_0040186B((uint)DAT_0080874d,0x4d);
  }
  if ((iVar1 != 0) && (DAT_00811798 != nullptr)) {
    st::fn_00403E2C(st::pointer_boundary_cast<void *>(DAT_00811798),param_2,param_3,param_4,param_1);
  }
  return;
}

// 004EA7A0 FUN_004ea7a0
#line 4 "decomp/ST.exe/functions/004EA7A0/decomp.c"
undefined4 __fastcall st::fn_004EA7A0(AnonShape_004EA7A0_0F37AD2F *param_1)

{
  param_1->field_04D0 = 0;
  param_1->field_0261 = 0;
  param_1->field_04EC = g_playSystem_00802A38->field_00E4;
  return 0;
}

// 004EA7E0 FUN_004ea7e0
#line 4 "decomp/ST.exe/functions/004EA7E0/decomp.c"
undefined4 __fastcall st::fn_004EA7E0(AnonShape_004D9BD0_B3B50583 *param_1)

{
  int iVar1;

  iVar1 = param_1->field_0245;
  if (iVar1 == 0) {
    if (param_1->field_04D0 != 0) {
      if (param_1->field_04D0 != 1) {
        return 0;
      }
      param_1->field_0261 = 1;
      return 0;
    }
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 6)) {
      return 0;
    }
    param_1->field_04D0 = 0;
  }
  param_1->field_0261 = 0;
  return 0;
}

// 004EA830 FUN_004ea830
#line 4 "decomp/ST.exe/functions/004EA830/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004EA830 returns literal 1 at 004EA84E @ 004EA853 */

uint __fastcall st::fn_004EA830(TLOBaseTy *param_1)

{
  if ((param_1->field_04D0 == CASE_0) || (param_1->field_04D0 == CASE_2)) {
    param_1->field_04D0 = CASE_1;
    st::fn_00401A0F(param_1);
  }
  return 1;
}

// 004EA870 FUN_004ea870
#line 4 "decomp/ST.exe/functions/004EA870/decomp.c"
undefined4 __fastcall st::fn_004EA870(TLOBaseTy *param_1)

{
  int iVar1;
  dword dVar2;
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  if ((param_1->field_04D0 == CASE_0) &&
     (param_1->field_04E0[3] + 0x19 <= g_playSystem_00802A38->field_00E4)) {
    param_1->field_04E0[3] = g_playSystem_00802A38->field_00E4;
    local_8 = param_1;
    iVar1 = st::fn_00405ACE(param_1,3,0,1,1,1);
    if ((iVar1 != 0) &&
       ((iVar1 = st::fn_0040283D(param_1), iVar1 != 0 &&
        (g_packedRecords_A62x8[(int)param_1->field_0024].field1600_0x7d6 != 0)))) {
      array = (DArrayTy *)g_packedRecords_A62x8[(int)param_1->field_0024].field3_0x9;
      index = 0;
      if (array->count != 0) {
        while (((st::fn_006ACC70(array,index,&local_8), local_8 == nullptr ||
                (dVar2 = local_8->slot_2C(), dVar2 != 0x44)) ||
               (local_8->field_04D0 == CASE_0))) {
          index = index + 1;
          array = (DArrayTy *)g_packedRecords_A62x8[(int)param_1->field_0024].field3_0x9;
          if (array->count <= index) {
            return 0;
          }
        }
        iVar1 = st::fn_00405ACE(param_1,3,0,1,1,1);
        if ((iVar1 != 0) && (iVar1 = st::fn_0040283D(param_1), iVar1 != 0)) {
          st::fn_00405759(param_1,3,0,1,0,0xffffffff,0,0xff,nullptr);
          param_1->field_04D0 = CASE_2;
          st::fn_00402CF7(param_1,0);
        }
        st::fn_00404A48((AnonShape_004DEA40_61E7A6D4 *)local_8);
        return 0;
      }
    }
  }
  return 0;
}

// 004EAD90 FUN_004ead90
#line 4 "decomp/ST.exe/functions/004EAD90/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_004EAD90(AnonShape_004EAD90_30D2E515 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;

  iVar1 = param_1->field_04D0;
  if (((1 < *(int *)(&DAT_0079aa08 + iVar1 * 4)) &&
      (param_1->field_04D4 < *(int *)(&DAT_0079aa08 + iVar1 * 4))) &&
     ((uint)(param_1->field_04DC + param_1->field_04D8) <= g_playSystem_00802A38->field_00E4)) {
    param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
    iVar6 = st::machine_word_boundary_cast<int>(param_1->field_04D4 + 1);
    iVar5 = iVar1 * 0x18;
    param_1->field_04D4 = iVar6;
    iVar1 = *(int *)(&DAT_0079aa08 + iVar1 * 4);
    iVar2 = *(int *)(&DAT_0079aa20 + iVar5);
    iVar3 = *(int *)(&DAT_0079aa2c + iVar5);
    iVar4 = ((*(int *)(&DAT_0079aa28 + iVar5) - *(int *)(&DAT_0079aa1c + iVar5)) * iVar6) / iVar1 +
            *(int *)(&DAT_0079aa1c + iVar5) + (int)param_1->field_0043;
    param_1->field_04E0 =
         (int)param_1->field_0041 +
         *(int *)(&DAT_0079aa18 + iVar5) +
         ((*(int *)(&DAT_0079aa24 + iVar5) - *(int *)(&DAT_0079aa18 + iVar5)) * iVar6) / iVar1;
    param_1->field_04E4 = iVar4;
    iVar1 = (int)param_1->field_0045 + ((iVar3 - iVar2) * iVar6) / iVar1 + iVar2;
    param_1->field_04E8 = iVar1;
    st::fn_004045D9
              (st::pointer_boundary_cast<STT3DSprC *>(param_1->field_05FF),(float)param_1->field_04E0 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar4 * _DAT_007904f8 * _DAT_007904f0,
               (float)iVar1 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if ((*(int *)(&DAT_0079aa08 + param_1->field_04D0 * 4) <= param_1->field_04D4) &&
       (param_1->field_04D0 == 3)) {
      st::fn_00403EFE((TLOBaseTy *)param_1,nullptr);
    }
  }
  return 0;
}

// 004EAF60 FUN_004eaf60
#line 4 "decomp/ST.exe/functions/004EAF60/decomp.c"
undefined4 __fastcall st::fn_004EAF60(int param_1)

{
  int iVar1;
  undefined4 uVar2;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  iVar1 = *(int *)(param_1 + 0x4d0);
  uVar2 = 0;
  if ((-1 < iVar1) && ((iVar1 < 3 || (iVar1 == 3)))) {
    uVar2 = 1;
  }
  return uVar2;
}

// 004EAF90 FUN_004eaf90
#line 4 "decomp/ST.exe/functions/004EAF90/decomp.c"
undefined4 __fastcall st::fn_004EAF90(AnonShape_004EAF90_D23494A9 *param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  switch(param_1->field_04D0) {
  case 1:
    if (param_1->field_04D4 == DAT_0079aa0c + -1) {
      return 1;
    }
    break;
  case 3:
    if (param_1->field_04D4 < DAT_0079aa14) {
      return 0;
    }
  case 0:
  case 2:
    uVar1 = 1;
  }
  return uVar1;
}

// 004EB150 FUN_004eb150
#line 4 "decomp/ST.exe/functions/004EB150/decomp.c"
undefined4 __thiscall st::fn_004EB150(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;

  iVar3 = param_1;
  uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
  STField<uint>(this,0x1c) = uVar5;
  if ((uVar5 >> 0x10) % 0x385 + 0x834 + g_packedRecords_A62x8[param_1].field1963_0x9c2 <=
      g_playSystem_00802A38->field_00E4) {
    g_packedRecords_A62x8[param_1].field1963_0x9c2 = g_playSystem_00802A38->field_00E4;
    bVar4 = st::fn_004049B7((char)param_1);
    if (bVar4 != 3) {
      if ((g_playSystem_00802A38->field_00E4 < 30000) ||
         (0 < (int)g_packedRecords_A62x8[param_1].field1964_0x9c6)) {
        if ((59999 < g_playSystem_00802A38->field_00E4) &&
           ((int)g_packedRecords_A62x8[param_1].field1964_0x9c6 < 2)) {
          g_packedRecords_A62x8[param_1].field1964_0x9c6 = 2;
        }
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = 0;
        iVar8 = 0;
        piVar6 = st::pointer_boundary_cast<int *>(&g_packedRecords_A62x8[iVar3].field1952_0x9a2);
      }
      else {
        g_packedRecords_A62x8[param_1].field1964_0x9c6 = 1;
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = 0;
        iVar8 = 0;
        piVar6 = st::pointer_boundary_cast<int *>(&g_packedRecords_A62x8[iVar3].field1952_0x9a2);
      }
      while( true ) {
        do {
          piVar6[1] = *piVar6;
          piVar7 = piVar6 + 2;
          iVar1 = iVar8 + (param_1 + g_packedRecords_A62x8[iVar3].field1964_0x9c6 * 2) * 2;
          iVar2 = (&DAT_007c15c4)[iVar1 * 2];
          iVar1 = *(int *)(&DAT_007c15c0 + iVar1 * 8);
          uVar5 = STField<int>(this,0x1c) * 0x41c64e6d + 0x3039;
          STField<uint>(this,0x1c) = uVar5;
          iVar8 = iVar8 + 1;
          *piVar6 = (uVar5 >> 0x10) % ((iVar2 - iVar1) + 1U) + iVar1;
          piVar6 = piVar7;
        } while (iVar8 < 2);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = param_1 + 1;
        if (1 < param_1) break;
        iVar8 = 0;
      }
    }
  }
  return 0;
}

// 004EB300 FUN_004eb300
#line 4 "decomp/ST.exe/functions/004EB300/decomp.c"
undefined4 st::fn_004EB300(uint param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char recordIndex;

  recordIndex = (char)param_1;
  bVar1 = st::fn_004049B7(recordIndex);
  if (bVar1 == 3) {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0xdd) {
      iVar4 = g_packedRecords_A62x8[param_1].field1954_0x9aa;
      iVar2 = st::fn_00403954(recordIndex);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      st::fn_00403418(recordIndex,param_4);
      param_4 = iVar4 * param_4;
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_2 == 0xe2) {
      iVar4 = g_packedRecords_A62x8[param_1].field1958_0x9ba;
      iVar2 = st::fn_00402284(recordIndex);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      st::fn_00403814(param_1,param_4);
      param_4 = param_4 / iVar4;
    }
    else {
      if ((param_2 != 0xe3) || (uVar3 = st::fn_004036A7(param_1), (int)uVar3 < param_4))
      goto cf_common_exit_004EB53A;
      st::fn_004043F9(param_1,param_4);
    }
    if (param_4 == 0) goto cf_common_exit_004EB53A;
    if (param_3 != 0xdd) {
      if (param_3 == 0xe2) {
        st::fn_00405E6B(param_1,g_packedRecords_A62x8[param_1].field1956_0x9b2 * param_4);
      }
      else if (param_3 == 0xe3) {
        st::fn_00403332(param_1,param_4);
      }
      goto cf_common_exit_004EB53A;
    }
    iVar4 = param_4 / (int)g_packedRecords_A62x8[param_1].field1952_0x9a2;
  }
  else {
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    if (param_2 == 0xdc) {
      iVar4 = st::fn_004016E0(recordIndex);
      if (iVar4 < param_4) goto cf_common_exit_004EB53A;
      st::fn_00403166(recordIndex,param_4);
    }
    /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
    else if (param_2 == 0xdd) {
      iVar4 = g_packedRecords_A62x8[param_1].field1954_0x9aa;
      iVar2 = st::fn_00403954(recordIndex);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      st::fn_00403418(recordIndex,param_4);
      param_4 = param_4 / iVar4;
    }
    else {
      if (param_2 != 0xde) goto cf_common_exit_004EB53A;
      iVar4 = g_packedRecords_A62x8[param_1].field1958_0x9ba;
      iVar2 = st::fn_00402284(recordIndex);
      if (iVar2 < param_4) goto cf_common_exit_004EB53A;
      st::fn_00405367(recordIndex,param_4);
      param_4 = param_4 / iVar4;
    }
    if (param_4 == 0) goto cf_common_exit_004EB53A;
    if (param_3 == 0xdc) {
      st::fn_00404336(recordIndex,param_4);
      goto cf_common_exit_004EB53A;
    }
    if (param_3 != 0xdd) {
      if (param_3 == 0xde) {
        st::fn_004055E7(recordIndex,g_packedRecords_A62x8[param_1].field1956_0x9b2 * param_4);
      }
      goto cf_common_exit_004EB53A;
    }
    iVar4 = g_packedRecords_A62x8[param_1].field1952_0x9a2 * param_4;
  }
  st::fn_00404412(recordIndex,iVar4);
cf_common_exit_004EB53A:
  st::fn_004028F6(recordIndex);
  if (param_1 == DAT_0080874d) {
    st::fn_00404B8D(recordIndex);
  }
  return 0;
}

// 004EB600 FUN_004eb600
#line 4 "decomp/ST.exe/functions/004EB600/decomp.c"
void __thiscall st::fn_004EB600(void *this,short *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;

  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  if ((STField<int>(this,0x5ac) == 0x52) || (STField<int>(this,0x5ac) == 0x5f)) {
    iVar2 = 0;
    psVar4 = param_1;
    do {
      /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
      param_1 = (short *)0x2;
      iVar3 = iVar2;
      psVar5 = psVar4;
      do {
        iVar2 = *(int *)((int)&g_packedRecords_A62x8[STField<int>(this,0x24)].field1952_0x9a2 +
                        iVar3);
        iVar1 = *(int *)((int)&g_packedRecords_A62x8[STField<int>(this,0x24)].field1953_0x9a6 +
                        iVar3);
        if (iVar2 == iVar1) {
          *psVar5 = 0;
        }
        else {
          *psVar5 = (iVar2 <= iVar1) + 1;
        }
        iVar2 = iVar3 + 8;
        psVar4 = psVar5 + 2;
        /* ST_PSEUDO[flattened_global_record_array]: expected typedRecordArray[index].field after inferred base/stride proof */
        psVar5[1] = *(short *)(iVar3 + 0x7f57c2 + STField<int>(this,0x24) * 0xa62);
        /* ST_PSEUDO[stack_slot_reuse]: compiler reused a dead incoming argument slot; split the post-write lifetime into a local variable */
        param_1 = (short *)((int)param_1 + -1);
        iVar3 = iVar2;
        psVar5 = psVar4;
      } while (param_1 != nullptr);
    } while (iVar2 < 0x20);
  }
  return;
}

// 004EB6D0 FUN_004eb6d0
#line 4 "decomp/ST.exe/functions/004EB6D0/decomp.c"
undefined4 __thiscall st::fn_004EB6D0(void *this,int param_1,int param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int uVar2;

  if (param_4 == 0) {
    return 0;
  }
  bVar1 = st::fn_004049B7(STField<char>(this,0x24));
  if (bVar1 == 3) {
    if (param_2 == 0xdd) {
      if (param_1 == 2) {
        uVar3 = st::fn_004036A7(STField<int>(this,0x24));
        if ((int)uVar3 < param_3 * param_4) {
          return 0;
        }
        st::fn_00404412(STField<char>(this,0x24),param_3);
        st::fn_004043F9(STField<int>(this,0x24),param_3 * param_4);
      }
      else {
        if (param_1 != 3) {
          return 0;
        }
        iVar2 = st::fn_00403954(STField<char>(this,0x24));
        if (iVar2 < param_3) {
          return 0;
        }
        st::fn_00403418(STField<char>(this,0x24),param_3);
        st::fn_00403332(STField<int>(this,0x24),param_3 * param_4);
      }
    }
    else {
      if (param_2 != 0xde) {
        return 0;
      }
      if (param_1 == 2) {
        uVar3 = st::fn_004036A7(STField<int>(this,0x24));
        if ((int)uVar3 < param_3 / param_4) {
          return 0;
        }
        st::fn_00405E6B(STField<int>(this,0x24),param_3);
        st::fn_004043F9(STField<int>(this,0x24),param_3 / param_4);
      }
      else {
        if (param_1 != 3) {
          return 0;
        }
        iVar2 = st::fn_00401E6A(STField<byte *>(this,0x24));
        if (iVar2 < param_3) {
          return 0;
        }
        st::fn_00403814(STField<int>(this,0x24),param_3);
        st::fn_00403332(STField<int>(this,0x24),param_3 / param_4);
      }
    }
    goto cf_common_exit_004EB94E;
  }
  if (param_2 == 0xdd) {
    if (param_1 == 2) {
      iVar2 = st::fn_004016E0(STField<char>(this,0x24));
      if (iVar2 < param_3 / param_4) {
        return 0;
      }
      st::fn_00404412(STField<char>(this,0x24),param_3);
      goto LAB_004eb93e;
    }
    if (param_1 != 3) {
      return 0;
    }
    iVar2 = st::fn_00403954(STField<char>(this,0x24));
    if (iVar2 < param_3) {
      return 0;
    }
    st::fn_00403418(STField<char>(this,0x24),param_3);
  }
  else {
    if (param_2 != 0xde) {
      return 0;
    }
    if (param_1 == 2) {
      iVar2 = st::fn_004016E0(STField<char>(this,0x24));
      if (iVar2 < param_3 / param_4) {
        return 0;
      }
      st::fn_004055E7(STField<char>(this,0x24),param_3);
LAB_004eb93e:
      st::fn_00403166(STField<char>(this,0x24),param_3 / param_4);
      goto cf_common_exit_004EB94E;
    }
    if (param_1 != 3) {
      return 0;
    }
    iVar2 = st::fn_00402284(STField<char>(this,0x24));
    if (iVar2 < param_3) {
      return 0;
    }
    st::fn_00405367(STField<char>(this,0x24),param_3);
  }
  st::fn_00404336(STField<char>(this,0x24),param_3 / param_4);
cf_common_exit_004EB94E:
  st::fn_004028F6(STField<char>(this,0x24));
  if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
    st::fn_00404B8D((char)STField<uint>(this,0x24));
    uVar2 = st::fn_004049B7(STField<char>(this,0x24));
    uVar2 = (int)(byte)uVar2;
    if (uVar2 == 1) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(6,0x6e);
    }
    else {
      if (uVar2 == 2) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x90))(6,0x6f);
        return 0;
      }
      if (uVar2 == 3) {
        /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
        (**(code **)(*(int *)this + 0x90))(6,0x70);
        return 0;
      }
    }
  }
  return 0;
}

// 004EBAB0 FUN_004ebab0
#line 4 "decomp/ST.exe/functions/004EBAB0/decomp.c"
undefined4 __thiscall st::fn_004EBAB0(void *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;

  iVar2 = st::fn_00405470(st::pointer_boundary_cast<STBoatC *>(this));
  if ((iVar2 != 0) && (STField<int>(this,0x5b8) < g_worldGrid.sizeZ + -1)) {
    if (param_1 == 0xdc) {
      iVar2 = st::fn_004016E0(STField<char>(this,0x24));
      if (iVar2 < param_2) {
        return 0;
      }
      st::fn_00403166(STField<char>(this,0x24),param_2);
    }
    else if (param_1 == 0xdd) {
      iVar2 = st::fn_00403954(STField<char>(this,0x24));
      if (iVar2 < param_2) {
        return 0;
      }
      st::fn_00403418(STField<char>(this,0x24),param_2);
    }
    else {
      if (param_1 != 0xde) {
        return 0;
      }
      bVar1 = st::fn_004049B7(STField<char>(this,0x24));
      if (bVar1 == 3) {
        iVar2 = st::fn_00401E6A(STField<byte *>(this,0x24));
        if (iVar2 < param_2) {
          return 0;
        }
        st::fn_00403814(STField<int>(this,0x24),param_2);
      }
      else {
        iVar2 = st::fn_00402284(STField<char>(this,0x24));
        if (iVar2 < param_2) {
          return 0;
        }
        st::fn_00405367(STField<char>(this,0x24),param_2);
      }
    }
    st::fn_004028F6(STField<char>(this,0x24));
    if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
      st::fn_00404B8D((char)STField<uint>(this,0x24));
    }
    STField<undefined4>(this,0x4d0) = 2;
    STField<int>(this,0x4dc) = param_1;
    STField<int>(this,0x4e0) = param_2;
    STField<undefined4>(this,0x4ec) = 0;
    bVar1 = st::fn_004049B7(STField<char>(this,0x24));
    STField<uint>(this,0x50c) = (uint)bVar1;
    st::fn_00402CF7(st::pointer_boundary_cast<TLOBaseTy *>(this),0);
  }
  return 0;
}

// 004EBCB0 FUN_004ebcb0
#line 4 "decomp/ST.exe/functions/004EBCB0/decomp.c"
void __thiscall st::fn_004EBCB0(void *this,int param_1,int param_2)

{
  byte bVar1;
  int iVar2;

  iVar2 = st::fn_00405470(st::pointer_boundary_cast<STBoatC *>(this));
  if ((iVar2 != 0) && (STField<int>(this,0x5b8) < g_worldGrid.sizeZ + -1)) {
    STField<int>(this,0x508) = param_1;
    STField<undefined4>(this,0x4d0) = 3;
    STField<int>(this,0x50c) = param_2;
    STField<undefined4>(this,0x4dc) = 0;
    STField<undefined4>(this,0x4e0) = 0;
    STField<undefined4>(this,0x4ec) = 0;
    st::fn_00402CF7(st::pointer_boundary_cast<TLOBaseTy *>(this),0);
    if (STField<int>(this,0x5ac) == 0x52) {
      iVar2 = *(int *)this;
      bVar1 = st::fn_004049B7(STField<char>(this,0x23d));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(iVar2 + 0x90))(3,(-(uint)(bVar1 != 2) & 0xffffff3b) + 0x35e);
      return;
    }
    if (STField<int>(this,0x5ac) == 0x5f) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(3,0x3b1);
    }
  }
  return;
}

// 004EBDA0 FUN_004ebda0
#line 4 "decomp/ST.exe/functions/004EBDA0/decomp.c"
void __thiscall
st::fn_004EBDA0(void *this,int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;

  if ((STField<int>(this,0x508) == param_1) && (STField<int>(this,0x4d0) == 3)) {
    iVar1 = st::fn_004042AF((void *)((int)this + 0x1d5),'\x0e');
    if (iVar1 == *(int *)(STField<int>(this,0x1f5) + 0x20c)) {
      if (param_2 == 0xdc) {
        st::fn_00404336(STField<char>(this,0x24),param_3);
      }
      else if (param_2 == 0xdd) {
        st::fn_00404412(STField<char>(this,0x24),param_3);
      }
      else if (param_2 == 0xde) {
        st::fn_004055E7(STField<char>(this,0x24),param_3);
      }
      st::fn_004028F6(STField<char>(this,0x24));
      if (STField<uint>(this,0x24) == (uint)*(byte *)(STField<int>(this,0x10) + 0x112d)) {
        st::fn_00404B8D((char)STField<uint>(this,0x24));
      }
      STField<undefined4>(this,0x4fc) = param_4;
      STField<undefined4>(this,0x500) = param_5;
      STField<undefined4>(this,0x504) = param_6;
      STField<undefined4>(this,0x4d0) = 6;
      STField<undefined4>(this,0x510) = 0;
      STField<uint>(this,0x514) = g_playSystem_00802A38->field_00E4;
      st::fn_00401F0F(st::pointer_boundary_cast<AnonShape_004EC0F0_C371FA68 *>(this));
      st::fn_00402CF7(st::pointer_boundary_cast<TLOBaseTy *>(this),0);
    }
  }
  return;
}

// 004EBF10 FUN_004ebf10
#line 4 "decomp/ST.exe/functions/004EBF10/decomp.c"
void __thiscall st::fn_004EBF10(void *this,int param_1)

{
  int iVar1;
  byte bVar2;

  if (STField<int>(this,0x508) == param_1) {
    STField<undefined4>(this,0x4d0) = 5;
    st::fn_00403616(st::pointer_boundary_cast<TLOBaseTy *>(this));
    st::fn_00402CF7(st::pointer_boundary_cast<TLOBaseTy *>(this),0);
    if (STField<int>(this,0x5ac) == 0x52) {
      iVar1 = *(int *)this;
      bVar2 = st::fn_004049B7(STField<char>(this,0x23d));
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(iVar1 + 0x90))(3,(-(uint)(bVar2 != 2) & 0xffffff3b) + 0x35f);
      return;
    }
    if (STField<int>(this,0x5ac) == 0x5f) {
      /* ST_PSEUDO[raw_indirect_call]: expected typed vtable/callback call with explicit __thiscall receiver */
      (**(code **)(*(int *)this + 0x90))(3,0x3b2);
    }
  }
  return;
}

// 004EBFD0 FUN_004ebfd0
#line 4 "decomp/ST.exe/functions/004EBFD0/decomp.c"
void __thiscall st::fn_004EBFD0(void *this,int *param_1,int *param_2,int *param_3,undefined4 *param_4)

{
  *param_1 = STField<int>(this,0x5b0) * 0xc9 + 0xdc;
  *param_2 = STField<int>(this,0x5b4) * 0xc9 + 100;
  *param_3 = STField<int>(this,0x5b8) * 0xc9 + 0x3c;
  *param_4 = 0x5a;
  return;
}

// 004EC2A0 FUN_004ec2a0
#line 4 "decomp/ST.exe/functions/004EC2A0/decomp.c"
undefined4 __fastcall st::fn_004EC2A0(int param_1)

{
  int iVar2;
  int iVar1;
  uint uVar3;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (((*(uint *)(param_1 + 0x1f1) & 0x4000) != 0) &&
     (((iVar2 = *(int *)(param_1 + 0x4d0), iVar2 == 3 || (iVar2 == 4)) || (iVar2 == 5)))) {
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) < *(int *)(*(int *)(param_1 + 0x1f5) + 0x158)) {
      iVar2 = st::fn_004042AF((void *)(param_1 + 0x1d5),'\t');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (iVar2 < *(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + 2) {
        return 0;
      }
    }
    else {
      iVar2 = st::fn_004042AF((void *)(param_1 + 0x1d5),'\t');
      /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
      if (*(int *)(*(int *)(param_1 + 0x1f5) + 0x154) + -2 < iVar2) {
        return 0;
      }
    }
    iVar1 = st::fn_0040581C();
    uVar3 = 0;
    switch(iVar1) {
    case 0:
      uVar3 = DAT_0079aa90;
      break;
    case 1:
      uVar3 = DAT_0079aa94;
      break;
    case 2:
      uVar3 = DAT_0079aa98;
      break;
    case 3:
      uVar3 = DAT_0079aa9c;
    }
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00401EBA(*(void **)(param_1 + 0x5ff),0xe,uVar3,uVar3,'\0');
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00401064(*(STT3DSprC **)(param_1 + 0x5ff),'\x0e',uVar3);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    st::fn_00405240(*(STT3DSprC **)(param_1 + 0x5ff),0xe,g_playSystem_00802A38->field_00E4);
  }
  return 0;
}

// 004EC400 FUN_004ec400
#line 4 "decomp/ST.exe/functions/004EC400/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_004EC400(AnonShape_004EC400_367D4575 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (param_1->field_04D0 == 4) {
    if (param_1->field_0514 + 1 <= g_playSystem_00802A38->field_00E4) {
      iVar3 = st::machine_word_boundary_cast<int>(param_1->field_0504 + 3);
      param_1->field_0514 = g_playSystem_00802A38->field_00E4;
      param_1->field_0510 = st::machine_word_boundary_cast<int>(param_1->field_0510 + 1);
      param_1->field_0504 = iVar3;
      st::fn_004045D9
                (st::pointer_boundary_cast<STT3DSprC *>(param_1->field_05FF),(float)param_1->field_04FC * _DAT_007904f8 * _DAT_007904f0,
                 (float)param_1->field_0500 * _DAT_007904f8 * _DAT_007904f0,
                 (float)iVar3 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    }
  }
  if ((param_1->field_04D0 == 6) && (param_1->field_0514 + 1 <= g_playSystem_00802A38->field_00E4))
  {
    param_1->field_0514 = g_playSystem_00802A38->field_00E4;
    param_1->field_0510 = st::machine_word_boundary_cast<int>(param_1->field_0510 + 1);
    iVar1 = param_1->field_04FC;
    iVar2 = st::machine_word_boundary_cast<int>(param_1->field_05B0 * 0xc9);
    iVar3 = iVar2 + 0xdc;
    if (iVar1 != iVar3) {
      iVar2 = ((iVar2 - iVar1) + 0xdc) / 0x1e;
      if (iVar2 == 0) {
        iVar2 = ((iVar3 <= iVar1) - 1 & 2) - 1;
      }
      param_1->field_04FC = iVar1 + iVar2;
    }
    iVar2 = st::machine_word_boundary_cast<int>(param_1->field_05B4 * 0xc9);
    iVar1 = param_1->field_0500;
    iVar3 = iVar2 + 100;
    if (iVar1 != iVar3) {
      iVar2 = ((iVar2 - iVar1) + 100) / 0x1e;
      if (iVar2 == 0) {
        iVar2 = ((iVar3 <= iVar1) - 1 & 2) - 1;
      }
      param_1->field_0500 = iVar1 + iVar2;
    }
    iVar2 = st::machine_word_boundary_cast<int>(param_1->field_05B8 * 0xc9);
    iVar1 = param_1->field_0504;
    iVar3 = iVar2 + -0x28;
    if (iVar1 != iVar3) {
      iVar2 = ((iVar2 - iVar1) + -0x28) / 0x1e;
      if (iVar2 == 0) {
        iVar2 = ((iVar3 <= iVar1) - 1 & 2) - 1;
      }
      param_1->field_0504 = iVar1 + iVar2;
    }
    st::fn_004045D9
              (st::pointer_boundary_cast<STT3DSprC *>(param_1->field_05FF),(float)param_1->field_04FC * _DAT_007904f8 * _DAT_007904f0,
               (float)param_1->field_0500 * _DAT_007904f8 * _DAT_007904f0,
               (float)param_1->field_0504 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
  }
  return 0;
}

// 004EC6C0 FUN_004ec6c0
#line 4 "decomp/ST.exe/functions/004EC6C0/decomp.c"
undefined4 st::fn_004EC6C0(void)

{
  return 1;
}

// 004EC6E0 FUN_004ec6e0
#line 4 "decomp/ST.exe/functions/004EC6E0/decomp.c"
undefined4 st::fn_004EC6E0(void)

{
  return 1;
}

// 004EC700 FUN_004ec700
#line 4 "decomp/ST.exe/functions/004EC700/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004EC700_param_1Enum. Cases:
   CASE_7=7;CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004EC700 @ 004CB117

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004EC700 @ 004CB117 */

void __thiscall
st::fn_004EC700(void *this,Global_sub_004EC700_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar4;
  int uVar3;
  int iVar5;

  uVar3 = st::fn_004049B7(STField<char>(this,0x23d));
  uVar3 = (int)(byte)uVar3;
  iVar1 = STField<int>(this,0x245);
  iVar5 = uVar3 + -1;
  switch(param_1) {
  case CASE_7:
  case CASE_D:
  case CASE_E:
    iVar2 = STField<int>(this,0x4d0);
    break;
  case CASE_8:
  case CASE_9:
    iVar2 = STField<int>(this,0x4d0);
    break;
  default:
    goto switchD_004ec735_caseD_a;
  }
  if (iVar2 != 3) {
    if ((iVar2 != 4) && (iVar2 != 6)) {
      if (iVar2 == 5) {
        *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                            (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
        *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                            (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
        return;
      }
      uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
      *param_4 = uVar4;
      *param_3 = uVar4;
      return;
    }
    uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                     (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
    *param_4 = uVar4;
    *param_3 = uVar4;
    return;
  }
switchD_004ec735_caseD_a:
  *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
  *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
  return;
}

// 004EC900 FUN_004ec900
#line 4 "decomp/ST.exe/functions/004EC900/decomp.c"
/* [STSwitchEnumApplier] Switch target param_1 uses
   /SubmarineTitans/Recovered/Enums/Global_sub_004EC900_param_1Enum. Cases:
   CASE_8=8;CASE_9=9;CASE_D=13;CASE_E=14

   [STPrototypeApplier] Propagated parameter 3.
   Evidence: 004CAFC0 -> 004EC900 @ 004CB13A

   [STPrototypeApplier] Propagated parameter 4.
   Evidence: 004CAFC0 -> 004EC900 @ 004CB13A */

void __thiscall
st::fn_004EC900(void *this,Global_sub_004EC900_param_1Enum param_1,int param_2,uint *param_3,
            uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar4;
  int uVar3;
  int iVar5;

  uVar3 = st::fn_004049B7(STField<char>(this,0x23d));
  uVar3 = (int)(byte)uVar3;
  iVar1 = STField<int>(this,0x245);
  iVar5 = uVar3 + -1;
  switch(param_1) {
  case CASE_8:
  case CASE_9:
  case CASE_D:
  case CASE_E:
    iVar2 = STField<int>(this,0x4d0);
    if (iVar2 != 3) {
      if ((iVar2 != 4) && (iVar2 != 6)) {
        if (iVar2 == 5) {
          *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                              (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
          *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                              (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
          return;
        }
        uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                         (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
        *param_4 = uVar4;
        *param_3 = uVar4;
        return;
      }
      uVar4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                       (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
      *param_4 = uVar4;
      *param_3 = uVar4;
      return;
    }
  }
  *param_3 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8);
  *param_4 = *(uint *)((&PTR_DAT_007b5170)[iVar1] +
                      (param_2 + (iVar5 + STField<int>(this,0x235) * 3) * 4) * 8 + 4);
  return;
}

// 004ECAC0 FUN_004ecac0
#line 4 "decomp/ST.exe/functions/004ECAC0/decomp.c"
undefined4 __fastcall st::fn_004ECAC0(int param_1)

{
  DArrayTy *pDVar1;
  int local_8;

  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  if (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1975_0x9f2 == nullptr) {
    local_8 = param_1;
    pDVar1 = st::fn_006AE290(nullptr,10,4,10);
    /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
    g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1975_0x9f2 = pDVar1;
  }
  local_8 = param_1;
  /* ST_PSEUDO[raw_pointer_offset]: candidate structure field after proof; otherwise retain buffer arithmetic */
  st::fn_006AE1C0
            (g_packedRecords_A62x8[*(int *)(param_1 + 0x24)].field1975_0x9f2,&local_8);
  return 0;
}

// 004ECB60 FUN_004ecb60
#line 4 "decomp/ST.exe/functions/004ECB60/decomp.c"
/* [STPrototypeApplier] Propagated parameter 0.
   Evidence: 004B9A40 -> 004ECB60 @ 004B9B10; TLOBaseTy::sub_004B9A40 this; stable alias ESI */

undefined4 __fastcall st::fn_004ECB60(TLOBaseTy *param_1)

{
  DArrayTy *array;
  uint index;
  TLOBaseTy *local_8;

  array = g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2;
  if (array != nullptr) {
    index = 0;
    local_8 = param_1;
    if (0 < (int)array->count) {
      do {
        st::fn_006ACC70(array,index,&local_8);
        if (local_8 == param_1) {
          st::fn_006B0C70(g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2,index);
          break;
        }
        index = index + 1;
        array = g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2;
      } while ((int)index < (int)array->count);
    }
    if ((g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2)->count == 0) {
      st::fn_006AE110(g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2);
      g_packedRecords_A62x8[(int)param_1->field_0024].field1975_0x9f2 = nullptr;
    }
  }
  return 0;
}

// 004ECC70 FUN_004ecc70
#line 4 "decomp/ST.exe/functions/004ECC70/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004ECC70 returns zeroed full register at 004ECC98 @ 004ECCA1 */

uint __fastcall st::fn_004ECC70(AnonShape_004ECC70_4D35D723 *param_1)

{
  if (param_1->field_05AC == 0x6f) {
    st::fn_00404192(param_1,8);
  }
  param_1->field_04D0 = 5000;
  param_1->field_04D4 = g_playSystem_00802A38->field_00E4;
  return 0;
}

// 004ECCC0 FUN_004eccc0
#line 4 "decomp/ST.exe/functions/004ECCC0/decomp.c"
/* [STPrototypeApplier] Propagated return.
   Evidence: 004ECCC0 returns zeroed full register at 004ECCD0 @ 004ECCD2 */

uint __fastcall st::fn_004ECCC0(int *param_1)

{
  if (param_1[0x16b] == 0x6f) {
    st::fn_004029F0((AnonShape_0041D4F0_1597DF6B *)param_1);
  }
  return 0;
}

// 004ECCF0 FUN_004eccf0
#line 4 "decomp/ST.exe/functions/004ECCF0/decomp.c"
undefined4 __fastcall st::fn_004ECCF0(AnonShape_004ECC70_4D35D723 *param_1)

{
  int iVar2;
  int iVar1;
  longlong lVar3;

  if ((param_1->field_04D4 + 0x19 <= g_playSystem_00802A38->field_00E4) &&
     (param_1->field_04D4 = g_playSystem_00802A38->field_00E4, (int)param_1->field_04D0 < 5000)) {
    lVar3 = st::fn_006B12CC(0x19);
    iVar2 = (int)lVar3;
    lVar3 = st::fn_006B12CC(0x1194);
    iVar2 = st::fn_006B12A8((int)lVar3,iVar2);
    lVar3 = st::fn_006B12CC(5000);
    iVar2 = st::fn_006B12A8((int)lVar3,iVar2);
    iVar1 = st::fn_006B1280(iVar2);
    iVar2 = st::machine_word_boundary_cast<int>(param_1->field_04D0 + iVar1);
    param_1->field_04D0 = iVar2;
    if ((4999 < iVar2) && (param_1->field_04D0 = 5000, param_1->field_05AC == 0x73)) {
      st::fn_00401B4A((AnonShape_004C2C10_59B6D93C *)param_1);
    }
  }
  return 0;
}

// 004ECDD0 FUN_004ecdd0
#line 4 "decomp/ST.exe/functions/004ECDD0/decomp.c"
void __fastcall st::fn_004ECDD0(int param_1)

{
  *(undefined4 *)(param_1 + 0x4d0) = 0;
  *(undefined4 *)(param_1 + 0x261) = 0;
  return;
}

// 004ECDF0 FUN_004ecdf0
#line 4 "decomp/ST.exe/functions/004ECDF0/decomp.c"
undefined4 __fastcall st::fn_004ECDF0(AnonShape_004D9BD0_B3B50583 *param_1)

{
  int iVar1;

  iVar1 = param_1->field_0245;
  if (iVar1 == 0) {
    if (param_1->field_04D0 != 0) {
      if (param_1->field_04D0 != 1) {
        return 0;
      }
      param_1->field_0261 = 1;
      return 0;
    }
  }
  else {
    if ((iVar1 != 1) && (iVar1 != 6)) {
      return 0;
    }
    param_1->field_04D0 = 0;
  }
  param_1->field_0261 = 0;
  return 0;
}

// 004ECE40 FUN_004ece40
#line 4 "decomp/ST.exe/functions/004ECE40/decomp.c"
undefined4 __fastcall st::fn_004ECE40(TLOBaseTy *param_1)

{
  if (param_1->field_04D0 == CASE_0) {
    param_1->field_04D0 = CASE_1;
    st::fn_00401A0F(param_1);
    st::fn_00402CF7(param_1,0);
  }
  return 1;
}

// 004ECE80 FUN_004ece80
#line 4 "decomp/ST.exe/functions/004ECE80/decomp.c"
undefined4 st::fn_004ECE80(void)

{
  return 0;
}

// 004ED210 FUN_004ed210
#line 4 "decomp/ST.exe/functions/004ED210/decomp.c"
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall st::fn_004ED210(TLOBaseTy *param_1)

{
  uint uVar1;
  short sVar2;
  TLOBaseTy_field_04D0State TVar3;
  int iVar4;
  uint uVar5;
  int iVar6;

  TVar3 = param_1->field_04D0;
  if ((TVar3 == CASE_3) || (TVar3 == CASE_5)) {
    iVar4 = st::fn_004042AF(&param_1->field_01D5,'\x0e');
    if (iVar4 != param_1->field_01F5->field_020C) {
      return 0;
    }
  }
  else {
    if (TVar3 != CASE_4) {
      return 0;
    }
    if (DAT_0079aab8 < 2) {
      return 0;
    }
    if (DAT_0079aab8 <= param_1->field_04D4) {
      return 0;
    }
    if (g_playSystem_00802A38->field_00E4 < param_1->field_04DC + param_1->field_04D8) {
      return 0;
    }
    iVar6 = st::machine_word_boundary_cast<int>(param_1->field_04D4 + 1);
    param_1->field_04D8 = g_playSystem_00802A38->field_00E4;
    param_1->field_04D4 = iVar6;
    iVar4 = ((_UNK_0079ab34 - _UNK_0079ab28) * iVar6) / DAT_0079aab8 + _UNK_0079ab28;
    uVar5 = ((_UNK_0079ab30 - _UNK_0079ab24) * iVar6) / DAT_0079aab8 + _UNK_0079ab24 +
            (int)param_1->field_0043;
    param_1->field_04E0[0] =
         (int)param_1->field_0041 +
         _UNK_0079ab20 + ((_UNK_0079ab2c - _UNK_0079ab20) * iVar6) / DAT_0079aab8;
    sVar2 = param_1->field_0045;
    param_1->field_04E0[1] = uVar5;
    uVar1 = sVar2 + iVar4;
    param_1->field_04E0[2] = uVar1;
    st::fn_004045D9
              ((STT3DSprC *)param_1->field_05FF,
               (float)(int)param_1->field_04E0[0] * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar5 * _DAT_007904f8 * _DAT_007904f0,
               (float)(int)uVar1 * _DAT_007904f8 * _DAT_007904f0 + _DAT_007904fc);
    if (param_1->field_04D4 < *(int *)(&DAT_0079aaa8 + param_1->field_04D0 * 4)) {
      return 0;
    }
    st::fn_00403EFE(param_1,nullptr);
  }
  st::fn_00401866((AnonShape_004D9C80_80F657D3 *)param_1);
  st::fn_00402CF7(param_1,0);
  return 0;
}

// 004ED540 CreateBehPanel
#line 4 "decomp/ST.exe/functions/004ED540/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA844>00404B01

   [STObjectFactoryApplier] Central object factory for 0x014A (ST_OBJECT_BEH_PANEL).
   Evidence: registry[36] at 007CA840 stores type 0x014A and executable pointer 00404B01; allocation
   size 700 uniquely matches /BehPanelTy */

BehPanelTy * __cdecl st::fn_004ED540(void)

{
  BehPanelTy *this;

  this = (BehPanelTy *)st::fn_006B04D0(700);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    this->field_0178 = 0;
    this->field_017C = 0;
    this->field_0185 = 0;
    this->field_0189 = 0;
    this->vtable = &st_global_0079AB74;
    this->field_0040 = 0xf7;
    this->field_0048 = 0x8c;
    this->field_003C = 0x3b;
    this->field_0044 = 0;
    this->field_0180 = 1;
    this->field_0184 = 0;
    this->field_01CA = 0;
    this->field_01C6 = 0;
    this->field_01C2 = 0;
    this->field_01BE = 0;
    memset(&this->field_01CE, 0, 0xea); /* compiler bulk-zero initialization */
    this->field_02B8 = nullptr;
    return this;
  }
  return nullptr;
}

// 004EE8E0 CreateBldBoatPanel
#line 4 "decomp/ST.exe/functions/004EE8E0/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8DC>00403571

   [STObjectFactoryApplier] Central object factory for 0x0128 (ST_OBJECT_TYPE_0128).
   Evidence: registry[55] at 007CA8D8 stores type 0x0128 and executable pointer 00403571; allocation
   size 662 has no unique current class-layout match */

BldBoatPanelTy * __cdecl st::fn_004EE8E0(void)

{
  BldBoatPanelTy *this;
  undefined4 *puVar2;

  this = (BldBoatPanelTy *)st::fn_006B04D0(0x296);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    this->field_0178 = 0;
    this->field_017C = 0;
    this->field_0184 = nullptr;
    this->field_0190 = nullptr;
    this->field_0188 = nullptr;
    this->field_019D = 0;
    this->field_0180 = 0;
    this->field_01A1 = 0;
    this->field_01A5 = 0;
    this->field_01A9 = 0;
    this->field_01AD = 0;
    this->field_01B1 = 0;
    puVar2 = (undefined4 *)&this->field_01B5;
    memset(puVar2, 0, 0xc3); /* compiler bulk-zero initialization */
    puVar2 = (undefined4 *)((byte *)puVar2 + 0xc0);
    this->field_0199 = 0;
    this->field_0279 = 1;
    this->field_0278 = 0;
    this->vtable = &st_global_0079ABA0;
    this->field_003C = 0x1c7;
    this->field_0044 = 0;
    this->field_0040 = 0x13d;
    this->field_0048 = 0x78;
    this->field_0194 = 0;
    this->field_0195 = 0;
    this->field_028A = nullptr;
    this->field_028E = nullptr;
    this->field_0292 = 0;
    this->field_027A = 0;
    this->field_027E = 0;
    this->field_0282 = 0;
    this->field_0286 = 0;
    return this;
  }
  return nullptr;
}

// 004EEF20 FUN_004eef20
#line 4 "decomp/ST.exe/functions/004EEF20/decomp.c"
void __fastcall st::fn_004EEF20(AnonShape_004EEF20_59DE1DA2 *param_1)

{
  undefined4 *puVar1;
  int iVar2;

  if ((uint *)param_1->field_028A != nullptr) {
    st::fn_00710560((uint *)param_1->field_028A);
    param_1->field_028A = 0;
  }
  if (param_1->field_0292 != 0) {
    st::fn_006E56B0(param_1->field_000C,param_1->field_0292);
  }
  param_1->field_0292 = 0;
  puVar1 = (undefined4 *)&param_1->field_0x27a;
  iVar2 = 4;
  do {
    if ((DArrayTy *)*puVar1 != nullptr) {
      st::fn_006AE110((DArrayTy *)*puVar1);
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  g_bldBoatPanel_0080167C = nullptr;
  return;
}

// 004EF5F0 FUN_004ef5f0
#line 4 "decomp/ST.exe/functions/004EF5F0/decomp.c"
char __cdecl st::fn_004EF5F0(AnonShape_004EF5F0_1FA558EC *param_1)

{
  AnonNested_004EF5F0_0014_2E827CED *pAVar1;
  char cVar2;
  bool bVar3;

  bVar3 = false;
  cVar2 = '\b';
  pAVar1 = param_1->field_0014;
  switch(pAVar1->field_0000) {
  case 1:
    cVar2 = '\b';
    break;
  case 2:
    cVar2 = '\n';
    break;
  case 3:
    cVar2 = '\f';
    break;
  case 4:
    cVar2 = '\x06';
  }
  switch(pAVar1->field_0004) {
  case 0:
  case 2:
    return cVar2;
  case 1:
    return cVar2 + '\x01';
  case 3:
    bVar3 = pAVar1->field_0008 != 0;
  }
  return bVar3 + cVar2;
}

// 004EFA40 CreateBldLabPanel
#line 4 "decomp/ST.exe/functions/004EFA40/decomp.c"
/* [STUnclaimedCodeApplier] Exact function entry recovered from thunk_target.
   Evidence: P:007CA8F4>0040184D

   [STObjectFactoryApplier] Central object factory for 0x0151 (ST_OBJECT_BLD_LAB_PANEL).
   Evidence: registry[58] at 007CA8F0 stores type 0x0151 and executable pointer 0040184D; allocation
   size 638 uniquely matches /BldLabPanelTy */

BldLabPanelTy * __cdecl st::fn_004EFA40(void)

{
  BldLabPanelTy *this;
  undefined4 *puVar2;

  this = (BldLabPanelTy *)st::fn_006B04D0(0x27e);
  if (this != nullptr) {
    st::fn_006E5FB0(this);
    this->field_005C = 0;
    this->field_0060 = 0xffffffff;
    this->field_0064 = 4;
    this->field_0068 = 0;
    this->field_0172 = 2;
    this->field_0178 = 0;
    this->field_017C = 0;
    this->field_0184 = nullptr;
    this->field_0190 = nullptr;
    this->field_0188 = nullptr;
    this->field_019D = 0;
    this->field_0180 = 0;
    this->field_01A1 = 0;
    this->field_01A5 = 0;
    this->field_01A9 = 0;
    this->field_01AD = 0;
    this->field_01B1 = 0;
    puVar2 = (undefined4 *)&this->field_01B5;
    memset(puVar2, 0, 0xc3); /* compiler bulk-zero initialization */
    puVar2 = (undefined4 *)((byte *)puVar2 + 0xc0);
    this->field_0199 = 0;
    this->field_0279 = 1;
    this->field_0278 = 0;
    this->vtable = &st_global_0079ABC8;
    this->field_003C = 0x1c7;
    this->field_0044 = 0;
    this->field_0040 = 0x13d;
    this->field_0048 = 0x78;
    this->field_0194 = 0;
    this->field_0195 = 0;
    this->field_027A = nullptr;
    return this;
  }
  return nullptr;
}


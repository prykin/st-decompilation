#include "../../pseudocode_runtime.h"


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

undefined4 __fastcall FUN_004e0830(TLOBaseTy *param_1)

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
          thunk_FUN_004e04a0((AnonShape_004E04A0_3A5B2D2E *)param_1);
          switch(param_1->field_05AC) {
          case CASE_39:
switchD_004e08b2_caseD_39:
            pTVar10 = param_1->vtable;
            bVar5 = LookupRecordByte(*(char *)&param_1->field_023D);
            (*pTVar10->vfunc_90)(param_1,3,(-(ushort)(bVar5 != 2) & 0xff3a) + 0x2e9);
            break;
          case CASE_3B:
switchD_004e08b2_caseD_3b:
            pTVar10 = param_1->vtable;
            bVar5 = LookupRecordByte(*(char *)&param_1->field_023D);
            (*pTVar10->vfunc_90)(param_1,3,(-(ushort)(bVar5 != 2) & 0xff3a) + 0x2f6);
            break;
          case CASE_4F:
switchD_004e08b2_caseD_4f:
            pTVar10 = param_1->vtable;
            bVar5 = LookupRecordByte(*(char *)&param_1->field_023D);
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
          thunk_FUN_004e04a0((AnonShape_004E04A0_3A5B2D2E *)param_1);
        }
      }
      else if (uVar12 == 2) {
        if (param_1->field_04E0[1] == 0) {
          param_1->field_04E0[2] = 3;
          thunk_FUN_004e04a0((AnonShape_004E04A0_3A5B2D2E *)param_1);
          switch(param_1->field_05AC) {
          case CASE_39:
            goto switchD_004e08b2_caseD_39;
          case CASE_3B:
            goto switchD_004e08b2_caseD_3b;
          case CASE_4F:
            goto switchD_004e08b2_caseD_4f;
          case CASE_52:
            pTVar10 = param_1->vtable;
            bVar5 = LookupRecordByte(*(char *)&param_1->field_023D);
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
        bVar5 = LookupRecordByte(*(char *)&param_1->field_0024);
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
        TLOBaseTy::RotateSpr(param_1,1);
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
              if (g_tLOFake_00800BCC == nullptr) {
                thunk_FUN_004cf430();
              }
              TLOFakeTy::sub_004D0970
                        (g_tLOFake_00800BCC,param_1->field_04E0[4],param_1->field_04E0[5],
                         param_1->field_04E0[6]);
              param_1->field_04D0 = CASE_3;
              iVar8 = param_1->field_05B4;
              param_1->field_04E0[7] = param_1->field_05B0 * 0xc9 + 0xdc;
              iVar2 = param_1->field_05B8;
              param_1->field_04E0[8] = iVar8 * 0xc9 + 100;
              param_1->field_04E0[9] = iVar2 * 0xc9 - 0x28;
              thunk_FUN_004ec0f0((AnonShape_004EC0F0_C371FA68 *)param_1);
              TLOBaseTy::RotateSpr(param_1,0);
              if (param_1->field_05AC == CASE_52) {
                pTVar10 = param_1->vtable;
                bVar5 = LookupRecordByte(*(char *)&param_1->field_023D);
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
    iVar8 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (((int)param_1->field_01F5->field_020C <= iVar8) && (param_1->field_04DC != 0)) {
      pSVar3 = param_1->field_0010;
      pbVar4 = param_1->field_0024;
      param_1->field_04E0[10] = 0;
      if (pbVar4 == (byte *)(uint)(byte)pSVar3->field_112D) {
        thunk_FUN_0052af50(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
      }
      param_1->field_04D0 = CASE_4;
      param_1->field_04E0[0xc] = 0;
      param_1->field_04E0[0xd] = g_playSystem_00802A38->field_00E4;
      TLOBaseTy::RotateSpr(param_1,0);
    }
    break;
  case CASE_4:
    if ((int)param_1->field_04E0[0xc] < 0x1e) break;
    TLOFakeTy::sub_004D0A80
              (g_tLOFake_00800BCC,param_1->field_04E0[4],param_1->field_04E0[5],
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
    bVar5 = LookupRecordByte(cVar23);
    thunk_FUN_005fd1b0(param_1->field_0024,(uint)bVar5,uVar15,uVar16,uVar17,uVar18,uVar19,uVar9,
                       uVar20,uVar12,pcVar21,piVar22,uVar25);
    if (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D) {
      thunk_FUN_0052af50(0,(float)param_1->field_01F9,(float)param_1->field_01FD);
      uVar10 = LookupRecordByte(*(char *)&param_1->field_0024);
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
    thunk_FUN_004cbf70(param_1);
    TLOBaseTy::RotateSpr(param_1,0);
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
    iVar8 = thunk_FUN_004ac910(&param_1->field_01D5,'\x0e');
    if (iVar8 == param_1->field_01F5->field_020C) {
      param_1->field_04D0 = CASE_0;
      param_1->field_04DC = 0;
      param_1->field_04E0[10] = 0;
      thunk_FUN_004cbf70(param_1);
      TLOBaseTy::RotateSpr(param_1,0);
    }
    break;
  case CASE_6:
    if (((param_1->field_04E0[7] != param_1->field_05B0 * 0xc9 + 0xdcU) ||
        (param_1->field_04E0[8] != param_1->field_05B4 * 0xc9 + 100U)) ||
       (param_1->field_04E0[9] != param_1->field_05B8 * 0xc9 - 0x28U)) break;
    param_1->field_04D0 = CASE_5;
    TLOBaseTy::RotateSpr(param_1,0);
    TVar1 = param_1->field_05AC;
    if (TVar1 != CASE_52) goto joined_r0x004e0f0b;
    cVar23 = *(char *)&param_1->field_023D;
    pTVar10 = param_1->vtable;
LAB_004e0e15:
    bVar5 = LookupRecordByte(cVar23);
    (*pTVar10->vfunc_90)(param_1,3,(-(ushort)(bVar5 != 2) & 0xff3b) + 0x35f);
  }
switchD_004e0aad_default:
  if ((param_1->field_05AC == CASE_61) && (param_1->field_04E0[0] != 0)) {
    iVar7 = thunk_FUN_004e4180((int)param_1->field_0024);
    uVar11 = thunk_FUN_004e41c0((int)param_1->field_0024);
    if (((int)uVar11 < iVar7) &&
       (param_1->field_04E0[0x12] + param_1->field_04E0[0x11] <= g_playSystem_00802A38->field_00E4))
    {
      param_1->field_04E0[0x11] = g_playSystem_00802A38->field_00E4;
      if ((int)DAT_007be8c4 <= (int)param_1->field_04E0[0xe]) {
        thunk_FUN_004e1310((AnonShape_004E1310_4FD56DAE *)param_1);
      }
      uVar12 = param_1->field_04E0[0] - 5;
      param_1->field_04E0[0] = uVar12;
      if ((int)uVar12 < 0) {
        param_1->field_04E0[0] = 0;
      }
      uVar12 = param_1->field_04E0[0xe] + 5;
      param_1->field_04E0[0xe] = uVar12;
      if ((int)DAT_007be8c4 < (int)uVar12) {
        param_1->field_04E0[0xe] = DAT_007be8c4;
      }
      this = (STResourceC *)
             thunk_FUN_004d85e0(param_1->field_05B0,param_1->field_05B4,param_1->field_05B8);
      if (this != nullptr) {
        STResourceC::SetResource(this,param_1->field_04E0[0],1);
      }
      if ((param_1->field_04E0[0] == 0) &&
         (param_1->field_0024 == (byte *)(uint)(byte)param_1->field_0010->field_112D)) {
        param_1->vfunc_90(4,0x3bd);
      }
    }
  }
  return 0;
}

